#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_isAirInsertionPlanner

Description:
    Is this unit allowed to open the insertion planner?

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params ["_object","_side"];
_object setVariable [QGVAR(isAirInsertionPlanner_)+ str _side,true,true];
_object setVariable [QGVAR(interfaceSide),_side,true];
private _statement = {call FUNC(openInterface)};
private _loc = (localize "STR_GHOST_Insertion_accessInterfaceAceAction"); 
private _action =
[QGVAR(interface_access), 
_loc,
 QPATHTOF(data\paradrop.paa),
_statement , 
 {side _player == _target getVariable QGVAR(interfaceSide)},
 {},
 [],
 [0,0,0], 
 5] call ace_interact_menu_fnc_createAction;
 ////
 [_object, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject; 
 
