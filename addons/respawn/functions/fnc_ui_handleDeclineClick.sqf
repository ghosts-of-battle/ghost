/*
 * Author: AACO
 * Handles clients declining the EULA
 * Should only be called by UI events
 *
 * Arguments:
 * Nothing
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [] call ghost_respawn_fnc_ui_handleDeclineClick;
 *
 * Public: No
 */

#include "script_component.hpp"
TRACE_1("params",_this);

closeDialog 1;
