#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_damageGoggles

Description:
    Marks the player's goggles cracked in ACE, reapplies the lens effect and
    raises ace_glassesCracked -- which this addon listens for in order to swap
    an intact mask for the broken one.

Parameters:
    None (acts on the local player).

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _state = player getVariable ["ace_goggles_condition", [0, 0, false]];

player setVariable ["ace_goggles_condition", [_state select 0, _state select 1, true]];
[player, goggles player] call ace_goggles_fnc_applyGlassesEffect;
["ace_glassesCracked", [player]] call CBA_fnc_localEvent;
