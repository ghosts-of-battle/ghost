#include "script_component.hpp"
/*
 * Author: Ghost
 * Register an externally-created group into the shared fleet so the reaper manages
 * it (watchdog + lifetime + ceiling accounting + optional debug marker). Used by
 * spawnPatrol and by the EW addon's response dispatch. Caller has already passed
 * the ceiling gate and crewed/sided the airframes.
 *
 * Arguments:
 * 0: Group <GROUP>
 * 1: Owning logic (for per-type cap counting; may be any object) <OBJECT>
 * 2: Type key <STRING>
 * 3: Live airframes <ARRAY>
 * 4: Lifetime minutes (0 = immortal) <NUMBER> (default 0)
 * 5: Debug marker <BOOL> (default false)
 * 6: Side (marker color) <SIDE> (default east)
 *
 * Return Value:
 * None
 *
 * Public: Yes
 */

params [
    ["_grp", grpNull, [grpNull]],
    ["_logic", objNull, [objNull]],
    ["_type", "", [""]],
    ["_vehicles", [], [[]]],
    ["_lifeMin", 0, [0]],
    ["_debug", false, [false]],
    ["_side", east, [east]],
    ["_startNow", true, [true]]
];

if (isNull _grp) exitWith {};
if (isNil QGVAR(fleet)) then { GVAR(fleet) = [] };

// _startNow true -> lifetime counts from now (drones spawned at the action).
// _startNow false -> deferred: the reaper starts the clock once the group reaches
// its objective anchor (patrol drones that transit in first).
private _dieAt = 0;
if (_startNow && {_lifeMin > 0}) then { _dieAt = time + (_lifeMin * 60) + (random LIFETIME_JITTER) };

_grp setVariable [QGVAR(logic), _logic];
_grp setVariable [QGVAR(dtype), _type];
_grp setVariable [QGVAR(vehicles), _vehicles];
_grp setVariable [QGVAR(lifeMin), _lifeMin];
_grp setVariable [QGVAR(dieAt), _dieAt];
_grp setVariable [QGVAR(rtb), false];

GVAR(fleet) pushBack _grp;

if (_debug) then { [_grp, _side, _type] call FUNC(debugMarker) };
