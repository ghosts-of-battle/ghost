#include "script_component.hpp"
/*
 * Author: YonV
 * Shows a DEL key for each roster row the local player is allowed to delete -
 * the row holds an alarm AND the player set it or is an admin. Runs from the
 * alarm page's refresh loop, so the keys track the roster as alarms arm, fire
 * and get deleted. The fork's show list never touches these keys: this is the
 * one place that decides, so six dead keys can never flash up on page entry.
 *
 * Arguments:
 * 0: The device display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display] call ghost_ctab_devices_fnc_alarmDelSync
 */

params [["_display", displayNull, [displayNull]]];
if (isNull _display) exitWith {};

private _alarms = if (isNil QEGVAR(hacking,alarms)) then {[]} else {+EGVAR(hacking,alarms)};
_alarms sort true;
private _admin = call BIS_fnc_admin > 0 || {isServer && hasInterface};

for "_i" from 0 to 5 do {
    private _btn = _display displayCtrl (467560 + _i);
    if (!isNull _btn) then {
        private _entry = _alarms param [_i, []];
        _btn ctrlShow (_entry isNotEqualTo [] && {_admin || {(_entry select 2) == name player}});
    };
};
