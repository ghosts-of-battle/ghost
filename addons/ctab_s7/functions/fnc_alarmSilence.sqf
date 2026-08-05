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
 * call ghost_ctab_s7_fnc_alarmSilence
 */

if (isNil QEGVAR(hacking,alarmRingUntil)) exitWith {
    hintSilent "Scanner network not available";
};

EGVAR(hacking,alarmRingUntil) = -1;
hintSilent "Alarm silenced";
