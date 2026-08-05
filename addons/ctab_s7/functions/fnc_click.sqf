#include "script_component.hpp"
/*
 * Author: YonV
 * The one door every device button comes through. Buttons are wired two ways -
 * config action, and a runtime MouseButtonDown handler added the way BCE wires
 * its ATAK tools, because config dispatch alone proved unreliable on these
 * dialogs. When both fire for one press, the debounce collapses them to one
 * call, which matters for the buttons that add alarm minutes.
 *
 * Arguments:
 * 0: What was pressed <STRING>
 * 1: Its argument, if it takes one <ANY> (optional)
 *
 * Return Value:
 * None
 *
 * Example:
 * ["app", "weather"] call ghost_ctab_s7_fnc_click
 */

params ["_kind", ["_arg", nil]];

private _now = diag_tickTime;
if (_now - (uiNamespace getVariable [QGVAR(lastClick), -9]) < 0.25) exitWith {};
uiNamespace setVariable [QGVAR(lastClick), _now];

switch (_kind) do {
    case "app": {[_arg] call FUNC(app)};
    case "alarm": {[_arg] call FUNC(alarmAdd)};
    case "alarmAt": {call FUNC(alarmAt)};
    case "alarmSilence": {call FUNC(alarmSilence)};
    case "alarmClear": {call FUNC(alarmClear)};
    case "icon": {[_arg] call FUNC(setIconColor)};
    case "bg": {[_arg] call FUNC(setBgColor)};
    case "font": {[_arg] call FUNC(setFont)};
    case "menu": {call FUNC(menuToggle)};
    case "scanPanel": {call FUNC(overlayToggle)};
    // cTab's own map-tool switches, moved into the settings app - the
    // handhelds have no bezel key for the map-options strip.
    case "mapText": {[call FUNC(ifName)] call cTab_fnc_iconText_toggle};
    case "mapTextUp": {call cTab_fnc_txt_size_inc};
    case "mapTextDown": {call cTab_fnc_txt_size_dec};
    case "mapTools": {[call FUNC(ifName)] call cTab_fnc_toggleMapTools};
    case "mapType": {[call FUNC(ifName)] call cTab_fnc_mapType_toggle};
    case "mapCentre": {[call FUNC(ifName)] call cTab_fnc_centerMapOnPlayerPosition};
    // the embedded intrusion page - the hacking addon owns the behaviour
    case "hackCard": {[_arg] call ghost_hacking_fnc_tabletSelectDevice};
    case "hackIntel": {[_arg] call ghost_hacking_fnc_tabletSelectIntel};
    case "hackAction": {call ghost_hacking_fnc_tabletAction};
    case "hackClose": {
        // pause the hack and hand the screen back to the desktop
        if (!isNil "ghost_hacking_fnc_tabletClosed") then {
            call ghost_hacking_fnc_tabletClosed;
        };
        ["cTab_Tablet_dlg", [["mode", "DESKTOP"]], true, true] call cTab_fnc_setSettings;
    };
};

// The press likely changed what is on screen - re-sync the catchers now
// rather than waiting for the PFH, so the next press lands right.
private _ifName = call FUNC(ifName);
if (_ifName != "") then {
    [uiNamespace getVariable [_ifName, displayNull]] call FUNC(syncCatchers);
};
