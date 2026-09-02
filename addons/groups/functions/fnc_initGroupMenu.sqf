#include "script_component.hpp"
/*
    Author: YMF (restyled to the ghost suite)

    Description:
        Opens the role selection screen, builds the platoon tab row and fills
        the tree behind it.

        THE TREE ROWS FOLLOW THE THEME. They were hard-coded [1,1,1,alpha] -
        white, on whatever ground the scheme happened to be - so on a light
        scheme the whole list vanished. The colour comes from
        YMF_groupMenu_theme, which ghost_groups_fnc_styleGroupMenu leaves behind when the
        display opens.

        THE TABS ARE A VIEW, NOT A RULE (user, 2026-09-01). They decide which
        squads the tree draws and nothing else: the roles, the order, the
        conditions, who may take what and the OPEN count at the top right all
        still come off the whole of Dynamic_Groups. See FUNC(platoons) for the
        config and FUNC(fillRoleTree) for the draw.

        A MISSION WITH NO Platoons CLASS IS UNCHANGED. The four tab controls
        are hidden and the tree is put back to the full height it had before
        there was a row above it, so the screen is the one that shipped.

    Parameters:
        NONE

    Returns:
        NOTHING
*/

disableSerialization;

private _display = createDialog ["YMF_groupMenu",true];
private _tree = _display displayCtrl 1500;

private _factionName = getText(missionConfigFile >> "Dynamic_Groups" >> "faction_name");
(_display displayCtrl 1000) ctrlSetText toUpper format ["%1  ROLE SELECTION",_factionName];

// Set by the style pass in the display's onLoad, which has already run by here.
(missionNamespace getVariable ["YMF_groupMenu_theme", [[0.05,0.05,0.05,1],[0.90,0.90,0.88,1],[0.85,0.28,0.20,1],[0.35,0.35,0.34,1]]]) params ["_ground","_ink","_accent"];

private _tabs = call FUNC(platoons);
GVAR(platoonTabs) = _tabs;

// ------------------------------------------------------------- no tabs --
if (_tabs isEqualTo []) exitWith {
    {
        private _ctrl = _display displayCtrl (IDC_PLT_TAB + _x);
        if (!isNull _ctrl) then {_ctrl ctrlShow false};
    } forEach [0,1,2,3];

    // THE ROW'S HEIGHT GOES BACK TO THE TREE. Read off the tab that would have
    // sat above it rather than written as a number, so the player's UI scale -
    // already applied to every control by the style pass - is carried with it.
    private _tab = _display displayCtrl IDC_PLT_TAB;
    if (!isNull _tab) then {
        (ctrlPosition _tab) params ["", "_ty"];
        (ctrlPosition _tree) params ["_x0", "_y0", "_w0", "_h0"];
        _tree ctrlSetPosition [_x0, _ty, _w0, _h0 + (_y0 - _ty)];
        _tree ctrlCommit 0;
    };

    [_tree, []] call FUNC(fillRoleTree);
    [_tree, tvCurSel _tree] call FUNC(onGroupMenuTvSelectChange);
};

// ---------------------------------------------------------------- tabs --
private _lift = [
    ((_ground # 0) * 0.82) + ((_ink # 0) * 0.18),
    ((_ground # 1) * 0.82) + ((_ink # 1) * 0.18),
    ((_ground # 2) * 0.82) + ((_ink # 2) * 0.18),
    _ground # 3
];

for "_i" from 0 to 3 do {
    private _ctrl = _display displayCtrl (IDC_PLT_TAB + _i);
    if (isNull _ctrl) then {continue};

    if (_i >= count _tabs) then {
        _ctrl ctrlShow false;
        continue;
    };

    _ctrl ctrlSetText ((_tabs select _i) select 0);
    _ctrl ctrlSetBackgroundColor _lift;
    _ctrl ctrlSetTextColor [_ink#0, _ink#1, _ink#2, 0.62];
};

// OPEN ON THE TAB THE PLAYER IS ALREADY ON. A man who has a slot and reopens
// this screen to change it should be looking at his own squad, not at whichever
// platoon happens to be first. Falls through to the first tab when he holds
// nothing, which is every man on mission start.
private _start = 0;
private _mine = "";
{
    _x params ["_groupName","","","","_units"];
    if (player in _units) exitWith {_mine = toUpper _groupName};
} forEach YMF_dynamicGroups;

if (_mine isNotEqualTo "") then {
    private _at = _tabs findIf {_mine in (_x select 1)};
    if (_at > -1) then {_start = _at};
};

[_start] call FUNC(selectPlatoon);
