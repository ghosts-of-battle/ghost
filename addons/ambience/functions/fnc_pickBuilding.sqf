#include "script_component.hpp"
/*
 * Author: Ghost
 * One building near one player, for the ambience to hit. Shared by the
 * shelling and the kamikaze modules - the "war happens around you" rule is
 * the same for both: a random player standing inside the markers, a random
 * building in the distance band around them, never the players themselves.
 *
 * Every candidate runs through EFUNC(common,taorGate) against the module's
 * own markers, the way every module spawn is gated now - a band that pokes
 * out of the marker never puts the war outside it.
 *
 * Arguments:
 * 0: Marker names, [] for anywhere <ARRAY>
 * 1: Band minimum in metres - the safety margin <NUMBER>
 * 2: Band maximum in metres <NUMBER>
 * 3: Caller tag for the gate's log <STRING>
 *
 * Return Value:
 * Building position ATL, [] when there is nothing to hit <ARRAY>
 *
 * Public: No
 */

params [["_markers", [], [[]]], ["_bandMin", 150, [0]], ["_bandMax", 450, [0]], ["_tag", "ambience", [""]]];

private _cands = allPlayers select {
    alive _x
    && {!(_x getVariable ["ACE_isUnconscious", false])}
};
if (_markers isNotEqualTo []) then {
    _cands = _cands select {
        private _p = _x;
        (_markers findIf {_p inArea _x}) > -1
    };
};

if (_cands isEqualTo []) exitWith {[]};

private _who = selectRandom _cands;
private _houses = (nearestObjects [_who, ["House"], _bandMax]) select {
    private _h = _x;
    _h distance2D _who >= _bandMin
    && {[sideUnknown, getPosATL _h, _tag, _markers] call EFUNC(common,taorGate)}
};

if (_houses isEqualTo []) exitWith {[]};

getPosATL (selectRandom _houses)
