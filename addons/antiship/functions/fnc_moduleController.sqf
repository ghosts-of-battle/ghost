#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_antiship_fnc_moduleController

Description:
    Registers one coastal battery. Several can run at once, each with its own
    schedule, search area and target list.

    Launchers synchronised to the module are where the missiles come from, which
    is the point of syncing them: a battery whose launchers can be destroyed is a
    target, and a battery that fires from an invisible logic is weather. Without
    any, it falls back to the module's own position so it still works.

Parameters (module standard): logic, units, activated

Author:
    Ghost
---------------------------------------------------------------------------- */
if (hasInterface && !isServer) exitWith {};

params [
    ["_logic", objNull, [objNull]],
    ["_units", [], [[]]],
    ["_activated", true, [true]]
];

if (!_activated) exitWith {};
if (isNull _logic) exitWith {};

private _interval = (_logic getVariable ["interval", AS_INTERVAL_DEF]) max 1;

private _cfg = createHashMapFromArray [
    ["launchers", (synchronizedObjects _logic) select { !(_x isKindOf "Logic") }],
    ["pos", getPosATL _logic],
    ["side", side _logic],
    ["targets", ((_logic getVariable ["target_classes", AS_TARGETS_DEF]) splitString ", ")
        select { _x isNotEqualTo "" }],
    ["range", (_logic getVariable ["search_range", AS_SEARCH_DEF]) max 1],
    ["speed", (_logic getVariable ["missile_speed", AS_SPEED_DEF]) max 50],
    ["cruiseAlt", (_logic getVariable ["cruise_alt", AS_CRUISE_ALT_DEF]) max 5],
    ["terminal", (_logic getVariable ["terminal_range", AS_TERMINAL_DEF]) max 50],
    ["interceptable", _logic getVariable ["interceptable", true]],
    ["interval", _interval],
    ["debug", _logic getVariable ["debug", false]]
];

_logic setVariable [QGVAR(cfg), _cfg];
_logic setVariable [QGVAR(nextFire), CBA_missionTime + _interval];

[FUNC(tick), AS_TICK, _logic] call CBA_fnc_addPerFrameHandler;

diag_log text format [
    "[ghost_antiship] battery online: every %1s, %2 launcher(s), %3m search, %4 m/s",
    _interval, count (_cfg get "launchers"), _cfg get "range", _cfg get "speed"
];
