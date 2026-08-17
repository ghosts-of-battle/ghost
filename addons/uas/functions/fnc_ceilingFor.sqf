#include "script_component.hpp"
/*
 * Author: Ghost
 * How many drones a side may have up RIGHT NOW.
 *
 * The whole point of the caches: while a killed one's outage runs, this drops
 * to the reduced number and the sky visibly thins. Everything that puts a
 * drone up asks here first, so there is one answer rather than a rule each
 * system remembers differently.
 *
 * Arguments:
 * 0: Side <SIDE>
 *
 * Return Value:
 * Ceiling <NUMBER>
 *
 * Example:
 * [east] call ghost_uas_fnc_ceilingFor
 */

params [["_side", sideUnknown, [sideUnknown]]];

if (_side isEqualTo sideUnknown) exitWith {0};

private _until = GVAR(outages) getOrDefault [str _side, -1];
if (CBA_missionTime < _until) exitWith { round GVAR(reducedMax) };

round GVAR(baseMax)
