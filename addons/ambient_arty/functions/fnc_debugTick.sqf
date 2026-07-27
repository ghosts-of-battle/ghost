#include "script_component.hpp"
/*
 * Author: Ghost
 * Debug heartbeat (CBA PFH, one per placed module). Every DEBUG_INTERVAL seconds, while
 * the module's Debug attribute is on, reports its state to every client's system chat so
 * you can see whether the battery is counting down, why it is or is not firing, and when
 * the next mission is due.
 *
 * Broadcast rather than printed locally because the scheduler only exists on the server.
 *
 * Arguments (CBA PFH): 0: [logic], 1: handle
 * Return Value: None
 *
 * Public: No
 */

params ["_args", "_handle"];
_args params ["_logic"];

if (isNull _logic) exitWith { [_handle] call CBA_fnc_removePerFrameHandler };

private _cfg = _logic getVariable [QGVAR(cfg), nil];
if (isNil "_cfg") exitWith {};
if (!(_cfg get "debug")) exitWith {};

// same player filter the scheduler uses, so the numbers explain its behaviour
private _players = allPlayers select {alive _x && {!(_x isKindOf "HeadlessClient_F")}};
private _taor = _cfg get "taor";
private _inTaor = _players;
if (_taor isNotEqualTo []) then {
    _inTaor = _players select {private _p = _x; (_taor findIf {_p inArea _x}) != -1};
};

// runs the real target search, so this reports what the scheduler would actually find
private _haveTarget = ([_cfg] call FUNC(pickTarget)) isNotEqualTo [];

private _msg = format [
    "[Ambient Arty] next %1s | players %2%3 | %4 | %5 rnd %6m spread | %7",
    round (((_logic getVariable [QGVAR(nextFire), time]) - time) max 0),
    count _inTaor,
    if (_taor isEqualTo []) then {""} else {format ["/%1 in TAOR", count _players]},
    ["NO TARGET", "target ok"] select _haveTarget,
    _cfg get "rounds",
    _cfg get "spread",
    _cfg get "shell"
];

[_msg] remoteExec ["systemChat", 0];
