#include "script_component.hpp"
/*
 * Author: Ghost
 * Delete a group's debug marker, if any. Called from the reaper when a group is
 * removed from the fleet.
 *
 * Arguments:
 * 0: Group <GROUP>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_grp"];

private _name = _grp getVariable [QGVAR(marker), ""];
if (_name isEqualTo "") exitWith {};

deleteMarker _name;
_grp setVariable [QGVAR(marker), nil];
