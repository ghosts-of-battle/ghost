#include "script_component.hpp"
/*
 * Author: Ghost
 * Pick a random building inside the TAOR marker(s) to strike. Rolls a random
 * point in the TAOR, then picks a random intact building near it.
 *
 * Arguments:
 * 0: TAOR marker name(s) <ARRAY>
 *
 * Return Value:
 * [building (objNull if none), targetPos ([] if the TAOR roll failed)] <ARRAY>
 *
 * Public: No
 */

params [["_taor", [], [[]]]];
if (_taor isEqualTo []) exitWith { [objNull, []] };

private _center = [_taor] call BIS_fnc_randomPos;
if (_center isEqualTo [0,0,0] || {_center isEqualTo []}) exitWith { [objNull, []] };

private _blds = (nearestTerrainObjects [_center, ["HOUSE", "BUILDING"], BUILDING_RADIUS, false, true]) select {
    alive _x && {damage _x < 0.9}
};

private _bld = if (_blds isEqualTo []) then { objNull } else { selectRandom _blds };
private _pos = if (isNull _bld) then { _center } else { getPosATL _bld };

[_bld, _pos]
