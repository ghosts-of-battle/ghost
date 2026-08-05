#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_hackComplete

Description:
    A hack finished. What happens next depends on what was hacked and, for towers
    and units, on the intel chosen before it started - the pick is already made,
    so completion just cashes it in.

Parameters:
    _device : OBJECT - what was hacked.
    _kind   : STRING - "tower" | "drone" | "wreck" | "unit".
    _intel  : STRING - the chosen product, or "none" for a drone.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_device", "_kind", "_intel"];

if (isNull _device) exitWith {};

switch (_kind) do {
    // --- drone: no intel, the hack IS the effect --------------------------
    case "drone": {
        _device setVariable [QGVAR(hacked), true, true];
        [QGVAR(deleteDrone), _device] call CBA_fnc_serverEvent;
        ["Hack", "Drone downed.", [0.6, 1, 0.6, 1]] call EFUNC(notify,notify);
    };

    // --- downed drone: the intel it was carrying when it fell -------------
    // No counter-detection and no cooldown: a wreck is not calling anyone, and
    // there is nothing to come back for. One card, one pull.
    case "wreck": {
        _device setVariable [QGVAR(stripped), true, true];
        [QGVAR(pick), [_intel, getPosASL _device, side group player, player]] call CBA_fnc_serverEvent;
    };

    // --- remote unit: fail roll, then the chosen intel --------------------
    case "unit": {
        private _pos = getPosASL _device;
        _device setVariable [QGVAR(hacked), true, true];

        private _failChance = missionNamespace getVariable [QGVAR(rh_fail_chance), RH_FAIL_DEF];
        if (random 100 < _failChance) exitWith {
            ["Hack", "Intrusion detected - they know someone was in their net.", [1, 0.3, 0.3, 1]] call EFUNC(notify,notify);
            [QGVAR(remoteFail), [player, getPosASL player]] call CBA_fnc_serverEvent;
        };

        [QGVAR(pick), [_intel, _pos, side group player, player]] call CBA_fnc_serverEvent;
    };

    // --- tower: cooldown, counter-detection, then the chosen intel --------
    default {
        _device setVariable [QGVAR(hacked), true, true];
        _device setVariable [QGVAR(lastHack), CBA_missionTime, true];
        [_device, player] call FUNC(counterDetect);
        [QGVAR(pick), [_intel, getPosASL _device, side group player, player]] call CBA_fnc_serverEvent;
    };
};
