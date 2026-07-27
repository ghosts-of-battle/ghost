#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_hasParachute

Description:
    Is the unit wearing any parachute rig?

Parameters:
    _unit : OBJECT

Returns:
    BOOL

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params ["_unit"];

(backpack _unit) isKindOf "B_Parachute"
