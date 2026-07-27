#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_onMapDoubleClick

Description:
    Sets the LZ marker from a double-click on the planning map.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params ["_control", "_button", "_xPos", "_yPos", "_shift", "_ctrl", "_alt"];

private _pos= _control ctrlMapScreenToWorld [_xPos,_yPos];

deleteMarkerLocal QGVAR(LZ_Marker);


private _selectedType = call FUNC(getInsertionType);

switch (true) do {
	case (_selectedType == "Standard") : 
	{
		private _marker = createMarkerLocal [QGVAR(LZ_Marker), _pos];
		_marker setMarkerTypeLocal QGVAR(paradrop);
		_marker setMarkerTextLocal (localize "STR_GHOST_Insertion_markerSelectedLz");
		_marker setMarkerColorLocal "ColorGreen";
		_marker setMarkerAlphaLocal 1;
		hint localize "STR_GHOST_Insertion_hintLzSet";
	};
	case (_selectedType == "Halo") : 
	{
		private _marker = createMarkerLocal [QGVAR(LZ_Marker), _pos];
		_marker setMarkerTypeLocal QGVAR(paradrop);
		
		_marker setMarkerColorLocal "ColorGreen";
		_marker setMarkerAlphaLocal 1;
		private _ASL = AGLToASL (getMarkerPos [QGVAR(LZ_Marker), true]);
		private _altitude = round (_ASL select 2);
		_marker setMarkerTextLocal ((localize "STR_GHOST_Insertion_markerSelectedLz")+ " " + (format [(localize "STR_GHOST_Insertion_LZASLmarkerInfo"),_altitude]));
		hint localize "STR_GHOST_Insertion_hintLzSet";

	};
	case (_selectedType == "Submarine") : 
	{
		private _canDeploy = [_pos] call FUNC(canDeploySub);
		_canDeploy params ["_canDo","_reason"];
		if !(_canDo) then
		{
				private _marker = createMarkerLocal [QGVAR(LZFAIL_Marker), _pos];
			_marker setMarkerTypeLocal QGVAR(IH_NO_GO);
			
			_marker setMarkerColorLocal "ColorRed";
			_marker setMarkerAlphaLocal 1;
			_marker setMarkerTextLocal _reason;
			[] spawn {sleep 3; deleteMarkerLocal QGVAR(LZFAIL_Marker)};
		} 
		else
		{
			private _marker = createMarkerLocal [QGVAR(LZ_Marker), _pos];
			_marker setMarkerTypeLocal QGVAR(Submarine);
			
			_marker setMarkerColorLocal "ColorGreen";
			_marker setMarkerAlphaLocal 1;
			_marker setMarkerTextLocal _reason;
			hint localize "STR_GHOST_Insertion_hintLzSet";

		};


	};
};




[]spawn {
private _mapCtrl = ((findDisplay INSERTION_IDD) displayCtrl 1200);
waitUntil {!(ctrlShown _mapCtrl)};
deleteMarkerLocal QGVAR(LZ_Marker);
};
call FUNC(checkListUpdate);
