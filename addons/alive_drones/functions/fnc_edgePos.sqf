#include "script_component.hpp"
/*
 * Author: Ghost
 * Nearest map-edge exit point for a position (just outside the world bounds so a
 * drone commanded there flies fully off the battlefield).
 *
 * Arguments:
 * 0: Position <ARRAY>
 *
 * Return Value:
 * Edge position [x,y,z] <ARRAY>
 *
 * Public: No
 */

params ["_pos"];
_pos params ["_x", "_y"];

private _ws = worldSize;
// Distance to each of the four edges: west(x=0), east(x=ws), south(y=0), north(y=ws).
private _dists = [_x, _ws - _x, _y, _ws - _y];
private _nearest = _dists find (selectMin _dists);
private _out = 500;   // overshoot past the edge

switch (_nearest) do {
    case 0: { [-_out, _y, 0] };
    case 1: { [_ws + _out, _y, 0] };
    case 2: { [_x, -_out, 0] };
    default { [_x, _ws + _out, 0] };
};
