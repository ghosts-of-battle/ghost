#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_watchFreefall

Description:
    Self-restarting freefall watcher, the counterpart to FUNC(watchHypoxia).
    Waits for the local player to enter or leave freefall, raises the matching
    local CBA event, then arms the opposite watch. Replaces the original's
    startedFreefallEH/freeFallEndedEH pair.

Parameters:
    _started : BOOL - true to wait for freefall to begin, false to wait for it
                      to end.

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params [["_started", true, [true]]];

if (!hasInterface) exitWith {};

[
    {
        params ["_started"];
        private _falling = [player] call FUNC(isFreeFalling);
        if (_started) then {_falling} else {!_falling}
    },
    {
        params ["_started"];
        private _event = [QGVAR(freefallEnded), QGVAR(freefallStarted)] select _started;
        [_event, [player]] call CBA_fnc_localEvent;
        [!_started] call FUNC(watchFreefall);
    },
    [_started]
] call CBA_fnc_waitUntilAndExecute;
