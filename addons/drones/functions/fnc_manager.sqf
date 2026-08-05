#include "script_component.hpp"
/*
 * Author: Ghost
 * Per-controller trickle-spawn manager (CBA PFH). Each tick it spawns AT MOST one
 * group, choosing the type furthest under its cap, and only if the shared airframe
 * ceiling allows it. This spreads the load across intervals instead of a spike.
 *
 * Arguments (CBA PFH):
 * 0: [logic] <ARRAY>
 * 1: PFH handle <NUMBER>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_args", "_handle"];
_args params ["_logic"];

if (isNull _logic) exitWith {
    [_handle] call CBA_fnc_removePerFrameHandler;
};

private _cfg = _logic getVariable [QGVAR(cfg), objNull];
private _typeCfg = _logic getVariable [QGVAR(typeCfg), objNull];
if (isNil "_cfg" || {isNil "_typeCfg"}) exitWith {};
if ((_cfg get "markers") isEqualTo []) exitWith {};

// Build the list of types currently under their cap, tagged with their deficit.
private _eligible = [];
{
    private _type = _x;
    (_typeCfg get _type) params ["_classes", "_cap", "", "", ""];
    if (_classes isEqualTo [] || {_cap <= 0}) then { continue };

    private _current = {
        (_x getVariable [QGVAR(logic), objNull]) isEqualTo _logic &&
        {(_x getVariable [QGVAR(dtype), ""]) isEqualTo _type}
    } count GVAR(fleet);

    if (_current < _cap) then {
        _eligible pushBack [_cap - _current, _type];
    };
} forEach keys _typeCfg;

if (_eligible isEqualTo []) exitWith {};

// Largest deficit first -> fair fill across types.
_eligible sort false;
private _type = (_eligible select 0) select 1;

(_typeCfg get _type) params ["_classes", "_cap", "_gs", "_gc", "_tier"];

// Decide airframe count for this group (only anti_armor / anti_personnel ever roll a group).
private _n = 1;
if (_gc > 0 && {(random 100) < _gc}) then { _n = _gs max 1 };

// Ceiling gate. If it's full, skip this tick entirely (never partially spawn).
if !([_n] call FUNC(reserveAirframes)) exitWith {};

[_logic, _type, _classes, _n, _tier] call FUNC(spawnPatrol);
