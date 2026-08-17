#include "script_component.hpp"
/*
 * Author: Ghost
 * Whether a unit may open the panel.
 *
 * TWO WAYS IN, AND BOTH ARE DELIBERATE. The panel's own list - the mission's,
 * see FUNC(adminList) - and ghost's admin flag, which is what `#login` and the
 * server host already set for the `#ghost` command surface. A mod with two
 * different ideas of who an admin is has one idea too many.
 *
 * Arguments:
 * 0: Unit <OBJECT> (default: player)
 *
 * Return Value:
 * Is admin <BOOL>
 *
 * Example:
 * [] call ghost_adminpanel_fnc_isAdmin
 *
 * Public: Yes
 */

params [["_unit", player, [objNull]]];

if (isNull _unit) exitWith {false};

if ((missionNamespace getVariable [QGVAR(honourGhostAdmin), true]) && {_unit getVariable [QEGVAR(common,isAdmin), false]}) exitWith {true};

(getPlayerUID _unit) in (missionNamespace getVariable ["admp_authorisedIDs", []])
