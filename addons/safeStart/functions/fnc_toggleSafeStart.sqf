/*
 * Author: AACO
 * Function used to start/stop safe start
 * Sould only be called on the server
 *
 * Arguments:
 * 0: Make the server safe? <BOOL>
 *
 * Examples:
 * [true] call ghost_safeStart_fnc_toggleSafeStart;
 * [false] call ghost_safeStart_fnc_toggleSafeStart;
 *
 * Public: Yes
 */

#include "script_component.hpp"
TRACE_1("Params",_this);

if !(isServer) exitWith {};

params [["_makeSafe", true, [true]]];

if (_makeSafe) then {
    missionNamespace setVariable [QGVAR(startTime_PV), CBA_missionTime, true];
    ["ghost_safeStartOn"] call CBA_fnc_globalEvent;
} else {
    missionNamespace setVariable [QGVAR(startTime_PV), -1, true];
    ["ghost_safeStartOff"] call CBA_fnc_globalEvent;
};
