#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_fillGrpCombo

Description:
    Populates the group selector with the player's side's groups.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _combo =((findDisplay INSERTION_IDD) displayCtrl 2102);
private _groupsWithPlayers = call EFUNC(common,listGroupsWithPlayers);
private _allPlaySide = [_groupsWithPlayers,side ACE_player] call EFUNC(common,sortGroupsBySide);


{
	private _name = groupId _x;
	private _index= _combo lbAdd _name;
	_combo lbSetData [_index,str _x];

}forEach _allPlaySide;
_combo lbSetCurSel 0;
