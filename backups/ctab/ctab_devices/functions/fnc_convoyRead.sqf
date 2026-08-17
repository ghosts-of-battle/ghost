#include "script_component.hpp"
/*
 * Author: YonV
 * One vehicle's state for the convoy screens: the things a commander looking
 * down a column actually wants - is it moving, is it burning, is it empty.
 *
 * Damage is reported as CONDITION (100 = untouched), because "40% damaged"
 * and "60% left" read as opposite things at a glance and the crew want the
 * second one. The engine, hull and wheel/track figures come from the same
 * hitpoints Arma's own vehicle HUD uses, so they agree with what the driver
 * sees.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * 0: Display name <STRING>
 * 1: Condition percentages - [hull, engine, wheels/tracks] <ARRAY>
 * 2: Fuel percentage <NUMBER>
 * 3: Crew count <NUMBER>
 * 4: Speed, km/h <NUMBER>
 * 5: Grid <STRING>
 * 6: Flags - [isBurning, isMobile] <ARRAY>
 * 7: Crew seats filled - [driver, commander, gunner] <ARRAY of BOOL>
 *
 * Example:
 * [vehicle player] call ghost_ctab_devices_fnc_convoyRead
 */

params ["_vehicle"];

private _name = getText ((configOf _vehicle) >> "displayName");
if (_name == "") then {_name = typeOf _vehicle};

private _hull = (1 - damage _vehicle) * 100;

// Hitpoint names differ by vehicle class, so ask for several and take what
// answers - a car has HitEngine and wheels, a tank has HitEngine and tracks,
// and a helicopter has neither under those names.
// _this IS the list. `params ["_names"]` would take the FIRST ELEMENT, so a
// one-name call handed a string to forEach and threw.
private _fnc_hit = {
    private _worst = -1;
    {
        private _v = _vehicle getHitPointDamage _x;
        if (!isNil "_v") then {_worst = _worst max _v};
    } forEach _this;
    if (_worst < 0) then {-1} else {(1 - _worst) * 100}
};

private _engine = ["HitEngine"] call _fnc_hit;
private _running = ["HitLFWheel", "HitLBWheel", "HitRFWheel", "HitRBWheel", "HitLTrack", "HitRTrack"] call _fnc_hit;

private _fuel = (fuel _vehicle) * 100;
private _crew = count (crew _vehicle);
// Driver, commander and gunner are the seats worth showing; everyone else is
// just a passenger and rides in the head count.
private _roles = [
    !isNull (driver _vehicle),
    !isNull (commander _vehicle),
    !isNull (gunner _vehicle)
];
private _speed = abs (speed _vehicle);
private _grid = mapGridPosition _vehicle;

// "mobile" the way a convoy means it: it can still be driven away
private _mobile = alive _vehicle && {canMove _vehicle} && {_fuel > 0};

[
    _name,
    [_hull, _engine, _running],
    _fuel,
    _crew,
    _speed,
    _grid,
    [isEngineOn _vehicle, _mobile],
    _roles
]
