#include "script_component.hpp"
/*
 * Author: YonV
 * Pulls a shared file box into the local player's own cTab inbox, so filed
 * reports are read in the native mail UI. Only entries not already pulled on
 * this client are delivered, so re-reading a box never duplicates. Side-scoped:
 * you only ever see your own side's box.
 *
 * Arguments:
 * 0: Box name <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["HQ Log"] call ghost_ctab_groups_fnc_readFileBox
 */

params ["_box"];

if (isNil QGVAR(fileStore)) exitWith {
    hintSilent format ["%1: no reports filed", _box];
};

private _key = format ["%1|%2", str side group cTab_player, _box];
private _entries = GVAR(fileStore) getOrDefault [_key, []];

if (_entries isEqualTo []) exitWith {
    hintSilent format ["%1: no reports filed", _box];
};

private _var = format ["cTab_messages_%1", call cTab_fnc_getPlayerEncryptionKey];
private _inbox = cTab_player getVariable [_var, []];
private _new = 0;

{
    _x params ["_id", "_title", "_text"];
    if !(_id in GVAR(pulledIds)) then {
        GVAR(pulledIds) pushBack _id;
        _inbox pushBack [_title, _text, 0];
        _new = _new + 1;
    };
} forEach _entries;

cTab_player setVariable [_var, _inbox];
["ctab_messagesUpdated"] call CBA_fnc_localEvent;

hintSilent ([
    format ["%1: no new reports", _box],
    format ["%1: %2 new report(s) in your cTab inbox", _box, _new]
] select (_new > 0));
