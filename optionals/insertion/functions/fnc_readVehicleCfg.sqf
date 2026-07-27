#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_readVehicleCfg

Description:
    Reads cargo capacity and crew slots from a vehicle config.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params ["_classname"];

private _displayName = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
private _cargoSlots = getNumber (configFile >> "CfgVehicles" >> _classname >> "transportSoldier");
private _maxSpeed = getNumber (configFile >> "CfgVehicles" >> _classname >> "maxSpeed");
private _return = [_displayName,_cargoSlots,_maxSpeed];
_return
