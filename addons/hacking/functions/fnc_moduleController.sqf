#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_moduleController

Description:
    Registers everything synchronised to a Hack Intel Targets module as the intel
    pool. Each synced object carries its own marker style, so several modules can
    run pools that look different.

    Server only; the registry is what FUNC(markNearestTarget) searches.

Parameters (module standard):
    _logic     : OBJECT - the module logic.
    _units     : ARRAY  - unused.
    _activated : BOOL   - module activation.

Author:
    Ghost
---------------------------------------------------------------------------- */
if (hasInterface && !isServer) exitWith {};

params [
    ["_logic", objNull, [objNull]],
    ["_units", [], [[]]],
    ["_activated", true, [true]]
];

if (!_activated) exitWith {};
if (isNull _logic) exitWith {};

private _targets = synchronizedObjects _logic;
if (_targets isEqualTo []) exitWith {
    diag_log text "[ghost_hacking] intel module placed with nothing synced to it - no targets registered";
};

private _style = [
    _logic getVariable ["marker_text", "Signal Intercept"],
    _logic getVariable ["marker_type", "hd_dot"],
    _logic getVariable ["marker_colour", "ColorRed"],
    _logic getVariable ["max_range", 0],
    _logic getVariable ["one_shot", true]
];

private _pool = missionNamespace getVariable [QGVAR(intelTargets), []];
{
    _x setVariable [QGVAR(intelStyle), _style, true];
    _x setVariable [QGVAR(intelMarked), false, true];
    _pool pushBackUnique _x;
} forEach _targets;

missionNamespace setVariable [QGVAR(intelTargets), _pool, true];

// One watcher for the whole pool, however many modules are placed.
if (isNil QGVAR(watchHandle)) then {
    GVAR(watchHandle) = [FUNC(watchTargets), TARGET_WATCH_INTERVAL, []] call CBA_fnc_addPerFrameHandler;
};

diag_log text format [
    "[ghost_hacking] intel module registered %1 target(s), pool now %2",
    count _targets, count _pool
];
