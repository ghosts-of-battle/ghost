#include "script_component.hpp"
/*
 * Author: Ghost
 * Pick a random intact building that lies within Max Distance of a player but no closer
 * than Min Distance to ANY player (so rounds never fall on top of someone).
 *
 * Arguments:
 * 0: Module config hashmap <HASHMAP> - reads taor, minDist, maxDist
 * Return Value: Target position AGL, or [] if none <ARRAY>
 *
 * Public: No
 */

if (!isServer) exitWith { [] };

params ["_cfg"];

private _min = _cfg get "minDist";
private _max = _cfg get "maxDist";

private _players = allPlayers select { alive _x && {!(_x isKindOf "HeadlessClient_F")} };

// TAOR gate: only players inside this module's marker(s) count (blank = anywhere).
private _taor = _cfg get "taor";
if (_taor isNotEqualTo []) then {
    _players = _players select { private _p = _x; (_taor findIf {_p inArea _x}) != -1 };
};
if (_players isEqualTo []) exitWith { [] };

private _cands = [];
{
    _cands append (nearestTerrainObjects [getPosATL _x, ["HOUSE", "BUILDING"], _max, false, true]);
} forEach _players;
_cands = _cands arrayIntersect _cands;   // dedupe

private _valid = _cands select {
    private _b = _x;
    (alive _b) && {damage _b < 0.9} && {(_players findIf {(_x distance2D _b) < _min}) == -1}
};
if (_valid isEqualTo []) exitWith { [] };

getPosATL (selectRandom _valid)
