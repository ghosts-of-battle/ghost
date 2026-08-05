#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_objective_watch_fnc_barrage

Description:
    The payoff: a countdown, then artillery on the objective.

    The countdown is honest about the NOMINAL time - 3, 2, 1 minutes - while the
    real impact floats inside the jitter window. You know roughly when it is
    coming and you cannot set your watch by it, which is the difference between
    displacing and waiting until 0:01.

    Warnings go to the capturing side only (D22). The shells go to the objective
    AREA, not to tracked players: rounds land per dispersion regardless of who is
    standing there.

Parameters:
    _logic : OBJECT  - the module.
    _watch : HASHMAP - the objective being shelled.
    _side  : SIDE    - who captured, and who gets warned.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_logic", "_watch", "_side"];

private _cfg = _logic getVariable [QGVAR(cfg), nil];
if (isNil "_cfg") exitWith {};

private _delay = _cfg get "barrageDelay";
private _jitter = _cfg get "barrageJitter";
private _impact = _delay + (_jitter - random (2 * _jitter));

// Countdown marks are fixed to the nominal time, not the rolled one.
{
    _x params ["_at", "_text"];
    if (_at > _delay) then { continue };
    [{
        params ["_text", "_side"];
        [QGVAR(warn), [_text, _side]] call CBA_fnc_globalEvent;
    }, [_text, _side], _delay - _at] call CBA_fnc_waitAndExecute;
} forEach [
    [180, "ENEMY ARTILLERY INBOUND - 3 MINUTES"],
    [120, "ENEMY ARTILLERY INBOUND - 2 MINUTES"],
    [60,  "ENEMY ARTILLERY INBOUND - 1 MINUTE"]
];

private _dispersion = [_cfg, _watch] call FUNC(dispersionFor);

[{
    params ["_cfg", "_watch", "_dispersion"];
    [
        _watch get "pos",
        _cfg get "barrageRounds",
        _dispersion,
        _cfg get "barrageShell",
        _cfg get "barrageWindow"
    ] call EFUNC(common,fireBarrage);
}, [_cfg, _watch, _dispersion], _impact max 1] call CBA_fnc_waitAndExecute;

private _rounds = _cfg get "barrageRounds";
private _eta = round _impact;
private _disp = round _dispersion;
INFO_3("Objective Watch: barrage in %1s, %2 rnd, %3m dispersion",_eta,_rounds,_disp);
