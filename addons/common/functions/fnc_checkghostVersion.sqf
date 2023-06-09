/*
 * Name: GHOST_common_fnc_checkGHOSTVersion
 * Author: Snippers
 *
 * Arguments:
 *  Array - Version to check
 *
 * Return:
 * Boolean
 *
 * Description:
 * Checks if Ghosts of Battle Mission version is larger than the input version;
 */
#include "\z\ghost\addons\common\script_component.hpp"

params [
    ["_input",[0,0,0]]
];

private _ghostVersion = getMissionConfigValue ["ghost_version",[0,0,0]];

([_ghostVersion,_input] call EFUNC(common,checkVersionArray));

