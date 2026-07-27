#include "script_component.hpp"
/*
 * Author: Ghost
 * Client arming (raised JIP-safe by the server). If this player is on the hunted
 * side, start the jam loop and the long-range PTT tracker (TFAR event / ACRE poll).
 * Idempotent.
 *
 * Arguments (CBA event):
 * 0: Hunted side <SIDE>
 * 1: ACRE hunt power threshold (mW) <NUMBER>
 *
 * Return Value: None
 *
 * Public: No
 */

if (!hasInterface) exitWith {};
if (!isNil QGVAR(clientReady)) exitWith {};   // one module is enough; don't double-arm

params [["_huntedSide", west, [west]], ["_acrePowerMin", 1000, [0]]];

GVAR(huntedSide) = _huntedSide;
if (playerSide != _huntedSide) exitWith {};

GVAR(clientReady) = true;
GVAR(hasTFAR) = isClass (configFile >> "CfgPatches" >> "task_force_radio");
GVAR(hasACRE) = isClass (configFile >> "CfgPatches" >> "acre_main");
GVAR(acreJam) = 0;
GVAR(acreWasTx) = false;
GVAR(acrePowerMin) = _acrePowerMin;

// Client-local jamming: nearest emitter degrades this player's own radio.
[FUNC(jammerLoop), JAM_CHECK_INTERVAL, []] call CBA_fnc_addPerFrameHandler;

// TFAR long-range PTT tracking (event-driven).
if (GVAR(hasTFAR) && {!isNil "TFAR_fnc_addEventHandler"}) then {
    [QGVAR(track), "OnTangent", FUNC(onTangent), player] call TFAR_fnc_addEventHandler;
};

// ACRE2 jamming: override ACRE's signal calc with a func that keeps the vanilla
// (core) result but scales received strength down by this player's live jam level
// (GVAR(acreJam), refreshed each jammerLoop tick). jam == 0 -> identical to vanilla.
if (GVAR(hasACRE) && {!isNil "acre_api_fnc_setCustomSignalFunc"}) then {
    [{
        private _core = _this call acre_sys_signal_fnc_getSignalCore;
        private _jam = missionNamespace getVariable [QGVAR(acreJam), 0];
        if (_jam <= 0) exitWith { _core };
        _core params ["_pct", "_dbm"];
        [_pct * (1 - _jam), _dbm]
    }] call acre_api_fnc_setCustomSignalFunc;
};
