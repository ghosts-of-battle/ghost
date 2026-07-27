#include "script_component.hpp"
/*
 * Author: Ghost
 * Spawn a drone off-map and steer it straight into the target, then detonate it on
 * impact (the drone carries its own warhead - a one-way dive, NO loiter).
 *
 * Arguments:
 * 0: Target position AGL <ARRAY>
 * 1: Drone class <STRING>
 * 2: Ingress distance (m) <NUMBER>
 * 3: Ingress altitude (m) <NUMBER>
 *
 * Return Value: The drone <OBJECT> (objNull on failure)
 *
 * Public: No
 */

if (!isServer) exitWith {objNull};

params [["_tgt", [], [[]]], ["_class", "", [""]], ["_dist", 6000, [0]], ["_alt", 800, [0]]];
if (_tgt isEqualTo [] || {_class isEqualTo ""}) exitWith {objNull};

diag_log text format ["[Ghost] Ambient Kamikaze: launching %1 -> grid %2 (%3)", _class, mapGridPosition _tgt, _tgt];

private _bearing = random 360;
private _sp = [
    (_tgt select 0) + _dist * sin _bearing,
    (_tgt select 1) + _dist * cos _bearing,
    _alt
];

private _veh = createVehicle [_class, [_sp select 0, _sp select 1, _alt], [], 0, "FLY"];
if (isNull _veh) exitWith {objNull};
_veh setPosATL _sp;
_veh setDir ([_sp select 0, _sp select 1, 0] getDir _tgt);
_veh allowDamage false;   // survive the ingress; it self-detonates on the target

private _dir0 = _sp vectorFromTo _tgt;
_veh setVectorDirAndUp [_dir0, [0, 0, 1]];
_veh setVelocity (_dir0 vectorMultiply DRONE_SPEED);

[{
    params ["_args", "_h"];
    _args params ["_veh", "_tgt"];
    if (isNull _veh) exitWith { [_h] call CBA_fnc_removePerFrameHandler };

    private _from = getPosATL _veh;
    if (((_veh distance _tgt) < IMPACT_DIST) || {(_from select 2) <= ((_tgt select 2) + 2)}) exitWith {
        [_h] call CBA_fnc_removePerFrameHandler;
        _veh allowDamage true;
        _veh setDamage 1;   // detonate the drone's own warhead at the target
    };

    private _dir = _from vectorFromTo _tgt;
    _veh setVelocity (_dir vectorMultiply DRONE_SPEED);
    _veh setVectorDirAndUp [_dir, [0, 0, 1]];
}, 0, [_veh, _tgt]] call CBA_fnc_addPerFrameHandler;

_veh
