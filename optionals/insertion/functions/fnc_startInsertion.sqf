#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_startInsertion

Description:
    Validates the plan and runs the selected insertion type.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
private _canGo = (call FUNC(checkForAllClear)) select 0;
if !(_canGo) exitWith {};

private _unitsToDrop = ACE_player getVariable [QGVAR(playersToGo),[]];
private _selectedType = call FUNC(getInsertionType);

switch (true) do {
	case (_selectedType == "Standard") : 
	{
			private _typeOfPlane = lbData [2100,(lbCurSel 2100)];
			private _startPos = getMarkerPos (str ACE_player);
			private _dropPos = getMarkerPos QGVAR(LZ_Marker);
			{
				[[_x,_dropPos],
				{
					params ["_unit","_pos"]; 
					moveOut _unit;
						deleteMarkerLocal QGVAR(LZ_Marker);
						private _marker = createMarkerLocal [QGVAR(LZ_Marker), _pos];
						_marker setMarkerTypeLocal QGVAR(paradrop);
						_marker setMarkerColorLocal "ColorGreen";
						_marker setMarkerAlphaLocal 1;
				}] remoteExec ["Spawn",_x];
			} forEach _unitsToDrop;

			private _height =parseNumber (ctrlText (((findDisplay INSERTION_IDD) displayCtrl 1000)));
			if (_height<200) then {_height =200};
			private _extraGear = (call FUNC(sortGear)) select 0;


			private _parameters=[_unitsToDrop,_typeOfPlane,_startPos,_dropPos,_height,side ACE_player,true,_extraGear];


			_parameters call FUNC(completeAirInsertion);
			
			ACE_player setVariable [QGVAR(playersToGo),nil,false];
			{
				_x setVariable [QGVAR(isLoaded),false,true];
				[_x,side ACE_player,false]call FUNC(isAirDropSupply);

			} forEach _extraGear;
	};
	case (_selectedType == "Halo") : 
	{
		private _dropPos = getMarkerPos [QGVAR(LZ_Marker),true];
		{
				[[_x,_dropPos],
				{
					params ["_unit","_pos"]; 
					moveOut _unit;
						deleteMarkerLocal QGVAR(LZ_Marker);
						private _marker = createMarkerLocal [QGVAR(LZ_Marker), _pos];
						_marker setMarkerTypeLocal QGVAR(paradrop);
						_marker setMarkerColorLocal "ColorGreen";
						_marker setMarkerAlphaLocal 1;
				}] remoteExec ["Spawn",_x];
			} forEach _unitsToDrop;

			_dropPos = [(_dropPos select 0),(_dropPos select 1),9000];
			private _height =parseNumber (ctrlText (((findDisplay INSERTION_IDD) displayCtrl 1000)));
			if (_height<50) then {_height =50};
			private _heightGear = _height + 100;
			private _heightStringGear = str _heightGear;
			private _heightString = str _height;
			private _extraGear = (call FUNC(sortGear)) select 0;

 				[[_dropPos,_unitsToDrop,_extraGear,true,true,_heightString,true,_heightStringGear],FUNC(startHaloJump)] remoteExec ["call",2];
		ACE_player setVariable [QGVAR(playersToGo),nil,false];
			{
				_x setVariable [QGVAR(isLoaded),false,true];
				[_x,side ACE_player,false]call FUNC(isAirDropSupply);

			} forEach _extraGear;

	};
	case (_selectedType == "Submarine") : 
	{
		private _dropPos = getMarkerPos [QGVAR(LZ_Marker),true];
		{
				[[_x,_dropPos],
				{
					params ["_unit","_pos"]; 
					moveOut _unit;
						deleteMarkerLocal QGVAR(LZ_Marker);
						private _marker = createMarkerLocal [QGVAR(LZ_Marker), _pos];
						_marker setMarkerTypeLocal QGVAR(submarine);
						_marker setMarkerColorLocal "ColorGreen";
						_marker setMarkerAlphaLocal 1;
				}] remoteExec ["Spawn",_x];
			} forEach _unitsToDrop;
		[_unitsToDrop,(side ACE_player),_dropPos] call FUNC(localCallMaritimeInsertion);
		ACE_player setVariable [QGVAR(playersToGo),nil,false];
	};
};

closeDialog 0;
