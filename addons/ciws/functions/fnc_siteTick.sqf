#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_ciws_fnc_siteTick

Description:
    One defended site, deciding what to shoot at next.

    Every confirmed-inbound round goes into the site's threat list and the site
    picks from it by urgency. Engaging rounds in the order they happened to
    arrive - which is what a per-round script does - means a barrage is answered
    at random, and the shells that get through are the ones nobody chose to let
    through.

    Capacity is what stops it trying to answer everything: guns can hold one
    round at a time between them, interceptors as many as the site is allowed to
    have in the air. Anything over capacity is simply not engaged, which is the
    honest outcome of saturating a defence.

Parameters (CBA PFH): 0: [site], 1: handle

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_args", "_handle"];
_args params ["_site"];

private _threats = _site get "threats";
private _busy = _site get "busy";

// Rounds that landed, were shot down, or were deleted take themselves off both
// lists. Nothing else has to clean up after them.
_threats = _threats select { !isNull _x };
_busy = _busy select { !isNull _x };
_site set ["busy", _busy];

if (_threats isEqualTo []) exitWith { _site set ["threats", []] };

private _pos = _site get "pos";

// Free capacity first - no point scoring anything we cannot shoot at.
private _capacity = if ((_site get "mode") isEqualTo "INTERCEPTOR") then {
    (_site get "limit") - (count _busy)
} else {
    // Guns: the whole battery engages one round at a time, because they are all
    // being told to look at the same decoy.
    parseNumber (_busy isEqualTo [])
};

_site set ["threats", _threats];
if (_capacity < 1) exitWith {};

// Score only what is not already being dealt with.
private _open = _threats select { !(_x in _busy) };
if (_open isEqualTo []) exitWith {};

private _ranked = _open apply { [[_x, _pos] call FUNC(threatScore), _x] };
_ranked sort true;

{
    if (_forEachIndex >= _capacity) exitWith {};
    _x params ["_score", "_proj"];
    if (_score >= 1e9) exitWith {};   // sorted, so everything after is worse

    if ([_proj, _site] call FUNC(engage)) then {
        _busy pushBack _proj;
    };
} forEach _ranked;

_site set ["busy", _busy];
