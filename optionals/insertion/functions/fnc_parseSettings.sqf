#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_parseSettings

Description:
    Reads the CBA settings into the mission namespace. Server only.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
if(!isServer) exitWith {};
private _availablePlaneTypesBluFor = GVAR(SupplyPlanesBluFor);
private _toMissionNameSpaceBluFor = (_availablePlaneTypesBluFor splitString ",");
missionNamespace setVariable [QGVAR(AvailVehs)+ "WEST",_toMissionNameSpaceBluFor,true];

private _availablePlaneTypesOpFor = GVAR(SupplyPlanesOpFor);
private _toMissionNameSpaceOpFor = (_availablePlaneTypesOpFor splitString ",");
missionNamespace setVariable [QGVAR(AvailVehs)+ "EAST",_toMissionNameSpaceOpFor,true];

private _availablePlaneTypesInde = GVAR(SupplyPlanesInde);
private _toMissionNameSpaceInde = (_availablePlaneTypesInde splitString ",");
missionNamespace setVariable [QGVAR(AvailVehs)+ "GUER",_toMissionNameSpaceInde,true];
