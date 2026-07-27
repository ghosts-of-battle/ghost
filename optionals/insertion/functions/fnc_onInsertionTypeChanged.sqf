#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_onInsertionTypeChanged

Description:
    Re-dresses the interface when the insertion type changes.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _display = (findDisplay INSERTION_IDD);
private _selectVehText = _display displayCtrl 1101; //STR_GHOST_Insertion_selectInsertVeh
private _AltitudeText = _display displayCtrl 1103; //STR_GHOST_Insertion_DesiredAltIntel
private _altitudeEnterEdit = _display displayCtrl 1000;
deleteMarkerLocal QGVAR(LZ_Marker);
private _selectedType = call FUNC(getInsertionType);
private _toToggle = [1111,1502,1503,1603,1604];
switch (true) do {
	case (_selectedType == "Standard") : 
	{
		{ctrlShow [_x,true]} forEach _toToggle;
		{ctrlShow [_x,true]} forEach [1000,1103,2100];
		_AltitudeText ctrlSetStructuredText parseText (localize "STR_GHOST_Insertion_DesiredAltIntel");
		_selectVehText ctrlSetStructuredText parseText (localize "STR_GHOST_Insertion_selectInsertVeh");
		_altitudeEnterEdit ctrlSetText "500";
	};
	case (_selectedType == "Halo") : 
	{
		{ctrlShow [_x,true]} forEach _toToggle;
		{ctrlShow [_x,true]} forEach [1000,1103];
		ctrlShow [2100,false];
		_selectVehText ctrlSetStructuredText parseText (localize "STR_GHOST_Insertion_ComboVirtualPlane");
		_AltitudeText ctrlSetStructuredText parseText (localize "STR_GHOST_Insertion_ComboAutoOpenAlt");
		_altitudeEnterEdit ctrlSetText "150";
	};
	case (_selectedType == "Submarine") : 
	{
		{ctrlShow [_x,false]} forEach _toToggle;
		{ctrlShow [_x,false]} forEach [1000,1103];
		ctrlShow [2100,false];
		_selectVehText ctrlSetStructuredText parseText (localize "STR_GHOST_Insertion_ComboTwoSDVs");
	};
};
call FUNC(refreshLists);
