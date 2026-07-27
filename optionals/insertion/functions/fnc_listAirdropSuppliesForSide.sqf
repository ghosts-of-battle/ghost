#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_listAirdropSuppliesForSide

Description:
    All objects currently flagged as air-droppable supply for a side.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params ["_player","_side"];
private _allNearObjects = _player nearObjects 100;
private _allAvailableSupplies = [];
{
	private _condition = _x getVariable [(QGVAR(isAirDropSupply_) + str _side),false];
	if (_condition) then {_allAvailableSupplies pushBackUnique _x};
}forEach _allNearObjects;
_allAvailableSupplies
