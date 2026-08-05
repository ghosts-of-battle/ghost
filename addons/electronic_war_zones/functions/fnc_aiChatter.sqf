#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_electronic_war_zones_fnc_aiChatter

Description:
    Makes AI transmit, so the direction-finding layer has something to hunt when
    no player is on the radio. Until now only human key-ups fed detection, which
    meant a map full of enemy radios was electronically silent and the EW
    response only ever chased players.

    Concept only from RadioChatter-style systems - no ported code, and no
    dependency on any radio mod: an AI "transmission" is a flag on a unit plus
    the same detection event a human key-up raises. Everything downstream (side
    filter, per-transmitter cooldown, detector-in-range test, dispatch) is the
    existing path in FUNC(onDetection), so AI and human traffic cannot diverge.

    Only fires near players: a transmission nobody could plausibly be listening
    for is wasted work.

Parameters (CBA PFH): 0: args, 1: handle

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith {};

if !(GVAR(aiChatter)) exitWith {};
if (isNil QGVAR(huntedSide)) exitWith {};

private _players = allPlayers select { alive _x };
if (_players isEqualTo []) exitWith {};

// Candidates: living AI of the hunted side, near someone, not already keyed up.
private _candidates = [];
{
    private _unit = _x;
    if (!alive _unit || {isPlayer _unit}) then { continue };
    if (side (group _unit) isNotEqualTo GVAR(huntedSide)) then { continue };
    if (_unit getVariable [QGVAR(transmitting), false]) then { continue };

    private _pos = getPosASL _unit;
    if ((_players findIf { (getPosASL _x) distance2D _pos <= AI_CHATTER_RANGE }) < 0) then { continue };

    _candidates pushBack _unit;
} forEach allUnits;

if (_candidates isEqualTo []) exitWith {};

private _talker = selectRandom _candidates;
private _duration = AI_CHATTER_MIN + random (AI_CHATTER_MAX - AI_CHATTER_MIN);

// Flagged for the duration so a scanner or a future spectrum feature can see a
// live transmitter, not just the instant it started.
_talker setVariable [QGVAR(transmitting), true, true];
[{
    params ["_talker"];
    if (!isNull _talker) then { _talker setVariable [QGVAR(transmitting), false, true] };
}, [_talker], _duration] call CBA_fnc_waitAndExecute;

// AI count as long-range sets, so they are always worth hunting - the same
// assumption the exempt-radio list makes for players carrying squad radios.
[_talker, getPosASL _talker] call FUNC(onDetection);

TRACE_2("AI chatter",typeOf _talker,_duration);
