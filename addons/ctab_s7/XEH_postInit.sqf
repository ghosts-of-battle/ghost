#include "script_component.hpp"

if (isNil QEGVAR(main,ghost_enabled) || !(EGVAR(main,ghost_enabled))) exitWith {};

if (!hasInterface) exitWith {};

// cTab is a soft dependency - skip silently when the mod is absent
if (isNil "cTab_fnc_setSettings") exitWith {};

// Our devices have their own displays, so cTab has to be told the names exist:
// getSettings/setSettings refuse any display that is not in this table. Each
// shares the property group of the device it is built on.
//
// They also need their own ACE entries. cTab's own entries open cTab's own
// screens - taking the S23's action from the android entry is exactly why it
// came up wearing the S7's face.
[{!isNil "cTabDisplayPropertyGroups" && {!isNil "ctab_core_personnelDevices"}}, {
    // cTab builds its own ACE entries from the same lists it uses for tracking,
    // and those entries open cTab's own screens - which is why carrying an S23
    // or a GFT-1 also offered an entry that came up as the S7. Take ours out of
    // the two lists that drive the entries and the which-dialog logic, and
    // leave them in the ones that drive blue-force tracking, so they are still
    // seen on the net and still ring for alarms.
    private _ours = [
        QGVAR(s23_blk), QGVAR(s23_blk_misc), QGVAR(s23_tan), QGVAR(s23_tan_misc),
        QGVAR(gft), QGVAR(gft_misc)
    ];
    {
        private _list = missionNamespace getVariable [_x, []];
        missionNamespace setVariable [_x, _list - _ours];
    } forEach ["ctab_core_androidDevices", "ctab_core_tabDevices"];
    {
        private _list = missionNamespace getVariable [_x, []];
        {_list pushBackUnique _x} forEach _ours;
        missionNamespace setVariable [_x, _list];
    } forEach ["ctab_core_leaderDevices", "ctab_core_personnelDevices"];

    {
        _x params ["_dlg", "_group", "_label", "_icon", "_open", "_items"];

        if ((cTabDisplayPropertyGroups findIf {(_x select 0) isEqualTo _dlg}) < 0) then {
            cTabDisplayPropertyGroups pushBack [_dlg, _group];
        };

        private _action = [
            _dlg,
            _label,
            _icon,
            _open,
            compile format [
                "!isNil 'cTab_fnc_checkGear' && {[player, %1] call cTab_fnc_checkGear}",
                str _items
            ]
        ] call ace_interact_menu_fnc_createAction;
        [player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;
    } forEach [
        [QGVAR(gft_dlg), "Tablet", "GFT-1 Rugged Tablet", "\cTab\img\icon_dk10.paa",
            {call FUNC(gftOpen)}, [QGVAR(gft), QGVAR(gft_misc)]],
        [QGVAR(s23_dlg), "Android", "S23 Handheld", QPATHTOF(data\icon_s23_blk_ca.paa),
            {call FUNC(s23Open)},
            [QGVAR(s23_blk), QGVAR(s23_blk_misc), QGVAR(s23_tan), QGVAR(s23_tan_misc)]]
    ];
}, []] call CBA_fnc_waitUntilAndExecute;

uiNamespace setVariable [QGVAR(lastDisplay), displayNull];
[FUNC(deviceTick), 1, []] call CBA_fnc_addPerFrameHandler;

// A faster loop keeps the click-catchers' visibility matched to their source
// controls - screens share real estate, and a hidden control's catcher would
// otherwise steal presses from whatever is actually shown. Cheap: ~50
// ctrlShown reads while a device is open, nothing while none is.
[{
    private _ifName = call FUNC(ifName);
    if !(_ifName in ["cTab_Android_dlg", "cTab_Tablet_dlg", "cTab_Android_dsp", QGVAR(gft_dlg), QGVAR(s23_dlg)]) exitWith {};
    [uiNamespace getVariable [_ifName, displayNull]] call FUNC(syncCatchers);
}, 0.2, []] call CBA_fnc_addPerFrameHandler;

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
