#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_counter_battery_fnc_onFired

Description:
    A hooked gun has fired. Counts the round, and once the radar has enough of an
    arc to work with, rolls for a fix and books the reply.

    The position is captured HERE, at the moment of detection, and not read again
    when the shells arrive. That is the entire point of the feature: the reply
    lands where the gun WAS, so a crew that displaces after firing lives and a
    crew that sits still does not. Reading the position at impact time would make
    displacing pointless and the whole mechanic unfair.

    Runs wherever the gun is local, so it hands off to the server before
    committing anything.

Parameters (Fired EH): 0: vehicle, ... 4: ammo

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_veh", "", "", "", "_ammo"];

if (isNull _veh) exitWith {};

// Whose gun is it? A crewed vehicle answers for itself; fall back to the gunner
// in case the vehicle's own side has not resolved.
private _side = side _veh;
if (_side isEqualTo sideUnknown || {_side isEqualTo civilian}) then {
    private _crew = effectiveCommander _veh;
    if (!isNull _crew) then { _side = side group _crew };
};

[QGVAR(fired), [_veh, _side, getPosATL _veh, _ammo]] call CBA_fnc_serverEvent;
