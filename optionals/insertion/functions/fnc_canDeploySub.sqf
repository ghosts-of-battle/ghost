#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_canDeploySub

Description:
    Can a submarine insertion run here? Checks depth and distance offshore.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params ["_pos2D"];
private _pos = [(_pos2D select 0),(_pos2D select 1),0];
private _isOnSea = [_pos] call EFUNC(common,isOverWater);
if !(_isOnSea) exitWith {[false,(localize "STR_GHOST_Insertion_PosIsNotWater")]};
private _depth = [_pos] call EFUNC(common,returnDepth);

if ((abs _depth) < 20) exitWith {[false,(format [(localize "STR_GHOST_Insertion_PosIsToShallow"),(round (abs _depth))])]};
[true,(format [(localize "STR_GHOST_Insertion_WaterDepthMess"),round (abs _depth)])]
