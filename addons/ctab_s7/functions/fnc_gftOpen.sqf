#include "script_component.hpp"
/*
 * Author: YonV
 * Opens the GFT-1 rugged tablet on its own display. cTab's own paths hardcode
 * their display names, so a device with its own screen needs its own opener -
 * this hands cTab's toggleInterface our display name instead of the tablet's.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ghost_ctab_s7_fnc_gftOpen
 */

if (isNil "cTab_fnc_toggleInterface") exitWith {};

[1, QGVAR(gft_dlg), player, vehicle player] call cTab_fnc_toggleInterface;
