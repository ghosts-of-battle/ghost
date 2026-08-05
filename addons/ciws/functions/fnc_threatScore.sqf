#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_ciws_fnc_threatScore

Description:
    How urgent an incoming round is. Lower is more urgent.

    Time to impact dominates and distance only breaks ties. That ordering is the
    point: under a barrage the question is not "which shell is nearest" but
    "which one do I still have time to stop", and a round four seconds out has to
    be taken before one twenty seconds out no matter where they are.

    Time to impact is solved ballistically from vertical velocity and altitude
    rather than measured, because there is nothing to measure yet - the round has
    not landed. A guided round breaks the assumption, which is why the answer is
    re-scored every tick instead of once.

Parameters:
    _proj : OBJECT - the round.
    _pos  : ARRAY  - the defended position.

Returns:
    NUMBER - score, lower first. 1e9 if it is not a threat at all.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_proj", "_pos"];

if (isNull _proj) exitWith { 1e9 };

private _p = getPosASL _proj;
private _v = velocity _proj;
private _alt = (ASLToATL _p) select 2;
private _vz = _v select 2;

// Solve alt + vz*t - g*t^2/2 = 0 for t.
private _root = (_vz * _vz) + (2 * 9.81 * (_alt max 0));
if (_root < 0) exitWith { 1e9 };
private _t = (_vz + sqrt _root) / 9.81;
if (_t <= 0) exitWith { 1e9 };

// Where it will actually land, not where it is now - a shell still climbing is
// directly overhead and no threat to this site at all.
private _impact = [
    (_p select 0) + (_v select 0) * _t,
    (_p select 1) + (_v select 1) * _t
];

(_impact distance2D _pos) + (_t * CIWS_THREAT_TIME_W)
