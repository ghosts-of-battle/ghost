#include "script_component.hpp"
/*
 * Author: Ghost
 * Spawn one drone of a type in the ring [minDist..radius] around a target player,
 * outside any blacklist zone, then send it to hunt the player's area. Registered
 * into the shared Drones fleet so the reaper owns its lifetime / ammo-despawn.
 *
 * Arguments:
 * 0: Logic <OBJECT>
 * 1: Target player <OBJECT>
 * 2: Type key <STRING>
 *
 * Return Value: None
 *
 * Public: No
 */

if (!isServer) exitWith {};

params ["_logic", "_target", "_type", ["_radiusOverride", -1], ["_minDistOverride", -1]];

private _cfg = _logic getVariable [QGVAR(cfg), objNull];
private _typeCfg = _logic getVariable [QGVAR(typeCfg), objNull];
if (isNil "_cfg" || {isNil "_typeCfg"}) exitWith {};
if (isNull _target) exitWith {};

(_typeCfg get _type) params ["_classes", "", "", "_tier"];
if (_classes isEqualTo []) exitWith {};

private _side = _cfg get "side";
private _radius = [_cfg get "radius", _radiusOverride] select (_radiusOverride > 0);
private _minDist = [_cfg get "minDist", _minDistOverride] select (_minDistOverride >= 0);
private _blacklist = _cfg get "blacklist";
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

private _dbg = _cfg get "debug";

// Pick a spawn point in the ring around the player, dodging blacklist zones.
private _basePos = getPosATL _target;
private _pos = [];
for "_i" from 1 to AMB_BLACKLIST_TRIES do {
    private _d = _minDist + random ((_radius - _minDist) max 0);
    private _p = _basePos getPos [_d, random 360];
    if ((_blacklist findIf {_p inArea _x}) == -1) exitWith { _pos = _p };
};
if (_pos isEqualTo []) exitWith {   // stuck inside blacklist, skip this spawn
    if (_dbg) then { diag_log text "[ghost_ambient_drones] spawn skipped - no point outside blacklist zones" };
};

// Shared airframe-ceiling gate.
if !([1] call ghost_drones_fnc_reserveAirframes) exitWith {
    if (_dbg) then { diag_log text "[ghost_ambient_drones] spawn skipped - global airframe ceiling reached" };
};

([selectRandom _classes, _pos, _side, _alt, grpNull, _ground] call ghost_drones_fnc_createDrone) params ["_veh", "_grp"];
if (isNull _veh) exitWith {
    if (_dbg) then { diag_log text format ["[ghost_ambient_drones] createVehicle returned null for '%1' - class missing?", _type] };
};

private _anchor = getPosATL _target;
if (_type in ["loiterfixed", "loiterrotor"]) then {
    // Loiter munitions fly a CAP over the player's area (and despawn when out of ammo).
    [_grp, _anchor, _type] call ghost_drones_fnc_localPatrol;
} else {
    // Everything else runs in and hunts the player's area. (Index 0 waypoint left intact.)
    _grp setBehaviour "AWARE";
    _grp setCombatMode "RED";
    _grp setSpeedMode "NORMAL";
    private _wp = _grp addWaypoint [_anchor, 0];
    _wp setWaypointType "SAD";
    _wp setWaypointSpeed "NORMAL";
    _wp setWaypointBehaviour "AWARE";
    _wp setWaypointCombatMode "RED";
    _wp setWaypointCompletionRadius AMB_HUNT_COMPLETION;
};

// Reaper now owns lifetime (non-loiter) / out-of-ammo (loiter) despawn + watchdog.
[_grp, _logic, _type, [_veh], (_cfg get "lifetime"), (_cfg get "debug"), _side] call ghost_drones_fnc_registerGroup;
