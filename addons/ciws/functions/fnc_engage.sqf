#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_ciws_fnc_engage

Description:
    Takes a round on, by whichever means the site is built around.

    The two modes are genuinely different weapons rather than two settings of
    one. GUNS gives the shot to Arma's AI, which has to aim and lead it, so the
    kill depends on the gunner and the gun. INTERCEPTOR flies a missile at it
    with proportional navigation, which is consistent and does not care whether
    there is a competent gunner anywhere on the map.

Parameters:
    _proj : OBJECT  - the round.
    _site : HASHMAP - the defended site.

Returns:
    BOOL - true if it was taken on.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_proj", "_site"];

if (isNull _proj) exitWith { false };

if ((_site get "mode") isEqualTo "INTERCEPTOR") then {
    [_proj, _site] call FUNC(launchInterceptor)
} else {
    [_proj, _site] call FUNC(engageGuns)
};
