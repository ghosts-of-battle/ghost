#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_watchTargets

Description:
    Server-side watcher over the marked intel targets. When one is destroyed or
    deleted it clears that target's circle on the side that earned it and says
    so, and when the last target in the pool is gone it announces that too.

    A polling watcher rather than a Killed event handler: props and static
    objects do not reliably fire Killed, and this also catches deleteVehicle.

    Marks live in their own registry rather than being read back off the objects.
    A deleted object has no variables left to read, so asking it whether it was
    marked always answers no - which would have let deleteVehicle pass unnoticed,
    the exact case a polling watcher exists to catch. The registry also carries
    the netId and side forward, both of which are unobtainable once the object is
    gone.

    Started by the first module that registers targets; stands down when the pool
    is empty, and clears its handle so a later module can start it again.

Parameters (CBA PFH): 0: args, 1: handle

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_args", "_handle"];

private _standDown = {
    GVAR(watchHandle) = nil;
    [_this] call CBA_fnc_removePerFrameHandler;
};

private _pool = missionNamespace getVariable [QGVAR(intelTargets), []];
if (_pool isEqualTo []) exitWith { _handle call _standDown };

private _marks = missionNamespace getVariable [QGVAR(intelMarks), []];
private _live = [];
{
    _x params ["_obj", "_netId", "_side"];
    if (!isNull _obj && {alive _obj}) then {
        _live pushBack _x;
    } else {
        [QGVAR(intelDestroyed), [format [QGVAR(intel_%1), _netId], _side]] call CBA_fnc_globalEvent;

        // The floor is free: the next hack may look for a new objective.
        if (!isNull _obj
            && {(missionNamespace getVariable [QGVAR(activeTarget), objNull]) isEqualTo _obj}) then {
            missionNamespace setVariable [QGVAR(activeTarget), objNull, true];
        };

        TRACE_2("intel target destroyed",_netId,_side);
    };
} forEach _marks;
GVAR(intelMarks) = _live;

// A deleted active target leaves a null handle behind, which no comparison above
// can match - so clear it on its own terms.
private _active = missionNamespace getVariable [QGVAR(activeTarget), objNull];
if (!isNull _active && {!alive _active}) then {
    missionNamespace setVariable [QGVAR(activeTarget), objNull, true];
};

// Everything that was ever registered is now down. Checked every tick, NOT only
// on a tick where a marked target died: a pool can empty entirely through targets
// nobody ever hacked their way to, and skipping the check on those ticks left
// this handler running for the rest of the mission.
private _left = _pool select {!isNull _x && {alive _x}};
if (_left isNotEqualTo []) exitWith {};

// If nobody ever hacked their way to any of them there is no side to tell, so the
// announcement is skipped - but the watcher stands down either way.
private _side = missionNamespace getVariable [QGVAR(intelLastSide), sideUnknown];
if (_side isNotEqualTo sideUnknown) then {
    [QGVAR(intelAllDown), [_side]] call CBA_fnc_globalEvent;
};

_handle call _standDown;
