#include "script_component.hpp"
/*
 * Author: Ghost
 * Repaints the intrusion suite in the tacpad's colours when it opens.
 *
 * IT LIVES HERE, NOT IN ghost_hacking. The suite has to keep working on a
 * mission that never loads the tacpad, so it cannot depend on a theme it might
 * not have - and the addon that owns the design is the one that should know how
 * everything else is supposed to look. hacking raises an event when its dialog
 * opens; this listens. That is the whole coupling.
 *
 * The suite's own config colours stay as they are and remain the fallback, so
 * removing the tacpad leaves the suite exactly as it was rather than colourless.
 *
 * Arguments (CBA event):
 * 0: The tablet display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params [["_display", displayNull, [displayNull]]];

if (!hasInterface || {isNull _display}) exitWith {};
if (!EGVAR(tacpad,enabled)) exitWith {};

([] call EFUNC(tacpad,theme)) params ["_ground", "_ink", "_accent", "_line"];

// The screen is the ground the whole suite sits on; the bezel is the frame
// around it, so it takes the divider colour the panels use for their borders.
private _fnc_bg = {
    params ["_idc", "_colour"];
    private _ctrl = _display displayCtrl _idc;
    if (!isNull _ctrl) then {_ctrl ctrlSetBackgroundColor _colour};
};

private _fnc_fg = {
    params ["_idc", "_colour"];
    private _ctrl = _display displayCtrl _idc;
    if (!isNull _ctrl) then {_ctrl ctrlSetTextColor _colour};
};

[IDC_TAB_BEZEL, _line] call _fnc_bg;
[IDC_TAB_SCREEN, _ground] call _fnc_bg;

{
    [_x, _ink] call _fnc_fg;
} forEach [IDC_TAB_TITLE, IDC_TAB_STATUS, IDC_TAB_PCT, IDC_TAB_DEVHEAD, IDC_TAB_INTELHEAD];

// The progress bar and the action button are the two things in the suite that
// are allowed to be loud - a hack running and the button that starts it are
// exactly what the accent is reserved for.
[IDC_TAB_BAR, _accent] call _fnc_bg;
[IDC_TAB_ACTION, _accent] call _fnc_bg;
[IDC_TAB_ACTION, _ground] call _fnc_fg;

[IDC_TAB_CLOSE, _line] call _fnc_bg;
[IDC_TAB_CLOSE, _ink] call _fnc_fg;
