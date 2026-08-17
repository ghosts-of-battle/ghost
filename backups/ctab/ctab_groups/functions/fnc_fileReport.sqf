#include "script_component.hpp"
/*
 * Author: YonV
 * Server side of the shared file boxes: stores a filed report in the
 * side-scoped box and syncs the store to everyone (publicVariable, so JIP
 * clients get the archive for free). Boxes are capped at 50 entries -
 * oldest fall off first. Raised via the QGVAR(fileReport) CBA server event.
 *
 * Arguments:
 * 0: Sender side as string <STRING> (str side group sender)
 * 1: Box name <STRING>
 * 2: Composed message title <STRING>
 * 3: Message body <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["EAST", "HQ Log", "[HQ LOG] SITREP - YonV (12:04)", "..."] call ghost_ctab_groups_fnc_fileReport
 */

params ["_sideStr", "_box", "_title", "_text"];

private _key = format ["%1|%2", _sideStr, _box];

// A plain array of [key, entries] pairs rather than a hashMap: this store is
// broadcast with publicVariable, and an array is beyond argument as network
// data where a hashMap is not something to bet a report log on.
private _idx = GVAR(fileStore) findIf {(_x select 0) isEqualTo _key};
if (_idx < 0) then {
    GVAR(fileStore) pushBack [_key, []];
    _idx = count GVAR(fileStore) - 1;
};
private _entries = (GVAR(fileStore) select _idx) select 1;

// The sender already stamped the time into the title - this runs on the
// server, where there is no cTab_player to ask for one.
GVAR(fileNextId) = GVAR(fileNextId) + 1;
_entries pushBack [GVAR(fileNextId), _title, _text];
if (count _entries > 50) then {
    _entries deleteAt 0;
};

publicVariable QGVAR(fileStore);
