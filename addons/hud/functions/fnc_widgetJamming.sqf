#include "script_component.hpp"
/*
 * Author: Ghost
 * JAMMING: how much of the spectrum is being sat on, and which band.
 *
 * Arguments:
 * 0: The slot control <CONTROL>
 * 1: Y to start at <NUMBER>
 * 2: Slot width <NUMBER>
 * 3: Slot height <NUMBER>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params [["_ctrl", controlNull, [controlNull]], ["_y", 0, [0]], ["_w", 0, [0]], ["_h", 0, [0]]];

if (isNull _ctrl) exitWith {};

([] call EFUNC(tacpad,theme)) params ["_ground", "_ink", "_accent", "_line"];

private _base = ROW_H * EGVAR(tacpad,textScale) * EGVAR(tacpad,uiScale) * safeZoneH;
// FILL THE SLOT. Rows spread over whatever box the slot has in the game's
// own Layout editor and the type scales with them - content huddled in the
// top corner of a tall box was the old behaviour.
private _rowH = (_h - _y - (PAD * safeZoneW)) / 4;
// Width caps the scale too - see the note in FUNC(widgetEw).
private _kw = (_w / (10 * (((safeZoneW / safeZoneH) min 1.2) / 40))) max 0.8;
private _k = (((_rowH / _base) min _kw) max 0.8) min 2.2;
private _pad = PAD * safeZoneW;
private _mute = [_ink # 0, _ink # 1, _ink # 2, 0.62];
private _dim = [_ink # 0, _ink # 1, _ink # 2, 0.42];
private _amber = [0.85, 0.65, 0.15, 1];

private _sweep = [] call FUNC(sweep);
if (_sweep isEqualTo []) exitWith {
    [_ctrl, [_pad, _y, _w - 2 * _pad, _rowH], "NO SET", _dim, (0.9 * _k), true] call EFUNC(tacpad,drawText);
};

_sweep params ["", "", "", ["_jam", 0]];
private _pct = round (_jam * 100);

private _colour = switch (true) do {
    case (_pct >= 50): {_accent};
    case (_pct > 0): {_amber};
    default {_ink};
};

[_ctrl, [_pad, _y, _w - 2 * _pad, _rowH * 1.5], format ["%1%2", _pct, "%"], _colour, (1.8 * _k), true] call EFUNC(tacpad,drawText);

// A BAR, because a percentage is a number and a bar is a glance. The one thing
// this readout is for is knowing whether to bother transmitting.
private _barY = _y + _rowH * 1.7;
private _barW = _w - 2 * _pad;
[_ctrl, [_pad, _barY, _barW, _rowH * 0.4], _line] call EFUNC(tacpad,drawFill);
if (_pct > 0) then {
    [_ctrl, [_pad, _barY, _barW * (_pct / 100), _rowH * 0.4], _colour] call EFUNC(tacpad,drawFill);
};

// JAM ONLY. Your channel and frequency lived on this tile too, which made it
// half a radio readout - that is the RADIO tile's job, and the user said so.
// The word under the bar is the same band the scanner's NET STATE speaks.
private _state = 0;
if (_pct > 0) then {_state = 1};
if (_pct >= 75) then {_state = 2};

private _row = _barY + _rowH * 0.8;
[
    _ctrl, [_pad, _row, _w - 2 * _pad, _rowH],
    ["CLEAR", "DEGRADED", "SMOTHERED"] select _state,
    ([_mute, _amber, _accent] select _state),
    (0.68 * _k), true, "left", true
] call EFUNC(tacpad,drawText);
