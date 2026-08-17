#include "script_component.hpp"
/*
 * Author: YonV
 * Opens or closes the dashboard of whichever device is open, from that
 * device's menu key.
 *
 * All three devices now do this the same way: the dashboard is a MODE, so the
 * fork's show pass gives it the whole screen and nothing draws through it. It
 * used to be a ctrlShow overlay on the handset and the vehicle screen, which
 * is exactly why the scanner rows and cTab's map readouts sat on top of their
 * menus. One press opens the dashboard from wherever you are, the next goes
 * back to the map.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ghost_ctab_devices_fnc_menuToggle
 */

private _ifName = call FUNC(ifName);
if (_ifName == "") exitWith {};

private _display = uiNamespace getVariable [_ifName, displayNull];
if (isNull _display) exitWith {};

// The tools drawer shares this corner of the glass - the two are never up
// together, so reaching for the apps puts the tools away. Every path below
// ends in a setSettings redraw, which is what actually takes it off screen.
uiNamespace setVariable [QGVAR(toolsOpen), false];

// The GFT has no pop-up menu: its dashboard IS the menu, so the key simply
// goes home to it from wherever the device is.
if (_ifName == "cTab_Tablet_dlg") exitWith {
    [_ifName, [["mode", "DESKTOP"]], true, true] call cTab_fnc_setSettings;
};

// The other two now work the same way. Their menus used to be overlays
// toggled on top of whatever was underneath, which is why the scanner rows
// and cTab's map readouts drew straight through them; as a MODE of its own
// the dashboard gets the screen to itself, exactly like the GFT's.
if !(_ifName in ["cTab_Android_dlg", "cTab_FBCB2_dlg"]) exitWith {};

private _mode = [_ifName, "mode"] call cTab_fnc_getSettings;
if (isNil "_mode") exitWith {};

// From the dashboard the key goes back to the map; from anywhere else it
// opens the dashboard. One key, two states, the same as the GFT's.
private _next = [QGVAR(menu), "BFT"] select (_mode == QGVAR(menu));
[_ifName, [["mode", _next]], true, true] call cTab_fnc_setSettings;
