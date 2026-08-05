#include "script_component.hpp"
/*
 * Author: Ghost
 * Spawn the drone response package near a transmitter and vector it onto the grid.
 * Reuses the Drones primitives so the response shares the airframe ceiling,
 * watchdog and lifetime churn. Silently skips if the ceiling is full.
 *
 * Arguments:
 * 0: Transmitter position <ARRAY>
 *
 * Return Value: None
 *
 * Public: No
 */

if (!isServer) exitWith {};

params ["_pos"];

if (isNil "ghost_drones_fleet") exitWith {
    WARNING("Electronic War Zones: Drones addon not initialised - cannot dispatch.");
};

private _pkg = GVAR(package);
private _total = 0;
{ _total = _total + (_x select 1) } forEach _pkg;
if (_total <= 0) exitWith {};

// Shared airframe-ceiling gate.
if !([_total] call ghost_drones_fnc_reserveAirframes) exitWith {};

private _side = GVAR(droneSide);
private _spawnPos = _pos getPos [GVAR(responseDist), random 360];
private _alt = GVAR(responseAlt);

private _grp = grpNull;
private _vehicles = [];

{
    _x params ["_classes", "_cnt", ""];
    if (_classes isEqualTo [] || {_cnt <= 0}) then { continue };
    for "_i" from 1 to _cnt do {
        ([selectRandom _classes, _spawnPos, _side, _alt, _grp] call ghost_drones_fnc_createDrone) params ["_v", "_g"];
        if (isNull _v) then { continue };
        if (isNull _grp) then { _grp = _g };
        _vehicles pushBack _v;
    };
} forEach _pkg;

if (isNull _grp) exitWith {};

[_grp, _pos] call FUNC(vectorToTarget);

// Register into the shared fleet: reaper now owns its lifetime + watchdog + ceiling.
[_grp, GVAR(ewLogic), "ew_response", _vehicles, GVAR(responseLife), GVAR(debug), _side] call ghost_drones_fnc_registerGroup;
