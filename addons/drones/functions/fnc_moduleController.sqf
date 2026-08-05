#include "script_component.hpp"
/*
 * Author: Ghost
 * ALiVE Drones controller module function. Reads the 3DEN attributes off the
 * logic, stashes a resolved config on it, ensures the shared reaper is running,
 * and starts this controller's trickle-spawn manager PFH.
 *
 * Arguments (module standard):
 * 0: Logic <OBJECT>
 * 1: Units <ARRAY>
 * 2: Activated <BOOL>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

// Fleet management is server-authoritative.
if (hasInterface && !isServer) exitWith {};

params [
    ["_logic", objNull, [objNull]],
    ["_units", [], [[]]],
    ["_activated", true, [true]]
];

if (!_activated) exitWith {};
if (isNull _logic) exitWith {};

// --- read globals ---
private _markers = (_logic getVariable ["taor_marker", ""]) splitString ", ";
private _objMarkers = (_logic getVariable ["objective_marker", ""]) splitString ", ";
// Side is derived from the chosen faction (CfgFactionClasses side 0/1/2/3);
// empty/unknown faction falls back to EAST.
private _facSideN = getNumber (configFile >> "CfgFactionClasses" >> (_logic getVariable ["faction", ""]) >> "side");
if (_facSideN < 0 || _facSideN > 3) then { _facSideN = 0 };
private _side = [east, west, independent, civilian] select _facSideN;
private _altMin = _logic getVariable ["altitude_min", 80];
private _altMax = _logic getVariable ["altitude_max", 500];
private _ceiling = _logic getVariable ["global_airframe_ceiling", 20];
private _interval = _logic getVariable ["spawn_interval", 30];
private _lifetime = _logic getVariable ["drone_lifetime", 30];
private _debug = _logic getVariable ["debug", false];

if (_markers isEqualTo []) exitWith {
    WARNING("ALiVE Drones controller has no TAOR marker set - disabled.");
};
if (_altMax < _altMin) then { _altMax = _altMin };

// --- resolve per-type config: type -> [classes[], cap, groupSize, groupChance%, altTier] ---
private _mkType = {
    params ["_key", "_tier", "_gsField", "_gcField"];
    private _classes = (_logic getVariable [format ["%1_classes", _key], ""]) splitString ", ";
    private _cap = _logic getVariable [format ["%1_cap", _key], 0];
    private _gs = if (_gsField isNotEqualTo "") then { _logic getVariable [_gsField, 2] } else { 0 };
    private _gc = if (_gcField isNotEqualTo "") then { _logic getVariable [_gcField, 0] } else { 0 };
    [_classes, _cap, _gs, _gc, _tier]
};

private _typeCfg = createHashMap;
_typeCfg set ["antiair",       ["antiair", "high", "", ""] call _mkType];
_typeCfg set ["antiarmor",     ["antiarmor", "mid", "antiarmor_group_size", "antiarmor_group_chance"] call _mkType];
_typeCfg set ["antipersonnel", ["antipersonnel", "mid", "antipersonnel_group_size", "antipersonnel_group_chance"] call _mkType];
_typeCfg set ["loiterfixed",   ["loiterfixed", "high", "", ""] call _mkType];
_typeCfg set ["loiterrotor",   ["loiterrotor", "low", "", ""] call _mkType];
_typeCfg set ["recon",         ["recon", "high", "", ""] call _mkType];
_typeCfg set ["ground",        ["ground", "ground", "ground_group_size", "ground_group_chance"] call _mkType];

private _cfg = createHashMap;
_cfg set ["markers", _markers];
_cfg set ["objMarkers", _objMarkers];
_cfg set ["side", _side];
_cfg set ["altMin", _altMin];
_cfg set ["altMax", _altMax];
_cfg set ["lifetime", _lifetime];
_cfg set ["debug", _debug];

_logic setVariable [QGVAR(cfg), _cfg];
_logic setVariable [QGVAR(typeCfg), _typeCfg];

// --- start shared reaper + this controller's manager ---
[_ceiling] call FUNC(ensureReaper);

private _handle = [FUNC(manager), _interval max 1, _logic] call CBA_fnc_addPerFrameHandler;
_logic setVariable [QGVAR(managerHandle), _handle];

LOG_2("ALiVE Drones controller online: %1 marker(s), ceiling %2.",count _markers,_ceiling);
