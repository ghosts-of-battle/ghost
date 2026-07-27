#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_spawnSub

Description:
    Spawns the parent submarine and its SDVs at the insertion point.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
	params ["_pos","_side"];
	private _proteus = "Submarine_01_F" createVehicle _pos;
	private "_letter";
	switch (true) do {
		case (_side == east) : {_letter = "O";};
		case (_side == west) : {_letter = "B";};
		case (_side == resistance) : {_letter = "I";};
		case (_side == civilian) : {_letter = "B";};
		default {_letter = "B";};
		
	};
	private _sdvClass= _letter + "_SDV_01_F";
	private _sdv = _sdvClass createVehicle (position _proteus);
	
	_sdv attachTo [_proteus,[0,1,5.5]];
	_sdv setDir (getDir _proteus +180);

	private _sdv2 = _sdvClass createVehicle (position _proteus);
	
	_sdv2 attachTo [_proteus,[0,8,5.5]];
	_sdv2 setDir (getDir _proteus +180);

	private _sdvCTRL = _sdvClass createVehicle _pos;
	
	_proteus attachTo [_sdvCTRL,[0,0,0]];
	_proteus setDir (getDir _sdvCTRL +180);
	
	createVehicleCrew _sdvCTRL;
    _sdvCTRL setPos (getPos _sdvCTRL vectorAdd [0,0,-15]);
	_sdvCTRL swimInDepth -15;
	{
		_x setVariable [QGVAR(isAttachedToSub),true,true];
		_x setVariable [QGVAR(SDV_orgFuel),fuel _x,true];
		_x setFuel 0;
		_x setVariable [QGVAR(SDV_attachedProteus),_proteus,true];
		_x setVariable [QGVAR(leadSDV),_sdvCTRL,true];
	
	} forEach [_sdv,_sdv2];
	_sdvCTRL setVariable [QGVAR(SDV_attachedProteus),_proteus];
	_sdvCTRL setVariable [QGVAR(SDV_playerSDVs),[_sdv,_sdv2]];
	[_proteus] spawn {
		params ["_proteus"];
	private _partSource = [_proteus,[0,45,-4],0.75,0.0001,400,60] call FUNC(submarineBubbles);
	_proteus setVariable [QGVAR(BubblesOrigin),_partSource];
	}; // issue blocks waypoin when in the same thread???

	[_proteus,_sdvCTRL,_sdv,_sdv2]
