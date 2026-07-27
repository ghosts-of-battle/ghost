#include "script_component.hpp"
/*
 * Author: Ghost
 * Trickle-spawn manager (CBA PFH). Spawns at most one defender group per interval,
 * choosing the type furthest under cap - UNLESS an enemy player has breached the
 * stop distance, in which case reinforcement halts.
 *
 * Arguments (CBA PFH): 0: [logic], 1: handle
 *
 * Return Value: None
 *
 * Public: No
 */

params ["_args", "_handle"];
_args params ["_logic"];

if (isNull _logic) exitWith { [_handle] call CBA_fnc_removePerFrameHandler };
if (isNil "ghost_alive_drones_fleet") exitWith {};

private _cfg = _logic getVariable [QGVAR(cfg), objNull];
private _typeCfg = _logic getVariable [QGVAR(typeCfg), objNull];
if (isNil "_cfg" || {isNil "_typeCfg"}) exitWith {};

private _side = _cfg get "side";
private _basePos = _cfg get "basePos";

// STOP TRIGGER: enemy player within stop distance of the base -> no reinforcement.
private _breached = ((allPlayers - (entities "HeadlessClient_F")) findIf {
    alive _x && {(_side getFriend (side group _x)) < 0.6} && {_x distance _basePos < (_cfg get "stopDist")}
}) != -1;
if (_breached) exitWith {};

// Trickle: pick the eligible type furthest under its cap and spawn one.
private _eligible = [];
{
    private _type = _x;
    (_typeCfg get _type) params ["_classes", "_cap", ""];
    if (_classes isEqualTo [] || {_cap <= 0}) then { continue };

    private _cur = {
        (_x getVariable ["ghost_alive_drones_logic", objNull]) isEqualTo _logic &&
        {(_x getVariable ["ghost_alive_drones_dtype", ""]) isEqualTo _type}
    } count ghost_alive_drones_fleet;
    if (_cur < _cap) then { _eligible pushBack [_cap - _cur, _type] };
} forEach keys _typeCfg;

if (_eligible isEqualTo []) exitWith {};

_eligible sort false;
private _type = (_eligible select 0) select 1;

if !([1] call ghost_alive_drones_fnc_reserveAirframes) exitWith {};
[_logic, _type] call FUNC(spawnDefender);
