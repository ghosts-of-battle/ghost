#include "script_component.hpp"
/*
 * Author: Ghost
 * Create one airframe: spawn flying, crew it, force it onto the requested side,
 * and set its patrol altitude. Reusable low-level primitive (also used by the EW
 * response dispatch). Does NOT register it in the fleet or give it waypoints.
 *
 * Arguments:
 * 0: Classname <STRING>
 * 1: Position 2D/3D <ARRAY>
 * 2: Side <SIDE>
 * 3: Altitude m AGL (ignored when ground) <NUMBER>
 * 4: Existing group to join (optional; grpNull = make a fresh sided group) <GROUP>
 * 5: Ground drone? (UGV: spawn on the ground, no flyInHeight) <BOOL>
 *
 * Return Value:
 * [vehicle, group] (objNull/grpNull on failure) <ARRAY>
 *
 * Public: No
 */

params [
    ["_class", "", [""]],
    ["_pos", [0,0,0], [[]]],
    ["_side", east, [east]],
    ["_alt", 150, [0]],
    ["_grp", grpNull, [grpNull]],
    ["_ground", false, [false]]
];

if (_class isEqualTo "") exitWith { [objNull, grpNull] };

private _veh = objNull;
if (_ground) then {
    // UGV: spawn on the surface, no flight model.
    _veh = createVehicle [_class, [_pos select 0, _pos select 1, 0], [], 0, "NONE"];
} else {
    private _spawnPos = [_pos select 0, _pos select 1, _alt];
    _veh = createVehicle [_class, _spawnPos, [], 0, "FLY"];
};
if (isNull _veh) exitWith {
    WARNING_1("ALiVE Drones: failed to create '%1'.",_class);
    [objNull, grpNull]
};

_veh setDir (random 360);
if (_ground) then {
    _veh setPosATL [_pos select 0, _pos select 1, 0];
} else {
    _veh setPosATL [_pos select 0, _pos select 1, _alt];
};

// Crew it, then move the crew onto the requested side (vehicle side follows crew).
private _crewGrp = createVehicleCrew _veh;
if (isNull _grp) then {
    _grp = createGroup [_side, true];
};
(units _crewGrp) joinSilent _grp;

if (!_ground) then { _veh flyInHeight _alt };
_veh setVariable [QGVAR(managed), true, true];

[_veh, _grp]
