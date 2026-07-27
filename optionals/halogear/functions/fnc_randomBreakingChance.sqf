#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_randomBreakingChance

Description:
    Rolls, once per jump, for the mask to fail mid-freefall. Odds come from the
    GVAR(breakingChancePerc) setting; on a hit the failure animation starts
    4-25 s into the fall. Only the full ESS mask can break -- the no-ESS variant
    has no lens to crack.

Parameters:
    None (acts on the local player).

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
if (goggles player != QGVAR(mask)) exitWith {};

if ((floor (random 100)) + 1 > GVAR(breakingChancePerc)) exitWith {};

[
    { call FUNC(maskBreakingAnim) },
    [],
    random [4, 10, 25]
] call CBA_fnc_waitAndExecute;
