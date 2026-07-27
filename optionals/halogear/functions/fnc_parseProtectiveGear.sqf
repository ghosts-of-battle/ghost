#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_parseProtectiveGear

Description:
    Builds the list of classes that count as an air supply and publishes it to
    every client as GVAR(protectiveGear). Sources, in order:

      1. the comma-separated GVAR(missionConfiguredGear) CBA setting, so a
         mission can whitelist gear from mods this addon knows nothing about;
      2. every CfgVehicles, CfgWeapons and CfgGlasses class whose config sets
         GVAR(rebreather) = 1.

    Server only, run once at postInit.

Parameters:
    None.

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith {};

// mission-supplied whitelist
private _gear = ((GVAR(missionConfiguredGear) splitString ",") apply {trim _x}) select {_x != ""};

// config-tagged classes
{
    private _cfg = configFile >> _x;
    {
        if ((getNumber (_x >> QUOTE(GVAR(rebreather)))) == 1) then {
            _gear pushBackUnique (configName _x);
        };
    } forEach ("true" configClasses _cfg);
} forEach ["CfgVehicles", "CfgWeapons"];

// CfgGlasses nests one level deeper than the other two
{
    if ((getNumber (configFile >> "CfgGlasses" >> _x >> QUOTE(GVAR(rebreather)))) == 1) then {
        _gear pushBackUnique _x;
    };
} forEach ([configFile >> "CfgGlasses"] call BIS_fnc_getCfgSubClasses);

missionNamespace setVariable [QGVAR(protectiveGear), _gear, true];
TRACE_1("protective gear registered",count _gear);
