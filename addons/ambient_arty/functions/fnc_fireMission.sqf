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

// The shells themselves live in ghost_common now, so the objective barrage and
// this drip cannot drift apart. Window 0 keeps the original fixed round gap.
[_tgt, _rounds, _spread, _shell, 0] call EFUNC(common,fireBarrage);
