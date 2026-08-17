#include "script_component.hpp"
/*
 * Author: YonV
 * The player's remotely detonable charges, as the ENGINEERING app lists them.
 *
 * ACE keeps every placed explosive on the OWNER, as
 * [explosive, fuseTime, codeLabel, magazineClass, triggerName]. Only the
 * remote trigger types belong on a device screen - a dead man's switch fires
 * when a hand opens and a pressure plate when a boot lands, and neither wants
 * a DETONATE key on a tablet.
 *
 * Soft on ACE explosives: without the mod there are no charges and the app
 * says so, rather than the addon growing a dependency for one screen.
 *
 * Arguments: None. It always reads the cTab player's own circuit.
 *
 * TAKES NO ARGUMENTS ON PURPOSE. Every caller wants their own charges, and
 * they all reach it with a bare `call` from inside a screen tick - where
 * `_this` is the DISPLAY. A unit parameter here therefore received a display
 * and threw on every tick of the widget page. No parameter, nothing to get
 * wrong.
 *
 * Return Value:
 * Charges - [entry, codeLabel, magazineName, distance m] each,
 * nearest first <ARRAY>
 *
 * Example:
 * [] call ghost_ctab_devices_fnc_engineerRead
 */

private _unit = cTab_player;
if (isNull _unit) exitWith {[]};
if (isNil "ace_explosives_fnc_getPlacedExplosives") exitWith {[]};

private _rows = [];
{
    _x params ["_explosive", "", ["_code", "", [""]], ["_mag", "", [""]], ["_trigger", "", [""]]];
    if (isNull _explosive) then {continue};
    if !(_trigger in ENG_TRIGGERS) then {continue};

    // Memoised: this runs once per charge per tick of an open page, and a
    // magazine's display name is not going to change during a mission.
    private _name = GVAR(magNames) getOrDefault [_mag, ""];
    if (_name == "") then {
        _name = getText (configFile >> "CfgMagazines" >> _mag >> "displayName");
        if (_name == "") then {_name = _mag};
        GVAR(magNames) set [_mag, _name];
    };

    _rows pushBack [_x, _code, _name, _unit distance _explosive];
} forEach ([_unit] call ace_explosives_fnc_getPlacedExplosives);

// nearest first - [severity, index] sort shape, as the medical roster sorts
private _order = [];
{
    _order pushBack [_x select 3, _forEachIndex];
} forEach _rows;
_order sort true;

_order apply {_rows select (_x select 1)}
