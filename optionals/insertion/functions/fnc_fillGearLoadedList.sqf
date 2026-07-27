#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_fillGearLoadedList

Description:
    Populates the loaded-cargo listbox.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _spaceLeft = call FUNC(checkCargoSpace);
private _gear = (call FUNC(sortGear)) select 0;
private _ctrlList = ((findDisplay INSERTION_IDD) displayCtrl 1503);
if !(_spaceLeft) then {hintC (localize "STR_GHOST_Insertion_hintCMaximumLoadForVeh")};

lbClear _ctrlList;
{ 
	private _name = _x getVariable QGVAR(supplyDropName);
	private _index = _ctrlList lbAdd _name;
	_ctrlList lbSetData [_index,str _x];
	if !(_spaceLeft) then {_ctrlList lbSetColor [_index,[1,0,0,1]]} else {_ctrlList lbSetColor [_index,[0,1,0,1]]};

}forEach _gear;
call FUNC(checkListUpdate);
