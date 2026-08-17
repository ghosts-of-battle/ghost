#include "script_component.hpp"
/*
 * Author: Ghost
 * The one detection roll, for every way of being noticed.
 *
 * Degrees (new.md section 2):
 *   not detected      nothing happens, and nothing is said. A system that
 *                     announces its own passes teaches players to read the
 *                     chat instead of the ground.
 *   detected, clean   SMALL - a silent flag. THE PLAYER IS NOT TOLD. That is
 *                     the whole mechanic: walk away and you are fine, try
 *                     again and you find out.
 *   detected, flagged MAJOR - the full reply.
 *
 * Arguments:
 * 0: The player caught <OBJECT>
 * 1: Source tag - "hack", "drone", "radio" <STRING>
 *
 * Return Value: None
 *
 * Public: No
 */

params [["_unit", objNull, [objNull]], ["_source", "?", [""]]];

// THE MODULE IS THE ENABLE. This system has no placement and no schedule of
// its own - it only answers events - so the gate has to sit on the answer.
// Without a module the events still fire and simply go unanswered.
if (!GVAR(moduleUp)) exitWith {};

if (isNull _unit) exitWith {};

private _id = netId _unit;
([_unit] call FUNC(flagged)) params ["_isFlagged", "_mult"];

if (random 100 >= (GVAR(detectChance) * _mult)) exitWith {
    // Expired flags are cleared on the way past rather than by a sweeper -
    // the map is only ever wrong while somebody is asking.
    if (!_isFlagged) then { GVAR(flags) deleteAt _id };
};

if (_isFlagged) exitWith {
    [_unit, _source] call FUNC(major);
};

GVAR(flags) set [_id, CBA_missionTime + REACT_FLAG_DECAY];
// Mirrored onto the unit for the CLIENT-side readers (the hacking console's
// fail roll) - see FUNC(flagged). Expired mirrors self-invalidate.
_unit setVariable [QGVAR(flaggedUntil), CBA_missionTime + REACT_FLAG_DECAY, true];
INFO_2("SMALL flag on %1 (%2) - silent by design",name _unit,_source);
