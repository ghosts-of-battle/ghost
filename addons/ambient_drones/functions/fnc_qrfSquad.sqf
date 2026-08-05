#include "script_component.hpp"
/*
 * Author: Ghost
 * Puts one QRF infantry squad on the ground at the QRF distance from a contact
 * and marches it in. When ALiVE's profile system is present (and the setting
 * allows) the squad is handed to it, so it runs virtual until it reaches the
 * players rather than burning AI on a 3 km approach.
 *
 * Arguments:
 * 0: Logic <OBJECT>
 * 1: Contact position <ARRAY>
 *
 * Return Value:
 * The group <GROUP> (grpNull if it could not be placed)
 *
 * Example:
 * [_logic, [1000,2000,0]] call ghost_ambient_drones_fnc_qrfSquad
 */

if (!isServer) exitWith {grpNull};

params ["_logic", "_contact"];

private _cfg = _logic getVariable [QGVAR(cfg), objNull];
if (isNil "_cfg") exitWith {grpNull};

private _classes = (GVAR(qrfUnits) splitString ",") apply {[_x] call CBA_fnc_trim};
_classes = _classes select {_x != "" && {isClass (configFile >> "CfgVehicles" >> _x)}};
if (_classes isEqualTo []) exitWith {grpNull};

private _side = _cfg get "side";
private _blacklist = _cfg get "blacklist";
private _dist = GVAR(qrfDistance);

// A spot out at the QRF distance: on land, off the roads' edge cases, and
// clear of the module's blacklist zones.
private _pos = [];
for "_i" from 1 to AMB_BLACKLIST_TRIES do {
    private _p = _contact getPos [_dist, random 360];
    if (surfaceIsWater _p) then {continue};
    if ((_blacklist findIf {_p inArea _x}) != -1) then {continue};
    _pos = [_p, 0, 60, 6, 0, 0.4, 0] call BIS_fnc_findSafePos;
    if (_pos isNotEqualTo []) exitWith {};
};
if (_pos isEqualTo []) exitWith {grpNull};

private _grp = createGroup [_side, true];
{
    _grp createUnit [_x, _pos, [], 25, "NONE"];
} forEach _classes;

if (units _grp isEqualTo []) exitWith {
    deleteGroup _grp;
    grpNull
};

_grp setBehaviour "AWARE";
_grp setCombatMode "RED";
_grp setSpeedMode "FULL";
_grp setFormation "WEDGE";

private _wp = _grp addWaypoint [_contact, 0];
_wp setWaypointType "SAD";
_wp setWaypointSpeed "FULL";
_wp setWaypointBehaviour "AWARE";
_wp setWaypointCombatMode "RED";
_wp setWaypointCompletionRadius 50;

// Hand off to ALiVE's profile system when it is running: the squad goes
// virtual for the approach and de-virtualises near the players. Calling
// ALiVE's own function - no ALiVE code lives in this mod.
if (GVAR(qrfProfile) && {!isNil "ALIVE_fnc_createProfilesFromUnitsRuntime"}) then {
    [false, [_grp], []] call ALIVE_fnc_createProfilesFromUnitsRuntime;
};

_grp
