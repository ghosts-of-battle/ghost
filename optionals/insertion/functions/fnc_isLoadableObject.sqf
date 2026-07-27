#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_isLoadableObject

Description:
    Init EH: adds the cargo-loading ACE action to qualifying objects.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params ["_object"];

private _statement = {[_target] call FUNC(prepareCargoForLoading);};
private _loc = "Prep cargo for loading"; 
private _action =
[QGVAR(PrepCargo_Init), 
_loc,
 "",
_statement , 
 {[_target] call FUNC(conditionsToBeLoadAble);},
 {},
 [],
 [0,0,0], 
 5] call ace_interact_menu_fnc_createAction;
 ////
 [_object, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject; 
 
 
