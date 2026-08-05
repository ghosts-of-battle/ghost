#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_ciws_fnc_guide

Description:
    Flies an interceptor onto a round using proportional navigation.

    PN steers to null the ROTATION of the line of sight rather than to point at
    the target. Pointing at the target is pure pursuit: it works against
    something stationary and always arrives late against something moving,
    because the missile spends the whole flight chasing where the target used to
    be. Nulling the rotation puts the missile on a collision course instead - if
    the bearing to the target stops changing, you are going to hit it.

    The gain N is how hard it corrects. 4 is the textbook value; lower is lazy
    and misses crossing shots, higher wastes energy chasing noise.

    Three exits, and all three matter:
      - inside the fuze radius, detonate. Proximity, not contact: a direct hit on
        a shell at closing speeds of several hundred metres a second will not
        happen reliably, and does not need to.
      - having been close and now going away, the shot is spent - destroy it
        rather than let it fly to the map edge dragging a guidance loop with it.
      - a timeout, because a target that never resolves would otherwise leave the
        loop running for the rest of the mission.

    Adapted from the guidance in Dankan37's Arma 3 Iron Dome, released into the
    public domain.

Parameters:
    _missile : OBJECT  - the interceptor.
    _target  : OBJECT  - the round.
    _site    : HASHMAP - the defended site.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_missile", "_target", "_site"];

private _boostUntil = CBA_missionTime + CIWS_BOOST_TIME;
private _until = CBA_missionTime + CIWS_INT_TIMEOUT;

[{
    params ["_args", "_handle"];
    _args params ["_missile", "_target", "_site", "_boostUntil", "_until", "_wasNear"];

    private _stop = {
        [_handle] call CBA_fnc_removePerFrameHandler;
    };

    if (isNull _missile) exitWith { call _stop };

    // Target gone - shot down by someone else, or it landed. Spend the missile.
    if (isNull _target || {CBA_missionTime > _until}) exitWith {
        if (!isNull _missile) then { deleteVehicle _missile };
        call _stop;
    };

    private _speed = _site get "intSpeed";
    private _mPos = getPosASL _missile;
    private _tPos = getPosASL _target;
    private _dist = _mPos vectorDistance _tPos;

    // --- close enough -------------------------------------------------------
    if (_dist <= CIWS_FUZE_RADIUS) exitWith {
        [_target, _site] call FUNC(intercept);
        // triggerAmmo gives the interceptor's own warhead rather than a
        // stand-in explosion, so it looks like what it is.
        if (!isNull _missile) then { triggerAmmo _missile };
        call _stop;
    };

    // --- gone past ----------------------------------------------------------
    if (_wasNear && {_dist > CIWS_MISS_FAR}) exitWith {
        if (!isNull _missile) then { triggerAmmo _missile };
        if (_site get "debug") then {
            diag_log text "[ghost_ciws] interceptor missed - self-destructed";
        };
        call _stop;
    };
    if (_dist < CIWS_MISS_NEAR) then { _args set [5, true] };

    // --- boost --------------------------------------------------------------
    // Straight up, unguided. A missile that starts steering at zero airspeed
    // just tips over.
    if (CBA_missionTime < _boostUntil) exitWith {
        _missile setVelocity ((vectorDir _missile) vectorMultiply (_speed * CIWS_BOOST_FRAC));
    };

    // --- proportional navigation --------------------------------------------
    private _mVel = velocity _missile;
    private _los = _tPos vectorDiff _mPos;
    private _relVel = (velocity _target) vectorDiff _mVel;

    // Rotation rate of the line of sight.
    private _losSq = _los vectorDotProduct _los;
    if (_losSq <= 0) exitWith { call _stop };
    private _omega = (_los vectorCrossProduct _relVel) vectorMultiply (1 / _losSq);

    // Acceleration perpendicular to the closing velocity, scaled by the gain.
    private _acc = (_relVel vectorMultiply (_site get "pnGain")) vectorCrossProduct _omega;

    private _new = _mVel vectorAdd (_acc vectorMultiply CIWS_GUIDE_TICK);
    _new = (vectorNormalized _new) vectorMultiply _speed;

    _missile setVectorDir _new;
    _missile setVelocity _new;
}, CIWS_GUIDE_TICK, [_missile, _target, _site, _boostUntil, _until, false]] call CBA_fnc_addPerFrameHandler;
