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

GVAR(largeRadius) = _logic getVariable ["largeRadius", 900];
GVAR(smallRadius) = _logic getVariable ["smallRadius", 300];
GVAR(objectiveShare) = _logic getVariable ["objectiveShare", 30];
GVAR(maxPerSide) = _logic getVariable ["maxPerSide", 8];

// Nothing starts until the adapter says ALiVE is up, because every WHERE this
// system uses is read from it. Both paths are covered: a module is normally
// placed long before ALiVE finishes initialising, but one armed afterwards
// would otherwise wait forever on an event that has already fired.
if (EGVAR(adapter_alive,ready)) exitWith {
    [] call FUNC(start);
};

[QEGVAR(adapter_alive,ready), { [] call FUNC(start) }] call CBA_fnc_addEventHandler;
