#include "script_component.hpp"
/*
 * Author: YonV
 * Returns the groups eligible to appear as [GROUP] target boxes in the
 * cTab recipient list: any group on a side the player may message that
 * contains at least one player.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Groups <ARRAY of GROUP>
 *
 * Example:
 * call ghost_ctab_groups_fnc_listGroups
 */

private _validSides = call cTab_fnc_getPlayerSides;
private _groups = [];

{
    if (isPlayer _x && {side group _x in _validSides}) then {
        _groups pushBackUnique group _x;
    };
} forEach playableUnits;

// playableUnits is empty in SP - fall back to the player's own group
if (_groups isEqualTo [] && {!isNull cTab_player}) then {
    _groups pushBack group cTab_player;
};

_groups
