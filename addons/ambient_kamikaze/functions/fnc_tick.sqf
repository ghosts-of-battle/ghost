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

[_tgt, _cfg get "droneClass", _cfg get "spawnDist", _cfg get "altitude"] call FUNC(kamikaze);
