#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_nearestDrone

Description:
    Nearest hostile UAV/UGV (isUav) within HACK_DRONE_RANGE, not on the player's
    own side and not already hacked. Covers flying drones and ground UGVs.

    EVERY DRONE IS HACKABLE by default - the setting ships blank, and blank means
    any enemy UAV. GVAR(droneClasses) is there for a mission that wants to
    protect a specific airframe from being taken, not as the thing that makes
    drones hackable in the first place. Matching is by inheritance, so listing a
    base class covers everything derived from it.

Parameters:
    _unit : OBJECT - the player.

Returns:
    OBJECT - nearest downable drone, or objNull.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_unit"];

private _mySide = side group _unit;
private _cands = _unit nearEntities [["Air", "LandVehicle"], HACK_DRONE_RANGE];
private _allowed = (GVAR(droneClasses) splitString ", ") select { _x != "" };

private _best = objNull;
private _bestDist = HACK_DRONE_RANGE + 1;
{
    // named, so the class-list findIf below does not shadow it with its own _x
    private _veh = _x;
    if (
        alive _veh
        && {getNumber (configOf _veh >> "isUav") > 0}
        && {side group _veh != _mySide}
        && {!(_veh getVariable [QGVAR(hacked), false])}
        && {_allowed isEqualTo [] || {_allowed findIf {_veh isKindOf _x} > -1}}
    ) then {
        private _d = _unit distance _veh;
        if (_d < _bestDist) then { _bestDist = _d; _best = _veh };
    };
} forEach _cands;

_best
