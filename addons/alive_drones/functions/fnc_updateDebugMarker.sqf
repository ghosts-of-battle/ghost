#include "script_component.hpp"
/*
 * Author: Ghost
 * Move a group's debug marker to its current lead-airframe position. No-op if the
 * group has no marker (debug off).
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

_name setMarkerPos (getPosATL (leader _grp));
