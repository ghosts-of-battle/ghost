#include "script_component.hpp"
/*
 * Author: YonV
 * Receiver side of a TROOPS IN CONTACT alert - runs on every client via the
 * QGVAR(ticAlert) CBA event. Like the hacking addon's alarm ring, the phone
 * only goes off for players actually carrying a scanner: blinks the scanner's
 * alarm row, shows a notification and beeps three times obeying the scanner's
 * alarm-volume setting.
 *
 * Arguments:
 * 0: Sender name <STRING>
 * 1: Contact grid <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["YonV", "123456"] call ghost_ctab_groups_fnc_onTicAlert
 */

params [["_senderName", "someone", [""]], ["_grid", "", [""]]];

if (!hasInterface) exitWith {};
if (!GVAR(ticAlarm)) exitWith {};

// hacking addon is a soft dependency; no scanner in pocket, no ring
if (isNil "ghost_hacking_fnc_hasScanner") exitWith {};
if !([player] call ghost_hacking_fnc_hasScanner) exitWith {};

// blink the scanner's alarm row, same as an alarm ring
EGVAR(hacking,alarmRingUntil) = time + 15;

["Contact", format ["TIC: %1 in contact - grid %2", _senderName, _grid],
    [0.816, 0.271, 0.227, 1]] call EFUNC(notify,notify);

// three warning beeps on the scanner's alarm volume; at 0 the alert is blink-only
private _volume = EGVAR(hacking,alarmVolume);
if (!isNil "_volume" && {_volume > 0}) then {
    {
        [{playSoundUI ["3DEN_notificationWarning", _this]}, _volume, _x] call CBA_fnc_waitAndExecute;
    } forEach [0, 1.2, 2.4];
};
