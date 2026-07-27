#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_refreshCargoRoomIntel

Description:
    Updates the remaining-cargo-room readout.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _ctrlStrText = ((findDisplay INSERTION_IDD) displayCtrl 1102);
private _text = (localize "STR_GHOST_Insertion_AvailCgStlotsVeh");

private _selectedType = call FUNC(getInsertionType);
private _planeType = "";
private _cargoSPace = 0;
switch (true) do {
	case (_selectedType == "Standard") : 
	{
		 _planeType = lbData [2100,(lbCurSel 2100)];
		_cargoSPace = ([_planeType]call FUNC(readVehicleCfg)) select 1;
	};
	case (_selectedType == "Halo") : 
	{
		_cargoSPace =20;
	};
	case (_selectedType == "Submarine") : 
	{
		_cargoSPace =8;
	};
};




private _currentAssigned = ACE_player getVariable [QGVAR(playersToGo),[]];
private _cargoItemsLoaded = (call FUNC(sortGear)) select 0;
private _cargoCount = (count _cargoItemsLoaded)*3;
private _hasSpace = call FUNC(checkCargoSpace);
private _stats = str ((count _currentAssigned)+_cargoCount) + "/" + str _cargoSPace;
private _color = "";
if !(_hasSpace) then {_color = "'#f90000'"} else {_color = "'#04ce69'"};
private _statsTextColored = "<t color =" + _color+">" + _stats + "</t>";
private _finalText = _text + " "+ _statsTextColored;
_ctrlStrText ctrlSetStructuredText parseText _finalText;
