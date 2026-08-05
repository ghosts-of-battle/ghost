#include "script_component.hpp"
/*
 * Author: Ghost
 * Scheduler tick (CBA PFH, one per placed module). When the interval elapses it picks a
 * target building near a player inside this module's TAOR and sends a drone into it.
 *
 * State lives on the logic, so several launch sites run independently.
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

if (time < (_logic getVariable [QGVAR(nextFire), 1e11])) exitWith {};
_logic setVariable [QGVAR(nextFire), time + (_cfg get "interval")];

private _tgt = [_cfg] call FUNC(pickTarget);
if (_tgt isEqualTo []) exitWith {};

// Single or swarm. Either class may be blank, which is how a site is told to
// only ever send one kind - and if BOTH are blank there is nothing to send, so
// the roll is settled against what is actually available rather than against the
// percentage alone.
private _single = _cfg get "droneClass";
private _swarm = _cfg get "swarmClass";

private _useSwarm = switch (true) do {
    case (_swarm isEqualTo ""): { false };
    case (_single isEqualTo ""): { true };
    default { random 100 < (_cfg get "swarmChance") };
};

private _class = [_single, _swarm] select _useSwarm;
if (_class isEqualTo "") exitWith {};

private _count = [1, _cfg get "swarmCount"] select _useSwarm;

[_tgt, _class, _cfg get "spawnDist", _cfg get "altitude", _count] call FUNC(kamikaze);
