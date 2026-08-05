#include "script_component.hpp"
/*
 * Author: YonV
 * Opens an app on whichever cTab interface is up - the S7 menu tiles and the
 * tablet desktop icons both come here. Native cTab modes go through cTab's own
 * settings; our camera and info apps enter their custom modes. The phone's menu
 * closes on the way, so the app gets the whole screen.
 *
 * Arguments:
 * 0: App key <STRING> - "map" "message" "intel" "uav" "hcam" "weather" "ew" "radio"
 *
 * Return Value:
 * None
 *
 * Example:
 * ["weather"] call ghost_ctab_s7_fnc_app
 */

params ["_kind"];

private _ifName = call FUNC(ifName);
if (_ifName == "") exitWith {};

private _display = uiNamespace getVariable [_ifName, displayNull];
if (isNull _display) exitWith {};

// Picking an app closes the menu, whichever device's it is - the app gets
// the whole screen.
{
    private _menu = _display displayCtrl _x;
    if (!isNull _menu) then {
        _menu ctrlShow false;
    };
} forEach [IDC_S7_MENU, IDC_GFT_MENU];

// The tablets have cTab's own camera pages - a list of feeds beside the
// picture, room for both - so they go there rather than to our own. The
// handsets have no room for a list, so they get the picker page instead.
private _bigScreen = _ifName in ["cTab_Tablet_dlg", QGVAR(gft_dlg)];

switch (_kind) do {
    case "uav": {
        if (_bigScreen) then {
            [_ifName, [["mode", "UAV"]], true, true] call cTab_fnc_setSettings;
        } else {
            [_display, QGVAR(uav)] call FUNC(camEnter);
        };
    };
    case "hcam": {
        if (_bigScreen) then {
            [_ifName, [["mode", "HCAM"]], true, true] call cTab_fnc_setSettings;
        } else {
            [_display, QGVAR(hcam)] call FUNC(camEnter);
        };
    };
    case "weather": {[_display, QGVAR(weather)] call FUNC(infoEnter)};
    case "drone": {[_display, QGVAR(drone)] call FUNC(infoEnter)};
    case "jam": {[_display, QGVAR(jam)] call FUNC(infoEnter)};
    case "mesh": {[_display, QGVAR(mesh)] call FUNC(infoEnter)};
    case "radio": {[_display, QGVAR(radio)] call FUNC(infoEnter)};
    case "alarm": {[_display, QGVAR(alarm)] call FUNC(infoEnter)};
    case "settings": {[_display, QGVAR(settings)] call FUNC(infoEnter)};
    case "hack": {call FUNC(hackOpen)};
    // third argument TRUE = update the interface - false writes the mode and
    // leaves the screen untouched, which read as "the button did nothing"
    case "message": {[_ifName, [["mode", "MESSAGE"]], true, true] call cTab_fnc_setSettings};
    case "intel": {[_ifName, [["mode", "INTELFEED"]], true, true] call cTab_fnc_setSettings};
    default {[_ifName, [["mode", "BFT"]], true, true] call cTab_fnc_setSettings};
};
