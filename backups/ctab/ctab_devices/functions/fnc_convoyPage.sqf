#include "script_component.hpp"
/*
 * Author: YonV
 * Draws the CONVOY app: a dropdown of the convoys and callsigns - the mission's
 * own element names first, see FUNC(convoyNames) - and under it a card per
 * vehicle in whichever one is chosen, with condition, fuel, crew and grid,
 * refreshed every tick.
 *
 * WHAT THE DROPDOWN MEANS DEPENDS ON THE DEVICE. On the FBCB4 choosing a name
 * also REGISTERS the vehicle you are sitting in to it - the vehicle screen is
 * the only place that makes sense, being the only device that knows which
 * vehicle it is bolted into. On a handheld it only chooses whose column you
 * are watching.
 *
 * The dropdown and the cards are ctrlCreate'd rather than declared, as the
 * medical page's are: a convoy is any size, and the list of names is a
 * setting.
 *
 * Arguments:
 * 0: Device display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display] call ghost_ctab_devices_fnc_convoyPage
 */

params [["_display", displayNull, [displayNull]]];
if (isNull _display) exitWith {};

private _page = _display displayCtrl IDC_S7_INFOPAGE;
if (isNull _page) exitWith {};
(ctrlPosition _page) params ["_px", "_py", "_pw", "_ph"];

private _font = S7_FONTS select ((profileNamespace getVariable [QGVAR(font), S7_FONT_DEFAULT]) min (count S7_FONTS - 1));
private _isVehicleScreen = (ctrlIDD _display) == IDD_FBCB4;

// the info page's shared text control is the title bar here, as on medical
private _body = _display displayCtrl IDC_S7_INFOTEXT;
if (!isNull _body) then {
    if (isNil {_display getVariable QGVAR(infoTextRect)}) then {
        _display setVariable [QGVAR(infoTextRect), ctrlPosition _body];
    };
    _body ctrlSetPosition [_px + _pw * 0.04, _py + _ph * 0.02, _pw * 0.92, _ph * 0.10];
    _body ctrlCommit 0;
};

private _names = call FUNC(convoyNames);
private _picked = uiNamespace getVariable [QGVAR(convoyView), ""];

private _cards = _display getVariable [QGVAR(convoyCards), []];

// --- the picker: one dropdown, always on the page -------------------------
// A grid of buttons meant the roster could not be seen while changing convoy,
// and needed a catcher each. A combo is one control, carries any length of
// list the setting names, and stays on screen beside the vehicles.
private _combo = _display getVariable [QGVAR(convoyCombo), controlNull];
if (isNull _combo) then {
    _combo = _display ctrlCreate ["RscCombo", -1];
    _combo ctrlAddEventHandler ["LBSelChanged", {
        params ["", "_index"];
        [_index - 1] call FUNC(convoyPick);
    }];
    _display setVariable [QGVAR(convoyCombo), _combo];

    // filled once - neither the mission's groups nor the setting can change
    // mid-mission
    _combo lbAdd "-- none --";
    {_combo lbAdd _x} forEach _names;
};

private _cw0 = _pw * 0.34;
_combo ctrlSetPosition [_px + _pw * 0.02, _py + _ph * 0.115, _cw0, _ph * 0.075];
_combo ctrlCommit 0;
_combo ctrlShow true;

// keep the combo in step with the pick, without re-firing its own handler
private _want = (_names find _picked) + 1;
if (lbCurSel _combo != _want) then {
    _combo lbSetCurSel _want;
};

if (_picked == "") exitWith {
    // nothing chosen: say what the dropdown will do, since it differs by device
    {
        {_x ctrlShow false} forEach _x;
    } forEach _cards;
    if (!isNull _body) then {
        _body ctrlSetStructuredText parseText format [
            "<t font='%1' size='1.2' color='#39B24A' underline='1'>CONVOY</t><br/>"
            + "<t font='%1' size='0.9' color='#7A8C7E'>%2</t>",
            _font,
            ["Choose whose column to watch.",
             "Choose one to register this vehicle to it."] select _isVehicleScreen
        ];
    };
};

// --- the roster -----------------------------------------------------------
private _store = missionNamespace getVariable [QGVAR(convoyStore), []];
private _mine = _store select {(_x select 1) == _picked && {!isNull (_x select 0)}};

// Rewriting structured text every tick makes it flicker - only touch it when
// what it says has actually changed.
if (!isNull _body) then {
    private _head = format ["%1|%2", _picked, count _mine];
    if ((_display getVariable [QGVAR(convoyHead), ""]) != _head) then {
        _display setVariable [QGVAR(convoyHead), _head];
        _body ctrlSetStructuredText parseText format [
            "<t font='%1' size='1.2' color='#39B24A' underline='1'>CONVOY - %2</t>"
            + "<t font='%1' size='0.9' color='#7A8C7E'>   %3 vehicle(s)</t>",
            _font, _picked, count _mine
        ];
    };
};

// x and y gaps take their own numbers - an x unit and a y unit are not the
// same size on screen
private _cpad = _pw * 0.015;
private _cpadY = _ph * 0.018;
private _cw = (_pw - _cpad * 4) / 3;
private _top = _py + _ph * 0.21;
private _chh = ((_py + _ph * 0.97) - _top - _cpadY * 3) / 4;

{
    _x params ["_veh"];
    ([_veh] call FUNC(convoyRead)) params ["_vName", "_cond", "_fuel", "_crew", "_speed", "_grid", "_flags", "_roles"];
    _cond params ["_hull", "_engine", "_running"];
    _flags params ["_engineOn", "_mobile"];

    private _i = _forEachIndex;
    // three slices and a text, not one stretched picture - a card is a
    // different shape on every device, so its corners can only stay circular
    // if the rounded ends are never stretched. See FUNC(cardFit).
    private _card = _cards param [_i, []];
    if (_card isEqualTo []) then {
        _card = ([_display, [], [0, 0, 0, 0]] call FUNC(cardFit)) + [_display ctrlCreate ["RscStructuredText", -1]];
        (_card select 3) ctrlSetBackgroundColor [0, 0, 0, 0];
        _cards pushBack _card;
    };
    private _txt = _card select 3;
    {_x ctrlShow true} forEach _card;

    private _col = _i % 3;
    private _row = floor (_i / 3);
    private _cx = _px + _cpad + _col * (_cw + _cpad);
    private _cy = _top + _row * (_chh + _cpadY);
    [_display, _card select [0, 3], [_cx, _cy, _cw, _chh]] call FUNC(cardFit);
    _txt ctrlSetPosition [_cx + _cw * 0.04, _cy + _chh * 0.08, _cw * 0.92, _chh * 0.86];
    _txt ctrlSetFontHeight (_chh * 0.20);
    _txt ctrlCommit 0;

    private _fnc_col = {
        params ["_pct"];
        switch (true) do {
            case (_pct < 0): {"#7A8C7E"};
            case (_pct < 35): {"#D04539"};
            case (_pct < 70): {"#E9A63C"};
            default {"#39B24A"};
        }
    };
    private _fnc_pct = {
        params ["_pct"];
        if (_pct < 0) then {"--"} else {format ["%1%2", round _pct, "%"]}
    };

    private _state = switch (true) do {
        case (!alive _veh): {"<t color='#D04539'>DESTROYED</t>"};
        case (!_mobile): {"<t color='#D04539'>IMMOBILE</t>"};
        case (_engineOn): {format ["<t color='#39B24A'>MOVING %1 KM/H</t>", round _speed]};
        default {"<t color='#7A8C7E'>STOPPED</t>"};
    };

    _roles params ["_hasDriver", "_hasCmd", "_hasGun"];
    private _crewLine = "";
    {
        _x params ["_has", "_glyph"];
        if (_has) then {
            _crewLine = _crewLine + format ["<img image='%1' size='1'/> ", _glyph];
        };
    } forEach [
        [_hasDriver, QPATHTOF(data\crew_driver_ca.paa)],
        [_hasCmd,    QPATHTOF(data\crew_commander_ca.paa)],
        [_hasGun,    QPATHTOF(data\crew_gunner_ca.paa)]
    ];

    _txt ctrlSetStructuredText parseText format [
        "<t font='%1' size='1.1' color='#E5E5E5'>%2</t>   %3<br/>"
        + "<t font='%1' size='0.9' color='%4'>HULL %5</t>"
        + "<t font='%1' size='0.9' color='%6'>   ENG %7</t>"
        + "<t font='%1' size='0.9' color='%8'>   DRIVE %9</t>"
        + "<t font='%1' size='0.9' color='%10'>   FUEL %11</t><br/>"
        + "<t font='%1' size='0.85' color='#7A8C7E'>CREW %12   GRID %13</t>   %14",
        _font, _vName, _state,
        [_hull] call _fnc_col, [_hull] call _fnc_pct,
        [_engine] call _fnc_col, [_engine] call _fnc_pct,
        [_running] call _fnc_col, [_running] call _fnc_pct,
        [_fuel] call _fnc_col, [_fuel] call _fnc_pct,
        _crew, _grid, _crewLine
    ];
} forEach _mine;

// vehicles that left the convoy leave their cards behind
for "_i" from (count _mine) to (count _cards - 1) do {
    {_x ctrlShow false} forEach (_cards select _i);
};

_display setVariable [QGVAR(convoyCards), _cards];
