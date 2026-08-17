#include "script_component.hpp"
/*
 * Author: YonV
 * The name of the cTab interface that is currently open, or "" when none is.
 *
 * cTab clears cTabIfOpen to nil on close rather than emptying it, so the
 * obvious `cTabIfOpen param [1, ""]` yields Nothing - not the default - and
 * every caller then hands Nothing to getVariable. That threw three script
 * errors a second for the whole mission. Everything that wants the interface
 * name asks here instead.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Interface name, "" when no device is open <STRING>
 *
 * Example:
 * private _ifName = call ghost_ctab_devices_fnc_ifName
 */

if (isNil "cTabIfOpen") exitWith {""};
if !(cTabIfOpen isEqualType []) exitWith {""};

private _ifName = cTabIfOpen param [1, ""];
if !(_ifName isEqualType "") exitWith {""};

_ifName
