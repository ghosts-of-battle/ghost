#include "script_component.hpp"
/*
 * Author: Ghost
 * Each side's drone supply caches: real crates, in that side's own TAOR, away
 * from each other and from its objectives' centres - a cache under the guns
 * of the thing it supplies is not a target, it is scenery.
 *
 * They are deliberately NOT marked and NOT hinted here. Finding them is what
 * the intel economy is for.
 *
 * Arguments: None
 *
 * Return Value: None
 *
 * Public: No
 */

if (isNil "ghost_adapter_alive_fnc_commanders") exitWith {};

private _want = round GVAR(cachesPerSide);
if (_want <= 0) exitWith {};

// A stack of paper boxes, as directed - supply that looks like supply, not an
// ammo crate begging to be looted. Falls back to the old crate rather than
// silently placing nothing if the prop's addon is not in this mod set.
private _class = ["Land_PaperBox_01_small_stacked_F", "Box_Syndicate_Ammo_F"] select
    (parseNumber !(isClass (configFile >> "CfgVehicles" >> "Land_PaperBox_01_small_stacked_F")));

// The registry the intel economy reads - EFUNC(hacking,intelHint) points hint
// circles at the nearest hostile cache. Server-side list of the live objects;
// readers filter dead ones themselves.
if (isNil QGVAR(caches)) then { GVAR(caches) = [] };

{
    _x params ["_side"];

    ([_side] call ghost_adapter_alive_fnc_taorFor) params ["_taor", "_black"];
    if (_taor isEqualTo []) then {
        INFO_1("side %1: no TAOR - caches would land anywhere, so none placed",_side);
        continue;
    };

    // Somewhere on its own ground, but not on top of its own objectives.
    private _objs = ([_side] call ghost_adapter_alive_fnc_objectivesFor) apply {_x select 1};

    private _spots = [_taor, _want, createHashMapFromArray [
        ["footprint", 3],
        ["clearRadius", 4],
        ["separation", 600],
        ["avoid", _objs],
        ["avoidRadius", 250],
        ["blacklist", _black],
        ["nearRoad", 300]
    ]] call EFUNC(common,findSite);

    {
        private _cache = createVehicle [_class, _x, [], 0, "CAN_COLLIDE"];
        _cache setDir random 360;
        _cache setVariable [QGVAR(cacheSide), _side, true];
        _cache addEventHandler ["Killed", {
            params ["_cache"];
            [_cache] call FUNC(cacheDown);
        }];
        GVAR(caches) pushBack _cache;
    } forEach _spots;

    INFO_2("side %1: %2 cache(s)",_side,count _spots);
} forEach (call ghost_adapter_alive_fnc_commanders);
