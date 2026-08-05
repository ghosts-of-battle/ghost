#include "script_component.hpp"
/*
 * Author: Ghost
 * Spawn one strike airframe off-map (bearing + distance from the module) and hand
 * it to the strike behaviour. Registered into the shared fleet (immortal lifetime -
 * this addon owns its despawn once the pass + egress finish).
 *
 * Arguments:
 * 0: Logic <OBJECT>
 * 1: Type key ("fixedwing" | "rotor") <STRING>
 *
 * Return Value: None
 *
 * Public: No
 */

if (!isServer) exitWith {};

params ["_logic", "_type"];

private _cfg = _logic getVariable [QGVAR(cfg), objNull];
if (isNil "_cfg") exitWith {};

(_cfg get _type) params ["_classes", "_cap"];
if (_classes isEqualTo []) exitWith {};

private _side   = _cfg get "side";
private _modPos = _cfg get "modulePos";
private _bearing = _cfg get "bearing";
private _dist   = _cfg get "distance";
private _altMin = _cfg get "altMin";
private _altMax = _cfg get "altMax";
private _range  = _altMax - _altMin;

// Fixed-wing ingress high, rotary low.
private _alt = if (_type isEqualTo "fixedwing") then {
    _altMin + (0.6 * _range) + random (0.4 * _range)
} else {
    _altMin + random (0.4 * _range)
};

// Off-map spawn: modulePos + distance along the bearing.
private _sp = [
    (_modPos select 0) + _dist * sin _bearing,
    (_modPos select 1) + _dist * cos _bearing
];

private _class = selectRandom _classes;
([_class, _sp, _side, _alt, grpNull, false] call EFUNC(drones,createDrone)) params ["_veh", "_grp"];
if (isNull _veh) exitWith {};

// Register so the airframe counts toward the shared ceiling + reaper watchdog.
// Lifetime 0 = the reaper won't auto-despawn; runStrike deletes it after egress.
[_grp, _logic, _type, [_veh], 0, _cfg get "debug", _side] call EFUNC(drones,registerGroup);

[_grp, _veh, _cfg] call FUNC(runStrike);
