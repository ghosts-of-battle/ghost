#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_ciws_fnc_decoyClass

Description:
    The decoy class hostile to a given defending side.

    Guns do not shoot at their own, so a site defended by BLUFOR needs an OPFOR
    decoy on the shell and vice versa. Independent gets the OPFOR decoy unless it
    is friendly to OPFOR, in which case BLUFOR - because a decoy nobody considers
    an enemy is a decoy nobody shoots.

Parameters:
    _side : SIDE - the DEFENDING side.

Returns:
    STRING - decoy classname.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_side"];

switch (_side) do {
    case west: { QGVAR(decoy_east) };
    case east: { QGVAR(decoy_west) };
    default {
        [QGVAR(decoy_west), QGVAR(decoy_east)] select ([_side, east] call BIS_fnc_sideIsEnemy)
    };
};
