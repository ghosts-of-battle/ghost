#include "script_component.hpp"
/*
 * Author: YonV
 * The MEDICAL tile's live face: the squad, worst casualty first, one line each
 * - rank, name, then the status icons.
 *
 * A tile is only so tall, so the list is cut to what fits and the remainder
 * is counted off on a last line. Because the roster comes back worst-first,
 * what gets cut is always the people who are fine.
 *
 * Arguments:
 * 0: How many lines the tile has room for <NUMBER> (optional, default 5)
 *
 * Return Value:
 * Structured text <TEXT>
 *
 * Example:
 * [5] call ghost_ctab_devices_fnc_medicalTile
 */

params [["_lines", 5, [0]]];

private _font = S7_FONTS select ((profileNamespace getVariable [QGVAR(font), S7_FONT_DEFAULT]) min (count S7_FONTS - 1));
private _icons = MED_ICONS;
private _roster = call FUNC(medicalRoster);

if (_roster isEqualTo []) exitWith {
    parseText format ["<t font='%1' size='0.95' color='#7A8C7E' align='center'>NO SQUAD</t>", _font]
};

private _out = "";
{
    if (_forEachIndex >= _lines) exitWith {
        _out = _out + format [
            "<t font='%1' size='0.85' color='#7A8C7E'>+%2 more</t>",
            _font, count _roster - _lines
        ];
    };

    _x params ["_rankTxt", "_nameTxt", "_statuses"];

    // as many icons as the tile can carry, worst first
    private _iconLine = "";
    {
        if (_forEachIndex >= MED_TILE_ICONS) exitWith {};
        private _key = _x;
        private _idx = _icons findIf {(_x select 0) == _key};
        if (_idx > -1) then {
            _iconLine = _iconLine + format ["<img image='%1' size='0.95'/>", (_icons select _idx) select 1];
        };
    } forEach _statuses;

    // unhurt reads as a green dot, the same size as any other status icon
    if (_statuses isEqualTo []) then {
        _iconLine = format ["<img image='%1' size='0.95'/>", MED_ICON_OK];
    };

    // and the name goes quiet rather than coloured when nothing is wrong.
    // The `max 0` matters: a status key the icon table does not know about
    // would otherwise index -1 and throw on every tick of the page.
    private _colour = if (_statuses isEqualTo []) then {"#7A8C7E"} else {
        (_icons select ((_icons findIf {(_x select 0) == (_statuses select 0)}) max 0)) select 2
    };

    _out = _out + format [
        "<t font='%1' size='0.9' color='%2'>%3 %4</t><t align='right'>%5</t><br/>",
        _font, _colour, _rankTxt, _nameTxt, _iconLine
    ];
} forEach _roster;

parseText _out
