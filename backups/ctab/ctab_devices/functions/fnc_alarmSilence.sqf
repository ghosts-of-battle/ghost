#include "script_component.hpp"
/*
 * Author: YonV
 * Silences a ringing alarm on this client only - the alarm stays armed for
 * everyone else, same as pressing the key on the handset.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ghost_ctab_devices_fnc_alarmSilence
 */

if (isNil QEGVAR(hacking,alarmRingUntil)) exitWith {
    ["Alarm", "Scanner network not available.", [1, 0.3, 0.3, 1]] call EFUNC(notify,notify);
};

EGVAR(hacking,alarmRingUntil) = -1;
["Alarm", "Alarm silenced.", [0.914, 0.651, 0.235, 1]] call EFUNC(notify,notify);
