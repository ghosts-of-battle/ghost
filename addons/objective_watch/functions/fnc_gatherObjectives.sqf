#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_objective_watch_fnc_gatherObjectives

Description:
    Builds the list of objectives one module watches. Three sources, and a
    mission can use any mix of them:

      1. MARKERS - any map marker whose name starts with one of the configured
         prefixes. This is the answer for missions with no ALiVE: draw your
         objectives on the map and they are tracked, exactly the way the staging
         system turns zone_staging* markers into zones. Area markers use their
         own size as the footprint; icon markers fall back to capture_radius.
      2. ALiVE OBJECTIVES - if ALiVE is loaded and the module asks for them,
         its objective list is folded in with each objective's own size.
      3. THE MODULE ITSELF - if neither source produced anything, the module's
         own position is the objective. One module, one place, no setup.

    Sources are additive and de-duplicated by position, so a marker drawn over an
    ALiVE objective does not produce two overlapping watches.

Parameters:
    _logic  : OBJECT  - the module.
    _cfg    : HASHMAP - its shared settings.

Returns:
    ARRAY - of HASHMAP, one per objective: name, pos, radius, marker, streak,
            held, lastBarrage.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_logic", "_cfg"];

private _out = [];

private _fnAdd = {
    params ["_name", "_pos", "_radius", ["_marker", ""]];
    if (_radius <= 0) then { _radius = _cfg get "radius" };
    // Same objective from two sources is still one objective.
    if ((_out findIf { (_x get "pos") distance2D _pos < OW_DEDUPE_DIST }) > -1) exitWith {};
    _out pushBack (createHashMapFromArray [
        ["name", _name], ["pos", _pos], ["radius", _radius], ["marker", _marker],
        ["streak", -1], ["held", false], ["lastBarrage", -1e9]
    ]);
};

// --- 1. markers -----------------------------------------------------------
private _prefixes = ((_cfg get "markerPrefixes") splitString ", ") select { _x isNotEqualTo "" };
if (_prefixes isNotEqualTo []) then {
    {
        private _m = _x;
        private _lower = toLower _m;
        if ((_prefixes findIf { (_lower select [0, count _x]) isEqualTo (toLower _x) }) < 0) then { continue };

        private _shape = markerShape _m;
        private _size = markerSize _m;
        private _radius = if (_shape isEqualTo "ICON") then { 0 } else {
            (_size select 0) max (_size select 1)
        };
        [_m, getMarkerPos _m, _radius, _m] call _fnAdd;
    } forEach allMapMarkers;
};

// --- 2. ALiVE objectives, when asked for and available ---------------------
if ((_cfg get "useAlive") && {!isNil "ALIVE_fnc_getObjectives"}) then {
    private _objs = [getPosATL _logic, _cfg get "aliveRange"] call ALIVE_fnc_getObjectives;
    if (_objs isEqualType []) then {
        {
            private _o = _x;
            if !(_o isEqualType []) then { continue };
            private _pos = _o param [1, []];
            if !(_pos isEqualType [] && {count _pos >= 2}) then { continue };
            private _size = _o param [2, 0];
            if !(_size isEqualType 0) then { _size = 0 };
            [format ["alive_%1", _o param [0, "obj"]], _pos, _size] call _fnAdd;
        } forEach _objs;
    };
};

// --- 3. the module's own position -----------------------------------------
if (_out isEqualTo []) then {
    ["module", getPosATL _logic, _cfg get "radius", _cfg get "marker"] call _fnAdd;
};

_out
