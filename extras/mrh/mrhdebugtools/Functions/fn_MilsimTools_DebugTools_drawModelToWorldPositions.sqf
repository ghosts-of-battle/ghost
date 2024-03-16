/*
Function name:MRH_fnc_MilsimTools_DebugTools_
Author: Mr H.
Description:
Return value:
Public:
Parameters:
Example(s):
[cursortarget] call MRH_fnc_MilsimTools_DebugTools_drawModelToWorldPosition;
*/
#include "MRH_C_Path.hpp"
params [["_object",objNull],["_dist",1]];
if (_this isEqualTo []) exitWith {TRACE("error, no parameters provided")};
if (_object isEqualTo objNull) exitWith {TRACE("error, no object provided")};
_trace = format ["called with parameters %1",str _this];
//
TRACE(_trace);
_handle = [
	{
		params ["_par","_handle"];
		_par params ["_object",["_dist",1]];
		{
		_position = _object modelToWorld _x; 
		drawIcon3D ["", [1,0,0,1], _position, 0.1, 0.1, 0, str _x, 2, 0.03, "PuristaLight", "center", false]; 
		} forEach 
			[
				[0,0,0],
				[_dist,0,0],
				[0,_dist,0],
				[0,0,_dist],
				[-(_dist),0,0],
				[0,-(_dist),0],
				[0,0,-(_dist)]
			
			]; 
	
	}
	, 0, _this


] call CBA_fnc_addPerFrameHandler;
_handle