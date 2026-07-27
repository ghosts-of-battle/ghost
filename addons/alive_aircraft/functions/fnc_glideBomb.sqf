#include "script_component.hpp"
/*
 * Author: Ghost
 * Spawn a side-owned glide bomb up-wind of a target at altitude and steer it (each
 * frame) straight onto the target until it detonates. Deterministic strike - no
 * aircraft required.
 *
 * Arguments:
 * 0: Target position ATL <ARRAY>
 * 1: Side <SIDE>
 * 2: Bomb ammo class <STRING>
 * 3: Ingress bearing (deg) <NUMBER>
 * 4: Ingress distance (m) <NUMBER>
 * 5: Ingress altitude (m) <NUMBER>
 *
 * Return Value: The bomb <OBJECT> (objNull on failure)
 *
 * Public: No
 */

if (!isServer) exitWith {objNull};

params [
    ["_tgt", [], [[]]],
    ["_side", east, [east]],
    ["_class", "", [""]],
    ["_bearing", 0, [0]],
    ["_dist", 4000, [0]],
    ["_alt", 1500, [0]]
];
if (_tgt isEqualTo [] || {_class isEqualTo ""}) exitWith {objNull};

// Launch point: up-wind of the target along the ingress bearing, at altitude.
private _sp = [
    (_tgt select 0) - _dist * sin _bearing,
    (_tgt select 1) - _dist * cos _bearing,
    _alt
];

private _bomb = createVehicle [_class, _sp, [], 0, "CAN_COLLIDE"];
if (isNull _bomb) exitWith {objNull};
_bomb setPosATL _sp;
_bomb setVariable [QGVAR(side), _side, true];

private _dir0 = _sp vectorFromTo _tgt;
_bomb setVectorDirAndUp [_dir0, [0, 0, 1]];
_bomb setVelocity (_dir0 vectorMultiply GB_SPEED);

// Laser-guided ammo (laserLock > 0, e.g. Bo_GBU12_LGB): designate the target and let
// the bomb's own guidance fly it in - no script steering (which would fight it).
if ((getNumber (configFile >> "CfgAmmo" >> _class >> "laserLock")) > 0) exitWith {
    private _laserClass = switch (_side) do {
        case west: { "LaserTargetW" };
        case independent: { "LaserTargetC" };
        default { "LaserTargetE" };
    };
    private _laser = createVehicle [_laserClass, _tgt, [], 0, "CAN_COLLIDE"];
    _laser setPosATL _tgt;
    [{
        params ["_args", "_h"];
        _args params ["_bomb", "_laser", "_t0"];
        if (!isNull _bomb && {time < _t0 + 60}) exitWith {};
        if (!isNull _laser) then { deleteVehicle _laser };
        [_h] call CBA_fnc_removePerFrameHandler;
    }, 0.5, [_bomb, _laser, time]] call CBA_fnc_addPerFrameHandler;
    _bomb
};

// Home onto the target each frame; stop once at/below arming height (it detonates on contact).
[{
    params ["_args", "_h"];
    _args params ["_bomb", "_tgt"];
    if (isNull _bomb) exitWith { [_h] call CBA_fnc_removePerFrameHandler };

    private _from = getPosATL _bomb;
    if (((_from select 2) <= ((_tgt select 2) + GB_ARM_ALT)) || {(_bomb distance _tgt) < 6}) exitWith {
        [_h] call CBA_fnc_removePerFrameHandler;
    };

    private _dir = _from vectorFromTo _tgt;
    _bomb setVelocity (_dir vectorMultiply GB_SPEED);
    _bomb setVectorDirAndUp [_dir, [0, 0, 1]];
}, 0, [_bomb, _tgt]] call CBA_fnc_addPerFrameHandler;

_bomb
