#include "script_component.hpp"
/*
 * Author: YonV
 * Shows or hides the app menu of whichever device is open - the S7's from its
 * top bezel key, the GFT-1's from the key on its glass. From inside an app
 * it first returns the device to its home screen, because the pages are drawn
 * after the menu and a menu shown underneath one is invisible: the key would
 * read as dead. So one press leaves the app with the menu up, the next press
 * puts the menu away.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ghost_ctab_s7_fnc_menuToggle
 */

private _ifName = call FUNC(ifName);
if (_ifName == "") exitWith {};

private _display = uiNamespace getVariable [_ifName, displayNull];
if (isNull _display) exitWith {};

// Each device's menu, and the screen it calls home.
(switch (_ifName) do {
    case "cTab_Android_dlg": {[IDC_S7_MENU, "BFT"]};
    case QGVAR(gft_dlg): {[IDC_GFT_MENU, "DESKTOP"]};
    case QGVAR(s23_dlg): {[IDC_S7_MENU, "BFT"]};
    default {[-1, ""]};
}) params ["_menuIdc", "_home"];

if (_menuIdc < 0) exitWith {};

private _menu = _display displayCtrl _menuIdc;
if (isNull _menu) exitWith {};

if (ctrlShown _menu) exitWith {
    _menu ctrlShow false;
};

// Any mode but the home screen covers the menu, so leave it first.
private _mode = [_ifName, "mode"] call cTab_fnc_getSettings;
if (!isNil "_mode" && {_mode != _home}) then {
    [_ifName, [["mode", _home]], true, true] call cTab_fnc_setSettings;
};

_menu ctrlShow true;
