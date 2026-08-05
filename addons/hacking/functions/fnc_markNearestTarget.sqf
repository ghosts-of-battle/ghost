#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_markNearestTarget

Description:
    Puts a permanent search circle on ONE registered intel target, and tightens
    it every time you hack again.

    One objective at a time. The first hack picks whichever eligible target is
    nearest and draws a 4 km circle; the next hack redraws the SAME objective at
    3 km, then 2, then 1, and holds at the last radius after that. A second
    objective is not offered until the first is destroyed - hacking is how you
    close on a target, not how you collect a map full of them.

    The circle is deliberately off centre: it is displaced by a fraction of its
    own radius (75% by default) on a random bearing, so the objective sits well
    off-middle but always inside the ring. Re-rolling that bearing on every hack
    is what makes the sequence worth doing - two fixes from different directions
    overlap on far less ground than either alone.

    Circles are permanent. FUNC(watchTargets) clears one when its target dies.

    Does nothing if no Hack Intel Targets module was placed, so the addon still
    works without one.

    Runs on the server: the registry is server-owned and the draw must be decided
    on one machine.

Parameters:
    _unit : OBJECT - the hacker.
    _from : ARRAY  - optional origin to measure from. Remote hacks measure from
                     the hacked unit's position, not the hacker's.

Returns:
    OBJECT - the target marked, objNull if none.

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith {
    [_this, QFUNC(markNearestTarget)] remoteExec ["call", 2];
    objNull
};

params ["_unit", ["_from", [], [[]]]];
if (isNull _unit) exitWith { objNull };
if (_from isEqualTo []) then { _from = getPosATL _unit };

private _pool = missionNamespace getVariable [QGVAR(intelTargets), []];
if (_pool isEqualTo []) exitWith { objNull };

// --- which objective -------------------------------------------------------
// An objective that is still standing keeps the floor. Only once it is down does
// a hack go looking for the next one.
private _target = missionNamespace getVariable [QGVAR(activeTarget), objNull];

if (isNull _target || {!alive _target} || {!(_target in _pool)}) then {
    private _valid = _pool select {
        !isNull _x
        && {alive _x}
        && {
            (_x getVariable [QGVAR(intelStyle), []]) params ["", "", "", "_range", "_oneShot"];
            (!_oneShot || {!(_x getVariable [QGVAR(intelMarked), false])})
            && {_range <= 0 || {(_from distance _x) <= _range}}
        }
    };

    _target = objNull;
    {
        if (isNull _target || {(_from distance _x) < (_from distance _target)}) then {
            _target = _x;
        };
    } forEach _valid;

    if (!isNull _target) then {
        missionNamespace setVariable [QGVAR(activeTarget), _target, true];
        _target setVariable [QGVAR(hackCount), 0, true];
    };
};

if (isNull _target) exitWith {
    TRACE_1("hack succeeded but no eligible intel target",count _pool);
    objNull
};

// --- how tight -------------------------------------------------------------
private _count = (_target getVariable [QGVAR(hackCount), 0]) + 1;
_target setVariable [QGVAR(hackCount), _count, true];

private _radii = (([QGVAR(cfg_circle_radii)] call FUNC(hackSetting)) splitString ", ")
    apply { parseNumber _x };
_radii = _radii select { _x > 0 };
if (_radii isEqualTo []) then { _radii = [INTEL_RADIUS_FALLBACK] };

// Past the end of the list the last radius repeats, so a long fight cannot
// eventually pin the objective to a dot.
private _radius = _radii select ((_count - 1) min (count _radii - 1));

// --- where -----------------------------------------------------------------
private _offset = ([QGVAR(cfg_circle_offset)] call FUNC(hackSetting)) / 100;
_offset = 0 max _offset min INTEL_OFFSET_CAP;   // the objective must stay inside

private _bearing = random 360;
private _throw = _radius * _offset;
private _centre = (getPosATL _target) vectorAdd [
    sin _bearing * _throw,
    cos _bearing * _throw,
    0
];

(_target getVariable [QGVAR(intelStyle), []]) params ["_text", "_type", "_colour"];

// One event instead of a fistful of global marker commands: every machine on the
// hacking side builds it locally (see XEH_postInit).
[QGVAR(intelMarker), [
    format [QGVAR(intel_%1), _target call BIS_fnc_netId],
    _centre,
    _radius,
    _colour,
    _text,
    _type,
    side group _unit
]] call CBA_fnc_globalEvent;

_target setVariable [QGVAR(intelMarked), true, true];

// Registered for FUNC(watchTargets). The netId and the side are captured HERE
// because neither can be recovered from a deleted object, and a target being
// deleted rather than destroyed is a case the watcher has to handle.
private _side = side group _unit;
private _netId = _target call BIS_fnc_netId;
private _marks = missionNamespace getVariable [QGVAR(intelMarks), []];
if ((_marks findIf { (_x select 0) isEqualTo _target }) < 0) then {
    _marks pushBack [_target, _netId, _side];
    missionNamespace setVariable [QGVAR(intelMarks), _marks];
};
GVAR(intelLastSide) = _side;

TRACE_3("intel target marked",_target,_count,_radius);
_target
