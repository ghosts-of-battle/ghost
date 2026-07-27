#include "script_component.hpp"
/*
 * Author: Ghost
 * Shared airframe-ceiling gate. Returns whether N more airframes fit under the
 * global ceiling RIGHT NOW. SQF is atomic within a frame, so a caller that
 * reserves and then spawns+registers in the same frame cannot be overcommitted.
 * This is the public API the EW addon calls before dispatching its response package.
 *
 * Arguments:
 * 0: Airframes wanted <NUMBER>
 *
 * Return Value:
 * Fits under the ceiling <BOOL>
 *
 * Example:
 * if !([_n] call ghost_alive_drones_fnc_reserveAirframes) exitWith {};
 *
 * Public: Yes
 */

params [["_n", 1, [0]]];

if (isNil QGVAR(fleet)) exitWith { false };

// Count tracked airframes. Recently-dead-but-not-yet-reaped airframes still count:
// that is intentional (conservative — server safety wins ties).
private _live = 0;
{
    _live = _live + count (_x getVariable [QGVAR(vehicles), []]);
} forEach GVAR(fleet);

private _ceiling = GVAR(ceiling);
if (isNil "_ceiling") exitWith { false };

(_live + _n <= _ceiling)
