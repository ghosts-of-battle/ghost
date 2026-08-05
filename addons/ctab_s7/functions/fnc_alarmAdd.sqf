#include "script_component.hpp"
/*
 * Author: YonV
 * Arms a scanner alarm from the tablet's alarm app. The alarm itself belongs to
 * the hacking addon - this only hands it a duration, so an alarm set here rings
 * every scanner on the server exactly like one dialled on the handset.
 *
 * Arguments:
 * 0: Minutes <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [15] call ghost_ctab_s7_fnc_alarmAdd
 */

params ["_minutes"];

if (isNil QEGVAR(hacking,alarms)) exitWith {
    hintSilent "Scanner network not available";
};

[QEGVAR(hacking,alarmAdd), [_minutes * 60, name player]] call CBA_fnc_serverEvent;
hintSilent format ["Alarm armed: %1 min, all scanners", _minutes];
