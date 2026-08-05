#include "script_component.hpp"
/*
 * Author: YonV
 * Opens an S23 on its own display. cTab's own paths hardcode their display
 * names, so a device with its own screen needs its own opener - this hands
 * cTab's toggleInterface our display name instead of the S7's.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ghost_ctab_s7_fnc_s23Open
 */

if (isNil "cTab_fnc_toggleInterface") exitWith {};

[1, QGVAR(s23_dlg), player, vehicle player] call cTab_fnc_toggleInterface;
