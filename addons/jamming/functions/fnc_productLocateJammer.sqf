#include "script_component.hpp"
/*
 * Author: Ghost
 * LOCATE JAMMER: the emitters holding the quiet up, plotted exactly.
 *
 * Exact rather than fuzzed, and for the same reason LOCATE AA is: a jammer is
 * a thing you go and switch off, and the work of finding it was paid for by
 * getting into the tower. What it buys is a choice - hack it and the zone
 * dies quietly, or blow it and everyone knows you were there.
 *
 * Arguments:
 * 0: Where the hack happened <ARRAY>
 * 1: Asking side <SIDE>
 *
 * Return Value:
 * Anything plotted <BOOL>
 *
 * Public: No
 */

params [["_pos", [], [[]]], ["_side", sideUnknown, [sideUnknown]]];

private _zones = ["jam", [], true] call FUNC(getZones);
if (_zones isEqualTo []) exitWith {false};

private _rows = _zones apply { [+(_x select 2), "loc_Transmitter"] };

[QEGVAR(hacking,product), ["icons",
    format [QGVAR(jam_%1), round CBA_missionTime],
    _rows, "ColorBlue", _side]] call CBA_fnc_globalEvent;

INFO_1("LOCATE JAMMER: %1 emitter(s) plotted",count _rows);
true
