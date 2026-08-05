#include "script_component.hpp"
/*
 * Author: YonV
 * Runs from a zero-size control's onLoad in each device dialog, so it fires
 * every time a device opens without depending on cTab raising an event. The
 * menus, icons and pages are all config-declared, so this only does
 * housekeeping: close the phone's app menu, tint the icons, clear a mode left
 * over from a previous session, and start the readout loops.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ghost_ctab_s7_fnc_deviceOpen
 */

if (!GVAR(enabled)) exitWith {};

private _ifName = call FUNC(ifName);
if !(_ifName in ["cTab_Android_dlg", "cTab_Tablet_dlg", "cTab_Android_dsp", QGVAR(gft_dlg), QGVAR(s23_dlg)]) exitWith {};

private _display = uiNamespace getVariable [_ifName, displayNull];
if (isNull _display) exitWith {};

// Our pages hold nothing until an app is picked, so never reopen into one.
private _mode = [_ifName, "mode"] call cTab_fnc_getSettings;
if (!isNil "_mode" && {_mode in [QGVAR(uav), QGVAR(hcam), QGVAR(weather), QGVAR(drone), QGVAR(jam), QGVAR(mesh), QGVAR(radio), QGVAR(alarm), QGVAR(settings), QGVAR(hack)]}) then {
    private _home = ["DESKTOP", "BFT"] select (_ifName == "cTab_Android_dlg");
    [_ifName, [["mode", _home]], true, true] call cTab_fnc_setSettings;
};

// The app menus open from a key, never on their own.
{
    private _menu = _display displayCtrl _x;
    if (!isNull _menu) then {
        _menu ctrlShow false;
    };
} forEach [IDC_S7_MENU, IDC_GFT_MENU];

// cTab's signal-strength and satellite icons sit in the same header strip as
// this addon's jam and mesh state icons, and two sets of bars in one corner is
// noise. Hidden here, on the android family only, rather than by deleting them
// from cTab's own source - patching another mod's repo changes it for every
// mission and every other addon that uses it, and it is not ours to change.
if (GVAR(hideStockSignalIcons) && {_ifName in ["cTab_Android_dlg", "cTab_Android_dsp", QGVAR(s23_dlg)]}) then {
    {
        private _ctrl = _display displayCtrl _x;
        if (!isNull _ctrl) then {
            _ctrl ctrlShow false;
        };
    } forEach [3, 4];    // cTab's signalStrength and satellite
};

// The bezel art of whichever handheld this actually is.
[_display] call FUNC(deviceSkin);

// The GFT-1's glass is a different rectangle to cTab's, so its inherited
// controls are moved into it once, here.
if (_ifName isEqualTo QGVAR(gft_dlg)) then {
    [_display] call FUNC(gftLayout);
};
if (_ifName isEqualTo QGVAR(s23_dlg)) then {
    [_display] call FUNC(s23Layout);
};

call FUNC(applyTheme);

// The embedded intrusion page's controls, before the wiring so its buttons
// land in the dispatch table. Tablet only; a no-op elsewhere.
[_display] call FUNC(hackBuild);

// The buttons are wired by hand, BCE-style - config dispatch alone proved
// unreliable on controls added to cTab's dialogs.
[_display] call FUNC(wireButtons);

// Shuts a camera down when its app is left - the only teardown the config
// cannot do for itself.
call GVAR(startWatch);

// The readouts are driven by FUNC(deviceTick), which has been running since
// mission start - nothing to start here.
