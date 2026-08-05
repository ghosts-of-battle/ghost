#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_objective_watch_fnc_aliveBridge

Description:
    AI captures, when ALiVE is running. ALiVE raises TACOM_ORDER_COMPLETE on its
    event log when a commander finishes a capture order; this reads that log and
    turns the ones that match a watched objective into the same capture the
    players get.

    Polling rather than registering a listener: ALiVE listeners are OO-hash
    objects that need a shim to attach, and the doc allowed the poll as a
    fallback. On the same slow loop as the capture check it costs nothing, and it
    cannot break when ALiVE changes its listener internals. Seen event ids are
    remembered so a capture fires once.

    Entirely absent-safe - never started unless ALIVE_eventLog exists.

Parameters (CBA PFH): 0: logic, 1: handle

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_logic", "_handle"];

if (isNull _logic) exitWith { [_handle] call CBA_fnc_removePerFrameHandler };
if (isNil "ALIVE_eventLog") exitWith { [_handle] call CBA_fnc_removePerFrameHandler };

private _cfg = _logic getVariable [QGVAR(cfg), nil];
if (isNil "_cfg") exitWith {};

private _events = [ALIVE_eventLog, "getEventsByType", "TACOM_ORDER_COMPLETE"] call ALIVE_fnc_eventLog;
if (!(_events isEqualType []) || {_events isEqualTo []}) exitWith {};

private _seen = _logic getVariable [QGVAR(seenEvents), []];

{
    private _event = _x;
    if !(_event isEqualType []) then { continue };

    private _id = _event param [0, ""];
    if (_id in _seen) then { continue };
    _seen pushBack _id;

    private _data = _event param [4, []];
    if !(_data isEqualType []) then { continue };

    // TACOM order payloads carry the order state and the objective position.
    private _state = _data param [0, ""];
    if (!(_state isEqualType "") || {toLower _state isNotEqualTo "capture"}) then { continue };

    private _pos = _data param [1, []];
    if !(_pos isEqualType [] && {count _pos >= 2}) then { continue };

    private _sideStr = _data param [2, ""];
    if !(_sideStr isEqualType "") then { continue };
    private _side = switch (toUpper _sideStr) do {
        case "WEST": { west };
        case "EAST": { east };
        case "GUER": { resistance };
        default { sideUnknown };
    };
    if (_side isEqualTo sideUnknown) then { continue };

    // Only objectives this module actually watches.
    {
        private _watch = _x;
        if ((_watch get "pos") distance2D _pos > (_watch get "radius")) then { continue };
        if (_watch get "held") then { continue };
        _watch set ["held", true];
        [_logic, _watch, _side] call FUNC(onCaptured);
    } forEach (_logic getVariable [QGVAR(watches), []]);
} forEach _events;

// Bound the memory: only the tail can still be unseen next tick.
if (count _seen > OW_SEEN_CAP) then {
    _seen = _seen select [(count _seen) - OW_SEEN_CAP, OW_SEEN_CAP];
};
_logic setVariable [QGVAR(seenEvents), _seen];
