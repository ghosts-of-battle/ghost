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
 * ["weather"] call ghost_ctab_devices_fnc_app
 */

params ["_kind"];

private _ifName = call FUNC(ifName);
if (_ifName == "") exitWith {};

private _display = uiNamespace getVariable [_ifName, displayNull];
if (isNull _display) exitWith {};

// The dashboard is a mode on every device now, so picking an app simply
// changes mode below and the fork takes the dashboard off screen - there is
// no overlay left to hide by hand.

// The tablets have cTab's own camera pages - a list of feeds beside the
// picture, room for both - so they go there rather than to our own. The
// handsets have no room for a list, so they get the picker page instead.
private _bigScreen = _ifName isEqualTo "cTab_Tablet_dlg";

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
    case "log": {[_display, QGVAR(log)] call FUNC(infoEnter)};
    // Medics and doctors only (ACE medicClass 1 or 2). Everyone else gets told
    // why rather than a screen that silently does nothing.
    case "medical": {
        if !([] call FUNC(isMedic)) exitWith {
            ["Medical", "Medic training required.", [1, 0.3, 0.3, 1]] call ghost_notify_fnc_notify;
        };
        [_display, QGVAR(medical)] call FUNC(infoEnter);
    };
    case "convoy": {[_display, QGVAR(convoy)] call FUNC(infoEnter)};
    case "support": {[_display, QGVAR(support)] call FUNC(infoEnter)};
    case "engineer": {
        if !([] call FUNC(isEngineer)) exitWith {
            ["Demolitions", "Engineer training required.", [1, 0.3, 0.3, 1]] call ghost_notify_fnc_notify;
        };
        [_display, QGVAR(engineer)] call FUNC(infoEnter);
    };
    case "settings": {[_display, QGVAR(settings)] call FUNC(infoEnter)};
    case "hack": {call FUNC(hackOpen)};
    // third argument TRUE = update the interface - false writes the mode and
    // leaves the screen untouched, which read as "the button did nothing"
    case "message": {[_ifName, [["mode", "MESSAGE"]], true, true] call cTab_fnc_setSettings};
    case "intel": {[_ifName, [["mode", "INTELFEED"]], true, true] call cTab_fnc_setSettings};
    default {[_ifName, [["mode", "BFT"]], true, true] call cTab_fnc_setSettings};
};
