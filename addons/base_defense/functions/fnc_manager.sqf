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
if (isNil "ghost_drones_fleet") exitWith {};

private _cfg = _logic getVariable [QGVAR(cfg), objNull];
private _typeCfg = _logic getVariable [QGVAR(typeCfg), objNull];
if (isNil "_cfg" || {isNil "_typeCfg"}) exitWith {};

private _side = _cfg get "side";
private _basePos = _cfg get "basePos";

// One pass over the players, answering both range questions at once.
private _stop = _cfg get "stopDist";
private _wake = _cfg get "activateRange";
private _nearest = -1;
{
    if (alive _x && {(_side getFriend (side group _x)) < 0.6}) then {
        private _d = _x distance _basePos;
        if (_nearest < 0 || {_d < _nearest}) then { _nearest = _d };
    };
} forEach (allPlayers - (entities "HeadlessClient_F"));

// DORMANT: nobody near enough to see the place. A base that garrisons itself for
// an empty map burns server budget on drones nobody will ever meet, and by the
// time players do arrive the lifetime timers have already churned through them.
if (_wake > 0 && {_nearest < 0 || {_nearest > _wake}}) exitWith {};

// STOP TRIGGER: enemy player inside the stop distance -> no reinforcement.
if (_nearest >= 0 && {_nearest < _stop}) exitWith {};

// Trickle: pick the eligible type furthest under its cap and spawn one.
private _eligible = [];
{
    private _type = _x;
    (_typeCfg get _type) params ["_classes", "_cap", ""];
    if (_classes isEqualTo [] || {_cap <= 0}) then { continue };

    private _cur = {
        (_x getVariable ["ghost_drones_logic", objNull]) isEqualTo _logic &&
        {(_x getVariable ["ghost_drones_dtype", ""]) isEqualTo _type}
    } count ghost_drones_fleet;
    if (_cur < _cap) then { _eligible pushBack [_cap - _cur, _type] };
} forEach keys _typeCfg;

if (_eligible isEqualTo []) exitWith {};

_eligible sort false;
private _type = (_eligible select 0) select 1;

// No shared-ceiling gate here. Base defenders are exempt from it (see
// FUNC(spawnDefender)) - their numbers are bounded by the per-type caps above,
// which is a bound the mission maker set on this base rather than one another
// module elsewhere happened to consume.
[_logic, _type] call FUNC(spawnDefender);
