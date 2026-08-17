#include "script_component.hpp"
/*
 * Author: YonV
 * Draws the ENGINEERING app: one card per remotely detonable charge, with a
 * DETONATE key on each - the device as an ACE detonator with a long reach.
 *
 * Built exactly as the medical page is: cards ctrlCreate'd and reused, put
 * away by deviceTick when any other screen is up, refreshed every tick while
 * this one is - charges get placed, picked up and blown mid-mission, so a
 * static list would lie. The DETONATE keys join the display's own catcher
 * list, so the dispatcher installed at open time picks them up without
 * knowing anything about demolitions.
 *
 * The current charge list is stored on the display each pass, and the keys
 * carry only an index into it - FUNC(click)'s "detonate" case re-reads and
 * bounds-checks, so a charge that vanished between draw and click is a safe
 * miss, not a wrong bang.
 *
 * Arguments:
 * 0: Device display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display] call ghost_ctab_devices_fnc_engineerPage
 */

params [["_display", displayNull, [displayNull]]];
if (isNull _display) exitWith {};

private _page = _display displayCtrl IDC_S7_INFOPAGE;
if (isNull _page) exitWith {};
(ctrlPosition _page) params ["_px", "_py", "_pw", "_ph"];

// the shared info text becomes this page's title bar, as on medical
private _body = _display displayCtrl IDC_S7_INFOTEXT;
private _font = S7_FONTS select ((profileNamespace getVariable [QGVAR(font), S7_FONT_DEFAULT]) min (count S7_FONTS - 1));
if (!isNull _body) then {
    if (isNil {_display getVariable QGVAR(infoTextRect)}) then {
        _display setVariable [QGVAR(infoTextRect), ctrlPosition _body];
    };
    _body ctrlSetPosition [_px + _pw * 0.04, _py + _ph * 0.02, _pw * 0.92, _ph * 0.10];
    _body ctrlCommit 0;
};

private _charges = call FUNC(engineerRead);
_display setVariable [QGVAR(engCharges), _charges];

if (!isNull _body) then {
    // rewritten only on change - structured text redrawn every tick flickers
    private _head = format ["%1|%2", count _charges, !isNil "ace_explosives_fnc_getPlacedExplosives"];
    if ((_display getVariable [QGVAR(engHead), ""]) != _head) then {
        _display setVariable [QGVAR(engHead), _head];
        _body ctrlSetStructuredText parseText format [
            "<t font='%1' size='1.2' color='#39B24A' underline='1'>DEMOLITIONS</t>"
            + "<t font='%1' size='0.9' color='#7A8C7E'>   %2</t>",
            _font,
            if (isNil "ace_explosives_fnc_getPlacedExplosives") then {"ACE EXPLOSIVES NOT LOADED"}
            else {format ["%1 charge(s) on your firing circuit, %2 m reach", count _charges, ENG_DET_RANGE]}
        ];
    };
};

// one column of cards, eight slots - a demo man with more than eight remote
// charges out is a story the +N line can carry
private _rows = 8;
private _pad = _pw * 0.02;
private _padY = _ph * 0.014;
private _top = _py + _ph * 0.14;
private _cw = _pw - _pad * 2;
private _chh = ((_py + _ph * 0.97) - _top - _padY * (_rows - 1)) / _rows;

private _built = _display getVariable [QGVAR(engRows), []];

{
    if (_forEachIndex >= _rows) exitWith {};
    _x params ["", "_code", "_name", "_dist"];

    private _cy = _top + _forEachIndex * (_chh + _padY);

    // card slices + text + the key + its catcher, made once and kept
    private _row = _built param [_forEachIndex, []];
    if (_row isEqualTo []) then {
        private _parts = [_display, [], [0, 0, 0, 0]] call FUNC(cardFit);
        private _txt = _display ctrlCreate ["RscStructuredText", -1];
        _txt ctrlSetBackgroundColor [0, 0, 0, 0];
        private _key = _display ctrlCreate [QGVAR(hackButton), -1];
        _key ctrlSetText "DETONATE";
        private _catcher = _display ctrlCreate [QGVAR(catcher), -1];
        _catcher setVariable [QGVAR(click), ["detonate", _forEachIndex]];
        _catcher setVariable [QGVAR(source), _key];
        _display setVariable [QGVAR(catchers),
            (_display getVariable [QGVAR(catchers), []]) + [[_catcher, _key]]];
        _row = _parts + [_txt, _key, _catcher];
        _built pushBack _row;
    };
    _row params ["_l", "_m", "_r", "_txt", "_key", "_catcher"];
    {_x ctrlShow true} forEach _row;

    [_display, [_l, _m, _r], [_px + _pad, _cy, _cw, _chh]] call FUNC(cardFit);
    _txt ctrlSetPosition [_px + _pad + _cw * 0.03, _cy + _chh * 0.12, _cw * 0.68, _chh * 0.8];
    _txt ctrlSetFontHeight (_chh * 0.34);
    _txt ctrlCommit 0;

    private _inRange = _dist <= ENG_DET_RANGE;
    _txt ctrlSetStructuredText parseText format [
        "<t font='%1' size='1.1' color='#E5E5E5'>%2</t>"
        + "<t font='%1' size='0.9' color='#7A8C7E'>   %3</t><br/>"
        + "<t font='%1' size='0.85' color='%4'>%5 m - %6</t>",
        _font, _code, _name,
        ["#D04539", "#39B24A"] select _inRange,
        round _dist,
        ["OUT OF REACH", "IN RANGE"] select _inRange
    ];

    private _kw = _cw * 0.24;
    private _kh = _chh * 0.62;
    {
        _x ctrlSetPosition [_px + _pad + _cw - _kw - _cw * 0.02, _cy + (_chh - _kh) / 2, _kw, _kh];
        _x ctrlCommit 0;
    } forEach [_key, _catcher];
} forEach _charges;

if (count _charges > _rows && {!isNull _body}) then {
    // the head line carries the overflow; cards stay eight
    _display setVariable [QGVAR(engHead), ""];
};

// charges that went away leave their rows behind
for "_i" from (count _charges) to (count _built - 1) do {
    {_x ctrlShow false} forEach (_built select _i);
};

_display setVariable [QGVAR(engRows), _built];
