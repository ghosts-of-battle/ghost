#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_fillInsertionTypeCombo

Description:
    Populates the insertion-type selector from the enabled settings.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _display = (findDisplay INSERTION_IDD);
private _selectInsertionTypeCombo = _display displayCtrl 2101;
private _availableTypes = [];

private _useStatic = GVAR(allowStatic);
if (_useStatic) then {_availableTypes pushBackUnique [(localize "STR_GHOST_Insertion_StaticLinePrettyName"),"Standard"]};
private _useHalo = GVAR(allowHALO);
if (_useHalo) then {_availableTypes pushBackUnique [(localize "STR_GHOST_Insertion_HALOJumpPrettyName"),"Halo"]};
private _useSub = GVAR(allowSub);
if (_useSub) then {_availableTypes pushBackUnique [(localize "STR_GHOST_Insertion_SubmarinePrettyName"),"Submarine"]};
if (_availableTypes isEqualTo []) exitWith {closeDialog 0; []spawn {sleep 1;hintC ("STR_GHOST_Insertion_ErrorNoSetting")}};





{
private _index = _selectInsertionTypeCombo lbAdd (_x select 0);
_selectInsertionTypeCombo lbSetData [_index,(_x select 1)];
} forEach _availableTypes;
_selectInsertionTypeCombo lbSetCurSel 1;
