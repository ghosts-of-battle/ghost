#include "script_component.hpp"
/*
 * Author: Ghost
 * Places the objective emitters and starts the prune that retires them.
 *
 * Called by FUNC(moduleController) once ALiVE is up - never on its own. The
 * module is the enable, so a mission with no module never reaches here.
 *
 * Arguments: None
 *
 * Return Value: None
 *
 * Example:
 * [] call ghost_jamming_fnc_start
 */

if (!isServer) exitWith {};

private _n = [] call FUNC(spawnObjectiveJammers);
INFO_1("%1 objective jammer(s) up",_n);

// A zone dies with its emitter - destroyed OR hacked, either one.
[{
    [] call FUNC(pruneJammers);
    // Published for the device's button gate - a count only, never the
    // positions, which a client has no business reading out of a variable.
    missionNamespace setVariable
        [QGVAR(zoneCount), count (["jam", [], true] call FUNC(getZones)), true];
}, JAM_PRUNE_TICK, []] call CBA_fnc_addPerFrameHandler;
