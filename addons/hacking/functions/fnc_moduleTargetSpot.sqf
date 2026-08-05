#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_moduleTargetSpot

Description:
    A candidate location for an intel target. Place as many as you like and
    synchronise them to a Hack Intel Targets module; that module's Pick attribute
    decides how many of them are real on the day.

    The point is that the mission maker does not know either. Twenty spots, eight
    picked at random each time the mission runs, and the twelve that lose are
    either left as decoys or cleared away.

    A spot does nothing itself - it only registers, and FUNC(resolveTargets)
    settles the draw once every module has had its turn. That deferral is the
    whole reason spots are a separate module rather than an attribute: nothing
    guarantees a parent initialises after its children.

    A spot with no parent populates unconditionally, so one can be used on its
    own as a plain "put a target here".

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

// Marks this logic as a spot so a parent can tell its candidates apart from the
// objects synchronised straight to it.
_logic setVariable [QGVAR(isSpot), true];

GVAR(pendingSpots) = (missionNamespace getVariable [QGVAR(pendingSpots), []]) + [_logic];

[] call FUNC(scheduleResolve);
