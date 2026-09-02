#include "script_component.hpp"
/*
    Author: Ghost

    Description:
        THE PLATOON TABS, read from the mission. A tab is a view onto the same
        role list and nothing more - it changes which squads the tree draws and
        it changes nothing about who may take what. Grouping five squads under
        two headings is a visual for this screen (user, 2026-09-01); the roles,
        the conditions and the radio index all still come off
        Dynamic_Groups >> group_setup in the order that file writes them.

        NO Platoons CLASS MEANS NO TABS. A mission that does not declare one
        gets the flat list it has always had, tab row hidden, nothing moved.
        That is what every mission other than this one does.

        FOUR IS THE CAP (user: "up to 4 tabs please"), and it is a real limit
        rather than a suggestion: the tab row is four controls wide in
        gui.hpp. A fifth is dropped with a line in the RPT.

        A SQUAD IN NO TAB STILL APPEARS. If it did not, a role nobody can see
        is a role nobody can take, and the screen would lie about how many
        slots are open - the OPEN count is built off the whole of
        YMF_dynamicGroups, not off the visible tab. Loose squads get their own
        UNASSIGNED tab when there is room for one, and are folded into the last
        tab when there is not. Either way the RPT names them, because the fix
        is one line of config and the symptom otherwise is "why is Talon on
        2nd Platoon".

    Parameters:
        NONE

    Returns:
        ARRAY - [[tab label, [SQUAD NAMES, upper-cased]], ...], [] for no tabs
*/

private _root = missionConfigFile >> "Dynamic_Groups" >> "Platoons";
if (!isClass _root) exitWith {[]};

private _out = [];
private _over = [];

{
    private _label = getText (_x >> "name");
    private _squads = (getArray (_x >> "squads")) apply {toUpper _x};

    // A tab with no name or no squads is a typo, and it says so - an empty tab
    // is indistinguishable from a squad that failed to load.
    if (_label isEqualTo "" || {_squads isEqualTo []}) then {
        WARNING_1("Platoons","tab '%1' has no name or no squads - skipped",configName _x);
        continue;
    };

    if (count _out >= 4) then {
        _over pushBack _label;
        continue;
    };

    _out pushBack [toUpper _label, _squads];
} forEach (configProperties [_root, "isClass _x", true]);

if (_over isNotEqualTo []) then {
    WARNING_2("Platoons","%1 tab(s) past the fourth were dropped: %2",count _over,_over joinString ", ");
};

if (_out isEqualTo []) exitWith {[]};

// ---------------------------------------------------------- the loose ones --
private _named = [];
{_named append (_x select 1)} forEach _out;

private _loose = (YMF_dynamicGroups apply {toUpper (_x select 0)}) select {!(_x in _named)};

if (_loose isNotEqualTo []) then {
    if (count _out < 4) then {
        _out pushBack ["UNASSIGNED", _loose];
        INFO_1("Platoons","%1 in no tab - shown under UNASSIGNED",_loose joinString ", ");
    } else {
        private _last = _out select 3;
        _last set [1, (_last select 1) + _loose];
        INFO_2("Platoons","%1 in no tab and all four tabs are taken - shown under %2",_loose joinString ", ",_last select 0);
    };
};

_out
