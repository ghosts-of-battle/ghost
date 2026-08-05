#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_moduleRemoteHack

Description:
    Reads the Remote Unit Hack module onto globals and switches the feature on.
    Without a module the "Hack Unit" entry never appears - placement IS the
    enable, there is no setting to turn off.

Parameters (module standard): logic, units, activated

Author:
    Ghost
---------------------------------------------------------------------------- */
params [["_logic", objNull, [objNull]], ["_units", [], [[]]], ["_activated", true, [true]]];

if (!_activated || {isNull _logic}) exitWith {};

{
    _x params ["_key", "_default"];
    missionNamespace setVariable [
        format [QGVAR(rh_%1), _key],
        _logic getVariable [_key, _default],
        true
    ];
} forEach [
    ["max_range", RH_RANGE_DEF],
    ["hack_time", RH_TIME_DEF],
    ["fail_chance", RH_FAIL_DEF],
    ["alert_radius", RH_ALERT_DEF],
    ["jam_chance", RH_JAM_CHANCE_DEF],
    ["jam_radius_min", RH_JAM_MIN_DEF],
    ["jam_radius_max", RH_JAM_MAX_DEF],
    ["jam_duration", RH_JAM_DURATION_DEF],
    ["abandon_timeout", HACK_ABANDON_DEF],
    ["combat_interrupts", false]
];

missionNamespace setVariable [QGVAR(remoteHackEnabled), true, true];

private _r = missionNamespace getVariable [QGVAR(rh_max_range), RH_RANGE_DEF];
INFO_1("Hacking: remote unit hack online, %1m range",_r);
