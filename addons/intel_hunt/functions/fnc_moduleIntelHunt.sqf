#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_intel_hunt_fnc_moduleIntelHunt

Description:
    Sets the hunt up from the module: reads the attributes, orders the synced
    targets, and starts watching for their deaths.

    Every target is flagged ALIVE_profileIgnore. That is inert without ALiVE, and
    with it stops the target being virtualised - which matters because the whole
    feature depends on holding a real object reference for its position and its
    Killed handler.

Parameters (module standard): logic, units, activated

Author:
    Ghost
---------------------------------------------------------------------------- */
if (hasInterface && !isServer) exitWith {};

params [["_logic", objNull, [objNull]], ["_units", [], [[]]], ["_activated", true, [true]]];

if (!_activated || {isNull _logic}) exitWith {};

private _targets = synchronizedObjects _logic;
if (_targets isEqualTo []) exitWith {
    diag_log text "[ghost_intel_hunt] module placed with nothing synced - no hunt started";
};

// Nearest to the module first (D16).
private _mpos = getPosATL _logic;
private _ranked = _targets apply { [_mpos distance _x, _x] };
_ranked sort true;
_targets = _ranked apply { _x select 1 };

{
    private _t = _x;
    _t setVariable ["ALIVE_profileIgnore", true, true];
    if (_t isKindOf "CAManBase") then {
        (group _t) setVariable ["ALIVE_profileIgnore", true, true];
    };
    _t addEventHandler ["Killed", { (_this select 0) call FUNC(targetDown) }];
} forEach _targets;

GVAR(logic) = _logic;
GVAR(targets) = _targets;
GVAR(index) = 0;
GVAR(tier) = 0;
GVAR(count) = 0;
GVAR(complete) = false;

GVAR(required) = _logic getVariable ["intel_required", IH_REQUIRED_DEF];
GVAR(radii) = ((_logic getVariable ["hint_radii", IH_RADII_DEF]) splitString ", ")
    apply { parseNumber _x };
if (GVAR(radii) isEqualTo []) then { GVAR(radii) = [3000, 2000, 1000] };
GVAR(markerDuration) = _logic getVariable ["marker_duration", IH_MARKER_DUR_DEF];
GVAR(markerAlpha) = _logic getVariable ["marker_alpha", IH_MARKER_ALPHA_DEF];
GVAR(dropChance) = _logic getVariable ["drop_chance", IH_DROP_CHANCE_DEF];
GVAR(fade) = _logic getVariable ["intel_fade", false];
GVAR(debug) = _logic getVariable ["debug", false];

// Side that benefits: whoever is hunting, taken from the first player found.
GVAR(side) = west;
if (allPlayers isNotEqualTo []) then { GVAR(side) = side group (allPlayers select 0) };

publicVariable QGVAR(required);
missionNamespace setVariable [QGVAR(active), true, true];

["CAManBase", "killed", { _this call FUNC(onKilled) }] call CBA_fnc_addClassEventHandler;

if (GVAR(debug)) then {
    [FUNC(debugTick), IH_DEBUG_INTERVAL, []] call CBA_fnc_addPerFrameHandler;
};

INFO_2("Intel Hunt: %1 target(s), %2 intel per processing",count _targets,GVAR(required));
