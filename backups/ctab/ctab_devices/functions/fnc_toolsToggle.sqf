#include "script_component.hpp"
/*
 * Author: YonV
 * Shows or hides the tools drawer - cTab's map switches and this mod's drawing
 * tools, on one panel over the map.
 *
 * These were two rows on the settings page, which meant leaving the map to
 * reach a tool that only does anything to the map. The drawer opens from its
 * own key, dotted rather than barred so it reads apart from the app menu.
 *
 * The map screen is the only place the drawer makes sense, so a press from
 * anywhere else takes the device there first - exactly as the app menu key
 * does, and for the same reason: a panel drawn under a full-screen page is
 * invisible, and the key would read as dead.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ghost_ctab_devices_fnc_toolsToggle
 */

private _ifName = call FUNC(ifName);
if (_ifName == "") exitWith {};

private _display = uiNamespace getVariable [_ifName, displayNull];
if (isNull _display) exitWith {};

private _open = !(uiNamespace getVariable [QGVAR(toolsOpen), false]);
uiNamespace setVariable [QGVAR(toolsOpen), _open];

// The app menus share this corner of the glass, so one of the two is up at a
// time - opening the drawer puts them away.
if (_open) then {
    {
        private _menu = _display displayCtrl _x;
        if (!isNull _menu) then {
            _menu ctrlShow false;
        };
    } forEach [IDC_S7_MENU, IDC_FBCB4_MENU];
};

// Opening from an app page: go to the map, which redraws and brings the
// drawer with it. Otherwise re-run the current mode to trigger that redraw.
private _mode = [_ifName, "mode"] call cTab_fnc_getSettings;
if (_open && {!isNil "_mode"} && {_mode != "BFT"}) exitWith {
    [_ifName, [["mode", "BFT"]], true, true] call cTab_fnc_setSettings;
};

if (isNil "_mode") exitWith {};
// force the redraw: the mode has not changed, only what the fork shows under it
[_ifName, [["mode", _mode]], true, true] call cTab_fnc_setSettings;
