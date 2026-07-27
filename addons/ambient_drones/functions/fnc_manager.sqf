#include "script_component.hpp"
/*
 * Author: Ghost
 * Random-window timer tick (CBA PFH). When the timer elapses it picks a random
 * enemy player, chooses a drone type by weighted priority (among types with a class
 * list and under their cap), spawns one near that player, then re-rolls the next
 * wait from the [min,max] window.
 *
 * Arguments (CBA PFH): 0: [logic], 1: handle
 *
 * Return Value: None
 *
 * Public: No
 */

params ["_args", "_handle"];
_args params ["_logic"];

if (isNull _logic) exitWith { [_handle] call CBA_fnc_removePerFrameHandler };
if (isNil "ghost_alive_drones_fleet") exitWith {};

private _cfg = _logic getVariable [QGVAR(cfg), objNull];
private _typeCfg = _logic getVariable [QGVAR(typeCfg), objNull];
if (isNil "_cfg" || {isNil "_typeCfg"}) exitWith {};

if (time < (_logic getVariable [QGVAR(nextAt), 0])) exitWith {};

// Re-roll the next wait immediately, so a skipped tick still advances the timer.
private _iMin = _cfg get "iMin";
_logic setVariable [QGVAR(nextAt), time + _iMin + random ((_cfg get "iMax") - _iMin)];

private _dbg = _cfg get "debug";
private _side = _cfg get "side";

// Enemy human players only (exclude any headless client).
private _targets = (allPlayers - (entities "HeadlessClient_F")) select {
    alive _x && {(_side getFriend (side group _x)) < 0.6}
};

// If a TAOR is set, only target players inside it.
private _taor = _cfg get "taor";
if (_taor isNotEqualTo []) then {
    _targets = _targets select {
        private _p = _x;
        (_taor findIf {_p inArea _x}) != -1
    };
};

if (_targets isEqualTo []) exitWith {
    if (_dbg) then { diag_log text format ["[ghost_ambient_drones] timer fired but no enemy players%1 - next in %2s", ([""," in TAOR"] select (_taor isNotEqualTo [])), round ((_logic getVariable [QGVAR(nextAt), time]) - time)] };
};

// Build the weighted candidate list: [type, priority, type, priority, ...].
private _weighted = [];
{
    private _type = _x;
    (_typeCfg get _type) params ["_classes", "_cap", "_prio", ""];
    if (_classes isEqualTo [] || {_cap <= 0} || {_prio <= 0}) then { continue };

    private _cur = {
        (_x getVariable ["ghost_alive_drones_logic", objNull]) isEqualTo _logic &&
        {(_x getVariable ["ghost_alive_drones_dtype", ""]) isEqualTo _type}
    } count ghost_alive_drones_fleet;
    if (_cur >= _cap) then { continue };

    _weighted pushBack _type;
    _weighted pushBack _prio;
} forEach keys _typeCfg;

if (_weighted isEqualTo []) exitWith {
    if (_dbg) then { diag_log text "[ghost_ambient_drones] timer fired but no eligible type (check classes / caps / priorities / ceiling)" };
};

private _type = selectRandomWeighted _weighted;
private _target = selectRandom _targets;
if (_dbg) then { diag_log text format ["[ghost_ambient_drones] spawning '%1' near %2", _type, name _target] };
[_logic, _target, _type] call FUNC(spawnNearPlayer);
