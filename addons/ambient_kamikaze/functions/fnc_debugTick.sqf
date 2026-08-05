#include "script_component.hpp"
/*
 * Author: Ghost
 * Debug heartbeat (CBA PFH, one per placed module). Every DEBUG_INTERVAL seconds, while
 * the module's Debug attribute is on, reports its state to every client's system chat so
 * you can see whether the site is counting down, why it is or is not launching, and when
 * the next strike is due.
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

// Both classes are reported, because a site that silently never swarms is
// almost always a swarm class that is blank or misspelled - and the strike it
// sends instead looks perfectly normal.
private _report = {
    params ["_c", "_label"];
    if (_c isEqualTo "") exitWith { format ["%1 none", _label] };
    format ["%1 %2%3", _label, _c,
        ["  <-- NOT A VALID CLASS", ""] select (isClass (configFile >> "CfgVehicles" >> _c))];
};

private _class = format ["%1 | %2 x%3 @%4%5",
    [_cfg get "droneClass", "single"] call _report,
    [_cfg get "swarmClass", "swarm"] call _report,
    _cfg get "swarmCount", _cfg get "swarmChance", "%"];
private _classOk = true;

private _msg = format [
    "[Ambient Kamikaze] next %1s | players %2%3 | %4 | %5%6 | ingress %7m at %8m",
    round (((_logic getVariable [QGVAR(nextFire), time]) - time) max 0),
    count _inTaor,
    if (_taor isEqualTo []) then {""} else {format ["/%1 in TAOR", count _players]},
    ["NO TARGET", "target ok"] select _haveTarget,
    _class,
    ["  <-- NOT A VALID CLASS", ""] select _classOk,
    _cfg get "spawnDist",
    _cfg get "altitude"
];

[_msg] remoteExec ["systemChat", 0];
