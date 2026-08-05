#include "script_component.hpp"
/*
 * Author: Ghost
 * Base Defense controller (server). Reads attributes, ensures the shared reaper is
 * running, and starts the trickle-spawn manager plus the recon-artillery loop.
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
private _altMax = (_logic getVariable ["altitude_max", 450]) max _altMin;

// Base position: marker if set + valid, else the module's own position.
private _marker = _logic getVariable ["spawn_marker", ""];
private _hasMarker = _marker isNotEqualTo "" && {markerType _marker isNotEqualTo ""};
private _basePos = if (_hasMarker) then { getMarkerPos _marker } else { getPosATL _logic };

// Per-type config: type -> [classes[], cap, tier].
private _mkType = {
    params ["_key", "_tier"];
    private _classes = (_logic getVariable [format ["%1_classes", _key], ""]) splitString ", ";
    private _cap = _logic getVariable [format ["%1_cap", _key], 0];
    [_classes, _cap, _tier]
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
_cfg set ["basePos", _basePos];
_cfg set ["marker", [_marker, ""] select (!_hasMarker)];
_cfg set ["hasMarker", _hasMarker];
_cfg set ["altMin", _altMin];
_cfg set ["altMax", _altMax];
_cfg set ["defRange", _logic getVariable ["defense_range", 1500]];
_cfg set ["stopDist", _logic getVariable ["stop_distance", 300]];
_cfg set ["activateRange", _logic getVariable ["activate_range", 3000]];
_cfg set ["lifetime", _logic getVariable ["drone_lifetime", 0]];
_cfg set ["debug", _logic getVariable ["debug", false]];
_cfg set ["artyEnable", _logic getVariable ["arty_enable", true]];
_cfg set ["artyAmmo", _logic getVariable ["arty_ammo", "Sh_82mm_AMOS"]];
_cfg set ["artyRounds", _logic getVariable ["arty_rounds", 6]];
_cfg set ["artyRadius", _logic getVariable ["arty_radius", 50]];
_cfg set ["artyDelay", _logic getVariable ["arty_delay", 4]];
_cfg set ["artyCooldown", _logic getVariable ["arty_cooldown", 60]];

_logic setVariable [QGVAR(cfg), _cfg];
_logic setVariable [QGVAR(typeCfg), _typeCfg];
_logic setVariable [QGVAR(artyCd), createHashMap];

// Ensure the shared fleet registry + reaper (owned by Drones) is running.
[_logic getVariable ["global_airframe_ceiling", 10]] call ghost_drones_fnc_ensureReaper;

if (_logic getVariable ["base_marker", true]) then {
    [_basePos, _side, _logic getVariable ["marker_text", ""]] call FUNC(baseMarker);
};

// EW cover over the base. Soft: the function only exists when the Electronic War
// Zones addon is loaded, and this module does not require it - a base without EW
// is just a base. Registered once at init rather than maintained, because the
// zone's lifetime is its emitter's, and EW already prunes dead emitters.
if (_logic getVariable ["ew_enable", false]) then {
    if (isNil "ghost_electronic_war_zones_fnc_spawnZoneAt") then {
        WARNING("Base Defense: EW zone requested but the Electronic War Zones addon is not loaded.");
    } else {
        private _ewR = (_logic getVariable ["ew_radius", 900]) max 1;
        private _ewC = _logic getVariable ["ew_class", ""];
        ([_basePos, _ewR, _ewC] call ghost_electronic_war_zones_fnc_spawnZoneAt) params ["_ewId", "_ewObj"];
        if (_ewId isNotEqualTo "") then {
            // Marked so anything that cares - a hack, an RDF fix - can tell this
            // emitter belongs to a base rather than to a scattered TAOR.
            if (!isNull _ewObj) then { _ewObj setVariable [QGVAR(baseEmitter), true, true] };
            LOG_2("Base Defense: EW zone %1, radius %2m.",_ewId,round _ewR);
        };
    };
};

[FUNC(manager), (_logic getVariable ["spawn_interval", 30]) max 1, _logic] call CBA_fnc_addPerFrameHandler;
if (_cfg get "artyEnable") then {
    [FUNC(reconArty), ARTY_INTERVAL, _logic] call CBA_fnc_addPerFrameHandler;
};

LOG_2("Base Defense online: range %1m, side %2.",_cfg get "defRange",_side);
