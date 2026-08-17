#include "script_component.hpp"
/*
 * Author: Ghost
 * A side's ground, as its commanders' placements declared it (new.md
 * section 4): the union of the "taor" marker lists, and separately the
 * "blacklist" lists, of every placement module synchronised to that side's
 * commander module(s).
 *
 * The keys are plain object variables on the placement logic - verified:
 * mil_placement fnc_MP.sqf:346/360 and civ_placement fnc_CP.sqf:208/222 -
 * holding an ARRAY of marker names. They arrive from Eden as a comma
 * separated STRING and are split at module init, so a read that races that
 * can still see the string; both shapes are accepted rather than trusting
 * the timing.
 *
 * An empty taor list means the whole map minus the blacklist - ALiVE's own
 * convention, passed through untouched.
 *
 * Arguments:
 * 0: Side <SIDE>
 *
 * Return Value:
 * [taorMarkers <ARRAY of STRING>, blacklistMarkers <ARRAY of STRING>]
 *
 * Example:
 * [east] call ghost_adapter_alive_fnc_taorFor
 */

params [["_side", sideUnknown, [sideUnknown]]];

if (_side isEqualTo sideUnknown) exitWith {[[], []]};

// Clients answer from the published per-side marker lists - the walk below
// needs the commander instances, which live on the server. Marker NAMES
// only; see the publisher in XEH_postInit.
if (!GVAR(ready)) exitWith {
    private _pub = missionNamespace getVariable [QGVAR(taorPub), []];
    private _row = _pub param [_pub findIf {(_x param [0, sideUnknown]) isEqualTo _side}, []];
    [_row param [1, []], _row param [2, []]]
};

// CSV-or-array tolerance; markers that do not exist are dropped here rather
// than passed on for every consumer to trip over.
private _norm = {
    params ["_v"];
    private _list = if (_v isEqualType "") then {
        (_v splitString " ,") select {_x isNotEqualTo ""}
    } else {
        if (_v isEqualType []) then {+_v} else {[]}
    };
    _list select {markerShape _x isNotEqualTo ""}
};

private _taor = [];
private _black = [];

{
    _x params ["_cside", "", "", "_logic"];
    if (_cside isNotEqualTo _side) then {continue};
    if (isNull _logic) then {continue};

    {
        private _m = _x;
        if !(_m isKindOf "Logic") then {continue};

        private _t = _m getVariable "taor";
        if (!isNil "_t") then {
            { _taor pushBackUnique _x } forEach ([_t] call _norm);
        };
        private _b = _m getVariable "blacklist";
        if (!isNil "_b") then {
            { _black pushBackUnique _x } forEach ([_b] call _norm);
        };
    } forEach (synchronizedObjects _logic);
} forEach (call FUNC(commanders));

[_taor, _black]
