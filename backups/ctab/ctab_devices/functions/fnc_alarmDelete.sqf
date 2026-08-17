#include "script_component.hpp"
/*
 * Author: YonV
 * Deletes ONE armed alarm by its ROSTER ROW - the setter or an admin only.
 * The DEL keys carry a row number, not an alarm id: ids are the server's
 * business, rows are what the roster prints, and the mapping between them is
 * resolved here at press time using the same sort the roster displays.
 *
 * Arguments:
 * 0: Roster row, 0-based <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [0] call ghost_ctab_devices_fnc_alarmDelete
 */

params [["_row", -1, [0]]];

if (_row < 0 || {isNil QEGVAR(hacking,alarms)}) exitWith {};

// A press can reach this through more than one dispatch path - never let one
// press take two rows.
private _now = diag_tickTime;
private _last = uiNamespace getVariable [QGVAR(alarmDelLast), [-1, -10]];
if (_last select 0 == _row && {_now - (_last select 1) < 0.5}) exitWith {};
uiNamespace setVariable [QGVAR(alarmDelLast), [_row, _now]];

private _sorted = +EGVAR(hacking,alarms);
_sorted sort true;
private _entry = _sorted param [_row, []];
if (_entry isEqualTo []) exitWith {};
_entry params ["_id", "", "_who"];

private _admin = call BIS_fnc_admin > 0 || {isServer && hasInterface};
if (!_admin && {_who != name player}) exitWith {
    ["Alarm", "Only its setter or an admin can delete a timer.", [1, 0.3, 0.3, 1]] call EFUNC(notify,notify);
};

[QEGVAR(hacking,alarmDelete), [_id]] call CBA_fnc_serverEvent;
["Alarm", format ["Timer #%1 deleted.", _row + 1], [0.914, 0.651, 0.235, 1]] call EFUNC(notify,notify);
