#include "script_component.hpp"
/*
 * Author: Ghost
 * Runs on the building player's machine (from the Establish Patrol Base action).
 * Any player may build. Validates, prompts for a base name, then asks the server
 * to build it.
 *
 * Arguments: None
 * Return Value: None
 *
 * Example:
 * call ghost_patrol_base_fnc_establishPatrolBase
 *
 * Public: No
 */

private _builder = player;

if !(isNull objectParent _builder) exitWith {
    [[], ["Patrol Base", 1.2, [1, 0.3, 0.3, 1]], ["You must be on foot."]] call CBA_fnc_notify;
};

private _req = missionNamespace getVariable [QGVAR(kitCount), 4];
private _max = missionNamespace getVariable [QGVAR(maxCount), 3];

private _have = [getPosATL _builder] call FUNC(countKits);
if (_have < _req) exitWith {
    [[], ["Patrol Base", 1.2, [1, 0.3, 0.3, 1]], [format ["Drop %1 Patrol Base Kits within range (found %2).", _req, _have]]] call CBA_fnc_notify;
};

if (count (missionNamespace getVariable [QGVAR(bases), []]) >= _max) exitWith {
    [[], ["Patrol Base", 1.2, [1, 0.3, 0.3, 1]], [format ["Patrol base limit reached (%1). Unbuild one first.", _max]]] call CBA_fnc_notify;
};

// Ask the player to name it, then hand off to the server.
[{
    params ["_name"];
    if (_name isEqualTo "") exitWith {
        [[], ["Patrol Base", 1.2, [1, 0.8, 0.3, 1]], ["Cancelled - no name given."]] call CBA_fnc_notify;
    };
    [getPosATL player, getDir player, _name, side group player, player] remoteExec [QFUNC(serverBuild), 2];
}] call FUNC(promptName);
