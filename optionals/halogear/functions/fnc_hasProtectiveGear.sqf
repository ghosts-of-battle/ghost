#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_hasProtectiveGear

Description:
    Does the player currently have an air supply? True if their goggles,
    headgear, or the vehicle they are in is a registered oxygen source.

Parameters:
    None (acts on the local player).

Returns:
    BOOL

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _gear = missionNamespace getVariable [QGVAR(protectiveGear), []];

(goggles player in _gear)
    || {headgear player in _gear}
    || {(typeOf (vehicle player)) in _gear}
