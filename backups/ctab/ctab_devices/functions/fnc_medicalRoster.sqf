#include "script_component.hpp"
/*
 * Author: YonV
 * The player's squad with each member's medical state, worst casualty first.
 * Both medical screens read from this: the dashboard tile shows the top of the
 * list, the app shows all of it.
 *
 * Sorted by how badly hurt somebody is rather than by team order on purpose -
 * a roster you have to read all of to find the casualty is no use on a screen
 * that only has room for a few lines.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * One entry per member <ARRAY of ARRAY>
 *   0: Rank, abbreviated <STRING>
 *   1: Name <STRING>
 *   2: Statuses, worst first <ARRAY of STRING>
 *   3: Vitals - [heartRate, bpLow, bpHigh, bloodPct, painPct, spo2] <ARRAY>
 *   4: Counts - [openWounds, bandaged, tourniquets, fractures] <ARRAY>
 *
 * Example:
 * [] call ghost_ctab_devices_fnc_medicalRoster
 */

// The severity of a member's worst status is its index into MED_ICONS, so the
// ranking can never drift from the icon table.
private _order = (MED_ICONS) apply {_x select 0};
private _nRanks = count _order;

private _ranks = createHashMapFromArray [
    ["PRIVATE", "PVT"], ["CORPORAL", "CPL"], ["SERGEANT", "SGT"],
    ["LIEUTENANT", "LT"], ["CAPTAIN", "CPT"], ["MAJOR", "MAJ"], ["COLONEL", "COL"]
];

private _members = [];
// Sorted through a plain [severity, index] list: SQF's sort only handles
// numbers, strings and arrays of those, and the member entries below are
// neither.
private _keys = [];

{
    ([_x] call FUNC(medicalRead)) params ["_statuses", "_vitals", "_counts"];

    private _worst = _nRanks;
    if (_statuses isNotEqualTo []) then {
        _worst = _order find (_statuses select 0);
    };

    _keys pushBack [_worst, _forEachIndex];
    _members pushBack [
        _ranks getOrDefault [toUpper (rank _x), "PVT"],
        name _x,
        _statuses,
        _vitals,
        _counts
    ];
} forEach (units group cTab_player);

_keys sort true;
_keys apply {_members select (_x select 1)}
