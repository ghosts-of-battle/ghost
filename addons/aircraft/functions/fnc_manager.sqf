#include "script_component.hpp"
/*
 * Author: Ghost
 * Per-type launch tick (CBA PFH, one instance per airframe type, firing on that
 * type's own frequency). Launches one airframe of the type if it is under its cap
 * and the shared airframe ceiling allows it.
 *
 * Arguments (CBA PFH): 0: [logic, type], 1: handle
 * Return Value: None
 *
 * Public: No
 */

params ["_args", "_handle"];
_args params ["_logic", "_type"];

if (isNull _logic) exitWith { [_handle] call CBA_fnc_removePerFrameHandler };
if (isNil QEGVAR(drones,fleet)) exitWith {};

private _cfg = _logic getVariable [QGVAR(cfg), objNull];
if (isNil "_cfg") exitWith {};

(_cfg get _type) params ["_classes", "_cap"];
if (_classes isEqualTo [] || {_cap <= 0}) exitWith { [_handle] call CBA_fnc_removePerFrameHandler };

// Already at this type's cap? wait for the next tick.
private _cur = {
    (_x getVariable [QEGVAR(drones,logic), objNull]) isEqualTo _logic &&
    {(_x getVariable [QEGVAR(drones,dtype), ""]) isEqualTo _type}
} count EGVAR(drones,fleet);
if (_cur >= _cap) exitWith {};

// 55% a single airframe, 45% a 2-3 airframe formation launched 3s apart.
// Each launch re-checks the shared ceiling, so a formation never overcommits it.
private _n = if (random 1 < 0.55) then { 1 } else { 2 + floor (random 2) };
for "_i" from 0 to (_n - 1) do {
    [{
        params ["_logic", "_type"];
        if (isNull _logic) exitWith {};
        if !([1] call EFUNC(drones,reserveAirframes)) exitWith {};
        [_logic, _type] call FUNC(spawnStrike);
    }, [_logic, _type], _i * 3] call CBA_fnc_waitAndExecute;
};
