#include "script_component.hpp"
/*
 * Author: YonV
 * Expands a "@GRP:<groupId>" recipient token into the group's player
 * members, so the untouched cTab core transport can deliver to each one.
 *
 * Arguments:
 * 0: Token <STRING> ("@GRP:" + groupId)
 *
 * Return Value:
 * Member units <ARRAY of OBJECT>
 *
 * Example:
 * ["@GRP:Alpha 1-1"] call ghost_ctab_groups_fnc_resolveGroupToken
 */

params ["_token"];

private _id = _token select [5];
private _members = [];

{
    if (groupId _x == _id) then {
        {
            if (isPlayer _x && {alive _x}) then {
                _members pushBack _x;
            };
        } forEach units _x;
    };
} forEach allGroups;

_members
