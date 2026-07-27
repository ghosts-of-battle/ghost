#include "script_component.hpp"
/*
 * Author: Ghost
 * Point a response group at the transmitter grid: strip waypoints, drop a single
 * full-speed Search-and-Destroy waypoint on the target so they run in and hunt.
 *
 * Arguments:
 * 0: Group <GROUP>
 * 1: Target position <ARRAY>
 *
 * Return Value: None
 *
 * Public: No
 */

params ["_grp", "_pos"];

// Never delete waypoint index 0 (current-position pseudo-waypoint).
for "_i" from (count (waypoints _grp)) - 1 to 1 step -1 do {
    deleteWaypoint [_grp, _i];
};

_grp setBehaviour "COMBAT";
_grp setCombatMode "RED";
_grp setSpeedMode "FULL";

private _wp = _grp addWaypoint [_pos, 0];
_wp setWaypointType "SAD";
_wp setWaypointSpeed "FULL";
_wp setWaypointBehaviour "COMBAT";
_wp setWaypointCombatMode "RED";
