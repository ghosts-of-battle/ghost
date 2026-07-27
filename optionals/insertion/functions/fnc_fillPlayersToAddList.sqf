#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_fillPlayersToAddList

Description:
    Populates the available-players listbox.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _listbox = ((findDisplay INSERTION_IDD) displayCtrl 1500);
private _selectedGrpStr = lbData [2102,(lbCurSel 2102)];

private _grp = [_selectedGrpStr,"Grp"] call EFUNC(common,objectFromString);


private _units = units _grp;
private _unitsToDrop = ACE_player getVariable [QGVAR(playersToGo),[]];
lbClear _listbox;
{
	if (!(_x in _unitsToDrop) && alive _x && ((_x distance ACE_player)<100)) then 
	{
	private _name = name _x;
	private _index = _listbox lbAdd _name;
	_listbox lbSetData [_index,str _x];
	};

}forEach _units;
