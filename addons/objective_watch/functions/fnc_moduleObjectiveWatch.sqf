#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_objective_watch_fnc_moduleObjectiveWatch

Description:
    Reads one Objective Watch module and starts its own watch loop. State is per
    logic, so a mission can place as many objectives as it likes and each keeps
    its own hold streak and cooldown.

Parameters (module standard): logic, units, activated

Author:
    Ghost
---------------------------------------------------------------------------- */
if (hasInterface && !isServer) exitWith {};

params [["_logic", objNull, [objNull]], ["_units", [], [[]]], ["_activated", true, [true]]];

if (!_activated || {isNull _logic}) exitWith {};

private _sideStr = toUpper (_logic getVariable ["capture_side", "WEST"]);
private _side = switch (_sideStr) do {
    case "EAST": { east };
    case "GUER": { resistance };
    case "ANY": { sideUnknown };
    default { west };
};

private _cfg = createHashMapFromArray [
    ["side", _side],
    ["radius", _logic getVariable ["capture_radius", 200]],
    ["marker", _logic getVariable ["marker", ""]],
    ["markerPrefixes", _logic getVariable ["objective_markers", OW_MARKER_PREFIX]],
    ["useAlive", _logic getVariable ["use_alive_objectives", true]],
    ["aliveRange", _logic getVariable ["alive_range", 0]],
    ["aliveBridge", _logic getVariable ["alive_bridge", true]],
    ["minPlayers", _logic getVariable ["min_players", 1]],
    ["holdTime", _logic getVariable ["hold_time", 60]],
    ["barrageEnable", _logic getVariable ["barrage_enable", true]],
    ["barrageChance", _logic getVariable ["barrage_chance", 100]],
    ["barrageDelay", _logic getVariable ["barrage_delay", 180]],
    ["barrageJitter", _logic getVariable ["barrage_jitter", 30]],
    ["barrageRounds", _logic getVariable ["barrage_rounds", 24]],
    ["barrageWindow", _logic getVariable ["barrage_window", 60]],
    ["barrageShell", _logic getVariable ["barrage_shell", "Sh_155mm_AMOS"]],
    ["barrageDispersion", _logic getVariable ["barrage_dispersion", 0]],
    ["barrageSide", toUpper (_logic getVariable ["barrage_side", "EAST"])],
    ["barrageCooldown", _logic getVariable ["barrage_cooldown", 900]],
    ["debug", _logic getVariable ["debug", false]]
];

// One module can watch many objectives - see FUNC(gatherObjectives) for where
// they come from with and without ALiVE.
private _watches = [_logic, _cfg] call FUNC(gatherObjectives);
_logic setVariable [QGVAR(watches), _watches];

_logic setVariable [QGVAR(cfg), _cfg];

if (isNil QGVAR(logics)) then { GVAR(logics) = [] };
GVAR(logics) pushBackUnique _logic;

[FUNC(checkCapture), CHECK_INTERVAL, _logic] call CBA_fnc_addPerFrameHandler;
if (_cfg get "debug") then {
    [FUNC(debugTick), OW_DEBUG_INTERVAL, _logic] call CBA_fnc_addPerFrameHandler;
};

private _n = count _watches;
INFO_2("Objective Watch: %1 objective(s), capturing side %2",_n,_sideStr);

// AI captures, when ALiVE is running. Absent-safe and off in a vanilla mission.
if ((_cfg get "aliveBridge") && {!isNil "ALIVE_eventLog"}) then {
    [FUNC(aliveBridge), CHECK_INTERVAL, _logic] call CBA_fnc_addPerFrameHandler;
};
