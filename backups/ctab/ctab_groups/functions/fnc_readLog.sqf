#include "script_component.hpp"
/*
 * Author: YonV
 * Reads the shared file boxes for the player's own side, for the devices' LOG
 * app to render. Straight out of the store: no pulling into anybody's inbox,
 * no per-client "already seen" bookkeeping, so what the log shows is simply
 * what has been filed. The ACE archive action still exists for pulling a box
 * into the cTab inbox; this is the read-only view of the same shelf.
 *
 * Arguments:
 * 0: Box name <STRING> (optional, default "" - every box)
 *
 * Return Value:
 * Boxes and their entries, newest first <ARRAY of [boxName, [[title, body], ...]]>
 *
 * Example:
 * ["HQ Log"] call ghost_ctab_groups_fnc_readLog
 */

params [["_only", "", [""]]];

if (isNil QGVAR(fileStore)) exitWith {[]};

private _side = str side group cTab_player;
private _out = [];

{
    private _box = _x;
    if (_only != "" && {_only != _box}) then {continue};

    private _key = format ["%1|%2", _side, _box];
    private _idx = GVAR(fileStore) findIf {(_x select 0) isEqualTo _key};
    if (_idx < 0) then {continue};

    // newest first - the store appends, and a log is read from the top
    private _entries = [];
    {
        _x params ["", "_title", "_text"];
        _entries pushBack [_title, _text];
    } forEach ((GVAR(fileStore) select _idx) select 1);
    reverse _entries;

    _out pushBack [_box, _entries];
} forEach (call FUNC(listFileBoxes));

_out
