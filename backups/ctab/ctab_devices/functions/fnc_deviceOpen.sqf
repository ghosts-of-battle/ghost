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
 * call ghost_ctab_devices_fnc_deviceOpen
 */

if (!GVAR(enabled)) exitWith {};

private _ifName = call FUNC(ifName);
if !(_ifName in DEVICE_DISPLAYS) exitWith {};

private _display = uiNamespace getVariable [_ifName, displayNull];
if (isNull _display) exitWith {};

// The breadcrumb pairs with deviceLayout's: a session whose RPT carries the
// layout line but not this one means the tick-side housekeeping - hide pass,
// skin, button wiring - never engaged, which looks on screen like half the
// mod missing while the geometry is fine.
diag_log text format ["GHOST ctab_devices: deviceOpen ran for %1", _ifName];

// Our pages hold nothing until an app is picked, so never reopen into one.
// The dashboard is exempt: it is a home screen, and reopening onto it is
// exactly what the handhelds should do.
private _mode = [_ifName, "mode"] call cTab_fnc_getSettings;
if (!isNil "_mode" && {_mode in [QGVAR(uav), QGVAR(hcam), QGVAR(weather), QGVAR(drone), QGVAR(jam), QGVAR(mesh), QGVAR(radio), QGVAR(alarm), QGVAR(settings), QGVAR(hack), QGVAR(log), QGVAR(medical), QGVAR(convoy), QGVAR(support)]}) then {
    private _home = ["DESKTOP", QGVAR(menu)] select (_ifName in ["cTab_Android_dlg", "cTab_FBCB2_dlg"]);
    [_ifName, [["mode", _home]], true, true] call cTab_fnc_setSettings;
};

// cTab's own map-options menu is not part of these devices, and a saved
// showMenu=true would raise it again on the next open with nothing on this
// case able to put it away. Cleared at the source rather than hidden after
// the fact.
if (!isNil "cTab_fnc_setSettings") then {
    private _sm = [_ifName, "showMenu"] call cTab_fnc_getSettings;
    if (!isNil "_sm" && {_sm}) then {
        [_ifName, [["showMenu", false]], false] call cTab_fnc_setSettings;
    };
};

// A template list left over from the last device - cTab creates it at runtime
// and only tears it down through its own close path, so switching device with
// one open left it hanging over the new screen.
{
    private _stale = _display displayCtrl _x;
    if (!isNull _stale) then {
        ctrlDelete _stale;
    };
} forEach [990566, 990567];

// cTab's signal-strength and satellite icons sit in the same header strip as
// this addon's jam and mesh state icons, and two sets of bars in one corner is
// noise. Hidden here, on the android family only, rather than by deleting them
// from cTab's own source - patching another mod's repo changes it for every
// mission and every other addon that uses it, and it is not ours to change.
if (GVAR(hideStockSignalIcons) && {_ifName in ["cTab_Android_dlg", "cTab_Android_dsp"]}) then {
    {
        private _ctrl = _display displayCtrl _x;
        if (!isNull _ctrl) then {
            _ctrl ctrlShow false;
        };
    } forEach [3, 4];    // cTab's signalStrength and satellite
};

// The cases these devices now wear have their own glass, a different
// rectangle to the art cTab laid its controls out for, so the controls are
// moved into it once per open.
if (_ifName in ["cTab_Android_dlg", "cTab_Android_dsp"]) then {
    [_display] call FUNC(androidLayout);
};
if (_ifName isEqualTo "cTab_Tablet_dlg") then {
    [_display] call FUNC(tabletLayout);
};
if (_ifName isEqualTo "cTab_FBCB2_dlg") then {
    [_display] call FUNC(fbcb4Layout);
};

// A tool from the last time this device was open is recorded against a map
// control that died with that display. Clear it, or the picker's first press
// tries to detach a handler from a null control.
if (!isNil QEFUNC(ctab_tools,setTool)) then {
    [""] call EFUNC(ctab_tools,setTool);
};

call FUNC(deviceSkin);

// A fresh display starts with every config-declared control visible, and the
// fork's hide/show pass only runs when a setting changes - so run one now,
// whatever the mode is. Without this, whichever page classes lack an explicit
// show=0 sit over the map until the first mode switch.
private _cur = [_ifName, "mode"] call cTab_fnc_getSettings;
if (!isNil "_cur") then {
    [_ifName, [["mode", _cur]], true, true] call cTab_fnc_setSettings;
};

call FUNC(applyTheme);

// The embedded intrusion page's controls, before the wiring so its buttons
// land in the dispatch table. Tablet only; a no-op elsewhere.
[_display] call FUNC(hackBuild);

// ACE's map gestures draw off the main map's onDraw, which a device map never
// calls - this puts the same draw on this device's maps. Soft: no ACE, no-op.
if (!isNil QEFUNC(ctab_ace,attach)) then {
    [_display] call EFUNC(ctab_ace,attach);
};

// The buttons are wired by hand, BCE-style - config dispatch alone proved
// unreliable on controls added to cTab's dialogs.
[_display] call FUNC(wireButtons);

// Shuts a camera down when its app is left - the only teardown the config
// cannot do for itself.
call GVAR(startWatch);

// The readouts are driven by FUNC(deviceTick), which has been running since
// mission start - nothing to start here.
