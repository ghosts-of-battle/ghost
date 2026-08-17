#include "script_component.hpp"
/*
 * Author: Ghost
 * DRONES: what is in the air, and where.
 *
 * ITS OWN TILE because it is the one readout on the HUD that means MOVE. Sharing
 * a box with the jamming percentage meant the contact bearing was a line in a
 * list; on its own it is the whole box, at a size that can be read without
 * stopping.
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
private _rowH = (_h - _y - (PAD * safeZoneW)) / 3.6;
// Width caps the scale too - see the note in FUNC(widgetEw).
private _kw = (_w / (10 * (((safeZoneW / safeZoneH) min 1.2) / 40))) max 0.8;
private _k = (((_rowH / _base) min _kw) max 0.8) min 2.2;
private _pad = PAD * safeZoneW;
private _mute = [_ink # 0, _ink # 1, _ink # 2, 0.62];
private _dim = [_ink # 0, _ink # 1, _ink # 2, 0.42];

private _sweep = [] call FUNC(sweep);
if (_sweep isEqualTo []) exitWith {
    [_ctrl, [_pad, _y, _w - 2 * _pad, _rowH], "NO SET", _dim, (0.9 * _k), true] call EFUNC(tacpad,drawText);
};

_sweep params [["_droneState", 0], ["_nearest", 0], ["_droneDir", 0]];
private _count = [0, _droneState] select (_droneState isEqualType 0);

[
    _ctrl, [_pad, _y, _w - 2 * _pad, _rowH * 1.5],
    ["CLEAR", str _count] select (_count > 0),
    ([_ink, _accent] select (_count > 0)), (1.8 * _k), true
] call EFUNC(tacpad,drawText);

if (_count isEqualTo 0) exitWith {
    [_ctrl, [_pad, _y + _rowH * 1.6, _w - 2 * _pad, _rowH], "SPECTRUM CLEAR", _mute, (0.65 * _k), false, "left", true] call EFUNC(tacpad,drawText);
};

[
    _ctrl, [_pad, _y + _rowH * 1.6, _w - 2 * _pad, _rowH],
    format ["BRG %1", round _droneDir], _accent, (0.95 * _k), true
] call EFUNC(tacpad,drawText);

[
    _ctrl, [_pad, _y + _rowH * 2.5, _w - 2 * _pad, _rowH],
    format ["%1 KM", (round (_nearest / 100)) / 10], _ink, (0.85 * _k), true
] call EFUNC(tacpad,drawText);
