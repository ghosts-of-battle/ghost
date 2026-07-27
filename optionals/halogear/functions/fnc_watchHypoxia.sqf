#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_halogear_fnc_watchHypoxia

Description:
    One half of a self-restarting pair of altitude watchers. Waits for the local
    player to cross the hypoxia altitude in the given direction, raises the
    matching local CBA event, then arms the watcher for the opposite direction.
    Replaces the original's two near-identical aboveHypoEH/underHypoEH
    functions.

Parameters:
    _above : BOOL - true to wait for a climb through the threshold, false to
                    wait for a descent back below it.

Returns:
    Nothing.

Author:
    Mr H. (original), ported to Ghost conventions by Ghost
---------------------------------------------------------------------------- */
params [["_above", true, [true]]];

if (!hasInterface) exitWith {};

[
    {
        params ["_above", "_altitude"];
        private _now = (getPosASL player) select 2;
        if (_above) then {_now > _altitude} else {_now < _altitude}
    },
    {
        params ["_above"];
        private _event = [QGVAR(underHypoxia), QGVAR(aboveHypoxia)] select _above;
        [_event, [player]] call CBA_fnc_localEvent;
        [!_above] call FUNC(watchHypoxia);
    },
    [_above, GVAR(hypoxiaAltitude)]
] call CBA_fnc_waitUntilAndExecute;
