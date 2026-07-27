#include "script_component.hpp"
/*
 * Author: Ghost
 * Ambient Kamikaze controller (server). Reads the module's attributes onto the logic
 * and starts its own scheduler, so several launch sites can run at once with
 * different TAORs, intervals and drones.
 *
 * Arguments (module standard): logic, units, activated
 *
 * Return Value: None
 *
 * Public: No
 */

if (hasInterface && !isServer) exitWith {};

params [
    ["_logic", objNull, [objNull]],
    ["_units", [], [[]]],
    ["_activated", true, [true]]
];

if (!_activated) exitWith {};
if (isNull _logic) exitWith {};

private _interval = (_logic getVariable ["interval", 300]) max 1;

private _cfg = createHashMapFromArray [
    ["taor", (_logic getVariable ["taor_marker", ""]) splitString ", "],
    ["minDist", _logic getVariable ["min_dist", 250]],
    ["maxDist", _logic getVariable ["max_dist", 2500]],
    ["droneClass", _logic getVariable ["drone_class", "O_UAV_02_CAS_F"]],
    ["spawnDist", _logic getVariable ["spawn_dist", 6000]],
    ["altitude", _logic getVariable ["altitude", 800]],
    ["interval", _interval],
    ["debug", _logic getVariable ["debug", false]]
];

_logic setVariable [QGVAR(cfg), _cfg];
_logic setVariable [QGVAR(nextFire), time + _interval];

[FUNC(tick), TICK_INTERVAL, _logic] call CBA_fnc_addPerFrameHandler;
[FUNC(debugTick), DEBUG_INTERVAL, _logic] call CBA_fnc_addPerFrameHandler;

diag_log text format [
    "[ghost_ambient_kamikaze] launch site online: interval %1s, %2, ingress %3m at %4m",
    _interval, _cfg get "droneClass", _cfg get "spawnDist", _cfg get "altitude"
];
