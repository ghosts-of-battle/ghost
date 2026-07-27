#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_evac_fnc_convertAction

Description:
    Runs the medic's evac progress bar, then performs the evac. Re-checks
    canConvert on completion so the action can't resolve on a target that woke
    up, died, or was already evacuated mid-bar.

Parameters:
    _medic    : OBJECT - the medic performing the evac.
    _casualty : OBJECT - the downed player being evacuated.

Returns:
    None

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_medic", "_casualty"];

if (isNull objectParent _medic) then {
    [_medic] call ace_common_fnc_goKneeling;
};

[
    GVAR(time),
    [_medic, _casualty],
    {
        (_this select 0) params ["_medic", "_casualty"];
        if !([_medic, _casualty] call FUNC(canConvert)) exitWith {
            ["Evac failed.", 1.5, _medic] call ace_common_fnc_displayTextStructured;
        };
        [_medic, _casualty] call FUNC(convert);
        ["Casualty evacuated - reinforcement inbound.", 2, _medic] call ace_common_fnc_displayTextStructured;
    },
    {
        (_this select 0) params ["_medic"];
        ["Evac cancelled.", 1.5, _medic] call ace_common_fnc_displayTextStructured;
    },
    "Evacuating casualty...",
    {true},
    ["isNotInside"]
] call ace_common_fnc_progressBar;
