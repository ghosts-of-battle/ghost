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
 * call ghost_ctab_devices_fnc_alarmClear
 */

if (isNil QEGVAR(hacking,alarms)) exitWith {
    ["Alarm", "Scanner network not available.", [1, 0.3, 0.3, 1]] call EFUNC(notify,notify);
};

EGVAR(hacking,alarmRingUntil) = -1;

if (EGVAR(hacking,alarms) isEqualTo []) exitWith {
    ["Alarm", "No alarms armed.", [0.914, 0.651, 0.235, 1]] call EFUNC(notify,notify);
};

[QEGVAR(hacking,alarmsClear), []] call CBA_fnc_serverEvent;
["Alarm", "All alarms cleared.", [0.914, 0.651, 0.235, 1]] call EFUNC(notify,notify);
