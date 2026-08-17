#include "script_component.hpp"
/*
 * Author: YonV
 * Arms an alarm for a time of day rather than a countdown - "wake me at 04:30",
 * which is how a start line or a lift time is actually given. The alarm itself
 * still belongs to the hacking addon, so one set here rings every scanner and
 * every cTab on the server exactly like one dialled on the handset.
 *
 * The field takes 0430, 04:30 or 430. A time already gone is taken as tomorrow,
 * because that is what you meant.
 *
 * Time acceleration is accounted for: the alarm list counts in mission seconds,
 * while the clock on the wall runs at timeMultiplier - arming "in six hours of
 * daylight" at 4x has to wait a quarter of that.
 *
 * Arguments:
 * None - the time comes from the alarm page's field.
 *
 * Return Value:
 * None
 *
 * Example:
 * call ghost_ctab_devices_fnc_alarmAt
 */

if (isNil QEGVAR(hacking,alarms)) exitWith {
    ["Alarm", "Scanner network not available.", [1, 0.3, 0.3, 1]] call EFUNC(notify,notify);
};

private _ifName = call FUNC(ifName);
if (_ifName == "") exitWith {};

private _display = uiNamespace getVariable [_ifName, displayNull];
if (isNull _display) exitWith {};

private _field = _display displayCtrl IDC_S7_ALARMAT;
if (isNull _field) exitWith {};

// digits only, so 04:30 and 0430 are the same thing
private _raw = (ctrlText _field) splitString ":. " joinString "";
private _digits = (_raw splitString "") select {_x in ["0","1","2","3","4","5","6","7","8","9"]};
_raw = _digits joinString "";

if !(count _raw in [3, 4]) exitWith {
    ["Alarm", "Alarm time: enter HHMM, e.g. 0430.", [1, 0.3, 0.3, 1]] call EFUNC(notify,notify);
};

private _hour = parseNumber (_raw select [0, count _raw - 2]);
private _min = parseNumber (_raw select [count _raw - 2, 2]);

if (_hour > 23 || {_min > 59}) exitWith {
    ["Alarm", "Alarm time: 0000 to 2359.", [1, 0.3, 0.3, 1]] call EFUNC(notify,notify);
};

// hours of game time from now to the target, wrapping to tomorrow
private _target = _hour + _min / 60;
private _delta = _target - dayTime;
if (_delta <= 0) then {_delta = _delta + 24};

// game hours to mission seconds
private _mult = timeMultiplier max 0.01;
private _delay = _delta * 3600 / _mult;

[QEGVAR(hacking,alarmAdd), [_delay, name player]] call CBA_fnc_serverEvent;
["Alarm", format [
    "Alarm armed for %1:%2, all scanners.",
    [_hour, 2] call CBA_fnc_formatNumber,
    [_min, 2] call CBA_fnc_formatNumber
], [0.914, 0.651, 0.235, 1]] call EFUNC(notify,notify);
