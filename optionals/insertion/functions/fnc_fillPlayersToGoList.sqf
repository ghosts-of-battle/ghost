#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_fillPlayersToGoList

Description:
    Populates the player manifest listbox.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _listBox = ((findDisplay INSERTION_IDD) displayCtrl 1501);
lbClear _listBox;
private _spaceLeft = call FUNC(checkCargoSpace);
call FUNC(refreshCargoRoomIntel);
if !(_spaceLeft) then {hintC (localize "STR_GHOST_Insertion_hintCMaximumLoadForVeh")};
private _allPlayersToGo = ACE_player getVariable [QGVAR(playersToGo),[]];
{
	if(alive _x) then {
	private _name = name _x;
	private _index = _listBox lbAdd _name;
	_listBox lbSetData [_index,str _x];
	if !(_spaceLeft) then {_listBox lbSetColor [_index,[1,0,0,1]]} else {_listBox lbSetColor [_index,[0,1,0,1]]};
	};
}forEach _allPlayersToGo;
call FUNC(checkListUpdate);
