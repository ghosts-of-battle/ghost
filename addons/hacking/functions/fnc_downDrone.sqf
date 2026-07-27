#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_downDrone

Description:
    Runs the ACE progress bar against the nearest hostile drone. On success the
    drone is silently deleted (server-side) and the global reveal fires.

Parameters:
    _unit : OBJECT - the player.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_unit"];

private _drone = [_unit] call FUNC(nearestDrone);
if (isNull _drone) exitWith {};

[
    HACK_DURATION,
    [_unit, _drone],
    {   // onFinish
        (_this select 0) params ["_unit", "_drone"];
        if (!isNull _drone) then {
            _drone setVariable [QGVAR(hacked), true, true];
            [QGVAR(deleteDrone), _drone] call CBA_fnc_serverEvent;
        };
        [_unit] call FUNC(reveal);
    },
    {}, // onFailure
    "Hacking drone...",
    {   // condition: drone still alive + in range
        (_this select 0) params ["_unit", "_drone"];
        !isNull _drone && {alive _drone} && {(_unit distance _drone) < (HACK_DRONE_RANGE + 50)}
    },
    ["isNotInside"]
] call ace_common_fnc_progressBar;
