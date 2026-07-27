#include "script_component.hpp"
/*
 * Author: Ghost
 * Recon-cued artillery (CBA PFH). For each enemy that a friendly RECON drone has
 * spotted and that sits in the [stopDist..defenseRange] band around the base, rain
 * virtual mortars on it (BIS_fnc_fireSupportVirtual) until it dies or leaves range.
 * A per-target cooldown throttles repeat barrages.
 *
 * Arguments (CBA PFH): 0: [logic], 1: handle
 *
 * Return Value: None
 *
 * Public: No
 */

params ["_args", "_handle"];
_args params ["_logic"];

if (isNull _logic) exitWith { [_handle] call CBA_fnc_removePerFrameHandler };

private _cfg = _logic getVariable [QGVAR(cfg), objNull];
if (isNil "_cfg") exitWith {};
if !(_cfg get "artyEnable") exitWith {};
if (isNil "ghost_alive_drones_fleet") exitWith {};

private _side = _cfg get "side";
private _basePos = _cfg get "basePos";
private _range = _cfg get "defRange";
private _stop = _cfg get "stopDist";

// Live recon drones belonging to this base.
private _recons = [];
{
    if (
        (_x getVariable ["ghost_alive_drones_logic", objNull]) isEqualTo _logic &&
        {(_x getVariable ["ghost_alive_drones_dtype", ""]) == "recon"}
    ) then {
        {
            if (!isNull _x && {alive _x}) then { _recons pushBack _x };
        } forEach (_x getVariable ["ghost_alive_drones_vehicles", []]);
    };
} forEach ghost_alive_drones_fleet;
if (_recons isEqualTo []) exitWith {};

// Enemy targets in the engagement band (beyond stop distance, inside defense range).
private _targets = [];
{
    private _u = _x;
    if (alive _u && {(_side getFriend (side _u)) < 0.6}) then {
        private _t = vehicle _u;                               // shell the vehicle if mounted
        if ((_t distance2D _basePos) >= _stop && {!(_t in _targets)}) then {
            _targets pushBack _t;
        };
    };
} forEach (_basePos nearEntities [["Man", "LandVehicle"], _range]);
if (_targets isEqualTo []) exitWith {};

private _cd = _logic getVariable [QGVAR(artyCd), createHashMap];

{
    private _t = _x;

    // Must be spotted by at least one recon drone.
    if ((_recons findIf {_x knowsAbout _t > KNOWSABOUT_SPOTTED}) != -1) then {
        private _key = netId _t;
        if (_key isEqualTo "") then { _key = str _t };

        if (time - (_cd getOrDefault [_key, -1e9]) >= (_cfg get "artyCooldown")) then {
            _cd set [_key, time];

            // End the barrage as soon as the target dies or leaves the defense range.
            private _cond = compile format [
                "private _o = objectFromNetId '%1'; (isNull _o) || {!alive _o} || {(getPosATL _o) distance2D %2 > %3}",
                _key, _basePos, _range
            ];

            [
                _t,
                _cfg get "artyAmmo",
                _cfg get "artyRadius",
                _cfg get "artyRounds",
                _cfg get "artyDelay",
                _cond
            ] spawn BIS_fnc_fireSupportVirtual;
        };
    };
} forEach _targets;
