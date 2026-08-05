#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_scannerClose

Description:
    Puts the scanner away and stops its loop.

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!hasInterface) exitWith {};

QGVAR(scanner) cutText ["", "PLAIN"];
uiNamespace setVariable [QGVAR(scanner), displayNull];

private _pfh = missionNamespace getVariable [QGVAR(scannerPFH), -1];
if (_pfh >= 0) then { [_pfh] call CBA_fnc_removePerFrameHandler };
GVAR(scannerPFH) = -1;
