#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_moduleController

Description:
    Registers a Hack Intel Targets module. Everything synchronised to it becomes
    the intel pool - objects directly, and Intel Target Spots as candidates for
    the module's Pick draw. Each target carries its own marker style, so several
    modules can run pools that look different.

    Only registers; FUNC(resolveTargets) does the work a frame later. Module
    initialisation order is not guaranteed, so reading synchronizedObjects here
    could miss spots that have not run yet.

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

GVAR(pendingPools) = (missionNamespace getVariable [QGVAR(pendingPools), []]) + [_logic];

[] call FUNC(scheduleResolve);
