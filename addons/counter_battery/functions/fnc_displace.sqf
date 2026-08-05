#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_counter_battery_fnc_displace

Description:
    Sends an AI gun crew that has just been fixed somewhere else.

    The warning that a radar has your position is only useful to someone who can
    act on it, and only players read notifications - so without this, the
    mechanic punishes players for standing still and lets AI batteries die in
    place having never been given the chance. Displacing makes shoot-and-scoot
    something both sides do.

    Player-driven vehicles are left alone. Ordering a player's vehicle to move is
    not a warning, it is taking the wheel off them.

    A gun that cannot move - a static mortar, an emplacement - is also left
    alone. It has no answer to being found, which is a fair trade for not having
    to tow it.

Parameters:
    _veh : OBJECT  - the gun.
    _cfg : HASHMAP - the radar's settings.

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith {};

params ["_veh", "_cfg"];

if (isNull _veh || {!alive _veh}) exitWith {};

// Anything a player is aboard stays where the player put it.
if ((crew _veh) findIf { isPlayer _x } > -1) exitWith {};

// Emplaced guns have nowhere to go.
if (getNumber (configOf _veh >> "maxSpeed") < 1) exitWith {};

private _grp = group (effectiveCommander _veh);
if (isNull _grp) exitWith {};

private _radius = _cfg get "displaceRadius";
if (_radius < 50) exitWith {};

private _to = [getPosATL _veh, 50, _radius, 10, 0, 0.4, 0] call BIS_fnc_findSafePos;
if (_to isEqualTo []) exitWith {};

// Clear whatever it was doing, then one move order. Its own fire-mission logic
// picks up again when it arrives.
// Backwards, because deleting a waypoint renumbers the ones after it. Index 0 is
// the group's own position and is left alone.
for "_i" from (count (waypoints _grp)) - 1 to 1 step -1 do { deleteWaypoint [_grp, _i] };
private _wp = _grp addWaypoint [_to, 0];
_wp setWaypointType "MOVE";
_wp setWaypointSpeed "FULL";
_wp setWaypointBehaviour "AWARE";

if (_cfg get "debug") then {
    diag_log text format ["[ghost_counter_battery] %1 displacing to grid %2",
        typeOf _veh, mapGridPosition _to];
};
