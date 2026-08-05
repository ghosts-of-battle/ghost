#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_hasScanner

Description:
    Does this unit carry the signal scanner? Pure inventory check against the
    setting, so a mission can point it at a different device without touching
    code.

Parameters:
    _unit : OBJECT - the player.

Returns:
    BOOL

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_unit"];

private _required = (GVAR(scannerItems) splitString ", ") select { _x != "" };
if (_required isEqualTo []) exitWith { false };

((items _unit) + (assignedItems _unit)) arrayIntersect _required isNotEqualTo []
