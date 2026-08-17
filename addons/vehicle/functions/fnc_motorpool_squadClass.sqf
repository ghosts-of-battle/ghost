#include "script_component.hpp"
/*
    File: fn_motorpool_squadClass.sqf
    Author: YonV/Ghost
    Description: The squad's own MotorPool_<name> config, resolved from the
        player's group the same way the group system names them - "GHOST 1-1"
        answers MotorPool_Ghost. configNull when the group has no list, which
        leaves the player the common pool.

    Example:
    private _cfg = call ghost_vehicle_fnc_motorpool_squadClass;
*/

private _first = ((groupId group player) splitString " -") param [0, ""];
if (_first isEqualTo "") exitWith {configNull};

private _cfg = missionConfigFile >> format ["MotorPool_%1", _first];
if (isClass _cfg) then {_cfg} else {configNull}
