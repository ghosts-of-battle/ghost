#include "script_component.hpp"
/*
 * Author: Ghost
 * Aircraft/glide-bomb strike module. Reads the 3DEN attributes off the logic,
 * stashes a resolved config, ensures the shared reaper/ceiling, and starts the
 * aircraft trickle manager + the glide-bomb frequency loop.
 *
 * Arguments (module standard): logic, units, activated
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

private _sideStr = toUpper (_logic getVariable ["side", "EAST"]);
private _side = switch (_sideStr) do {
    case "WEST": { west };
    case "GUER": { independent };
    case "CIV":  { civilian };
    default      { east };
};

private _taor = (_logic getVariable ["taor_marker", ""]) splitString ", ";
if (_taor isEqualTo []) exitWith {
    WARNING("Aircraft Strike module has no TAOR marker set - disabled.");
};

private _altMin = _logic getVariable ["altitude_min", 120];
private _altMax = _logic getVariable ["altitude_max", 600];
if (_altMax < _altMin) then { _altMax = _altMin };

private _ceiling  = _logic getVariable ["ceiling", 6];
private _debug    = _logic getVariable ["debug", false];

private _fw      = (_logic getVariable ["fixedwing_classes", ""]) splitString ", ";
private _fwCap   = _logic getVariable ["fixedwing_cap", 0];
private _fwFreq  = _logic getVariable ["fixedwing_frequency", 300];
private _rot     = (_logic getVariable ["rotor_classes", ""]) splitString ", ";
private _rotCap  = _logic getVariable ["rotor_cap", 0];
private _rotFreq = _logic getVariable ["rotor_frequency", 300];

private _gbClass = _logic getVariable ["glidebomb_class", ""];
private _gbFreq  = _logic getVariable ["glidebomb_frequency", 0];
private _gbAlt   = _logic getVariable ["glidebomb_altitude", 1500];

// Boot the shared fleet registry + reaper (idempotent across all modules).
[_ceiling] call EFUNC(alive_drones,ensureReaper);

private _cfg = createHashMap;
_cfg set ["side", _side];
_cfg set ["modulePos", getPosATL _logic];
_cfg set ["bearing", _logic getVariable ["spawn_bearing", 0]];
_cfg set ["distance", _logic getVariable ["spawn_distance", 8000]];
_cfg set ["altMin", _altMin];
_cfg set ["altMax", _altMax];
_cfg set ["taor", _taor];
_cfg set ["debug", _debug];
_cfg set ["fixedwing", [_fw, _fwCap]];
_cfg set ["rotor", [_rot, _rotCap]];
_cfg set ["gbClass", _gbClass];
_cfg set ["gbFreq", _gbFreq];
_cfg set ["gbAlt", _gbAlt];
_logic setVariable [QGVAR(cfg), _cfg];

// Independent per-type launch loops, each on its own frequency.
if (_fw isNotEqualTo [] && {_fwCap > 0} && {_fwFreq > 0}) then {
    [FUNC(manager), _fwFreq, [_logic, "fixedwing"]] call CBA_fnc_addPerFrameHandler;
};
if (_rot isNotEqualTo [] && {_rotCap > 0} && {_rotFreq > 0}) then {
    [FUNC(manager), _rotFreq, [_logic, "rotor"]] call CBA_fnc_addPerFrameHandler;
};

// Glide-bomb frequency loop.
if (_gbClass != "" && {_gbFreq > 0}) then {
    [FUNC(glideLoop), _gbFreq, [_logic]] call CBA_fnc_addPerFrameHandler;
};
