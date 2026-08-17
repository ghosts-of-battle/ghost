#include "script_component.hpp"
/*
 * Author: Ghost
 * Builds `admp_authorisedIDs` - who this mission lets into the panel.
 *
 * THE LIST STAYS IN THE MISSION, and that is the whole point of this function.
 * The panel used to `#include` the mission's admin list at compile time, which
 * an addon cannot do: an addon is compiled once, for every mission.
 *
 * TWO WAYS FOR A MISSION TO SAY IT, and both are read.
 *
 *   CfgGhostAdmins in description.ext - the one to use. It sits beside the
 *   mission's OTHER admin arrays (enableDebugConsole, cba_settings_whitelist)
 *   so one edit covers the debug console, the CBA whitelist and this panel:
 *
 *       #define ADMINS "765...", "765..."
 *       enableDebugConsole[] = {ADMINS};
 *       cba_settings_whitelist[] = {ADMINS};
 *       class CfgGhostAdmins { admins[] = {ADMINS}; };
 *
 *   config\config_adminlist.hpp - the panel's original file, an SQF assignment
 *   to a LOCAL `_admins`. Missions that still have it need no edit: it is RUN
 *   rather than included, and `call` writes into this function's scope exactly
 *   as the old `#include` did.
 *
 * Plus ghost's own admins, so a mission that names nobody is not locked out.
 * Nothing here writes back to the mission.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * The uids <ARRAY>
 *
 * Example:
 * [] call ghost_adminpanel_fnc_adminList
 *
 * Public: Yes
 */

private _ids = [];

// 1. THE MISSION'S CONFIG - the recommended place, and the one that shares its
//    array with enableDebugConsole and cba_settings_whitelist.
{
    if (_x isEqualType "" && {_x isNotEqualTo ""}) then {_ids pushBackUnique _x};
} forEach (getArray (missionConfigFile >> "CfgGhostAdmins" >> "admins"));

// 2. A LIST THE MISSION HANDS OVER. The panel's original config\config_adminlist.hpp
//    was read from here, out of the mission, and that is a thing a mod must not
//    do: a relative path resolves against the PBO, getMissionPath returns an
//    absolute one that preprocessFileLineNumbers refuses and that names a folder
//    on one particular machine, and neither survives the trip to a server.
//
//    A mission that still keeps its admins in that file loads it itself and
//    leaves the array here - one line in its own preInit:
//        ghost_missionConfig_admins = call compile preprocessFileLineNumbers "config\config_adminlist.hpp";
//    Missions that use CfgGhostAdmins above need nothing at all.
{
    if (_x isEqualType "" && {_x isNotEqualTo ""}) then {_ids pushBackUnique _x};
} forEach (missionNamespace getVariable ["ghost_missionConfig_admins", []]);

// 3. Ghost's own list - the uids ghost_admin already trusts with the debug
//    console. A mission with no admin list at all still has whoever the mod is
//    set up for, which is what stops a fresh mission locking everybody out of
//    the panel that would fix it.
{
    if (_x isEqualType "" && {_x isNotEqualTo ""}) then {_ids pushBackUnique _x};
} forEach (getArray (configFile >> "enableDebugConsole"));

_ids
