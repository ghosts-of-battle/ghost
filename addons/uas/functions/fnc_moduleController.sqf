#include "script_component.hpp"
/*
 * Author: Ghost
 * Reads the module and arms enemy drones. PLACING THE MODULE IS THE ENABLE - with no
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
    WARNING("a second Ghost - Enemy Drones module was placed - ignored, one module runs this system");
};
GVAR(moduleUp) = true;

// Own ground unless the module says otherwise - matching the module's own
// default, and the no-module case.
GVAR(patrolOver) = _logic getVariable ["patrolOver", 1];
GVAR(baseMax) = _logic getVariable ["baseMax", 8];
GVAR(reducedMax) = _logic getVariable ["reducedMax", 3];
GVAR(windowMin) = _logic getVariable ["windowMin", 600];
GVAR(windowMax) = _logic getVariable ["windowMax", 1800];
GVAR(cachesPerSide) = _logic getVariable ["cachesPerSide", 3];

// Per-side airframe overrides - FUNC(topUp) draws from these before it
// asks FUNC(factionUav). Only real classes survive the parse; an entry of
// typos falls back to the faction scan rather than to no drones at all.
GVAR(uavOverride) = createHashMap;
{
    _x params ["_side", "_attr"];
    private _list = ((_logic getVariable [_attr, ""]) splitString " ,")
        select { _x isNotEqualTo "" && {isClass (configFile >> "CfgVehicles" >> _x)} };
    if (_list isNotEqualTo []) then {
        GVAR(uavOverride) set [str _side, _list];
    };
} forEach [[west, "uavWest"], [east, "uavEast"], [independent, "uavGuer"]];

// Nothing starts until the adapter says ALiVE is up, because every WHERE this
// system uses is read from it. Both paths are covered: a module is normally
// placed long before ALiVE finishes initialising, but one armed afterwards
// would otherwise wait forever on an event that has already fired.
if (EGVAR(adapter_alive,ready)) exitWith {
    [] call FUNC(start);
};

[QEGVAR(adapter_alive,ready), { [] call FUNC(start) }] call CBA_fnc_addEventHandler;
