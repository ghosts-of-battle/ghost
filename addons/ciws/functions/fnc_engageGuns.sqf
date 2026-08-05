#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_ciws_fnc_engageGuns

Description:
    GUNS mode. Attaches a decoy to an inbound round, points the guns at it, and
    watches for a hit.

    Three details here are not optional, and all three cost somebody an evening
    to find:

      - the decoy rides ABOVE the round, not on it. On it, the intercepting burst
        detonates the round early - which looks like a kill and is not one, since
        a shell that goes off two metres from its own flight path still arrives.
      - collision between decoy and round is disabled, and the decoy is massless,
        or attaching a vehicle to a shell perturbs the shell.
      - the guns are re-told to target it on a loop. Arma's AI drops an assigned
        target it cannot make sense of, and a target moving at shell velocity is
        exactly that.

    Technique credit: Drongo's Artillery, used with permission.

Parameters:
    _proj : OBJECT  - the round.
    _site : HASHMAP - the defended site.

Returns:
    BOOL - true if the round was actually taken on.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_proj", "_site"];

if (isNull _proj) exitWith { false };

// Guns that could actually do something. A dead or empty launcher is not a
// defence, and cueing it wastes the round's whole flight time.
private _guns = (_site get "guns") select {
    !isNull _x && {alive _x} && {(crew _x) findIf {alive _x} > -1}
};
if (_guns isEqualTo []) exitWith {
    if (_site get "debug") then {
        diag_log text "[ghost_ciws] inbound round but no live crewed gun - not engaged";
    };
    false
};

// The decoy must be HOSTILE to the defenders or they will not shoot at it.
private _decoy = createVehicle [
    [_site get "side"] call FUNC(decoyClass),
    [0, 0, 0], [], 0, "NONE"
];
if (isNull _decoy) exitWith { false };

createVehicleCrew _decoy;
(group _decoy) deleteGroupWhenEmpty true;

_decoy setMass 0;
_decoy disableCollisionWith _proj;
_proj disableCollisionWith _decoy;
_decoy attachTo [_proj, [0, 0, CIWS_DECOY_OFFSET]];

{
    _x reveal [_decoy, 4];
    _x doWatch _decoy;
    _x doTarget _decoy;
} forEach _guns;

if (_site get "debug") then {
    diag_log text format ["[ghost_ciws] %1 gun(s) cued onto %2", count _guns, typeOf _proj];
};

private _until = CBA_missionTime + CIWS_TRACK_TIMEOUT;

[{
    params ["_args", "_handle"];
    _args params ["_proj", "_decoy", "_guns", "_site", "_until"];

    private _done = {
        // Release the guns so they go back to looking for real targets, and take
        // the decoy with us - an orphaned crewed vehicle attached to nothing is
        // a permanent contact on everyone's radar.
        {
            if (!isNull _x && {alive _x}) then {
                _x doWatch objNull;
                _x doTarget objNull;
            };
        } forEach _guns;
        if (!isNull _decoy) then {
            { deleteVehicle _x } forEach (crew _decoy);
            deleteVehicle _decoy;
        };
        [_handle] call CBA_fnc_removePerFrameHandler;
    };

    // The round got through, or landed, or we ran out of patience.
    if (isNull _proj || {CBA_missionTime > _until}) exitWith { call _done };
    if (isNull _decoy) exitWith { call _done };

    if ((damage _decoy) < CIWS_KILL_DAMAGE) exitWith {
        // Still flying: keep the guns on it.
        { if (alive _x) then { _x doTarget _decoy } } forEach _guns;
    };

    // Hit. Kill the round where it is, and put a burst there so the intercept is
    // something people see rather than something that quietly does not happen.
    [_proj, _site] call FUNC(intercept);
    call _done;
}, CIWS_TICK, [_proj, _decoy, _guns, _site, _until]] call CBA_fnc_addPerFrameHandler;

true
