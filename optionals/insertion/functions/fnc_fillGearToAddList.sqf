#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_fillGearToAddList

Description:
    Populates the available-cargo listbox.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _gear = (call FUNC(sortGear)) select 1;
private _ctrlList = ((findDisplay INSERTION_IDD) displayCtrl 1502);
lbClear _ctrlList;
{ 
	private _name = _x getVariable QGVAR(supplyDropName);
	private _index = _ctrlList lbAdd _name;
	_ctrlList lbSetData [_index,str _x];
	
}forEach _gear;
