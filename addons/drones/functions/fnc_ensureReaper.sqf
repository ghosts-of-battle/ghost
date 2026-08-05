#include "script_component.hpp"
/*
 * Author: Ghost
 * One-time server-side init of the shared fleet registry + global reaper PFH.
 * Idempotent: safe to call from every placed controller module.
 *
 * Arguments:
 * 0: Ceiling this controller requests <NUMBER>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

if (!isServer) exitWith {};

params [["_ceiling", 20, [0]]];

// Global airframe ceiling is shared; if several controllers disagree, honour the largest.
if (isNil QGVAR(ceiling)) then { GVAR(ceiling) = 0 };
GVAR(ceiling) = _ceiling max GVAR(ceiling);

if (!isNil QGVAR(reaperStarted)) exitWith {};
GVAR(reaperStarted) = true;

GVAR(fleet) = [];        // array of Arma groups; the single source of truth for live airframes
GVAR(mkrCounter) = 0;    // unique debug-marker naming

[FUNC(reap), REAP_INTERVAL, []] call CBA_fnc_addPerFrameHandler;
