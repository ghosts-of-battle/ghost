#include "script_component.hpp"
/*
 * Author: Ghost
 * Glide-bomb frequency loop (CBA PFH, fired every "Glide-Bomb Frequency" seconds).
 * Picks a random TAOR building and rains a side-owned glide bomb on it.
 *
 * Arguments (CBA PFH): 0: [logic], 1: handle
 * Return Value: None
 *
 * Public: No
 */

params ["_args", "_handle"];
_args params ["_logic"];

if (isNull _logic) exitWith { [_handle] call CBA_fnc_removePerFrameHandler };

private _cfg = _logic getVariable [QGVAR(cfg), objNull];
if (isNil "_cfg") exitWith {};

private _gbClass = _cfg get "gbClass";
private _gbFreq  = _cfg get "gbFreq";
if (_gbClass isEqualTo "" || {_gbFreq <= 0}) exitWith { [_handle] call CBA_fnc_removePerFrameHandler };

// 55% a single bomb, 45% a 2-3 bomb salvo 3s apart (each re-rolls its own building).
private _n = if (random 1 < 0.55) then { 1 } else { 2 + floor (random 2) };
for "_i" from 0 to (_n - 1) do {
    [{
        params ["_logic"];
        if (isNull _logic) exitWith {};
        private _cfg = _logic getVariable [QGVAR(cfg), objNull];
        if (isNil "_cfg") exitWith {};
        private _gbClass = _cfg get "gbClass";
        if (_gbClass isEqualTo "") exitWith {};
        ([_cfg get "taor"] call FUNC(pickBuilding)) params ["_bld", ["_tgt", []]];
        if (_tgt isEqualTo []) exitWith {};
        [_tgt, _cfg get "side", _gbClass, _cfg get "bearing", _cfg get "distance", _cfg get "gbAlt"] call FUNC(glideBomb);
    }, [_logic], _i * 3] call CBA_fnc_waitAndExecute;
};
