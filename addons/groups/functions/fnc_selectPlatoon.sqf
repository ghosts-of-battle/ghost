#include "script_component.hpp"
/*
    Author: Ghost

    Description:
        Switches the role screen to one platoon tab: repaints the row so the
        pressed tab is the filled one, and refills the tree behind it.

        THE FILLED TAB IS THE ACCENT, the rest are the muted lift the rail is
        drawn on - the same one-loud-control rule the rest of the suite follows,
        because the tab you are on is the only thing on that row worth reading.

    Parameters:
        0: NUMBER - which tab, zero-based

    Returns:
        NOTHING
*/

disableSerialization;

params [["_index", 0, [0]]];

private _display = findDisplay 9702;
if (isNull _display) exitWith {};

private _tabs = missionNamespace getVariable [QGVAR(platoonTabs), []];
if (_tabs isEqualTo []) exitWith {};
if (_index < 0 || {_index >= count _tabs}) exitWith {};

GVAR(platoon) = _index;

(missionNamespace getVariable ["YMF_groupMenu_theme", [[0.05,0.05,0.05,1],[0.90,0.90,0.88,1],[0.85,0.28,0.20,1],[0.35,0.35,0.34,1]]]) params ["_ground","_ink","_accent"];

// The row is four controls whatever the mission declared - see gui.hpp. The
// ones past the last tab were hidden when the screen opened and stay hidden.
private _lift = [
    ((_ground # 0) * 0.82) + ((_ink # 0) * 0.18),
    ((_ground # 1) * 0.82) + ((_ink # 1) * 0.18),
    ((_ground # 2) * 0.82) + ((_ink # 2) * 0.18),
    _ground # 3
];

for "_i" from 0 to 3 do {
    private _ctrl = _display displayCtrl (IDC_PLT_TAB + _i);
    if (isNull _ctrl) then {continue};
    if (_i >= count _tabs) then {continue};

    private _on = _i isEqualTo _index;
    _ctrl ctrlSetBackgroundColor ([_lift, _accent] select _on);
    _ctrl ctrlSetTextColor ([[_ink#0, _ink#1, _ink#2, 0.62], _ground] select _on);
};

private _tree = _display displayCtrl 1500;
[_tree, (_tabs select _index) select 1] call FUNC(fillRoleTree);

// The card beside the tree belongs to whatever row is now selected; without
// this it keeps describing a role on the tab you just left. Passed its two
// arguments rather than called bare - it is a tree handler and reads them.
[_tree, tvCurSel _tree] call FUNC(onGroupMenuTvSelectChange);
