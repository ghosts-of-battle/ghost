#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_intel_hunt_fnc_searchBody

Description:
    Takes the intel off a body. The counter is side-wide and lives on the server,
    so a squad can split up and everyone's finds add to the same batch.

Parameters:
    _body : OBJECT - the corpse.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_body"];

if (isNull _body) exitWith {};
if !(_body getVariable [QGVAR(hasIntel), false]) exitWith {};

// Clear locally first so a double-click cannot bank it twice before the server
// broadcast comes back.
_body setVariable [QGVAR(hasIntel), false, true];

[QGVAR(collected), [_body]] call CBA_fnc_serverEvent;
