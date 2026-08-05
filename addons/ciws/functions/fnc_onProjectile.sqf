#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_ciws_fnc_onProjectile

Description:
    Every round created on this machine is offered here. Almost all of them are
    discarded, so the discards are ordered cheapest-first: sites exist at all,
    then the ammo's simulation type, then range. A mission with no CIWS module
    placed pays one array check per shot and nothing else.

    Simulation type is the filter rather than a class list because it is what the
    engine itself uses to decide how a round flies - shotShell, shotRocket,
    shotMissile - so it covers every mod's ammunition without anyone maintaining
    a list. It is also why shotBullet is not in the defaults: a decoy per rifle
    round would end the mission.

Parameters (ProjectileCreated EH): 0: projectile

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_proj"];

if (GVAR(sites) isEqualTo []) exitWith {};
if (isNull _proj) exitWith {};

private _sim = toLower getText (configOf _proj >> "simulation");
private _pos = getPosATL _proj;

{
    private _site = _x;
    if !(_sim in ((_site get "types") apply { toLower _x })) then { continue };

    private _d = _pos distance2D (_site get "pos");
    if (_d > (_site get "range")) then { continue };

    // Already on top of the site. Engaging it now would put the burst into our
    // own position, and there is no time to hit it anyway.
    if (_d < (_site get "minRange")) then { continue };

    [_proj, _site] call FUNC(track);
    // One site per round. A second site engaging the same shell would attach a
    // second decoy to it and both would claim the kill.
    break;
} forEach GVAR(sites);
