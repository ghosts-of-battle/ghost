#include "script_component.hpp"
/*
 * Author: YonV
 * Puts cTab's notifications on the player's own screen, not just inside the
 * device. cTab draws them into a control on whichever interface is open, which
 * is fine on a full dialog and useless on the HUD: a line of text inside a
 * phone the size of a thumbnail in the corner is not something anyone reads
 * while moving. The handsets are the devices you carry with the screen up, so
 * they are the ones that need this most.
 *
 * cTab's own display of the notification is left alone - this only mirrors.
 * The cache is read, never emptied: cTab's own handler still consumes it on its
 * four-second cadence, and taking entries here would blank the device's line.
 *
 * Arguments:
 * None
 *
 * Return Value: None
 *
 * Public: No
 */

if (!GVAR(mirrorNotifications)) exitWith {};
if (isNil "cTabNotificationCache") exitWith {};
// ghost_notify is not a declared dependency of this addon - if it is absent,
// there is nowhere to mirror to and cTab's own line is still drawn.
if (isNil QEFUNC(notify,notify)) exitWith {};

private _cache = cTabNotificationCache;
if (_cache isEqualTo []) exitWith {};

// An entry is [appID, time, text, decayTime, count]. The time is a
// minute-resolution string, so time+text+count identifies one notification
// without holding on to the array itself.
private _seen = uiNamespace getVariable [QGVAR(seenNotifications), []];
private _now = [];

{
    _x params ["", "_time", "_text", "", "_count"];
    private _key = format ["%1|%2|%3", _time, _text, _count];
    _now pushBack _key;

    if !(_key in _seen) then {
        // A repeat of something already on screen arrives as the same entry
        // with a higher count - say so rather than repeating the line.
        private _body = if (_count > 1) then {
            format ["%1 (x%2)", _text, _count]
        } else {
            _text
        };
        ["cTab", _body, [0.24, 0.51, 0.84, 1]] call EFUNC(notify,notify);
    };
} forEach _cache;

uiNamespace setVariable [QGVAR(seenNotifications), _now];
