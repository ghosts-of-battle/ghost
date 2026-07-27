#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_common_fnc_edenDroneChoiceSave

Description:
    Eden attributeSave handler for the ghost_DroneChoice_* controls. Returns a
    comma-separated classname STRING built from the cumulative tick set (kept
    on the controlsGroup namespace across filter cycles) plus any free-text
    classes typed into the override edit (IDC 102). Deduplicated,
    case-insensitively.

Parameters:
    [_display, _varName]  (_varName is accepted for symmetry; not needed here)

Returns:
    STRING - CSV of selected drone classnames.

Author:
    Ghost
---------------------------------------------------------------------------- */

params [["_display", controlNull]];
if (isNull _display) exitWith { "" };

private _sel = _display getVariable ["ghost_selectedClasses", []];
if (!(_sel isEqualType [])) then { _sel = [] };

private _out = [];
private _seen = createHashMap;
{
    if (_x isEqualType "" && {_x != ""} && {!(toLower _x in _seen)}) then {
        _seen set [toLower _x, true];
        _out pushBack _x;
    };
} forEach _sel;

// merge override free-text entries
private _editCtrl = _display controlsGroupCtrl 102;
if (!isNull _editCtrl) then {
    {
        private _t = _x;
        while {count _t > 0 && {(_t select [0,1]) == " "}} do { _t = _t select [1] };
        while {count _t > 0 && {(_t select [count _t - 1,1]) == " "}} do { _t = _t select [0, count _t - 1] };
        if (_t != "" && {!(toLower _t in _seen)}) then {
            _seen set [toLower _t, true];
            _out pushBack _t;
        };
    } forEach ((ctrlText _editCtrl) splitString ",");
};

_out joinString ","
