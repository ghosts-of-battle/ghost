#include "script_component.hpp"
/*
 * Author: YonV
 * Keeps every click-catcher's visibility matched to its source control. The
 * catchers live at fixed positions on the display, and several screens share
 * the same real estate - the settings swatches sit exactly where the app
 * menu's lower tiles do. A hidden control's catcher must stop hit-testing, or
 * it steals the press from whatever is actually on screen; that was six dead
 * apps on the S7.
 *
 * Runs from a fast PFH while a device is open, and once directly after every
 * dispatched click so our own mode changes take effect immediately.
 *
 * Arguments:
 * 0: Device display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display] call ghost_ctab_s7_fnc_syncCatchers
 */

params [["_display", displayNull, [displayNull]]];
if (isNull _display) exitWith {};

{
    _x params ["_btn", "_source"];
    private _show = ctrlShown _source;
    if (_show) then {
        private _group = ctrlParentControlsGroup _source;
        if (!isNull _group) then {
            _show = ctrlShown _group;
        };
    };
    if (ctrlShown _btn isNotEqualTo _show) then {
        _btn ctrlShow _show;
    };
} forEach (_display getVariable [QGVAR(catchers), []]);
