#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_objective_watch_fnc_checkCapture

Description:
    The capture condition, checked on a slow loop per objective: enough players
    of the capturing side inside the radius, and nobody hostile, held
    continuously for hold_time. Any break in either condition resets the streak
    to zero - taking an objective means clearing it and staying.

    Runs over every objective this module watches.

    Captured objectives keep being watched. Losing it and retaking it captures
    again, which is what makes the cooldown rather than a one-shot flag the thing
    that governs repeat barrages.

Parameters (CBA PFH): 0: logic, 1: handle

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_logic", "_handle"];

if (isNull _logic) exitWith { [_handle] call CBA_fnc_removePerFrameHandler };

private _cfg = _logic getVariable [QGVAR(cfg), nil];
if (isNil "_cfg") exitWith {};

private _side = _cfg get "side";
private _minPlayers = _cfg get "minPlayers";
private _holdTime = _cfg get "holdTime";

{
    private _watch = _x;
    private _pos = _watch get "pos";
    private _radius = _watch get "radius";

    // Who is holding it? With ANY, whichever side has players inside claims it.
    private _inside = allPlayers select {
        alive _x && {(getPosATL _x) distance2D _pos <= _radius}
    };
    if (_side isNotEqualTo sideUnknown) then {
        _inside = _inside select { side (group _x) isEqualTo _side };
    };

    private _holderSide = _side;
    if (_side isEqualTo sideUnknown && {_inside isNotEqualTo []}) then {
        _holderSide = side (group (_inside select 0));
        _inside = _inside select { side (group _x) isEqualTo _holderSide };
    };

    private _enough = (count _inside) >= _minPlayers;
    private _contested = if (!_enough) then { true } else {
        [_pos, _radius, _holderSide] call FUNC(enemyPresent)
    };

    if (!_enough || _contested) then {
        _watch set ["streak", -1];
        _watch set ["held", false];
        continue;
    };

    private _streak = _watch get "streak";
    if (_streak < 0) then { _watch set ["streak", CBA_missionTime]; continue };

    if (_watch get "held") then { continue };
    if ((CBA_missionTime - _streak) < _holdTime) then { continue };

    _watch set ["held", true];
    [_logic, _watch, _holderSide] call FUNC(onCaptured);
} forEach (_logic getVariable [QGVAR(watches), []]);
