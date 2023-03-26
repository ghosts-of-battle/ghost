/*
 * Author: AACO
 * Function used to update the player list focus
 *
 * Arguments:
 * Nothing
 *
 * Return Value:
 * Nothing
 *
 * Examples:
 * [] call ghost_spectate_fnc_updateListFocus;
 *
 * Public: No
 */

#include "script_component.hpp"
TRACE_1("Params",_this);

if (GVAR(uiVisible)) then {
    LIST tvSetCurSel ([[GVAR(camTarget)] call BIS_fnc_objectVar, LIST_IDC] call FUNC(findPathInList));
};
