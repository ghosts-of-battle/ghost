#include "script_component.hpp"
/*
 * Author: YonV
 * Cancels every armed scanner alarm, server-wide, from the alarm app.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ghost_ctab_s7_fnc_alarmClear
 */

if (isNil QEGVAR(hacking,alarms)) exitWith {
    hintSilent "Scanner network not available";
};

EGVAR(hacking,alarmRingUntil) = -1;

if (EGVAR(hacking,alarms) isEqualTo []) exitWith {
    hintSilent "No alarms armed";
};

[QEGVAR(hacking,alarmsClear), []] call CBA_fnc_serverEvent;
hintSilent "All alarms cleared";
