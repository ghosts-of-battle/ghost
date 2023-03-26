/*
 * Author: AACO
 * Handles unloading the client's respawn interface
 * Should only be called by UI events
 *
 * Arguments:
 * Nothing
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [] call ghost_respawn_fnc_ui_handleClientUnload;
 *
 * Public: No
 */

#include "script_component.hpp"
TRACE_1("params",_this);

[clientOwner] call FUNC(deregisterClientForUpdates);
