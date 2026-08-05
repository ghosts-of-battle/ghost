#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_objective_watch_fnc_onCaptured

Description:
    An objective changed hands. Raises the public event and then, separately,
    considers the barrage.

    The split is deliberate: "ghost_objective_captured" is a plain CBA event
    carrying [logic, side, pos, radius], so tasks, front-line logic, an AI-capture
    bridge or anything else can hook captures later without touching detection or
    the artillery. Recaptures inside the cooldown still raise it - other payoffs
    may care even when the guns do not fire.

Parameters:
    _logic : OBJECT  - the module.
    _watch : HASHMAP - the objective that changed hands.
    _side  : SIDE    - who took it.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_logic", "_watch", "_side"];

private _cfg = _logic getVariable [QGVAR(cfg), nil];
if (isNil "_cfg") exitWith {};

private _pos = _watch get "pos";
private _radius = _watch get "radius";

["ghost_objective_captured", [_logic, _side, _pos, _radius, _watch get "name"]] call CBA_fnc_globalEvent;
INFO_2("Objective Watch: %1 captured by %2",mapGridPosition _pos,_side);

if !(_cfg get "barrageEnable") exitWith {};

private _cd = _cfg get "barrageCooldown";
if ((CBA_missionTime - (_watch get "lastBarrage")) < _cd) exitWith {
    private _left = round (_cd - (CBA_missionTime - (_watch get "lastBarrage")));
    INFO_1("Objective Watch: recapture inside cooldown, no barrage (%1s left)",_left);
};

if (random 100 >= (_cfg get "barrageChance")) exitWith {};

_watch set ["lastBarrage", CBA_missionTime];
[_logic, _watch, _side] call FUNC(barrage);
