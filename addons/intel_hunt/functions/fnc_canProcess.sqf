#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_intel_hunt_fnc_canProcess

Description:
    Gate for the Process Intel self-interaction: the player is flagged ISR and
    the batch is full. Gathering is everyone's job, reading it is not.

Parameters:
    _unit : OBJECT - the player.

Returns:
    BOOL

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_unit"];

if !(missionNamespace getVariable [QGVAR(active), false]) exitWith { false };
if (missionNamespace getVariable [QGVAR(complete), false]) exitWith { false };
if !([_unit] call EFUNC(common,isISR)) exitWith { false };

(missionNamespace getVariable [QGVAR(count), 0]) >= (missionNamespace getVariable [QGVAR(required), IH_REQUIRED_DEF])
