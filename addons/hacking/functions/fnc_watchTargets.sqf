#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_watchTargets

Description:
    Server-side watcher over the marked intel targets. When one is destroyed or
    deleted it clears that target's marker on every machine and announces it, and
    when the last target in the pool is gone it announces that too.

    A polling watcher rather than a Killed event handler: props and static objects
    do not reliably fire Killed, and this also catches deleteVehicle.

    Started by the first module that registers targets; removes itself when the
    pool is empty.

Parameters (CBA PFH): 0: args, 1: handle

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_args", "_handle"];

private _pool = missionNamespace getVariable [QGVAR(intelTargets), []];
if (_pool isEqualTo []) exitWith { [_handle] call CBA_fnc_removePerFrameHandler };

private _destroyed = [];
{
    // only targets that have actually been revealed are worth announcing
    if (_x getVariable [QGVAR(intelMarked), false]
        && {!(_x getVariable [QGVAR(intelDown), false])}
        && {isNull _x || {!alive _x}}) then {
        _x setVariable [QGVAR(intelDown), true, true];
        _destroyed pushBack _x;
    };
} forEach _pool;

if (_destroyed isEqualTo []) exitWith {};

{
    [QGVAR(intelDestroyed), [format [QGVAR(intel_%1), _x call BIS_fnc_netId]]] call CBA_fnc_globalEvent;
    TRACE_1("intel target destroyed",_x);
} forEach _destroyed;

// everything that was ever registered is now down
private _left = _pool select {!isNull _x && {alive _x}};
if (_left isEqualTo []) then {
    [QGVAR(intelAllDown)] call CBA_fnc_globalEvent;
    [_handle] call CBA_fnc_removePerFrameHandler;
};
