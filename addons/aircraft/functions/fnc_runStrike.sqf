#include "script_component.hpp"
/*
 * Author: Ghost
 * Drive one airframe: ingress to a random TAOR building, make a single firing pass,
 * then egress off-map and despawn. Runs as a lightweight coroutine.
 *
 * Arguments:
 * 0: Group <GROUP>
 * 1: Vehicle <OBJECT>
 * 2: Resolved config hashmap <HASHMAP>
 *
 * Return Value: None
 *
 * Public: No
 */

if (!isServer) exitWith {};

params ["_grp", "_veh", "_cfg"];

[_grp, _veh, _cfg] spawn {
    params ["_grp", "_veh", "_cfg"];

    private _taor = _cfg get "taor";
    private _altMax = _cfg get "altMax";

    ([_taor] call FUNC(pickBuilding)) params ["_bld", ["_tgt", []]];
    if (_tgt isEqualTo []) then { _tgt = getPosATL _veh };

    // --- Ingress: MOVE straight at the target, weapons hot ---
    for "_i" from (count (waypoints _grp)) - 1 to 0 step -1 do { deleteWaypoint [_grp, _i] };
    _grp setBehaviour "COMBAT";
    _grp setCombatMode "RED";
    _grp setSpeedMode "FULL";
    if (!isNull _bld) then { _grp reveal [_bld, 4] };

    private _wp = _grp addWaypoint [_tgt, 0];
    _wp setWaypointType "MOVE";
    _wp setWaypointSpeed "FULL";
    _wp setWaypointBehaviour "COMBAT";

    waitUntil {
        sleep 1;
        isNull _veh || {!alive _veh} || {(crew _veh) isEqualTo []} || {(_veh distance2D _tgt) < ATTACK_RANGE}
    };

    // --- Attack pass ---
    if (alive _veh && {!isNull _bld}) then {
        for "_i" from 1 to ATTACK_SHOTS do {
            if (!alive _veh) exitWith {};
            _veh fireAtTarget [_bld];
            sleep ATTACK_SHOT_GAP;
        };
    };

    // --- Egress off-map ---
    if (alive _veh) then {
        private _edge = [getPosATL _veh] call EFUNC(alive_drones,edgePos);
        for "_i" from (count (waypoints _grp)) - 1 to 0 step -1 do { deleteWaypoint [_grp, _i] };
        _grp setBehaviour "CARELESS";
        _grp setCombatMode "BLUE";
        _grp setSpeedMode "FULL";
        _veh flyInHeight _altMax;
        private _ewp = _grp addWaypoint [_edge, 0];
        _ewp setWaypointType "MOVE";
        _ewp setWaypointSpeed "FULL";

        private _t0 = time;
        waitUntil {
            sleep 2;
            isNull _veh || {!alive _veh} || {(_veh distance2D _edge) < 1500} || {time > _t0 + EGRESS_TIMEOUT}
        };
    };

    // --- Despawn + prune from the shared fleet ---
    { deleteVehicle _x } forEach (crew _veh);
    deleteVehicle _veh;
    { deleteVehicle _x } forEach (units _grp);
    if (!isNil QEGVAR(alive_drones,fleet)) then {
        EGVAR(alive_drones,fleet) = EGVAR(alive_drones,fleet) - [_grp];
    };
    if ((units _grp) isEqualTo []) then { deleteGroup _grp };
};
