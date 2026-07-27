#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_randomPosOnWaterWithinDepth

Description:
    Finds a random sea position deep enough for the submarine.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
	params ["_position"];
private _pos = [[[_position, 800]],["ground",[_position, 400]],{([_this] call EFUNC(common,returnDepth)) < -20}] call BIS_fnc_randomPos;
if (_pos isEqualTo [0,0]) then {_pos = _position; systemChat "defaulted"};
_pos
