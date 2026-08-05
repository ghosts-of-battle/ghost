#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_electronic_war_zones_fnc_hasRdf

Description:
    Does this unit carry a direction finder? Pure inventory check against the
    setting, so no items mod is a dependency - an unknown classname is simply
    never found.

    Carrying one is the entire interaction: FUNC(rdfTick) sweeps for as long as
    this is true and stops when it is not.

Parameters:
    _unit : OBJECT - the player.

Returns:
    BOOL

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_unit"];

private _required = (GVAR(rdfItems) splitString ", ") select { _x != "" };
if (_required isEqualTo []) exitWith { false };

((items _unit) + (assignedItems _unit)) arrayIntersect _required isNotEqualTo []
