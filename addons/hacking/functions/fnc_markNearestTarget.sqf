#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_markNearestTarget

Description:
    Marks whichever registered intel target is nearest the hacker. Called on a
    successful tower hack; does nothing if no Hack Intel Targets module was placed,
    so the addon still works without one.

    Marker style comes from the module that registered the target, so pools placed
    by different modules can look different. With One Shot on, a target is only
    ever revealed once and repeated hacks walk outward through the pool.

    Runs on the server: the marker is created globally, and the registry is
    server-owned.

Parameters:
    _unit : OBJECT - the hacker.

Returns:
    OBJECT - the target marked, objNull if none.

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith {
    [_this, QFUNC(markNearestTarget)] remoteExec ["call", 2];
    objNull
};

params ["_unit"];
if (isNull _unit) exitWith { objNull };

private _pool = missionNamespace getVariable [QGVAR(intelTargets), []];
if (_pool isEqualTo []) exitWith { objNull };

// alive, still registered, and not already revealed when the pool is one-shot
private _valid = _pool select {
    !isNull _x
    && {alive _x}
    && {
        (_x getVariable [QGVAR(intelStyle), []]) params ["", "", "", "_range", "_oneShot"];
        (!_oneShot || {!(_x getVariable [QGVAR(intelMarked), false])})
        && {_range <= 0 || {(_unit distance _x) <= _range}}
    }
};
if (_valid isEqualTo []) exitWith {
    TRACE_1("hack succeeded but no eligible intel target",count _pool);
    objNull
};

private _target = _valid select 0;
private _best = _unit distance _target;
{
    private _d = _unit distance _x;
    if (_d < _best) then { _best = _d; _target = _x };
} forEach _valid;

(_target getVariable [QGVAR(intelStyle), []]) params ["_text", "_type", "_colour"];

// One event instead of four global marker commands: every machine builds the
// marker locally (see XEH_postInit).
[QGVAR(intelMarker), [
    format [QGVAR(intel_%1), _target call BIS_fnc_netId],
    getPosATL _target,
    _type,
    _colour,
    _text
]] call CBA_fnc_globalEvent;

_target setVariable [QGVAR(intelMarked), true, true];

TRACE_2("intel target marked",_target,round _best);
_target
