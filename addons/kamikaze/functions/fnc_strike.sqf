#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_kamikaze_fnc_strike

Description:
    Flies a loitering munition into a point and sets it off there.

    Public: this is what a mission, a module or another addon calls to order a
    strike. It takes an airframe that already exists rather than spawning one, so
    the caller decides where it came from - launched from a bag, released by an
    aircraft, or conjured off-map by an ambient module.

    The drone is damage-able the whole way in. That is the point of it being an
    airframe rather than an effect: it can be seen coming, and it can be stopped.

Parameters:
    _drone : OBJECT - the airframe, already in the air.
    _tgt   : ARRAY  - aimpoint, ATL.
    _speed : NUMBER - dive speed. Optional, default KAM_DIVE_SPEED.

Returns:
    BOOL - true if the run started.

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith { false };

params ["_drone", ["_tgt", [], [[]]], ["_speed", KAM_DIVE_SPEED, [0]]];

if (isNull _drone || {_tgt isEqualTo []}) exitWith { false };

[{
    params ["_args", "_handle"];
    _args params ["_drone", "_tgt", "_speed"];

    // Shot down on the way in. The Killed handler has already dealt with the
    // warhead; there is nothing left to fly.
    if (isNull _drone || {!alive _drone}) exitWith {
        [_handle] call CBA_fnc_removePerFrameHandler;
    };

    private _from = getPosATL _drone;

    // Close enough, or through the aimpoint's altitude - the second test catches
    // a steep dive that would otherwise pass the aimpoint between two frames at
    // 240 m/s and fly on into the ground somewhere else.
    if (((_drone distance _tgt) < KAM_IMPACT_DIST)
        || {(_from select 2) <= ((_tgt select 2) + 2)}) exitWith {
        [_handle] call CBA_fnc_removePerFrameHandler;
        _drone setVariable [QGVAR(spent), true];
        [_drone, _from] call FUNC(detonate);
    };

    private _dir = _from vectorFromTo _tgt;
    _drone setVelocity (_dir vectorMultiply _speed);
    _drone setVectorDirAndUp [_dir, [0, 0, 1]];
}, 0, [_drone, _tgt, _speed]] call CBA_fnc_addPerFrameHandler;

true
