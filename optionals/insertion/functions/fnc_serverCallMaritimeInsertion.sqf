#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_serverCallMaritimeInsertion

Description:
    Server half of the submarine insertion.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
	if !(isServer) exitWith {};
	params ["_units","_side","_position"];

	private _startPos = [_position] call FUNC(randomPosOnWaterWithinDepth);
	private _arraySubs = [_startPos,_side] call FUNC(spawnSub);
	_arraySubs params ["_proteus","_sdvCTRL","_sdv","_sdv2"];
	[_units,_sdv,_sdv2] call FUNC(boardSDVs);
	
	[_sdvCTRL,_position] spawn {
		params ["_sdvCTRL","_position"];

		while {(count (waypoints _sdvCTRL) isEqualTo 1)} do {
			private _wp = (group _sdvCTRL) addWaypoint [_position, 20];
			_wp setWaypointStatements ["true", "[this] call FUNC(subWaypointStatement);"];
		};
	};//sometimes it would'n't get the wp so this is a failsafe/workaround
