#include "script_component.hpp"
/*
 * Author: Ghost
 * Spawn one defender drone at the base and set it to guard the base area. Loiter
 * types fly a CAP over the base; the rest patrol a defensive SAD ring around it.
 * Registered into the shared fleet (reaper owns lifetime / ammo-despawn / watchdog).
 *
 * Arguments:
 * 0: Logic <OBJECT>
 * 1: Type key <STRING>
 *
 * Return Value: None
 *
 * Public: No
 */

if (!isServer) exitWith {};

params ["_logic", "_type"];

private _cfg = _logic getVariable [QGVAR(cfg), objNull];
private _typeCfg = _logic getVariable [QGVAR(typeCfg), objNull];
if (isNil "_cfg" || {isNil "_typeCfg"}) exitWith {};

(_typeCfg get _type) params ["_classes", "", "_tier"];
if (_classes isEqualTo []) exitWith {};

private _side = _cfg get "side";
private _basePos = _cfg get "basePos";
private _altMin = _cfg get "altMin";
private _altMax = _cfg get "altMax";
private _range = _altMax - _altMin;

private _ground = _tier isEqualTo "ground";
private _alt = switch (_tier) do {
    case "ground": { 0 };
    case "low":  { _altMin + random (0.25 * _range) };
    case "high": { _altMin + (0.70 * _range) + random (0.30 * _range) };
    default      { _altMin + (0.35 * _range) + random (0.30 * _range) };
};

// Spawn at the base: random point in the marker if it's an area marker, else the base point.
private _spawnPos = _basePos;
if (_cfg get "hasMarker") then {
    private _p = [[_cfg get "marker"]] call BIS_fnc_randomPos;
    if (_p isNotEqualTo [0,0,0]) then { _spawnPos = _p };
};

([selectRandom _classes, _spawnPos, _side, _alt, grpNull, _ground] call ghost_alive_drones_fnc_createDrone) params ["_veh", "_grp"];
if (isNull _veh) exitWith {};

if (_type in ["loiterfixed", "loiterrotor"]) then {
    // CAP over the base (out-of-ammo despawn handled by the reaper).
    [_grp, _basePos, _type] call ghost_alive_drones_fnc_localPatrol;
} else {
    // Defensive SAD ring around the base - intercept intruders. Leave waypoint 0.
    for "_i" from (count (waypoints _grp)) - 1 to 1 step -1 do { deleteWaypoint [_grp, _i] };
    _grp setBehaviour "AWARE";
    _grp setCombatMode "RED";
    _grp setSpeedMode "NORMAL";
    for "_i" from 1 to 4 do {
        private _wpPos = _basePos getPos [BASE_PATROL_MIN + random (BASE_PATROL_MAX - BASE_PATROL_MIN), random 360];
        private _wp = _grp addWaypoint [_wpPos, 0];
        _wp setWaypointType "SAD";
        _wp setWaypointSpeed "NORMAL";
        _wp setWaypointBehaviour "AWARE";
        _wp setWaypointCombatMode "RED";
        _wp setWaypointCompletionRadius BASE_WP_COMPLETION;
    };
    private _cyc = _grp addWaypoint [_basePos, 0];
    _cyc setWaypointType "CYCLE";
};

[_grp, _logic, _type, [_veh], (_cfg get "lifetime"), (_cfg get "debug"), _side] call ghost_alive_drones_fnc_registerGroup;
