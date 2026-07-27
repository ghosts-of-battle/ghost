#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_unprepObject

Description:
    Clears an object's prepared-cargo flag.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
closeDialog 0;
private _object =ACE_player getVariable QGVAR(currentAdressedLoadingObj);
[_object, side ACE_player,false] call FUNC(isAirDropSupply);
ACE_player setVariable [QGVAR(currentAdressedLoadingObj),nil,false];
hintC (localize "STR_GHOST_Insertion_HCObjectRmvList");
