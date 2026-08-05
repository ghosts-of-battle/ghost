#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_scannerToggle

Description:
    Takes the scanner out, or puts it away. Requires the item in hand luggage -
    unlike the tablet it needs no ISR flag: reading a warning lamp is not a
    trained skill.

Parameters:
    _unit : OBJECT - the player.

Author:
    Ghost
---------------------------------------------------------------------------- */
params [["_unit", objNull, [objNull]]];

if (!hasInterface) exitWith {};
if (isNull _unit) then { _unit = player };

private _display = uiNamespace getVariable [QGVAR(scanner), displayNull];
if !(isNull _display) exitWith { [] call FUNC(scannerClose) };

if !([_unit] call FUNC(hasScanner)) exitWith {
    ["Scanner", "No signal scanner.", [1, 0.3, 0.3, 1]] call EFUNC(notify,notify);
};

QGVAR(scanner) cutRsc [QGVAR(scanner), "PLAIN", 0, false];
_display = uiNamespace getVariable [QGVAR(scanner), displayNull];
if (isNull _display) exitWith {};

[_display] call FUNC(scannerLayout);
GVAR(scannerPFH) = [FUNC(scannerTick), SCN_TICK, []] call CBA_fnc_addPerFrameHandler;
