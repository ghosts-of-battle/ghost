#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Function: ghost_hacking_fnc_tabletRefresh

Description:
    Repaints the screen: device cards, intel buttons, status line, progress.

    The intel list is built from what this mission can actually produce, the same
    test the old post-hack menu used - no ew-zones means no Locate Jammer button
    at all, rather than a button that does nothing. Selecting a drone collapses
    the list to the one thing a drone hack does.

Parameters:
    _display : DISPLAY - the tablet.

Author:
    Ghost
---------------------------------------------------------------------------- */
params ["_display"];

if (isNull _display) exitWith {};

private _session = GVAR(session);
private _selected = _session get "device";
private _running = _session get "running";

// --- device cards ----------------------------------------------------------
private _devices = GVAR(devices);
for "_i" from 0 to (TAB_CARDS - 1) do {
    private _bg = _display displayCtrl IDC_CARD_BG(_i);
    private _name = _display displayCtrl IDC_CARD_NAME(_i);
    private _info = _display displayCtrl IDC_CARD_INFO(_i);
    private _btn = _display displayCtrl IDC_CARD_BTN(_i);

    if (_i >= count _devices) then {
        { _x ctrlShow false } forEach [_bg, _name, _info, _btn];
        continue;
    };

    (_devices select _i) params ["_obj", "_dkind", "_label", "_dist", "_range"];
    { _x ctrlShow true } forEach [_bg, _name, _info, _btn];

    private _isSel = _obj isEqualTo _selected;
    private _inRange = _dist <= _range;
    _bg ctrlSetBackgroundColor (
        if (_isSel) then { [0.871, 0.361, 0.188, 0.30] } else { [1, 1, 1, 0.06] }
    );

    private _title = if (isNull _obj) then { "?" } else {
        private _n = getText (configOf _obj >> "displayName");
        if (_n isEqualTo "") then { typeOf _obj } else { _n }
    };
    _name ctrlSetStructuredText parseText format [
        "<t color='%1'>%2</t>", ["#EEE8DC", "#E9A63C"] select _isSel, toUpper _title];
    _info ctrlSetStructuredText parseText format [
        "<t color='%1'>%2  -  %3 m</t>",
        ["#9CAABA", "#DE5C30"] select (!_inRange), _label, round _dist];
};

// --- intel buttons ---------------------------------------------------------
// What can be produced, and keeping the selection valid, is FUNC(intelOptions)'s
// - it is a question about the mission rather than about this display, and the
// tacpad's intrusion app asks the same one.
private _avail = call FUNC(intelOptions);
private _intel = _session get "intel";

for "_i" from 0 to (TAB_INTEL - 1) do {
    private _btn = _display displayCtrl IDC_INTEL_BTN(_i);
    if (_i >= count _avail) then { _btn ctrlShow false; continue };
    _btn ctrlShow true;
    (_avail select _i) params ["_id", "_label"];
    _btn ctrlSetText _label;
    _btn ctrlSetBackgroundColor (
        if (_id isEqualTo _intel) then { [0.914, 0.651, 0.235, 0.35] } else { [1, 1, 1, 0.06] }
    );
};

// --- status and progress ---------------------------------------------------
private _progress = _session get "progress";
(_display displayCtrl IDC_TAB_BAR) progressSetPosition _progress;
(_display displayCtrl IDC_TAB_PCT) ctrlSetText format ["%1%2", round (_progress * 100), "%"];

private _status = switch (true) do {
    case (isNull _selected): { ["#9CAABA", "Select a device."] };
    case (_running && {!([_selected, _session] call FUNC(tabletInRange))}):
        { ["#DE5C30", "SIGNAL LOST - CLOSE THE DISTANCE"] };
    case (_running): { ["#E9A63C", "Intrusion running - keep this open."] };
    case (_progress > 0): { ["#E9A63C", format ["Suspended at %1%2 - resume when ready.", round (_progress * 100), "%"]] };
    default { ["#9CAABA", "Ready."] };
};
(_display displayCtrl IDC_TAB_STATUS) ctrlSetStructuredText parseText
    format ["<t color='%1'>%2</t>", _status select 0, _status select 1];

(_display displayCtrl IDC_TAB_ACTION) ctrlSetText (["START", "ABORT"] select _running);
