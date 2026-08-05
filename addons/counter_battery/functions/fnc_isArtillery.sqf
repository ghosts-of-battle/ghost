#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_counter_battery_fnc_isArtillery

Description:
    Is this vehicle a gun worth hunting?

    The test is `artilleryScanner`, the config flag Bohemia sets on everything
    that can be given a fire mission - mortars, SPGs, MLRS. That is a far better
    filter than a class list, because it is the same flag the game itself uses to
    decide what shows up in the artillery computer, so it covers mods that did
    their configs properly without anyone maintaining a list.

    Mods that did NOT set it are why the module carries an Extra Classes box.

Parameters:
    _veh     : OBJECT - candidate.
    _extra   : ARRAY  - optional extra classnames, matched by inheritance.

Returns:
    BOOL

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_veh", ["_extra", [], [[]]]];

if (isNull _veh) exitWith { false };

if (getNumber (configOf _veh >> "artilleryScanner") > 0) exitWith { true };

// Static mortars are artillery whether or not their config admits it.
if (_veh isKindOf "StaticMortar") exitWith { true };

_extra findIf { _veh isKindOf _x } > -1
