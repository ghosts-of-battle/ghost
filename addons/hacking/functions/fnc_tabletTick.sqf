#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_tabletTick

Description:
    The tablet's heartbeat. Refreshes the device list on a slow cadence and, when
    a hack is running, advances it.

    Progress only moves while this handler is alive, and this handler only lives
    while the display is open - so closing the tablet pauses the hack with no
    special case anywhere. Walking out of range pauses it too, without closing.

Parameters (CBA PFH): 0: args, 1: handle

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_args", "_handle"];

private _display = uiNamespace getVariable [QGVAR(tablet), displayNull];
if (isNull _display) exitWith {
    GVAR(tabletPFH) = -1;
    [_handle] call CBA_fnc_removePerFrameHandler;
};

// The work is FUNC(tabletAdvance)'s, so the tacpad's intrusion app runs the
// same hack on the same clock rather than a second copy of it. This is the
// drawing half.
call FUNC(tabletAdvance);

[_display] call FUNC(tabletRefresh);
