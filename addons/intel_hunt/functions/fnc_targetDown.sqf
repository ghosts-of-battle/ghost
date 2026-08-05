#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_intel_hunt_fnc_targetDown

Description:
    Current target killed (any cause - D17). Announces it, resets the tier so the
    next target starts wide again, and advances the hunt. When the list is
    exhausted the hunt closes and processing stops working.

Parameters:
    _target : OBJECT - what died.

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith {};

params ["_target"];

if (GVAR(complete)) exitWith {};

private _current = GVAR(targets) param [GVAR(index), objNull];
// A later target dying early is fine - the hunt skips it when it gets there.
if (_target isNotEqualTo _current) exitWith {};

[QGVAR(message), ["Intel Hunt", "Target neutralised.", GVAR(side)]] call CBA_fnc_globalEvent;

GVAR(tier) = 0;

// Skip anything already dead further down the list.
private _next = GVAR(index) + 1;
while {_next < count GVAR(targets) && {!alive (GVAR(targets) select _next)}} do {
    _next = _next + 1;
};
GVAR(index) = _next;

if (GVAR(index) >= count GVAR(targets)) then {
    GVAR(complete) = true;
    missionNamespace setVariable [QGVAR(complete), true, true];
    [QGVAR(message), ["Intel Hunt", "All targets accounted for. Hunt closed.", GVAR(side)]] call CBA_fnc_globalEvent;
    INFO("Intel Hunt: complete");
};
