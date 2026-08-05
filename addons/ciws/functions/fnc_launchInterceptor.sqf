#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_ciws_fnc_launchInterceptor

Description:
    INTERCEPTOR mode. Puts a missile in the air and hands it to the guidance
    loop.

    It launches from a synchronised gun rather than from the module's position,
    so the battery is a real thing on the map that can be found, shelled and
    silenced. A defence with no destructible source is a rule, not an
    installation - the same reason EW zones hang off a physical emitter.

    The missile is created stationary and pointed up, then given its launch
    velocity: created with a velocity it tends to spawn already committed to a
    direction the launcher was not facing.

Parameters:
    _proj : OBJECT  - the round to kill.
    _site : HASHMAP - the defended site.

Returns:
    BOOL - true if a missile was launched.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_proj", "_site"];

if (isNull _proj) exitWith { false };

private _guns = (_site get "guns") select { !isNull _x && {alive _x} };
if (_guns isEqualTo []) exitWith {
    if (_site get "debug") then {
        diag_log text "[ghost_ciws] no launcher left standing - round not engaged";
    };
    false
};

// Launch from whichever launcher is nearest the threat.
private _from = _guns select 0;
{
    if ((_x distance _proj) < (_from distance _proj)) then { _from = _x };
} forEach _guns;

private _speed = _site get "intSpeed";
private _muzzle = (getPosASL _from) vectorAdd [0, 0, 3];

private _missile = createVehicle [_site get "intAmmo", ASLToATL _muzzle, [], 0, "CAN_COLLIDE"];
if (isNull _missile) exitWith {
    diag_log text format ["[ghost_ciws] interceptor ammo '%1' failed to create", _site get "intAmmo"];
    false
};

_missile setPosASL _muzzle;
_missile setVectorDirAndUp [[0, 0, 1], [0, 1, 0]];
_missile setVelocity [0, 0, _speed * CIWS_BOOST_FRAC];

if (_site get "debug") then {
    diag_log text format ["[ghost_ciws] interceptor away from %1 at %2 m",
        typeOf _from, round (_from distance _proj)];
};

[_missile, _proj, _site] call FUNC(guide);

true
