#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_ciws_fnc_track

Description:
    Decides whether a round is actually coming at us, and if so hands it to the
    guns.

    The inbound test is two range samples a fraction of a second apart. If the
    round is getting FURTHER away it is outgoing - our own artillery firing over
    the site - and is left alone. Without this, a battery inside its own CIWS
    umbrella shoots down its own shells on the way out, which is both absurd and
    extremely hard to diagnose from the ground.

    Sampling beats reading the velocity vector because it needs no assumptions
    about how the round is guided: a manoeuvring missile that turns towards the
    site is caught by the second sample even though its initial heading was not
    at us.

Parameters:
    _proj : OBJECT  - the round.
    _site : HASHMAP - the defended site.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_proj", "_site"];

private _pos = _site get "pos";
private _first = (getPosATL _proj) distance2D _pos;

[{
    params ["_proj", "_site", "_first"];
    if (isNull _proj) exitWith {};

    private _pos = _site get "pos";
    private _now = (getPosATL _proj) distance2D _pos;

    if (_now >= _first) exitWith {
        if (_site get "debug") then {
            diag_log text format ["[ghost_ciws] ignored %1 - outgoing (%2m -> %3m)",
                typeOf _proj, round _first, round _now];
        };
    };

    if (_site get "debug") then {
        diag_log text format ["[ghost_ciws] INBOUND %1 at %2m, closing", typeOf _proj, round _now];
    };

    // Queued rather than engaged. What to shoot at next is the site's decision,
    // taken across everything currently inbound - see FUNC(siteTick).
    (_site get "threats") pushBackUnique _proj;
}, [_proj, _site, _first], CIWS_VECTOR_SAMPLE] call CBA_fnc_waitAndExecute;
