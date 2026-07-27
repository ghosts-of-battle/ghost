#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_insertion_fnc_splashScreen

Description:
    Covers the player's view with a fullscreen image for a set time -- used to
    hide the submarine transfer. Shown on its own title layer so it cannot steal
    input, and torn down with cutText.

    The original called MRH_fnc_SplashScreen, which is not defined anywhere in
    MRHMilsimTools, so the transfer would have thrown. Reimplemented here.

Parameters:
    _duration : NUMBER - seconds to hold. (default: 16)

Returns:
    Nothing.

Author:
    Ghost (the original call target was missing)
---------------------------------------------------------------------------- */
params [["_duration", 16, [0]]];

if (!hasInterface) exitWith {};

SPLASH_IDD cutRsc [QGVAR(splash), "BLACK IN", 1, true];

[
    { SPLASH_IDD cutText ["", "BLACK OUT", 1] },
    [],
    _duration
] call CBA_fnc_waitAndExecute;

TRACE_1("splash screen shown",_duration);
