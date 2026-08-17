#include "script_component.hpp"
/*
    Author: YMF (restyled to the ghost suite)

    Description:
        Opens the role selection screen and fills its tree.

        THE TREE ROWS FOLLOW THE THEME. They were hard-coded [1,1,1,alpha] -
        white, on whatever ground the scheme happened to be - so on a light
        scheme the whole list vanished. The colour comes from
        YMF_groupMenu_theme, which ghost_groups_fnc_styleGroupMenu leaves behind when the
        display opens.

    Parameters:
        NONE

    Returns:
        NOTHING
*/

private _display = createDialog ["YMF_groupMenu",true];
private _tree = _display displayCtrl 1500;

private _factionName = getText(missionConfigFile >> "Dynamic_Groups" >> "faction_name");
(_display displayCtrl 1000) ctrlSetText toUpper format ["%1  ROLE SELECTION",_factionName];

// Set by the style pass in the display's onLoad, which has already run by here.
(missionNamespace getVariable ["YMF_groupMenu_theme", [[0.05,0.05,0.05,1],[0.90,0.90,0.88,1],[0.85,0.28,0.20,1],[0.35,0.35,0.34,1]]]) params ["","_ink","_accent"];

private _rolesArray = missionConfigFile >> "Dynamic_Roles";
private _myPath = [0,0];

{
    _x params ["_groupName","_roles","_conditions","","_units"];

    private _treeIndex = _tree tvAdd [[],toUpper _groupName];
    _tree tvSetColor [[_treeIndex],_ink];

    if (call compile _conditions) then {
        {
            private _roleInfo = _rolesArray >> _x;
            private _roleName = getText(_roleInfo >> "name");
            private _roleIcon = getText(_roleInfo >> "icon");

            private _playerInRole = _units select _forEachIndex;
            private _taken = !isNull _playerInRole;

            // A TAKEN ROLE READS AS TAKEN AT A GLANCE. It was the role name with
            // a colon and the player's name run together at 40% alpha; the name
            // is what you are scanning for, so it goes after a separator and the
            // row is dimmed rather than half-erased.
            private _name = if (_taken) then {
                format ["%1  -  %2",_roleName,name _playerInRole]
            } else {
                _roleName
            };

            private _colour = if (_taken) then {
                [_ink#0, _ink#1, _ink#2, 0.4]
            } else {
                _ink
            };

            private _unitIndex = _tree tvAdd [[_treeIndex],_name];
            _tree tvSetColor [[_treeIndex,_unitIndex],_colour];

            private _data = [netId _playerInRole,_x];
            _tree tvSetData [[_treeIndex,_unitIndex],str(_data)];

            _tree tvSetPicture [[_treeIndex,_unitIndex],_roleIcon];
            _tree tvSetPictureColor [[_treeIndex,_unitIndex],_colour];

            if (player isEqualTo _playerInRole) then {
                _myPath = [_treeIndex,_unitIndex];

                // Your own slot in the accent, so you can find yourself in a
                // list of forty without reading it.
                _tree tvSetColor [[_treeIndex,_unitIndex],_accent];
                _tree tvSetPictureColor [[_treeIndex,_unitIndex],_accent];
            };
        } forEach _roles;
    };
} forEach YMF_dynamicGroups;

tvExpandAll _tree;
_tree tvSetCurSel _myPath;
