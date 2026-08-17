#include "script_component.hpp"
/*
 * Author: YonV
 * Whose drone this is and what sort of airframe it is - the two things a
 * callsign and a model name do not tell you.
 *
 * One list carries the section's own drones, other groups' drones and any
 * sensor the crew can reach, so "Alpha 1-2:1" on its own does not say whether
 * selecting it puts you behind a friendly quadcopter or somebody's AA radar.
 *
 * Arguments:
 * 0: The drone <OBJECT>
 *
 * Return Value:
 * Faction and airframe, ready to append to a list row <STRING>
 *
 * Example:
 * [_uav] call ghost_ctab_devices_fnc_droneTag
 */

params [["_drone", objNull, [objNull]]];

if (isNull _drone) exitWith {""};

// The RUNTIME faction, not the config one: a re-crewed airframe still reads as
// its builder's faction in config, and who is flying it now is the part that
// decides whether you should be looking through it.
private _faction = faction _drone;
private _label = getText (configFile >> "CfgFactionClasses" >> _faction >> "displayName");
if (_label isEqualTo "") then {_label = _faction};
if (_label isEqualTo "") then {_label = str side _drone};

// StaticWeapon is tested BEFORE LandVehicle - it inherits from it, so the
// looser test on its own would call every mast and radar a ground vehicle.
private _type = switch (true) do {
    case (_drone isKindOf "Helicopter"): {"Rotary"};
    case (_drone isKindOf "Plane"): {"Fixed-wing"};
    case (_drone isKindOf "Ship"): {"Surface"};
    case (_drone isKindOf "StaticWeapon"): {"Static"};
    case (_drone isKindOf "LandVehicle"): {"Ground"};
    default {"Sensor"};
};

format ["%1 / %2", _label, _type]
