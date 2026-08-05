#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_counter_battery_fnc_moduleController

Description:
    Registers one counter-battery radar. Place two and both sides can hunt each
    other; place one and only the side you name gets hunted.

    Every module shares ONE sweep and ONE Fired handler per gun, however many are
    placed - the handler simply offers each shot to every registered battery in
    turn. Guns are few and handlers are not free, so there is no reason for each
    module to hook its own.

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

private _sideStr = toUpper (_logic getVariable ["hunted_side", "ANY"]);
private _side = switch (_sideStr) do {
    case "WEST": { west };
    case "EAST": { east };
    case "GUER": { resistance };
    // Anything else means every gun on the map is fair game.
    default { sideUnknown };
};

private _cfg = createHashMapFromArray [
    ["side", _side],
    ["shots", round ((_logic getVariable ["shots_to_detect", CB_SHOTS_DEF]) max 1)],
    ["chance", _logic getVariable ["detect_chance", CB_CHANCE_DEF]],
    ["delay", (_logic getVariable ["delay", CB_DELAY_DEF]) max 0],
    ["accuracy", (_logic getVariable ["accuracy", CB_ACCURACY_DEF]) max 0],
    ["rounds", round ((_logic getVariable ["rounds", CB_ROUNDS_DEF]) max 1)],
    ["spread", _logic getVariable ["spread", CB_SPREAD_DEF]],
    ["shell", _logic getVariable ["shell", CB_SHELL_DEF]],
    ["window", (_logic getVariable ["window", CB_WINDOW_DEF]) max 0],
    ["cooldown", (_logic getVariable ["cooldown", CB_COOLDOWN_DEF]) max 0],
    ["safeRadius", (_logic getVariable ["safe_radius", CB_SAFE_DEF]) max 0],
    ["dedupe", (_logic getVariable ["dedupe_radius", CB_DEDUPE_DEF]) max 0],
    ["displace", _logic getVariable ["displace", true]],
    ["displaceRadius", (_logic getVariable ["displace_radius", CB_DISPLACE_DEF]) max 0],
    ["warn", _logic getVariable ["warn", true]],
    ["debug", _logic getVariable ["debug", false]]
];

GVAR(batteries) pushBack _cfg;

// Extra classnames are pooled across every module: one sweep serves them all, so
// it has to recognise everything any of them cares about.
{
    GVAR(extraClasses) pushBackUnique _x;
} forEach ((_logic getVariable ["extra_classes", ""]) splitString ", ");

// Arm EVERY machine, not just this one. A Fired handler only runs where the gun
// is local, and a player-crewed mortar is local to that player - so a handler
// added only on the server would miss exactly the case this feature exists for.
// Each machine hooks every gun it can see; the one that owns it is the one whose
// handler fires, so there is still only ever one report per shot.
//
// JIP, with a fixed id so re-arming replaces the stored message rather than
// stacking another copy for every module placed.
[QGVAR(arm), [GVAR(extraClasses)], QGVAR(armJIP)] call CBA_fnc_globalEventJIP;

diag_log text format [
    "[ghost_counter_battery] radar online: hunting %1, %2 shots to fix, %3%4 chance, %5s delay, %6m error, %7 rnd",
    ["any side", str _side] select (_side isNotEqualTo sideUnknown),
    _cfg get "shots", _cfg get "chance", "%", _cfg get "delay",
    _cfg get "accuracy", _cfg get "rounds"
];
