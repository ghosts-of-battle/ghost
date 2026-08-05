#include "script_component.hpp"
/*
 * Author: Ghost
 * True if any live EW emitter OR any live recon drone (from the Drones fleet)
 * is within detector range of a position. This is what makes recon drones mobile
 * direction-finders and keeps the map's quiet corners un-hunted.
 *
 * Arguments:
 * 0: Position ASL <ARRAY>
 *
 * Return Value: Detector in range <BOOL>
 *
 * Public: No
 */

params ["_pos"];

private _range = GVAR(detectorRange);

// Emitters.
private _hit = (GVAR(jammers) findIf {
    private _obj = _x select 0;
    !isNull _obj && {alive _obj} && {(_pos distance (getPosASL _obj)) <= _range}
}) != -1;

if (_hit) exitWith { true };

// Recon drones in the shared fleet.
if (isNil "ghost_drones_fleet") exitWith { false };

(ghost_drones_fleet findIf {
    ((_x getVariable ["ghost_drones_dtype", ""]) == "recon") &&
    {
        (_x getVariable ["ghost_drones_vehicles", []]) findIf {
            !isNull _x && {alive _x} && {(_pos distance (getPosASL _x)) <= _range}
        } != -1
    }
}) != -1
