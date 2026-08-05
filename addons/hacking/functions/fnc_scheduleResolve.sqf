#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_scheduleResolve

Description:
    Books one pass of FUNC(resolveTargets) for the next frame, however many
    modules ask for it.

    Modules cannot rely on initialising in any particular order, so neither a
    parent pool nor a target spot can act on what it is synchronised to at the
    moment it runs - the other half may not exist yet. Both simply register and
    call this; by the next frame every module has had its turn and the picture is
    complete.

Author:
    Ghost
---------------------------------------------------------------------------- */

if (GVAR(resolvePending)) exitWith {};
GVAR(resolvePending) = true;

[{ [] call FUNC(resolveTargets) }, [], 0] call CBA_fnc_waitAndExecute;
