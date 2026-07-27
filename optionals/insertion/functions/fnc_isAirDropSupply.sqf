#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_isAirDropSupply

Description:
    Flags or unflags an object as air-droppable supply for a side.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params ["_object","_side",["_is",true],["_prettyName",""]];
_object setVariable [QGVAR(isAirDropSupply_)+ (str _side),_is,true];
private _nameToShow = "";
if (_prettyName != "") then {_nameToShow = _prettyName}else
{_nameToShow = getText (configOf _object>>"displayName");};
_object setVariable [QGVAR(supplyDropName),_nameToShow,true];


