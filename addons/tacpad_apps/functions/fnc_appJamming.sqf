#include "script_component.hpp"
/*
 * Author: Ghost
 * JAMMING, full size: how much of the spectrum is being sat on. NOTHING ELSE.
 * Drones and jamming are two different things and their pages must not look
 * alike - the user's rule, in those words. Drones have their own page
 * (FUNC(appDrones)); channel, frequency, mesh and net state are the RADIO
 * app's; the whole sweep at once is the EW SCANNER.
 *
 * Arguments (app handler):
 * 0: Map display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params [["_display", displayNull, [displayNull]]];

if (isNull _display) exitWith {};

if (isNil QEFUNC(hacking,scannerRead)) exitWith {
    ["JAMMING", "The intrusion suite is not loaded.", "high"] call EFUNC(messaging,notify);
};

([_display, "JAMMING", 0.36, 0.46] call EFUNC(tacpad,appFrame)) params ["", "_body"];
if (isNull _body) exitWith {};

([] call EFUNC(tacpad,theme)) params ["_ground", "_ink", "_accent", "_line"];

private _rowH = ROW_H * EGVAR(tacpad,textScale) * EGVAR(tacpad,uiScale) * safeZoneH;
private _w = (ctrlPosition _body) # 2;
private _pad = PAD * safeZoneW;
private _padY = PAD * safeZoneH;
private _amber = [0.85, 0.65, 0.15, 1];
private _mute = [_ink # 0, _ink # 1, _ink # 2, 0.62];

if !([player] call EFUNC(hacking,hasScanner)) exitWith {
    [_body, [_pad, _padY, _w - 2 * _pad, _rowH], "NO RECEIVER", _accent, 1.2, true] call EFUNC(tacpad,drawText);
};

([] call EFUNC(hacking,scannerRead)) params ["", "", "", ["_jam", 0]];

private _pct = round (_jam * 100);
private _state = 0;
if (_pct > 0) then {_state = 1};
if (_pct >= 75) then {_state = 2};
private _colour = [_ink, _amber, _accent] select _state;

// The percentage is the page - and it is NAMED, because "0%" standing beside
// a status word read as "0% usable", which is backwards. The number is how
// much of the spectrum is being JAMMED; zero jammed is a good day.
[
    _body, [_pad, _padY, _w - 2 * _pad, _rowH * 1.8],
    format ["%1%2 JAMMED", _pct, "%"], _colour, 2.2, true
] call EFUNC(tacpad,drawText);

private _barY = _padY + _rowH * 2.1;
[_body, [_pad, _barY, _w - 2 * _pad, _rowH * 0.5], _line] call EFUNC(tacpad,drawFill);
if (_pct > 0) then {
    [_body, [_pad, _barY, (_w - 2 * _pad) * (_pct / 100), _rowH * 0.5], _colour] call EFUNC(tacpad,drawFill);
};

[
    _body, [_pad, _barY + _rowH * 0.7, _w - 2 * _pad, _rowH],
    ["SPECTRUM CLEAR", "SPECTRUM DEGRADED", "SPECTRUM SMOTHERED"] select _state,
    _colour, 0.8, true, "left", true
] call EFUNC(tacpad,drawText);

// WHAT HAS BEEN DONE TO US LATELY - carried over from the cTab jam page,
// which the new page had dropped and the user missed: every ghost system
// that fires, flies or shells at players posts to one bus, and this reads
// the last two minutes of it back.
private _y = _barY + _rowH * 1.8;
[_body, [_pad, _y, _w - 2 * _pad, RULE_THIN * pixelH], _line] call EFUNC(tacpad,drawFill);
_y = _y + _padY;
[_body, [_pad, _y, _w - 2 * _pad, _rowH], "RECENT ALERTS", _mute, 0.65, true, "left", true] call EFUNC(tacpad,drawText);
_y = _y + _rowH;

private _alerts = (missionNamespace getVariable [QEGVAR(common,alerts), []]) select {(_x param [4, 0]) > CBA_missionTime};

// What this draw is OF - see the drone page's loop note.
uiNamespace setVariable [QGVAR(jamSeen), str [_pct, _alerts]];

if (_alerts isEqualTo []) then {
    private _dim = [_ink # 0, _ink # 1, _ink # 2, 0.42];
    [_body, [_pad, _y, _w - 2 * _pad, _rowH], "NOTHING IN THE LAST FEW MINUTES", _dim, 0.75] call EFUNC(tacpad,drawText);
} else {
    {
        _x params ["_src", "_txt", "_grid", ["_sev", 0]];
        private _ay = _y + _forEachIndex * _rowH;

        [_body, [_pad, _ay, _w * 0.22, _rowH], toUpper _src, ([_mute, _amber, _accent] select (_sev min 2)), 0.62, true, "left", true] call EFUNC(tacpad,drawText);
        [
            _body, [_w * 0.24, _ay, _w * 0.76 - _pad, _rowH],
            [_txt, format ["%1 - %2", _txt, _grid]] select (_grid isNotEqualTo ""),
            _ink, 0.72
        ] call EFUNC(tacpad,drawText);
        if (_forEachIndex >= 5) exitWith {};
    } forEach _alerts;
};

// Live page - the drone page's own loop pattern.
private _existing = uiNamespace getVariable [QGVAR(jamPFH), -1];
if (_existing >= 0) then {
    [_existing] call CBA_fnc_removePerFrameHandler;
};

uiNamespace setVariable [QGVAR(jamPFH), [{
    params ["", "_handle"];

    if !(["jam"] call EFUNC(tacpad,appAlive)) exitWith {
        [_handle] call CBA_fnc_removePerFrameHandler;
        uiNamespace setVariable [QGVAR(jamPFH), -1];
    };

    if !([] call EFUNC(tacpad,appIdle)) exitWith {};

    // Redraw ONLY when the picture changed - the drone page's rule.
    private _jam = ([] call EFUNC(hacking,scannerRead)) param [3, 0];
    private _alerts = (missionNamespace getVariable [QEGVAR(common,alerts), []]) select {(_x param [4, 0]) > CBA_missionTime};
    if ((str [round (_jam * 100), _alerts]) isEqualTo (uiNamespace getVariable [QGVAR(jamSeen), ""])) exitWith {};

    ["jam"] call EFUNC(tacpad,openApp);
}, 2, []] call CBA_fnc_addPerFrameHandler];
