#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_detachSDV

Description:
    Casts an SDV off the parent submarine.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
	params ["_sdv"];
	detach _sdv;
	_sdv setFuel (_sdv getVariable [QGVAR(SDV_orgFuel),100]);
	_sdv setVelocity [0,0,2];
	playSound3D [QPATHTOF(sounds\sdvDetach.ogg),_sdv];
	private _partSource = [_sdv,[0,0,-0.5],1,0.0001,0.5,20] call FUNC(submarineBubbles); //["_object",["_offset",[0,0,0]],["_spread",0.3],["_dropInterVal",0.001],["_size",0.5],["_lifeTime",3]];
	[
    {
        deleteVehicle _this;
    }, 
    _partSource, 
    5
] call CBA_fnc_waitAndExecute;
	hint (localize "STR_GHOST_Insertion_HintSDVDetached");
