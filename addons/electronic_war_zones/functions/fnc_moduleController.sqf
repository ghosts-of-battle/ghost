#include "script_component.hpp"
/*
 * Author: Ghost
 * Electronic War Zones controller module function (server). Reads attributes,
 * stashes the response config, spawns the EW emitters, starts the jammer-prune
 * broadcaster, and tells hunted-side clients to arm.
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

private _markers = (_logic getVariable ["taor_marker", ""]) splitString ", ";
if (_markers isEqualTo []) exitWith {
    WARNING("Electronic War Zones module has no TAOR marker set - disabled.");
};

private _huntedSide = call compile (_logic getVariable ["huntedSide", "WEST"]);
// Response-drone side is derived from the chosen faction (CfgFactionClasses
// side 0/1/2/3); empty/unknown faction falls back to EAST.
private _facSideN = getNumber (configFile >> "CfgFactionClasses" >> (_logic getVariable ["faction", ""]) >> "side");
if (_facSideN < 0 || _facSideN > 3) then { _facSideN = 0 };
private _droneSide = [east, west, independent, civilian] select _facSideN;

// Resolve + store the server-side response config (shared by all modules; last wins,
// which is fine - operators place one EW module per battlespace).
GVAR(huntedSide) = _huntedSide;
GVAR(droneSide) = _droneSide;
GVAR(detectorRange) = _logic getVariable ["detector_range", 2000];
GVAR(cooldown) = _logic getVariable ["cooldown", 120];
GVAR(responseDist) = _logic getVariable ["response_distance", 2000];
GVAR(responseAlt) = _logic getVariable ["response_altitude", 1000];
GVAR(responseLife) = _logic getVariable ["response_lifetime", 15];
GVAR(debug) = _logic getVariable ["debug", false];

// Part 3 propagation model. Every default reproduces the pre-model behaviour,
// so an existing mission jams identically until it opts in.
GVAR(jamLos) = _logic getVariable ["jam_los", false];
GVAR(jamBurnthrough) = _logic getVariable ["jam_burnthrough", false];
GVAR(jamBurnRef) = _logic getVariable ["jam_burnthrough_ref", 500];
GVAR(jamCurve) = toUpper (_logic getVariable ["jam_curve", "LINEAR"]);
GVAR(jamDuty) = _logic getVariable ["jam_duty_cycle", 100];
GVAR(jamConeEnable) = _logic getVariable ["jam_cone_enable", false];
GVAR(jamUavs) = _logic getVariable ["jam_uavs", false];
GVAR(rdfScanRange) = _logic getVariable ["rdf_scan_range", 3000];
GVAR(aiChatter) = _logic getVariable ["ai_chatter", false];
GVAR(aiChatterInterval) = (_logic getVariable ["ai_chatter_interval", 10]) max 1;

// Only start the loop when a mission asks for it - off by default (D18).
if (GVAR(aiChatter) && isServer) then {
    [FUNC(aiChatter), GVAR(aiChatterInterval), []] call CBA_fnc_addPerFrameHandler;
};
GVAR(ewLogic) = _logic;

// Response package: [ [classes[], count, typeKey], ... ]
GVAR(package) = [
    [(_logic getVariable ["response_personnel_classes", ""]) splitString ", ", _logic getVariable ["response_personnel_count", 2], "ew_personnel"],
    [(_logic getVariable ["response_vehicle_classes", ""]) splitString ", ", _logic getVariable ["response_vehicle_count", 1], "ew_vehicle"]
];

if (isNil QGVAR(cooldowns)) then { GVAR(cooldowns) = createHashMap };
if (isNil QGVAR(jammers)) then { GVAR(jammers) = [] };

// --- spawn this module's emitters ---
private _rMin = _logic getVariable ["jammer_radius_min", 100];
private _rMax = _logic getVariable ["jammer_radius_max", 2000];
private _jammerCount = _logic getVariable ["jammer_count", 2];
private _jammerClasses = (_logic getVariable ["jammer_class", "Land_TTowerBig_2_F"]) splitString ", ";
[
    _markers,
    _jammerCount,
    _jammerClasses,
    _rMin,
    _rMax max _rMin
] call FUNC(spawnJammers);

// --- start the jammer-liveness broadcaster once ---
if (isNil QGVAR(pruneStarted)) then {
    GVAR(pruneStarted) = true;
    [FUNC(pruneJammers), JAMMER_PRUNE_INTERVAL, []] call CBA_fnc_addPerFrameHandler;
};

// --- arm hunted-side clients (JIP-safe) ---
private _acrePowerMin = _logic getVariable ["acre_power_threshold", 1000];
[QGVAR(clientInit), [_huntedSide, _acrePowerMin]] call CBA_fnc_globalEventJIP;

LOG_2("Electronic War Zones online: %1 emitter(s) queued, hunting %2.",_jammerCount,_huntedSide);
