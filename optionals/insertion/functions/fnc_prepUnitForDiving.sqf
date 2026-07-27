#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_prepUnitForDiving

Description:
    Swaps a unit into dive gear, stowing what they were wearing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params ["_unit","_vehicle"];

	[_unit,_vehicle,"VEST"]call EFUNC(common,putContainerInVehicle);
	[_unit,_vehicle] call EFUNC(common,putContainerInVehicle);
	private _faceWear =goggles _unit;
	_vehicle addItemCargoGlobal [_faceWear, 1];
	removeGoggles _unit;

	private "_letter";
	switch (true) do {
		case (side _unit == east) : {_letter = "O";};
		case (side _unit == west) : {_letter = "B";};
		case (side _unit == resistance) : {_letter = "I";};
		case (side _unit == civilian) : {_letter = "B";};
		default {_letter = "B";};
		
	};

	_unit addUniform "U_"+ _letter + "_Wetsuit";
	_unit addGoggles "G_"+ _letter + "_Diving";
	_unit addVest "V_RebreatherB";
