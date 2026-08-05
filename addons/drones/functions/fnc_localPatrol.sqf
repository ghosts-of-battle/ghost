#include "script_component.hpp"
/*
 * Author: Ghost
 * Give a group its patrol behaviour around one anchor:
 *   - Loiter types fly a CAP: orbit the anchor and engage targets that come into
 *     the zone (weapons free), expending ammo until they self-despawn when empty.
 *   - Every other type wanders carelessly between random points around the anchor.
 *
 * Arguments:
 * 0: Group <GROUP>
 * 1: Anchor position <ARRAY>
 * 2: Type key <STRING>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_grp", "_anchor", ["_type", ""]];

private _isLoiter = _type in ["loiterfixed", "loiterrotor"];

// Clear inherited waypoints from last down to index 1. Never delete index 0 -
// that pseudo-waypoint is the group's current position and removing it causes odd
// movement / waypoint loss (per CSWR / Larrow).
for "_i" from (count (waypoints _grp)) - 1 to 1 step -1 do {
    deleteWaypoint [_grp, _i];
};

if (_isLoiter) then {
    // CAP: hold station over the anchor, fire at will, don't chase across the map.
    _grp setBehaviour "AWARE";
    _grp setCombatMode "YELLOW";
    _grp setSpeedMode "LIMITED";

    private _wp = _grp addWaypoint [_anchor, 0];
    _wp setWaypointType "LOITER";
    _wp setWaypointLoiterType "CIRCLE_L";
    _wp setWaypointLoiterRadius CAP_LOITER_RADIUS;
    _wp setWaypointBehaviour "AWARE";
    _wp setWaypointCombatMode "YELLOW";
    _wp setWaypointSpeed "LIMITED";
} else {
    // Careless wander — amble between random points around the anchor, cycling.
    _grp setBehaviour "CARELESS";
    _grp setCombatMode "BLUE";
    _grp setSpeedMode "LIMITED";

    for "_i" from 1 to PATROL_WP_COUNT do {
        private _r = PATROL_MIN + random (PATROL_MAX - PATROL_MIN);
        private _wpPos = _anchor getPos [_r, random 360];
        private _wp = _grp addWaypoint [_wpPos, 0];
        _wp setWaypointType "MOVE";
        _wp setWaypointSpeed "LIMITED";
        _wp setWaypointBehaviour "CARELESS";
        _wp setWaypointCombatMode "BLUE";
        _wp setWaypointCompletionRadius WP_COMPLETION_RADIUS;
    };

    private _cycle = _grp addWaypoint [_anchor, 0];
    _cycle setWaypointType "CYCLE";
};
