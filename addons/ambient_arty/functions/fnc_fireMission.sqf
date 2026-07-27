#include "script_component.hpp"
/*
 * Author: Ghost
 * Rain a spread of shells onto a target point. Each round spawns high above a scattered
 * point and falls straight down, detonating on impact.
 *
 * Arguments:
 * 0: Target position AGL <ARRAY>
 * 1: Rounds <NUMBER>
 * 2: Spread radius (m) <NUMBER>
 * 3: Shell ammo class <STRING>
 *
 * Return Value: None
 *
 * Public: No
 */

if (!isServer) exitWith {};

params [["_tgt", [], [[]]], ["_rounds", 3, [0]], ["_spread", 50, [0]], ["_shell", "Sh_155mm_AMOS", [""]]];
if (_tgt isEqualTo [] || {_shell isEqualTo ""}) exitWith {};

diag_log text format ["[Ghost] Ambient Artillery: firing %1x %2 -> grid %3 (%4)", round _rounds, _shell, mapGridPosition _tgt, _tgt];

for "_i" from 0 to ((round _rounds) - 1) do {
    [{
        params ["_tgt", "_spread", "_shell"];
        private _a = random 360;
        private _r = sqrt (random 1) * _spread;
        private _impact = [(_tgt select 0) + _r * sin _a, (_tgt select 1) + _r * cos _a];
        private _sp = [_impact select 0, _impact select 1, SHELL_ALT];
        private _round = createVehicle [_shell, _sp, [], 0, "CAN_COLLIDE"];
        if (isNull _round) exitWith {};
        _round setPosATL _sp;
        _round setVectorDirAndUp [[0, 0, -1], [0, 1, 0]];
        _round setVelocity [0, 0, -SHELL_SPEED];
    }, [_tgt, _spread, _shell], _i * ROUND_GAP] call CBA_fnc_waitAndExecute;
};
