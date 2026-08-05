#include "script_component.hpp"
/*
 * Author: Ghost
 * Debug heartbeat (CBA PFH, server). Every DEBUG_INTERVAL seconds, while the module's
 * Debug attribute is ticked, reports its state to every client's system chat: how many
 * enemy players qualify as targets, how many airframes it currently owns against its
 * caps, and how long until the next spawn.
 *
 * Broadcast rather than printed locally because the manager only runs on the server.
 * Removes itself when the module logic is deleted.
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
if (!(_cfg get "debug")) exitWith {};

private _typeCfg = _logic getVariable [QGVAR(typeCfg), objNull];
private _side = _cfg get "side";

// same target filter the manager uses, so the numbers explain its behaviour
private _targets = (allPlayers - (entities "HeadlessClient_F")) select {
    alive _x && {(_side getFriend (side group _x)) < 0.6}
};
private _taor = _cfg get "taor";
private _inTaor = _targets;
if (_taor isNotEqualTo []) then {
    _inTaor = _targets select {private _p = _x; (_taor findIf {_p inArea _x}) != -1};
};

// live airframes this module owns, per type, against each type's cap
private _fleet = missionNamespace getVariable ["ghost_drones_fleet", []];
private _mine = _fleet select {
    (_x getVariable ["ghost_drones_logic", objNull]) isEqualTo _logic
};

private _perType = [];
{
    private _type = _x;   // the inner count below rebinds _x to a fleet member
    (_typeCfg get _type) params ["_classes", "_cap", "_prio", ""];
    if (_classes isEqualTo [] || {_cap <= 0} || {_prio <= 0}) then { continue };
    private _cur = {(_x getVariable ["ghost_drones_dtype", ""]) isEqualTo _type} count _mine;
    _perType pushBack format ["%1 %2/%3", _type, _cur, _cap];
} forEach keys _typeCfg;

private _msg = format [
    "[Ambient Drones] %1 | next %2s | targets %3%4 | fleet %5 | %6",
    _side,
    round (((_logic getVariable [QGVAR(nextAt), time]) - time) max 0),
    count _inTaor,
    if (_taor isEqualTo []) then {""} else {format ["/%1 in TAOR", count _targets]},
    count _mine,
    if (_perType isEqualTo []) then {"NO ELIGIBLE TYPE (check classes/caps/priorities)"} else {_perType joinString ", "}
];

[_msg] remoteExec ["systemChat", 0];
