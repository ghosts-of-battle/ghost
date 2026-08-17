#include "script_component.hpp"
/*
 * Author: Ghost
 * Everything a new message can be addressed to, as [mailbox id, label] pairs.
 *
 * THE ONE LIST. The nets, the squads and the people were rebuilt inline in the
 * compose pane, in the reader's rail and twice in the tile panels, all slightly
 * differently - so the CC line, the TO line and the picker would have been the
 * fifth, sixth and seventh copy. The three id forms are not interchangeable and
 * that is exactly why they belong in one function: a squad is a G: box, a named
 * mailbox is a B:, a person is a P:<uid>. See EFUNC(messaging,submit).
 *
 * EVERY PLAYER IS ADDRESSABLE - a person is a net of one. The player themselves
 * is not on the list: a message you send is already in your own box.
 *
 * The label is what the player reads and what the CC line takes an @ name from,
 * so it is uppercase here rather than at each call site.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Addressable targets <ARRAY> of [mailbox id <STRING>, label <STRING>]
 *
 * Example:
 * private _targets = [] call ghost_tacpad_fnc_composeTargets
 *
 * Public: Yes
 */

private _targets = [];

{
    _targets pushBack [format ["B:%1", _x], toUpper _x];
} forEach (((EGVAR(messaging,namedBoxes) splitString ",") apply {trim _x}) select {_x isNotEqualTo ""});

// Your own group leads even when the mission declares no squads at all.
private _own = groupId (group player);
private _squads = [];
if (!isNil QEFUNC(messaging,squadNets)) then {
    _squads = [] call EFUNC(messaging,squadNets);
};

{
    _targets pushBack [format ["G:%1", _x], toUpper _x];
} forEach ([_own] + (_squads select {_x isNotEqualTo _own}));

{
    if (_x isEqualTo player) then {continue};
    _targets pushBack [format ["P:%1", getPlayerUID _x], toUpper (name _x)];
} forEach (allPlayers select {side group _x isEqualTo side group player});

_targets
