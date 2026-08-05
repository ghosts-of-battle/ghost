#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_intel_hunt_fnc_debugTick

Description:
    Debug heartbeat, to system chat, on the same contract as the ambient modules:
    one line naming the module, its state and what it is waiting for.

Parameters (CBA PFH): 0: args, 1: handle

Author:
    Ghost
---------------------------------------------------------------------------- */
if (!isServer) exitWith {};

private _target = GVAR(targets) param [GVAR(index), objNull];
private _msg = format [
    "[Intel Hunt] %1 | target %2/%3 %4 | tier %5 (r%6) | intel %7/%8",
    ["running", "COMPLETE"] select GVAR(complete),
    (GVAR(index) + 1) min (count GVAR(targets)), count GVAR(targets),
    if (isNull _target) then { "-" } else { typeOf _target },
    GVAR(tier),
    GVAR(radii) select ((GVAR(tier)) min (count GVAR(radii) - 1)),
    GVAR(count), GVAR(required)
];

[_msg] remoteExec ["systemChat", 0];
