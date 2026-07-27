#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_nearestTower

Description:
    Nearest hackable "tower" within HACK_TOWER_RANGE: any Electronic War Zones
    emitter (from ghost_electronic_war_zones_jammers) plus any object whose class
    is in the GVAR(towerClasses) setting. Skips already-hacked and dead objects.

Parameters:
    _unit : OBJECT - the player.

Returns:
    OBJECT - nearest hackable tower, or objNull.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_unit"];

// classname-configured towers
private _classes = (GVAR(towerClasses) splitString ", ") select { _x != "" };
private _cands = [];
if (_classes isNotEqualTo []) then {
    _cands = nearestObjects [_unit, _classes, HACK_TOWER_RANGE];
};

// Electronic War Zones emitters (each entry is [obj, rEff, rFall]); optional addon.
{
    private _o = _x param [0, objNull];
    if (!isNull _o) then { _cands pushBackUnique _o };
} forEach (missionNamespace getVariable ["ghost_electronic_war_zones_jammers", []]);

private _best = objNull;
private _bestDist = HACK_TOWER_RANGE + 1;
{
    if (!isNull _x && {alive _x} && {!(_x getVariable [QGVAR(hacked), false])}) then {
        private _d = _unit distance _x;
        if (_d < _bestDist) then { _bestDist = _d; _best = _x };
    };
} forEach _cands;

_best
