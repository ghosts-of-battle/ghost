#include "script_component.hpp"
/*
 * Author: YonV
 * The main map has opened: show or hide the tool picker.
 *
 * The picker is config-declared, so it exists whether or not the player wants
 * it; this is what makes the setting mean anything.
 *
 * Arguments:
 * 0: The map display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_display] call ghost_ctab_tools_fnc_mapOpened
 */

params [["_display", displayNull, [displayNull]]];
if (isNull _display) exitWith {};

private _show = GVAR(mainMap);

for "_idc" from IDC_TOOLS_FIRST to (IDC_TOOLS_FIRST + TOOLS_BUTTON_COUNT - 1) do {
    private _ctrl = _display displayCtrl _idc;
    if (!isNull _ctrl) then {
        _ctrl ctrlShow _show;
    };
};
