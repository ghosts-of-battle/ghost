#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_kamikaze_fnc_onKilled

Description:
    The airframe died. Whatever killed it, the warhead is still aboard.

    This is what makes shooting one down mean something: the CIWS or the AA gun
    has not made the munition disappear, it has made it go off somewhere that is
    not on top of anybody. Guarded against re-entry because a scripted strike
    detonates deliberately and must not be answered with a second charge.

Parameters (Killed EH): 0: unit

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith {};

params ["_drone"];

if (isNull _drone) exitWith {};
if (_drone getVariable [QGVAR(spent), false]) exitWith {};
_drone setVariable [QGVAR(spent), true];

[_drone, getPosATL _drone] call FUNC(detonate);
