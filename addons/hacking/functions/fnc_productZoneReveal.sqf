#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_productZoneReveal

Description:
    Product 1c. Reveals EW zones through the electronic_war_zones public API -
    this addon never touches that registry directly.

    Discovery walks the network: the nearest zone not already spent. The spent
    set is permanent for the mission, so marker decay is cosmetic and never
    re-opens a zone. Once every non-temp zone of a type has been spent the entry
    graduates to a network overview that renders all live zones of that type, and
    shrinks as emitters are destroyed.

    Detect is a pool of one (D35), so it graduates immediately - discovery and
    overview are the same render for that type, by design.

Parameters:
    _pos  : ARRAY  - hack point, for "nearest".
    _type : STRING - "jam" or "detect".
    _side : SIDE   - the side that earned it.

Returns:
    BOOL - true if anything was revealed.

Author:
    Ghost
---------------------------------------------------------------------------- */
params [["_pos", [0,0,0], [[]]], ["_type", "jam", [""]], ["_side", west, [west]]];

if (isNil "ghost_electronic_war_zones_fnc_getZones") exitWith { false };

if (isNil QGVAR(spentZones)) then { GVAR(spentZones) = [] };

private _colour = [["detect", "ColorOrange"], ["jam", "ColorRed"]] select {_x select 0 isEqualTo _type};
_colour = if (_colour isEqualTo []) then { "ColorRed" } else { (_colour select 0) select 1 };
private _label = toUpper _type;

// Discovery pool: live, permanent zones of this type we have not spent yet.
private _pool = [_type, GVAR(spentZones), false] call ghost_electronic_war_zones_fnc_getZones;

if (_pool isNotEqualTo []) exitWith {
    private _best = _pool select 0;
    private _bestD = _pos distance2D (_best select 2);
    {
        private _d = _pos distance2D (_x select 2);
        if (_d < _bestD) then { _bestD = _d; _best = _x };
    } forEach _pool;

    GVAR(spentZones) pushBackUnique (_best select 0);
    [QGVAR(render), [
        "circle", format [QGVAR(zone_%1), _best select 0],
        _best select 2, _best select 3, _colour, "mil_warning", _label, _side
    ]] call CBA_fnc_globalEvent;
    true
};

// Pool exhausted: overview of everything of this type still alive, temps included.
private _all = [_type, [], true] call ghost_electronic_war_zones_fnc_getZones;
if (_all isEqualTo []) exitWith { false };

{
    [QGVAR(render), [
        "circle", format [QGVAR(ov_%1_%2), _x select 0, round CBA_missionTime],
        _x select 2, _x select 3, _colour, "mil_warning", _label, _side
    ]] call CBA_fnc_globalEvent;
} forEach _all;

true
