#include "..\script_component.hpp"
/*
 * FORK of cTab's ctab_messaging_fnc_fillRecipientList (cTab by Riouken /
 * jetelain, re-used with credit per cTab's licence). Declared through
 * CfgFunctions so it compiles before cTab's own PREP pass and therefore wins.
 *
 * cTab's body is kept as it was - the players are listed exactly as before.
 * Ghost additions follow it: the [GROUP] rows that address a whole Arma group,
 * the [FILE] rows that archive a report instead of mailing it, and a
 * preselection of the template's standing addressee. Those rows carry an "@"
 * data token which FUNC(getSelectedRecipients) expands.
 */

params ["_control"];

private _plrList = playableUnits;

if (_plrList isEqualTo []) then {
    // since playableUnits will return an empty array in single player, add the player if array is empty
    _plrList pushBack cTab_player
};

private _validSides = call cTab_fnc_getPlayerSides;

lbClear _control;

{
    if ((side _x in _validSides) && {isPlayer _x} && {[_x, ctab_core_leaderDevices] call cTab_fnc_checkGear}) then {
        private _index = _control lbAdd format ["%1:%2 (%3)", groupId group _x, groupId _x, name _x];
        _control lbSetData [_index, str _x];
    };
} forEach _plrList;

lbSort [_control, "ASC"];

// --- ghost additions ------------------------------------------------------
// Added after cTab's sort on purpose: the boxes belong at the bottom of the
// list, under the people.

if (isNil QGVAR(enabled) || {!GVAR(enabled)}) exitWith {};

{
    private _index = _control lbAdd format ["[GROUP] %1", groupId _x];
    _control lbSetData [_index, "@GRP:" + groupId _x];
    _control lbSetColor [_index, [0.55, 0.8, 1, 1]];
} forEach (call FUNC(listGroups));

{
    private _index = _control lbAdd format ["[FILE] %1", _x];
    _control lbSetData [_index, "@BOX:" + _x];
    _control lbSetColor [_index, [0.95, 0.78, 0.44, 1]];
} forEach (call FUNC(listFileBoxes));

// Templates with a standing addressee open with it already selected.
if (isNil "ctab_messaging_currentTemplateData") exitWith {};

private _uid = ctab_messaging_currentTemplateData param [0, ""];
private _default = switch (true) do {
    case (_uid in ["ghost#casevac", "ghost#mist"]): {GVAR(defaultGroupMedical)};
    case (_uid in ["ghost#callforfire", "ghost#cas", "ghost#checkin", "ghost#hlz", "ghost#airdrop"]): {GVAR(defaultGroupFires)};
    default {""};
};
_default = [_default] call CBA_fnc_trim;
if (_default == "") exitWith {};

private _data = "@GRP:" + _default;
for "_i" from 0 to (lbSize _control - 1) do {
    if (_control lbData _i == _data) exitWith {
        _control lbSetSelected [_i, true];
    };
};
