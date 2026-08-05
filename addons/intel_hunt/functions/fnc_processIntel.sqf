#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_intel_hunt_fnc_processIntel

Description:
    Spends a full batch of gathered intel for one hint. Server side: the counter
    and the tier are single-copy, so two ISR operators cannot both spend the same
    batch.

Parameters:
    _caller : OBJECT - the ISR operator.

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith {};

params ["_caller"];

if (GVAR(complete)) exitWith {};
if (GVAR(count) < GVAR(required)) exitWith {};

GVAR(count) = 0;
publicVariable QGVAR(count);

[] call FUNC(fireHint);

GVAR(tier) = GVAR(tier) + 1;
