#include "script_component.hpp"
/*
 * Author: Ghost
 * Create a side-colored debug marker for a drone group (one per group, on its
 * lead airframe). Global marker so admins/HC see it. No-op if one already exists.
 *
 * Arguments:
 * 0: Group <GROUP>
 * 1: Side <SIDE>
 * 2: Type key <STRING>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_grp", "_side", "_type"];

if (!isNil {_grp getVariable QGVAR(marker)}) exitWith {};

private _name = format [QGVAR(m_%1), GVAR(mkrCounter)];
GVAR(mkrCounter) = GVAR(mkrCounter) + 1;

private _color = switch (_side) do {
    case west: { "ColorWEST" };
    case east: { "ColorEAST" };
    case independent: { "ColorGUER" };
    default { "ColorCIV" };
};

createMarker [_name, getPosATL (leader _grp)];
_name setMarkerTypeLocal "mil_triangle";
_name setMarkerColorLocal _color;
_name setMarkerSizeLocal [0.7, 0.7];
_name setMarkerText _type;

_grp setVariable [QGVAR(marker), _name];
