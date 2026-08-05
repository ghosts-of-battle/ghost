#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_electronic_war_zones_fnc_uavJamLostLink

Description:
    Client end of UAV jamming: drops the player out of the drone's seat and tells
    them why. Runs where the player is, because connectTerminalToUAV is local.

Parameters:
    _player : OBJECT - the operator.
    _uav    : OBJECT - the drone they were flying.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_player", "_uav"];

if (!hasInterface || {_player isNotEqualTo player}) exitWith {};

player action ["EjectBack", vehicle player];
player connectTerminalToUAV objNull;

["Datalink", "Signal jammed - control lost.", [1, 0.3, 0.3, 1]] call EFUNC(notify,notify);
