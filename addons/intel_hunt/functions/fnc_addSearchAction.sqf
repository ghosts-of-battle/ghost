#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_intel_hunt_fnc_addSearchAction

Description:
    Puts the one-use "Search for Intel" entry on a body. JIP-persistent, so a
    player who connects later still finds intel on corpses that already dropped.

Parameters:
    _body : OBJECT - the corpse.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_body"];

if (!hasInterface || {isNull _body}) exitWith {};

private _action = [
    QGVAR(search), "Search for Intel",
    "\a3\ui_f\data\igui\cfg\simpletasks\types\documents_ca.paa",
    { (_this select 0) call FUNC(searchBody) },
    { (_this select 0) getVariable [QGVAR(hasIntel), false] }
] call ace_interact_menu_fnc_createAction;

[_body, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
