#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_hasTablet

Description:
    Does this unit carry the hacking tablet? Kit only - no ISR check, no mission
    condition.

    This is what the self-interaction entry is gated on, deliberately in place of
    the full FUNC(canHack). Gating the menu entry on the whole chain meant a
    player holding the tablet but not flagged ISR saw nothing at all and had no
    way to find out why; carrying the kit now puts the entry on the menu, and
    FUNC(tabletOpen) is what says no and gives the reason. Kit is visibility,
    training is permission.

Parameters:
    _unit : OBJECT - the player.

Returns:
    BOOL

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_unit"];

if !(GVAR(enabled)) exitWith { false };

private _required = (GVAR(requiredItems) splitString ", ") select { _x != "" };
if (_required isEqualTo []) exitWith { false };

((items _unit) + (assignedItems _unit)) arrayIntersect _required isNotEqualTo []
