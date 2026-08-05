#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_intel_hunt_fnc_onKilled

Description:
    Rolls whether a dead enemy was carrying anything worth reading. On a hit the
    body gains a one-use "Search for Intel" action - the drop is decided at death
    so the same corpse cannot be re-rolled by searching it repeatedly.

Parameters (CBA class EH): _unit, _killer, _instigator, _useEffects

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith {};

params ["_unit"];

if !(missionNamespace getVariable [QGVAR(active), false]) exitWith {};
if (GVAR(complete)) exitWith {};
if (isPlayer _unit) exitWith {};

// Only the hunted side's dead carry the paperwork.
if ((side group _unit) getFriend GVAR(side) >= 0.6) exitWith {};

if (random 100 >= GVAR(dropChance)) exitWith {};

_unit setVariable [QGVAR(hasIntel), true, true];
[_unit] remoteExec [QFUNC(addSearchAction), 0, _unit];
