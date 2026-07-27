#include "script_component.hpp"
/*
 * Author: Ghost
 * Global fleet reaper (CBA PFH). The single place airframes leave the fleet:
 *   - prunes dead/deleted airframes (this IS "releaseAirframes")
 *   - stuck-watchdog: despawns motionless airframes
 *   - lifetime: expired groups fly off-map then despawn (combat gets a grace window)
 *   - keeps debug markers in sync
 * Wrecks are left for the user's existing cleanup path; we only delete airframes we
 * voluntarily despawn.
 *
 * Arguments (CBA PFH): unused
 *
 * Return Value:
 * None
 *
 * Public: No
 */

if (isNil QGVAR(fleet) || {GVAR(fleet) isEqualTo []}) exitWith {};

private _survivors = [];

{
    private _grp = _x;
    if (isNull _grp) then { continue };

    private _vehicles = _grp getVariable [QGVAR(vehicles), []];
    private _live = _vehicles select { !isNull _x && {alive _x} };

    // Whole group gone -> reap (release + marker cleanup). Do not touch wrecks.
    if (_live isEqualTo []) then {
        [_grp] call FUNC(clearDebugMarker);
        continue;
    };

    // --- stuck watchdog (per airframe) ---
    {
        private _v = _x;
        private _now = getPosATL _v;
        private _last = _v getVariable [QGVAR(lastPos), _now];
        if (_now distance _last < STUCK_DIST) then {
            private _since = _v getVariable [QGVAR(stuckSince), time];
            _v setVariable [QGVAR(stuckSince), _since];
            // Only a LOW + motionless airframe is "stuck" (grounded/crashed). An
            // airborne drone loitering slowly is doing its job, not stuck.
            if (time - _since > STUCK_TIMEOUT && {(_now select 2) < STUCK_ALT}) then {
                deleteVehicle _v;   // stuck airframe frees its slot
            };
        } else {
            _v setVariable [QGVAR(lastPos), _now];
            _v setVariable [QGVAR(stuckSince), time];
        };
    } forEach _live;

    _live = _live select { !isNull _x && {alive _x} };
    if (_live isEqualTo []) then {
        [_grp] call FUNC(clearDebugMarker);
        continue;
    };
    _grp setVariable [QGVAR(vehicles), _live];

    // --- despawn trigger ---
    // Loiter types leave when the whole group is OUT OF AMMO; every other type
    // leaves on its flat lifetime.
    private _isLoiter = (_grp getVariable [QGVAR(dtype), ""]) in ["loiterfixed", "loiterrotor"];

    if (_isLoiter) then {
        private _rtb = _grp getVariable [QGVAR(rtb), false];
        // someAmmo is false when a vehicle has no ammunition left in any weapon.
        if (!_rtb && {(_live findIf {someAmmo _x}) == -1}) then {
            [_grp] call FUNC(returnToEdge);
            _grp setVariable [QGVAR(rtb), true];
            _grp setVariable [QGVAR(edgeDespawnAt), time + EDGE_TIMEOUT];
        };

        if (_rtb && {time > (_grp getVariable [QGVAR(edgeDespawnAt), 1e11])}) then {
            { deleteVehicle _x } forEach _live;
            [_grp] call FUNC(clearDebugMarker);
            continue;
        };
    } else {
        private _dieAt = _grp getVariable [QGVAR(dieAt), 0];

        // Deferred lifetime: start the clock once the group reaches its objective
        // anchor (i.e. it flew in and hit its patrol / cycle), not at spawn.
        if (_dieAt <= 0) then {
            private _lifeMin = _grp getVariable [QGVAR(lifeMin), 0];
            private _anchor = _grp getVariable [QGVAR(anchor), []];
            if (_lifeMin > 0 && {_anchor isNotEqualTo []} && {(leader _grp) distance2D _anchor < ARRIVAL_DIST}) then {
                _dieAt = time + (_lifeMin * 60) + (random LIFETIME_JITTER);
                _grp setVariable [QGVAR(dieAt), _dieAt];
            };
        };

        if (_dieAt > 0) then {
            private _rtb = _grp getVariable [QGVAR(rtb), false];

            if (!_rtb && {time > _dieAt}) then {
                private _leader = leader _grp;
                private _inCombat = !isNull (_leader findNearestEnemy _leader);
                // Not fighting -> leave now. Fighting -> finish, but never past the hard grace.
                if (!_inCombat || {time > _dieAt + LIFETIME_COMBAT_GRACE}) then {
                    [_grp] call FUNC(returnToEdge);
                    _grp setVariable [QGVAR(rtb), true];
                    _grp setVariable [QGVAR(edgeDespawnAt), time + EDGE_TIMEOUT];
                };
            };

            if ((_grp getVariable [QGVAR(rtb), false]) && {time > (_grp getVariable [QGVAR(edgeDespawnAt), 1e11])}) then {
                { deleteVehicle _x } forEach _live;
                [_grp] call FUNC(clearDebugMarker);
                continue;
            };
        };
    };

    [_grp] call FUNC(updateDebugMarker);
    _survivors pushBack _grp;
} forEach GVAR(fleet);

GVAR(fleet) = _survivors;
