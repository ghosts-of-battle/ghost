#include "script_component.hpp"
/*
 * Author: Ghost
 * Ambient Artillery controller (server). Reads the module's attributes onto the
 * logic and starts its own scheduler, so several batteries can run at once with
 * different TAORs, intervals and payloads.
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

private _interval = (_logic getVariable ["interval", 360]) max 1;

private _cfg = createHashMapFromArray [
    ["taor", (_logic getVariable ["taor_marker", ""]) splitString ", "],
    ["minDist", _logic getVariable ["min_dist", 500]],
    ["maxDist", _logic getVariable ["max_dist", 2500]],
    ["rounds", round (_logic getVariable ["rounds", 3])],
    ["spread", _logic getVariable ["spread", 50]],
    ["shell", _logic getVariable ["shell", "Sh_155mm_AMOS"]],
    ["interval", _interval],
    ["debug", _logic getVariable ["debug", false]]
];

_logic setVariable [QGVAR(cfg), _cfg];
_logic setVariable [QGVAR(nextFire), time + _interval];

[FUNC(tick), TICK_INTERVAL, _logic] call CBA_fnc_addPerFrameHandler;
[FUNC(debugTick), DEBUG_INTERVAL, _logic] call CBA_fnc_addPerFrameHandler;

diag_log text format [
    "[ghost_ambient_arty] battery online: interval %1s, %2 rnd, %3m spread, %4",
    _interval, _cfg get "rounds", _cfg get "spread", _cfg get "shell"
];
