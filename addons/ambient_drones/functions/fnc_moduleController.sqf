#include "script_component.hpp"
/*
 * Author: Ghost
 * Ambient Drones controller (server). Reads attributes, ensures the shared ALiVE
 * Drones reaper is running, and starts a random-window timer that spawns drones
 * near enemy players.
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

// Side is derived from the chosen faction (CfgFactionClasses side 0/1/2/3);
// empty/unknown faction falls back to EAST.
private _facSideN = getNumber (configFile >> "CfgFactionClasses" >> (_logic getVariable ["faction", ""]) >> "side");
if (_facSideN < 0 || _facSideN > 3) then { _facSideN = 0 };
private _side = [east, west, independent, civilian] select _facSideN;
private _altMin = _logic getVariable ["altitude_min", 90];
private _altMax = _logic getVariable ["altitude_max", 450];
if (_altMax < _altMin) then { _altMax = _altMin };

private _iMin = _logic getVariable ["interval_min", 120];
private _iMax = (_logic getVariable ["interval_max", 300]) max _iMin;

// Resolve per-type config: type -> [classes[], cap, priority, tier].
private _mkType = {
    params ["_key", "_tier"];
    private _classes = (_logic getVariable [format ["%1_classes", _key], ""]) splitString ", ";
    private _cap = _logic getVariable [format ["%1_cap", _key], 0];
    private _prio = _logic getVariable [format ["%1_priority", _key], 0];
    [_classes, _cap, _prio, _tier]
};

private _typeCfg = createHashMap;
_typeCfg set ["antiair",       ["antiair", "high"] call _mkType];
_typeCfg set ["antiarmor",     ["antiarmor", "mid"] call _mkType];
_typeCfg set ["antipersonnel", ["antipersonnel", "mid"] call _mkType];
_typeCfg set ["loiterfixed",   ["loiterfixed", "high"] call _mkType];
_typeCfg set ["loiterrotor",   ["loiterrotor", "low"] call _mkType];
_typeCfg set ["recon",         ["recon", "high"] call _mkType];
_typeCfg set ["ground",        ["ground", "ground"] call _mkType];

private _cfg = createHashMap;
_cfg set ["side", _side];
_cfg set ["altMin", _altMin];
_cfg set ["altMax", _altMax];
_cfg set ["radius", _logic getVariable ["spawn_radius", 2000]];
_cfg set ["minDist", _logic getVariable ["spawn_min_dist", 600]];
_cfg set ["iMin", _iMin];
_cfg set ["iMax", _iMax];
_cfg set ["lifetime", _logic getVariable ["drone_lifetime", 15]];
_cfg set ["blacklist", (_logic getVariable ["blacklist_marker", ""]) splitString ", "];
_cfg set ["taor", (_logic getVariable ["taor_marker", ""]) splitString ", "];
_cfg set ["debug", _logic getVariable ["debug", false]];

_logic setVariable [QGVAR(cfg), _cfg];
_logic setVariable [QGVAR(typeCfg), _typeCfg];

// Ensure the shared fleet registry + reaper (owned by Drones) is running.
[_logic getVariable ["global_airframe_ceiling", 10]] call ghost_drones_fnc_ensureReaper;

// First fire soon (so it's visibly alive); the manager uses the [min,max] window
// for every subsequent spawn.
_logic setVariable [QGVAR(nextAt), time + 20 + random 20];
[FUNC(manager), AMB_CHECK_INTERVAL, _logic] call CBA_fnc_addPerFrameHandler;

// Debug heartbeat: reports this module's state to every client's system chat
// while its Debug attribute is ticked.
[FUNC(debugTick), DEBUG_INTERVAL, _logic] call CBA_fnc_addPerFrameHandler;

// Post-contact QRF: squads that stop moving where they just fought get
// answered (CBA-gated).
[FUNC(qrfWatch), 10, _logic] call CBA_fnc_addPerFrameHandler;

diag_log text format ["[ghost_ambient_drones] online: side %1, radius %2m, window %3-%4s, first fire in ~%5s", _side, _cfg get "radius", _iMin, _iMax, round ((_logic getVariable [QGVAR(nextAt), time]) - time)];
