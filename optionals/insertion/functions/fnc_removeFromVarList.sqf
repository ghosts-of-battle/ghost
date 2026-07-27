#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_removeFromVarList

Description:
    Removes a value from one of the interface's stored lists.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params ["_toRemove","_list"];
private _var = ACE_player getVariable [QGVAR(InsertionHandler_) + _list,[]];
private _index = _var find _toRemove;
if (_index == -1) exitWith {};
_var deleteAt _index;
ACE_player setVariable [QGVAR(InsertionHandler_) + _list,_var];
