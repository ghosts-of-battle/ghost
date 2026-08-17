#include "script_component.hpp"
/*
 * Author: Ghost
 * LOCATE AA: every hostile air-defence piece, plotted exactly.
 *
 * Exact on purpose. Air defence is hunted to be UN-INTEGRATED (new.md
 * section 1) - a fuzzy SAM ring is a navigation hazard rather than a target,
 * and the work of finding it was already paid for by getting into the tower.
 *
 * The plot is a SNAPSHOT at hack time: the profile may move afterwards and
 * the map does not follow it. Same grammar as every other product.
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

if (isNil "ghost_adapter_alive_fnc_aaTargets") exitWith {false};

private _pool = (call ghost_adapter_alive_fnc_aaTargets) select {
    (_x select 2) getFriend _side < 0.6
};

// GHOST'S OWN AIR DEFENCE JOINS THE POOL. The adapter reads ALiVE's AA
// registry, and ALiVE only knows about the AA ALiVE placed - so the batteries
// the air-defence module puts out would have been invisible to the one product
// whose whole job is finding them.
//
// Soft-linked: hacking does not depend on that addon, and it is a stopgap that
// is expected to be deleted once ALiVE 3's own air defence is stable.
private _own = missionNamespace getVariable [QEGVAR(airdefence,sites), []];
{
    _x params ["_at", "_aside"];
    if (_aside getFriend _side >= 0.6) then {continue};
    // Keyed by grid: a site is a PLACE here too, and the ladder needs a stable
    // id to lock on to across hacks.
    _pool pushBack [format ["ad_%1", mapGridPosition _at], _at, _aside];
} forEach _own;

// EXACT ICONS FOR THE WHOLE POOL was what this did, which handed over every
// air-defence system on the map for one hack and left nothing to work for.
// Same ladder as artillery now - see FUNC(ladderCircle) for the rules.
if (isNil QGVAR(aaLock)) then { GVAR(aaLock) = createHashMap };

[_pool, _pos, _side, GVAR(aaLock), "aa", "AIR DEFENCE"] call FUNC(ladderCircle)
