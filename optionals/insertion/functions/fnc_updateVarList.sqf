#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_updateVarList

Description:
    Writes a list back to its stored variable.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _var = ACE_player getVariable [QGVAR(playersToGo),[]];
private _newList =[];
{
	if (alive _x) then {_newList pushBackUnique _x};
}forEach _var;
ACE_player setVariable [QGVAR(playersToGo),_newList,false];
