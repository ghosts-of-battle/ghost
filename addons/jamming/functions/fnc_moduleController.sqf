#include "script_component.hpp"
/*
 * Author: Ghost
 * Reads the module and arms jamming. PLACING THE MODULE IS THE ENABLE - with no
 * module this system does nothing at all.
 *
 * The attributes are operation values only: how many, how often, how likely.
 * WHERE and WHO are never asked for; they come from ALiVE's commanders, their
 * TAORs and their objectives.
 *
 * Arguments:
 * 0: The module logic <OBJECT>
 * 1: Synchronised units <ARRAY>
 * 2: Activated <BOOL>
 *
 * Return Value: None
 *
 * Public: No
 */

params [["_logic", objNull, [objNull]], ["_units", [], [[]]], ["_activated", true, [true]]];

if (!_activated || {isNull _logic}) exitWith {};
if (!isServer) exitWith {};

// One module runs this system. A second would re-arm it and place everything
// twice over, so it says so in the log rather than quietly doing it.
if (GVAR(moduleUp)) exitWith {
    WARNING("a second Ghost - Jamming module was placed - ignored, one module runs this system");
};
GVAR(moduleUp) = true;

GVAR(largeRadius) = _logic getVariable ["largeRadius", 3000];
GVAR(smallRadius) = _logic getVariable ["smallRadius", 1000];
GVAR(objectiveShare) = _logic getVariable ["objectiveShare", 30];
GVAR(maxPerSide) = _logic getVariable ["maxPerSide", 8];

// EDEN CHECKBOXES ARRIVE AS 0 AND 1, NOT false AND true. Read straight into a
// GVAR and handed to `&&`, that is "Error &&: Type Number, expected Bool" -
// which is exactly what the 14:48 RPT showed 51 times from FUNC(jammerLoop)
// line 29 and once a tick from FUNC(spawnObjectiveJammers) line 105, with the
// GPS spawner dying on the spot every pass. Coerced here, once, so nothing
// downstream has to know an attribute from a variable.
private _bool = {
    params ["_v"];
    if (_v isEqualType 0) then { _v > 0 } else { _v isEqualTo true }
};

// The GPS domain. Default ON, unlike the model knobs in preInit: placing this
// module is already the deliberate act, and a jamming module that denies the
// net and the data link but silently leaves GPS alone would be the surprising
// answer, not the safe one.
GVAR(gpsEnable) = [_logic getVariable ["gpsEnable", true]] call _bool;
GVAR(gpsUplinkRadius) = _logic getVariable ["gpsUplinkRadius", 400];
GVAR(siteObjectives) = [_logic getVariable ["siteObjectives", false]] call _bool;

// Burn-through. These overwrite the preInit defaults, which are the values
// FUNC(jamFactor) falls back to on a machine the module has not reached.
//
// BROADCAST, because this file exits on !isServer and FUNC(jammerLoop) reads
// jamBurnthrough on every CLIENT to decide whether to ask ACRE for the set's
// power. Server-local, a dedicated server's players would never burn through
// anything however big their radio - the same trap ghost_reaction documents on
// its watts threshold. burnRef needs no broadcast: it is stamped into each
// zone's model at spawn and travels with the registry.
GVAR(jamBurnRef) = _logic getVariable ["burnRef", 500];
missionNamespace setVariable [
    QGVAR(jamBurnthrough), [_logic getVariable ["burnThrough", true]] call _bool, true];

// Nothing starts until the adapter says ALiVE is up, because every WHERE this
// system uses is read from it. Both paths are covered: a module is normally
// placed long before ALiVE finishes initialising, but one armed afterwards
// would otherwise wait forever on an event that has already fired.
if (EGVAR(adapter_alive,ready)) exitWith {
    [] call FUNC(start);
};

[QEGVAR(adapter_alive,ready), { [] call FUNC(start) }] call CBA_fnc_addEventHandler;
