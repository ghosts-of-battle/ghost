#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_sortGear

Description:
    Splits the manifest into gear that fits and gear that does not.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _gear = [ACE_player,side ACE_player] call FUNC(listAirdropSuppliesForSide);
private _loaded = [];
private _unloaded = [];
{
	private _isLoaded = _x getVariable [QGVAR(isLoaded),false];
	if (_isLoaded) then 
	{ 
		_loaded pushBackUnique _x;
	}
	else
	{
		_unloaded pushBackUnique _x;
	};
}forEach _gear;
private _result =[_loaded,_unloaded];
_result
