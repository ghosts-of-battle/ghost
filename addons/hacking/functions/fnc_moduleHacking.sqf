#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_moduleHacking

Description:
    Reads the Hacking Settings module onto globals every machine can see. The
    module is optional: FUNC(hackSetting) returns the same defaults when none is
    placed, so nothing has to test whether it exists.

Parameters (module standard): logic, units, activated

Author:
    Ghost
---------------------------------------------------------------------------- */
params [["_logic", objNull, [objNull]], ["_units", [], [[]]], ["_activated", true, [true]]];

if (!_activated || {isNull _logic}) exitWith {};

{
    _x params ["_key", "_default"];
    missionNamespace setVariable [
        format [QGVAR(cfg_%1), _key],
        _logic getVariable [_key, _default],
        true
    ];
} forEach [
    ["hack_time", HACK_TIME_DEF],
    ["hack_range", HACK_RANGE_DEF],
    ["hack_cooldown", HACK_COOLDOWN_DEF],
    ["abandon_timeout", HACK_ABANDON_DEF],
    ["local_picture_radius", HACK_PICTURE_DEF],
    ["emitter_hack_response_chance", HACK_RESPONSE_DEF],
    ["intel_lifetime", INTEL_LIFETIME_DEF],
    ["intel_alpha", INTEL_ALPHA_DEF],
    ["intel_fade", false],
    ["combat_interrupts", false],
    ["circle_radii", INTEL_RADII_DEF],
    ["circle_offset", INTEL_OFFSET_DEF]
];

private _t = [QGVAR(cfg_hack_time)] call FUNC(hackSetting);
private _r = [QGVAR(cfg_hack_range)] call FUNC(hackSetting);
INFO_2("Hacking: settings module online - %1s hack, %2m range",_t,_r);
