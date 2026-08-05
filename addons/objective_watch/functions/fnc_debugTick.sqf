#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_objective_watch_fnc_debugTick

Description:
    Debug heartbeat on the same contract as the ambient modules: one line to
    system chat naming the module, its state, what it can see and what it is
    waiting for.

Parameters (CBA PFH): 0: logic, 1: handle

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_logic", "_handle"];

if (isNull _logic) exitWith { [_handle] call CBA_fnc_removePerFrameHandler };

private _cfg = _logic getVariable [QGVAR(cfg), nil];
if (isNil "_cfg") exitWith {};

private _side = _cfg get "side";
{
    private _watch = _x;
    private _pos = _watch get "pos";
    private _radius = _watch get "radius";
    private _inside = allPlayers select {
        alive _x && {(getPosATL _x) distance2D _pos <= _radius}
        && {_side isEqualTo sideUnknown || {side (group _x) isEqualTo _side}}
    };
    private _streak = _watch get "streak";
    [format [
        "[Objective Watch] %1 (%2) | players %3/%4 | contested %5 | held %6 | streak %7/%8s | cd %9s",
        _watch get "name", mapGridPosition _pos,
        count _inside, _cfg get "minPlayers",
        [_pos, _radius, _side] call FUNC(enemyPresent),
        _watch get "held",
        if (_streak < 0) then { 0 } else { round (CBA_missionTime - _streak) },
        _cfg get "holdTime",
        0 max round ((_cfg get "barrageCooldown") - (CBA_missionTime - (_watch get "lastBarrage")))
    ]] remoteExec ["systemChat", 0];
} forEach (_logic getVariable [QGVAR(watches), []]);
