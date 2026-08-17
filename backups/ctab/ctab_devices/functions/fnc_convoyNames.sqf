#include "script_component.hpp"
/*
 * Author: YonV
 * The convoys and callsigns a vehicle can be registered to.
 *
 * THE MISSION'S OWN GROUPS COME FIRST. A mission that uses the dynamic-groups
 * template already names its elements in description.ext:
 *
 *     class Dynamic_Groups {
 *         group_setup[] = {
 *             {"REAPER",{...roles...},"true"},
 *             {"NOMAD", {...},         "true"}
 *         };
 *     };
 *
 * Those are the callsigns the players actually answer to, so the device offers
 * them without anyone re-typing the list into a setting where it can drift out
 * of step with the mission.
 *
 * The CBA setting is still read, appended after them: it is where the generic
 * columns live (Convoy 1, Convoy 2) for vehicles that belong to no squad, and
 * it is the whole list on a mission that defines no groups at all. Duplicates
 * are dropped case-insensitively, so a setting that repeats a callsign the
 * mission already named does not put it in the dropdown twice.
 *
 * Read once and kept - neither source can change mid-mission.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Names, mission groups first <ARRAY of STRING>
 *
 * Example:
 * call ghost_ctab_devices_fnc_convoyNames
 */

private _cached = missionNamespace getVariable [QGVAR(convoyNameList), []];
if (_cached isNotEqualTo []) exitWith {_cached};

private _names = [];
private _fnc_add = {
    params ["_name"];
    if (_name == "") exitWith {};
    if (_names findIf {toUpper _x == toUpper _name} > -1) exitWith {};
    _names pushBack _name;
};

// the mission's element callsigns
private _cfg = missionConfigFile >> "Dynamic_Groups" >> "group_setup";
if (isArray _cfg) then {
    {
        // each entry is [name, [roles], condition] - guard the shape, a
        // mission's config is not ours to assume
        if (_x isEqualType [] && {count _x > 0} && {(_x select 0) isEqualType ""}) then {
            [[_x select 0] call CBA_fnc_trim] call _fnc_add;
        };
    } forEach (getArray _cfg);
};

// then whatever the setting adds
{
    [[_x] call CBA_fnc_trim] call _fnc_add;
} forEach ((GVAR(convoyNames)) splitString ",");

missionNamespace setVariable [QGVAR(convoyNameList), _names];
_names
