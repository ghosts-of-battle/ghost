#include "script_component.hpp"
/*
 * Author: Ghost
 * Spawn one patrol group of a type (1..N airframes), give it a local patrol around
 * a single anchor, stamp its lifetime, and register it in the shared fleet so the
 * reaper manages it. Caller (manager) must already have passed the ceiling gate.
 *
 * Arguments:
 * 0: Logic (owning controller) <OBJECT>
 * 1: Type key <STRING>
 * 2: Class list <ARRAY>
 * 3: Airframe count <NUMBER>
 * 4: Altitude tier "low"|"mid"|"high" <STRING>
 *
 * Return Value:
 * Group (grpNull on failure) <GROUP>
 *
 * Public: No
 */

params ["_logic", "_type", "_classes", "_n", "_tier"];

private _cfg = _logic getVariable [QGVAR(cfg), objNull];
if (isNil "_cfg") exitWith { grpNull };

private _markers = _cfg get "markers";
private _objMarkers = _cfg get "objMarkers";
if (_objMarkers isEqualTo []) then { _objMarkers = _markers };   // no objective set -> patrol the spawn marker
if (_markers isEqualTo []) exitWith { grpNull };

private _side = _cfg get "side";
private _altMin = _cfg get "altMin";
private _altMax = _cfg get "altMax";
private _range = _altMax - _altMin;

// Ground drones (UGVs) don't fly; everything else picks an altitude band by tier.
private _ground = _tier isEqualTo "ground";
private _alt = switch (_tier) do {
    case "ground": { 0 };
    case "low":  { _altMin + random (0.25 * _range) };
    case "high": { _altMin + (0.70 * _range) + random (0.30 * _range) };
    default      { _altMin + (0.35 * _range) + random (0.30 * _range) };
};

// Spawn position comes from the SPAWN marker; the patrol anchor from the OBJECTIVE
// marker, so the group transits from one TAOR to the other and then loiters there.
private _spawnMarker = selectRandom _markers;
private _spawnPos = [[_spawnMarker]] call BIS_fnc_randomPos;
if (_spawnPos isEqualTo [0,0,0]) exitWith {
    WARNING_1("ALiVE Drones: BIS_fnc_randomPos found nothing in spawn marker '%1'.",_spawnMarker);
    grpNull
};

// Don't pop in on top of players - re-roll a few times if one is too close.
private _tries = 0;
while {
    _tries < SPAWN_MAX_TRIES &&
    {(allPlayers findIf {_x distance2D _spawnPos < SPAWN_MIN_PLAYER_DIST}) != -1}
} do {
    _spawnPos = [[_spawnMarker]] call BIS_fnc_randomPos;
    _tries = _tries + 1;
};

private _objMarker = selectRandom _objMarkers;
private _anchor = [[_objMarker]] call BIS_fnc_randomPos;
if (_anchor isEqualTo [0,0,0]) then { _anchor = _spawnPos };   // objective empty -> loiter at spawn

// First airframe creates the group (spawned at the spawn marker).
([selectRandom _classes, _spawnPos, _side, _alt, grpNull, _ground] call FUNC(createDrone)) params ["_veh", "_grp"];
if (isNull _veh) exitWith { grpNull };

private _vehicles = [_veh];
for "_i" from 2 to _n do {
    private _p = [[_spawnMarker]] call BIS_fnc_randomPos;
    ([selectRandom _classes, _p, _side, _alt, _grp, _ground] call FUNC(createDrone)) params ["_v", ""];
    if (!isNull _v) then { _vehicles pushBack _v };
};

// Register in the shared fleet. Lifetime is DEFERRED (_startNow = false) - the reaper
// starts the clock once the group reaches its objective anchor, so transit time
// doesn't eat into the patrol lifetime.
[_grp, _logic, _type, _vehicles, (_cfg get "lifetime"), (_cfg get "debug"), _side, false] call FUNC(registerGroup);
_grp setVariable [QGVAR(anchor), _anchor];

[_grp, _anchor, _type] call FUNC(localPatrol);

_grp
