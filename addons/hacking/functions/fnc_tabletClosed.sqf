#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_tabletClosed

Description:
    Tablet closed. The hack is NOT cancelled - progress is already stored on the
    device, and the session keeps its target and intel choice, so reopening picks
    up where it stopped. What stops is the tick handler, which is what makes the
    pause automatic rather than something to remember to implement.

Author:
    Ghost
---------------------------------------------------------------------------- */
uiNamespace setVariable [QGVAR(tablet), displayNull];

if (isNil QGVAR(session)) exitWith {};

if (GVAR(session) get "running") then {
    ["Hack", "Intrusion suspended - tablet closed.", [0.914, 0.651, 0.235, 1]] call EFUNC(notify,notify);
};
