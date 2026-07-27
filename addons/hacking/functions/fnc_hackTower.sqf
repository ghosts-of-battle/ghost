#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_hackTower

Description:
    Runs the ACE progress bar against the nearest hackable tower. On success the
    tower is flagged hacked and the global "show active units" reveal fires.

Parameters:
    _unit : OBJECT - the player.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_unit"];

private _tower = [_unit] call FUNC(nearestTower);
if (isNull _tower) exitWith {};

[
    HACK_DURATION,
    [_unit, _tower],
    {   // onFinish
        (_this select 0) params ["_unit", "_tower"];
        if (!isNull _tower) then { _tower setVariable [QGVAR(hacked), true, true] };
        [_unit] call FUNC(reveal);
        // marks the nearest object synced to a Hack Intel Targets module; no-op
        // when no such module was placed
        [_unit] call FUNC(markNearestTarget);
    },
    {}, // onFailure
    "Hacking tower...",
    {   // condition: stay in range, tower alive
        (_this select 0) params ["_unit", "_tower"];
        !isNull _tower && {alive _tower} && {(_unit distance _tower) < (HACK_TOWER_RANGE + 5)}
    },
    ["isNotInside"]
] call ace_common_fnc_progressBar;
