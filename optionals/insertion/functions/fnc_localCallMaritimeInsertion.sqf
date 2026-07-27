#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_localCallMaritimeInsertion

Description:
    Client half of the submarine insertion.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
		params [
		["_units",[],[[]]],
		["_side",WEST,[sideUnknown]],
		["_position",[0,0,0],[[]],3]
	];



	[[_units,_side,_position],FUNC(serverCallMaritimeInsertion)] remoteExec ["call",2];
