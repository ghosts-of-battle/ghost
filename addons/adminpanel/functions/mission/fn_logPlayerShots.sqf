/*
    Author: TheTimidShade

    Description:
        Logs player's fire events to the server log

    Parameters:
        NONE
        
    Returns:
        NONE
*/

#include "\z\ghost\addons\adminpanel\script_component.hpp"

if (!hasInterface) exitWith {};

["ace_firedPlayer", {
    params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

    private _weaponName = getText (configFile >> "CfgWeapons" >> _weapon >> "DisplayName");
    private _message = format ["[GOB ADMIN] Player %1 fired weapon '%2'", name player, _weaponName];
    // The mission's server log when it has one; the RPT when it does not, which
    // is where an admin looks anyway.
    if (isNil "YMF_fnc_logToServer") then {
        diag_log _message;
    } else {
        [_message] remoteExec ["YMF_fnc_logToServer", 2, false];
    };

}] call CBA_fnc_addEventHandler;
