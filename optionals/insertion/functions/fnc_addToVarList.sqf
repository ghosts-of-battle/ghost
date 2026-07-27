#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_addToVarList

Description:
    Appends a value to one of the interface's stored lists.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params ["_toAdd","_list"];
if (!alive _toAdd) exitWith{};
private _var = ACE_player getVariable [QGVAR(InsertionHandler_) + _list,[]];
_var pushBackUnique  _toAdd;
ACE_player setVariable [QGVAR(InsertionHandler_) + _list,_var];
