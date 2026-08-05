#include "script_component.hpp"
/*
 * Author: Ghost
 * Break patrol and send a group off the nearest map edge (lifetime expiry). The
 * reaper force-despawns it after EDGE_TIMEOUT in case it never arrives.
 *
 * Arguments:
 * 0: Group <GROUP>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_grp"];

// Never delete waypoint index 0 (current-position pseudo-waypoint).
for "_i" from (count (waypoints _grp)) - 1 to 1 step -1 do {
    deleteWaypoint [_grp, _i];
};

private _edge = [getPosATL (leader _grp)] call FUNC(edgePos);

_grp setBehaviour "CARELESS";
_grp setCombatMode "BLUE";
_grp setSpeedMode "FULL";

private _wp = _grp addWaypoint [_edge, 0];
_wp setWaypointType "MOVE";
_wp setWaypointSpeed "FULL";
_wp setWaypointBehaviour "CARELESS";
_wp setWaypointCompletionRadius WP_COMPLETION_RADIUS;
