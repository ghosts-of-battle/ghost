#include "..\script_component.hpp"
/*
 * FORK of cTab's ctab_messaging_fnc_getSelectedRecipients (cTab by Riouken /
 * jetelain, re-used with credit per cTab's licence). Declared through
 * CfgFunctions so it compiles before cTab's own PREP pass and therefore wins.
 *
 * cTab matched the selected rows against playableUnits by `str`; anything else
 * was dropped, which is why the group rows have to be expanded here. "@GRP:"
 * rows become that group's players. "@BOX:" rows resolve to nobody on purpose -
 * filing is not mailing, and the send button handles those separately.
 */

params ["_control"];

private _plrList = playableUnits;
if (_plrList isEqualTo []) then {
    _plrList pushBack cTab_player
};

private _selectedData = (lbSelection _control) apply {_control lbData _x};

private _recipients = _plrList select {(str _x) in _selectedData};

{
    if (_x select [0, 5] == "@GRP:") then {
        _recipients append ([_x] call FUNC(resolveGroupToken));
    };
} forEach _selectedData;

_recipients arrayIntersect _recipients
