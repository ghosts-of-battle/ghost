#include "script_component.hpp"

if (isNil QEGVAR(main,ghost_enabled) || !(EGVAR(main,ghost_enabled))) exitWith {};

// The convoy board lives on the server, before the interface gate: a
// dedicated server has no display but still owns the registrations, and every
// device reads the same broadcast array. [[vehicle, name], ...] - a plain
// array, because this goes out over publicVariable.
if (isServer) then {
    GVAR(convoyStore) = [];
    publicVariable QGVAR(convoyStore);
    [QGVAR(convoyRegister), {_this call FUNC(convoyRegister)}] call CBA_fnc_addEventHandler;
};

if (!hasInterface) exitWith {};

// Magazine display names, looked up once each - see FUNC(engineerRead). The
// demolitions page reads every placed charge on every tick it is open.
GVAR(magNames) = createHashMap;

// cTab is a soft dependency - skip silently when the mod is absent
if (isNil "cTab_fnc_setSettings") exitWith {};

// cTab defaults the two handhelds' nightMode to 2 (dim after dark) but the
// vehicle screen's to 0, so the FBCB4 would carry a night case it could never
// show. The FBCB4 is the same fitting-out job as the other two - it gets the
// same behaviour. cTabSettings is a live array of pairs, so this edits cTab's
// own default in place; it waits because cTab builds that array at its own
// postInit and load order between two addons is not ours to assume.
[
    {!isNil "cTabSettings"},
    {
        private _group = [cTabSettings, "FBCB2"] call cTab_fnc_getFromPairs;
        if (isNil "_group") exitWith {};
        [_group, "nightMode", 2] call BIS_fnc_setToPairs;
    }
] call CBA_fnc_waitUntilAndExecute;

// One loop drives every readout and notices a device opening. It idles while
// the devices are closed, so it can simply run for the whole mission.
uiNamespace setVariable [QGVAR(lastDisplay), displayNull];
[FUNC(deviceTick), 1, []] call CBA_fnc_addPerFrameHandler;

// THE LAYOUT AUDIT, ON A CHAT COMMAND. FUNC(auditLayout) has always existed and
// has always needed the debug console, so every layout fault has instead been
// found by screenshot - which cannot say whether a control is two pixels or two
// hundred out of place, or whether it moved at all between builds. Open a
// device, type this, and the numbers go to the RPT.
["ghostui", {
    private _n = call FUNC(auditLayout);
    ["Audit", format ["%1 fault(s) - see the RPT.", _n], [0.914, 0.651, 0.235, 1]] call EFUNC(notify,notify);
}, "all"] call CBA_fnc_registerChatCommand;

// A faster loop keeps the click-catchers' visibility matched to their source
// controls - screens share real estate, and a hidden control's catcher would
// otherwise steal presses from whatever is actually shown. Cheap: ~50
// ctrlShown reads while a device is open, nothing while none is.
[{
    private _ifName = call FUNC(ifName);
    if !(_ifName in DEVICE_DISPLAYS) exitWith {};
    [uiNamespace getVariable [_ifName, displayNull]] call FUNC(syncCatchers);
}, 0.2, []] call CBA_fnc_addPerFrameHandler;

// SIMPLEX'S ACE SELF-MENU GOES. The GFT's SUPPORT app is the way into its
// request screens now - two entrances to the same flows is clutter, and the
// user asked for exactly one. A frame later, so Simplex's own postInit has
// registered the action before this unregisters it; the root action removes
// the whole service submenu with it. Soft: no Simplex, no-op.
// ACE's remove takes the FULL PATH - parent path PLUS the action's own name,
// split internally - and the inheritance flag must match how Simplex added it
// (addActionToClass ..., true). The first cut passed the parent path and the
// name as two arguments, which parsed as a nonexistent action without
// inheritance: a silent no-op, and the menu stayed.
[{
    if (isNil "sss_common_fnc_openGUI" || {isNil "ace_interact_menu_fnc_removeActionFromClass"}) exitWith {};
    ["CAManBase", 1, ["ACE_SelfActions", "sss"], true] call ace_interact_menu_fnc_removeActionFromClass;
}, []] call CBA_fnc_execNextFrame;

// The camera apps are the one thing the config cannot clean up after: leaving
// their page hides the picture, but the camera behind it has to be shut down.
GVAR(watchPFH) = -1;
GVAR(startWatch) = {
    if (GVAR(watchPFH) != -1) exitWith {};
    GVAR(watchPFH) = [{
        params ["", "_handle"];
        private _ifName = call FUNC(ifName);
        if !(_ifName in ["cTab_Android_dlg", "cTab_Tablet_dlg"]) exitWith {
            GVAR(watchPFH) = -1;
            [_handle] call CBA_fnc_removePerFrameHandler;
        };
        private _display = uiNamespace getVariable [_ifName, displayNull];
        if (isNull _display) exitWith {
            GVAR(watchPFH) = -1;
            [_handle] call CBA_fnc_removePerFrameHandler;
        };
        // The pages hide themselves - the updateInterface fork owns that. What
        // it cannot do is shut down a camera, so that is all this watches for.
        // (The info page's refresh loop retires on its own once hidden.)
        private _mode = [_ifName, "mode"] call cTab_fnc_getSettings;
        if (isNil "_mode") exitWith {};
        if (!(_mode in [QGVAR(uav), QGVAR(hcam)]) && {!isNull (_display displayCtrl IDC_S7_CAMPIC)}) then {
            [_display] call FUNC(camExit);
        };
    }, 0.25, []] call CBA_fnc_addPerFrameHandler;
};
