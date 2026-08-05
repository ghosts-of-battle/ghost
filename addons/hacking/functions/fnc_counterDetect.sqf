#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_counterDetect

Description:
    Hacking an EW EMITTER is not free: it may trip the zone response and send
    drones to your grid. Plain comm towers never do this - the risk is the price
    of hacking the enemy's own electronic warfare kit.

    Reuses the electronic_war_zones dispatch path, so it inherits that addon's
    per-transmitter cooldown and the shared airframe ceiling. Silently absent
    when ew-zones is not loaded.

Parameters:
    _target : OBJECT - the hacked object.
    _unit   : OBJECT - the hacker.

Returns:
    BOOL - true if a response was requested.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_target", "_unit"];

if (isNil "ghost_electronic_war_zones_jammers") exitWith { false };

// Only emitters, and only ones this addon actually registered.
private _isEmitter = (ghost_electronic_war_zones_jammers findIf {
    (_x param [0, objNull]) isEqualTo _target
}) > -1;
if (!_isEmitter) exitWith { false };

private _chance = [QGVAR(cfg_emitter_hack_response_chance)] call FUNC(hackSetting);
if (random 100 >= _chance) exitWith { false };

["Hack", "Intrusion detected - expect a response.", [1, 0.3, 0.3, 1]] call EFUNC(notify,notify);
[QEGVAR(electronic_war_zones,detection), [_unit, getPosASL _unit]] call CBA_fnc_serverEvent;
true
