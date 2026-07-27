#include "script_component.hpp"
/*
 * Author: Ghost
 * Server handler for a hunted-side long-range transmission (raised by clients via
 * the QGVAR(detection) CBA event). Gates on side, per-transmitter cooldown, and a
 * detector (emitter or recon drone) being within range, then dispatches a response.
 *
 * Arguments (CBA event):
 * 0: Transmitter <OBJECT>
 * 1: Position ASL <ARRAY>
 *
 * Return Value: None
 *
 * Public: No
 */

if (!isServer) exitWith {};

params [["_unit", objNull, [objNull]], ["_pos", [], [[]]]];

if (isNull _unit) exitWith {};
if (isNil QGVAR(huntedSide)) exitWith {};
if (side (group _unit) != GVAR(huntedSide)) exitWith {};   // hunt only the configured side

if (_pos isEqualTo []) then { _pos = getPosASL _unit };

// Per-transmitter cooldown (also de-dups when several detectors hear the same key-up).
private _key = netId _unit;
private _last = GVAR(cooldowns) getOrDefault [_key, -1e9];
if (time - _last < GVAR(cooldown)) exitWith {};

// A detector - emitter or recon drone - must be within range of the transmitter.
if !([_pos] call FUNC(hasDetector)) exitWith {};

GVAR(cooldowns) set [_key, time];
[_pos] call FUNC(dispatchResponse);
