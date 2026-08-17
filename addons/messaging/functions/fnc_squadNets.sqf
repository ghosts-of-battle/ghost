#include "script_component.hpp"
/*
 * Author: Ghost
 * The squads this mission declares, as addressable net names.
 *
 * READ OFF missionConfigFile, NEVER A PATH. The unit framework's
 * description.ext carries a Dynamic_Groups class whose group_setup rows are
 * ["NAME", [roles...], "condition"], and the same framework names the real
 * in-game groups with setGroupIdGlobal - so each name here IS a live G: box
 * the moment that squad has players in it. A mission without the class
 * answers empty and every caller falls back to plain group ids.
 *
 * Cached on first read: mission config cannot change at runtime.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Squad names <ARRAY> of <STRING>
 *
 * Example:
 * private _squads = [] call ghost_messaging_fnc_squadNets
 *
 * Public: Yes
 */

if (!isNil QGVAR(squadNetsCache)) exitWith {+GVAR(squadNetsCache)};

private _cfg = missionConfigFile >> "Dynamic_Groups" >> "group_setup";

private _names = if (isArray _cfg) then {
    (getArray _cfg) apply {_x param [0, ""]} select {_x isEqualType "" && {_x isNotEqualTo ""}}
} else {
    []
};

GVAR(squadNetsCache) = _names;
+_names
