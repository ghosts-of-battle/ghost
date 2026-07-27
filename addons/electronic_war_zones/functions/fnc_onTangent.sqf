#include "script_component.hpp"
/*
 * Author: Ghost
 * TFAR "OnTangent" handler on the local hunted-side player. Fires the server
 * detection event only on a LONG-RANGE key-down; short-range (squad) transmissions
 * are never reported, so the squad net is always safe.
 *
 * Confirmed OnTangent payload (TFAR fn_fireEventHandlers):
 *   [unit, radioClass, radioType, additionalChannel, buttonDown]
 *   radioType: 0 = SR, 1 = LR, 2 = underwater
 *
 * Return Value: None
 *
 * Public: No
 */

params [["_unit", objNull], "_radioClass", ["_radioType", -1], "_additionalChannel", ["_buttonDown", false]];

// Long-range only, on key-down.
if (_buttonDown && {_radioType == 1}) then {
    [QGVAR(detection), [player, getPosASL player]] call CBA_fnc_serverEvent;
};
