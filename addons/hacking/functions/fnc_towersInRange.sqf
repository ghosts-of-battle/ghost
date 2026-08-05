#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_towersInRange

Description:
    Every hackable tower near a unit, rather than just the nearest one the old
    ACE action needed. Same two sources as FUNC(nearestTower): the configured
    tower classnames, plus any live Electronic War Zones emitter.

Parameters:
    _unit  : OBJECT - the operator.
    _range : NUMBER - metres.

Returns:
    ARRAY - of OBJECT.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_unit", ["_range", 50, [0]]];

private _classes = (GVAR(towerClasses) splitString ", ") select { _x != "" };
private _out = [];
if (_classes isNotEqualTo []) then {
    _out = nearestObjects [_unit, _classes, _range];
};

{
    private _o = _x param [0, objNull];
    if (!isNull _o && {alive _o} && {(_unit distance _o) <= _range}) then {
        _out pushBackUnique _o;
    };
} forEach (missionNamespace getVariable ["ghost_electronic_war_zones_jammers", []]);

_out select { alive _x }
