#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_checkCargoSpace

Description:
    Remaining cargo room in the selected aircraft, in slots.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _selectedType = call FUNC(getInsertionType);
switch (true) do {
	case (_selectedType == "Standard") : 
	{
		private _planeType = lbData [2100,(lbCurSel 2100)];
		private _cargoSPace = ([_planeType]call FUNC(readVehicleCfg)) select 1;
		private _currentAssigned = ACE_player getVariable [QGVAR(playersToGo),[]];
		private _cargoItemsLoaded = (call FUNC(sortGear)) select 0;
		private _cargoCount = (count _cargoItemsLoaded)*3;
		if (((count _currentAssigned)+_cargoCount)>= _cargoSPace +1) exitWith {false};
		true
	};
	case (_selectedType == "Halo") : 
	{
		private _cargoSPace = 20;
		private _currentAssigned = ACE_player getVariable [QGVAR(playersToGo),[]];
		private _cargoItemsLoaded = (call FUNC(sortGear)) select 0;
		private _cargoCount = (count _cargoItemsLoaded)*3;
		if (((count _currentAssigned)+_cargoCount)>= _cargoSPace +1) exitWith {false};
		true
	};
	case (_selectedType == "Submarine") : 
	{
		private _currentAssigned = ACE_player getVariable [QGVAR(playersToGo),[]];
		if ((count _currentAssigned )>8) exitWith {false};
		true
	};
};
