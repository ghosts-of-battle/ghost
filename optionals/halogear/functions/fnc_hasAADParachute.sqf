#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_hasAADParachute

Description:
    Is the unit wearing a rig with the auto-activation device fitted?

Parameters:
    _unit : OBJECT

Returns:
    BOOL

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params ["_unit"];

(backpack _unit) in [QGVAR(parachute), QGVAR(parachuteNS)]
