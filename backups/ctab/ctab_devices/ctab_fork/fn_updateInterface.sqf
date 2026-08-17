#include "..\script_component.hpp"
/*
 * FORK of cTab's cTab_fnc_updateInterface (original by Gundy, cTab by Riouken -
 * re-used with credit per cTab's licence). Declared through CfgFunctions so it
 * is compiled before cTab's own PREP pass and therefore wins; cTab's attempt to
 * compile its copy afterwards is refused and logs one harmless
 * "Attempt to override final function" line.
 *
 * Ghost changes are marked GHOST: - they teach the interface about this mod's
 * own modes (weather / EW / radio / UAV / helmet cam) and keep the app menu
 * shown on the phone. Everything else is cTab's code, untouched, so a cTab
 * update can be re-forked by copying the new file and re-applying the marked
 * lines. Style-only lint fixes (command case, isNotEqualTo, a redundant
 * if/then/true) are also applied - behaviour is identical to cTab's.
 */
/*
    Name: cTab_fnc_updateInterface
    
    Author(s):
        Gundy

    Description:
        Update current interface (display or dialog) to match current settings.
        If no parameters are specified, all interface elements are updated

    Parameters:
    (Optional)
        0: ARRAY - Property pairs in the form of [["propertyName",propertyValue],[...]]
    
    Returns:
        BOOLEAN - Always true
    
    Example:
        [[["mapType","SAT"],["mapScaleDsp","4"]]] call cTab_fnc_updateInterface;
*/

#include "\cTab\shared\cTab_gui_macros.hpp"

private ["_interfaceInit","_settings","_display","_displayName","_null","_osdCtrl","_text","_mode","_mapTypes","_mapType","_mapIDC","_targetMapName","_targetMapIDC","_targetMapCtrl","_previousMapCtrl","_previousMapIDC","_renderTarget","_loadingCtrl","_targetMapScale","_mapScaleKm","_mapScaleMin","_mapScaleMax","_mapScaleTxt","_mapWorldPos","_targetMapWorldPos","_displayItems","_btnActCtrl","_displayItemsToShow","_mapTools","_showMenu","_data","_uavListCtrl","_hcamListCtrl","_index","_isDialog","_background","_brightness","_nightMode","_backgroundPosition","_backgroundPositionX","_backgroundPositionW","_backgroundConfigPositionX","_xOffset","_dspIfPosition","_backgroundOffset","_ctrlPos","_mousePos"];
disableSerialization;

if (isNil "cTabIfOpen") exitWith {false};
_displayName = cTabIfOpen select 1;
_display = uiNamespace getVariable _displayName;
_interfaceInit = false;
_loadingCtrl = _display displayCtrl IDC_CTAB_LOADINGTXT;
_targetMapCtrl = controlNull;
_targetMapScale = nil;
_targetMapWorldPos = nil;
_isDialog = [_displayName] call cTab_fnc_isDialog;

if (count _this == 1) then {
    _settings = _this select 0;
} else {
    // Retrieve all settings for the currently open interface
    _settings = [_displayName] call cTab_fnc_getSettings;
    _interfaceInit = true;
};

_mode = [_settings,"mode"] call cTab_fnc_getFromPairs;
if (isNil "_mode") then {
    _mode = [_displayName,"mode"] call cTab_fnc_getSettings;
    _loadingCtrl = displayNull;
} else {
    // show "Loading" control to hide all the action while its going on
    if (!isNull _loadingCtrl) then {
        _loadingCtrl ctrlShow true;
        while {!ctrlShown _loadingCtrl} do {};
    };
};

{
    call {
        // ------------ DISPLAY POSITION ------------
        if (_x select 0 == "dspIfPosition") exitWith {
            _dspIfPosition = _x select 1;
            
            if !(_isDialog) then {
                // get the current position of the background control
                _backgroundPosition = [_displayName] call cTab_fnc_getBackgroundPosition;
                _backgroundPositionX = _backgroundPosition select 0 select 0;
                _backgroundPositionW = _backgroundPosition select 0 select 2;
                
                // get the original position of the background control
                _backgroundConfigPositionX = _backgroundPosition select 1 select 0;
                
                // figure out if we need to do anything
                if ((_backgroundPositionX != _backgroundConfigPositionX) isNotEqualTo _dspIfPosition) then {
                    // calculate offset required to shift position to the opposite
                    _xOffset = if (_backgroundPositionX == _backgroundConfigPositionX) then {
                            2 * safeZoneX + safeZoneW - _backgroundPositionW - 2 * _backgroundPositionX
                        } else {
                            _backgroundConfigPositionX - _backgroundPositionX
                        };
                    [_displayName,[_xOffset,0]] call cTab_fnc_setInterfacePosition;
                };
            };
        };
        // ------------ DIALOG POSITION ------------
        if (_x select 0 == "dlgIfPosition") exitWith {
            // GHOST: never on the refitted cases. The layouts move the whole
            // case deliberately; cTab's close path saves that move as if the
            // player had dragged the dialog, and this branch would drag every
            // control back by it on a later pass - the layout then loses
            // without a trace. The drag handles are hidden on these devices,
            // so there is no player position to restore.
            if (_displayName in DEVICE_DISPLAYS) exitWith {};
            _backgroundOffset = _x select 1;

            if (_isDialog) then {
                if (_backgroundOffset isEqualTo []) then {
                    _backgroundOffset = if (_interfaceInit) then {
                            [0,0]
                        } else {
                            // reset to defaults
                            _backgroundPosition = [_displayName] call cTab_fnc_getBackgroundPosition;
                            [(_backgroundPosition select 1 select 0) - (_backgroundPosition select 0 select 0),(_backgroundPosition select 1 select 1) - (_backgroundPosition select 0 select 1)]
                        };
                };
                if (_backgroundOffset isNotEqualTo [0,0]) then {
                    // move by offset
                    [_displayName,_backgroundOffset] call cTab_fnc_setInterfacePosition;
                };
            };
        };
        // ------------ BRIGHTNESS ------------
        // Value ranges from 0 to 1, 0 being off and 1 being full brightness
        if (_x select 0 == "brightness") exitWith {
            _osdCtrl = _display displayCtrl IDC_CTAB_BRIGHTNESS;
            if (!isNull _osdCtrl) then {
                _brightness = _x select 1;
                _nightMode = [_displayName,"nightMode"] call cTab_fnc_getSettings;
                // if we are running night mode, lower the brightness proportionally
                if (!isNil "_nightMode") then {
                    if (_nightMode == 1 || {_nightMode == 2 && (sunOrMoon < 0.2)}) then {_brightness = _brightness * 0.7};
                };
                _osdCtrl ctrlSetBackgroundColor [0,0,0,1 - _brightness];
            };
        };
        
        // ------------ NIGHT MODE ------------
        // 0 = day mode, 1 = night mode, 2 = automatic
        if (_x select 0 == "nightMode") exitWith {
            _nightMode = _x select 1;
            // transform nightMode into boolean
            _nightMode = (_nightMode == 1 || {_nightMode == 2 && (sunOrMoon < 0.2)});
            // GHOST: cTab rebuilt its texture table during this open, just
            // before this first repaint - stamp the ghost case art back over
            // it here, or the stock frame shows until the next deviceTick.
            if (!isNil "ghost_ctab_devices_fnc_deviceSkin") then {call ghost_ctab_devices_fnc_deviceSkin};
            _background = (cTabIfOpen select 9) select _nightMode;
            if (_background != "") then {
                (_display displayCtrl IDC_CTAB_BACKGROUND) ctrlSetText _background;
                // call brightness adjustment if this is outside of interface init
                if (!_interfaceInit) then {
                    _settings pushBack ["brightness",[_displayName,"brightness"] call cTab_fnc_getSettings];
                };
            };
        };
        
        // ------------ MODE ------------
        if (_x select 0 == "mode") exitWith {
            cTabUserPos = [];
            
            _displayItems = call {              
                if (_displayName == "cTab_Tablet_dlg") exitWith {
                    // GHOST: our pages, menus and alarm buttons join the hide list,
                    // plus the embedded intrusion page (the hacking addon's 8700s)
                    [8702,8703,8704,8705,8706,8707,8708,8709,8710,
                    8720,8721,8722,8723,8725,8726,8727,8728,8730,8731,8732,8733,
                    8735,8736,8737,8738,8740,8741,8742,8743,8745,8746,8747,8748,
                    8780,8781,8782,8783,8784,
                    467100,467101,467102,467200,467201,467300,467310,467401,467410,
                    467500,467501,467502,467503,467504,467505,467506,467507,467508,467509,
                    467510,467511,467512,467513,467514,467515,467516,467517,
                    467520,467521,467522,467523,467530,467531,467532,467533,
                    // GHOST: the tools drawer - its backing and every tool on it,
                    // and the key that opens it. The key is map-screen only: its
                    // drawer acts on the map, and parked over another page it sat
                    // on cTab's own buttons - the message page's Delete carried
                    // the tool key's dots on top of it.
                    IDC_S7_TOOLSBG,TOOL_IDCS,
                    IDC_GFT_TOOLKEY,IDC_GFT_TOOLGLYPH,
                    // GHOST: the alarm DEL keys - hidden by every mode switch;
                    // FUNC(alarmDelSync) alone shows the ones the player may use
                    467560,467561,467562,467563,467564,467565,
                    // GHOST: the SUPPORT page's Simplex service keys
                    467570,467571,467572,467573,
                    467700,467701,467702,467703,467720,467721,467730,467731,
                    // GHOST: cTab's twelve user-menu panels, 3300 to 3311. This
                    // list stopped at 3307, so the last four were never hidden
                    // when the screen changed and stayed up over whatever page
                    // came next - cTab only hides them inside its own menu
                    // handler (core\fnc_userMenuSelect.sqf:66), which does not
                    // run when the mode changes underneath them.
                    3300,3301,3302,3303,3304,3305,3306,3307,3308,3309,3310,3311,
                    // GHOST: cTab's own map-options menu. It was missing from
                    // THIS list while the handset had it, which is why it
                    // could be raised on the tablet and never dismissed - no
                    // mode change could reach it.
                    IDC_CTAB_GROUP_MENU,
                    IDC_CTAB_GROUP_DESKTOP,
                    IDC_CTAB_GROUP_UAV,
                    IDC_CTAB_GROUP_HCAM,
                    IDC_CTAB_GROUP_MESSAGE,
                    IDC_CTAB_MINIMAPBG,
                    IDC_CTAB_CTABHCAMMAP,
                    IDC_CTAB_CTABUAVMAP,
                    IDC_CTAB_SCREEN,
                    IDC_CTAB_SCREEN_TOPO,
                    IDC_CTAB_HCAM_FULL,
                    IDC_CTAB_OSD_HOOK_GRID,
                    IDC_CTAB_OSD_HOOK_ELEVATION,
                    IDC_CTAB_OSD_HOOK_DST,
                    IDC_CTAB_OSD_HOOK_DIR,
                    IDC_CTAB_NOTIFICATION,
                    990566,990567,1000000]
                };
                if (_displayName == "cTab_Android_dlg") exitWith {
                    // GHOST: our pages, menus and alarm buttons join the hide list.
                    // The dashboard's cards and glyphs are group CHILDREN and stay
                    // out of it - showing the group shows what is inside it.
                    [467100,467101,467102,467200,467201,467300,467310,467401,467410,
                    467500,467501,467502,467503,467504,467505,467506,467507,467508,467509,
                    467510,467511,467512,467513,467514,467515,467516,467517,
                    467520,467521,467522,467523,467530,467531,467532,467533,
                    // GHOST: the tools drawer - its backing and every tool on it,
                    // and the key that opens it (map screen only, as on the GFT)
                    IDC_S7_TOOLSBG,TOOL_IDCS,
                    IDC_S23_TOOLKEY,IDC_S23_TOOLGLYPH,
                    // GHOST: the alarm DEL keys - hidden by every mode switch;
                    // FUNC(alarmDelSync) alone shows the ones the player may use
                    467560,467561,467562,467563,467564,467565,
                    467700,467701,467702,467703,467720,467721,467730,467731,
                    // GHOST: cTab's twelve user-menu panels, 3300 to 3311. This
                    // list stopped at 3307, so the last four were never hidden
                    // when the screen changed and stayed up over whatever page
                    // came next - cTab only hides them inside its own menu
                    // handler (core\fnc_userMenuSelect.sqf:66), which does not
                    // run when the mode changes underneath them.
                    3300,3301,3302,3303,3304,3305,3306,3307,3308,3309,3310,3311,
                    IDC_CTAB_GROUP_MENU,
                    IDC_CTAB_GROUP_MESSAGE,
                    IDC_CTAB_GROUP_COMPOSE,
                    IDC_CTAB_SCREEN,
                    IDC_CTAB_SCREEN_TOPO,
                    IDC_CTAB_OSD_HOOK_GRID,
                    IDC_CTAB_OSD_HOOK_ELEVATION,
                    IDC_CTAB_OSD_HOOK_DST,
                    IDC_CTAB_OSD_HOOK_DIR,
                    IDC_CTAB_NOTIFICATION,
                    990566,990567,1000000]
                };
                // GHOST: the FBCB4 is the FBCB2 reskinned, so it carries the same
                // pages the handhelds do - including the message page grafted
                // into its dialog (IDC_CTAB_GROUP_MESSAGE, the F2 key's job) -
                // minus intrusion, which has no place on a vehicle screen. Its
                // menu key is deliberately NOT in this list: it is the whole of
                // this screen's navigation and has to survive every mode.
                if (_displayName == "cTab_FBCB2_dlg") exitWith {
                    [IDC_CTAB_GROUP_MESSAGE,
                    467100,467101,467102,467200,467201,467330,467410,
                    467500,467501,467502,467503,467504,467505,467506,467507,467508,467509,
                    467510,467511,467512,467513,467514,467515,467516,467517,
                    467520,467521,467522,467523,467530,467531,467532,467533,
                    // GHOST: the tools drawer - its backing and every tool on it,
                    // and the key that opens it (map screen only, as on the GFT)
                    IDC_S7_TOOLSBG,TOOL_IDCS,
                    IDC_FBCB4_TOOLKEY,IDC_FBCB4_TOOLGLYPH,
                    467700,467701,467702,467703,467720,467721,467730,467731,
                    // GHOST: cTab's twelve user-menu panels, 3300 to 3311. This
                    // list stopped at 3307, so the last four were never hidden
                    // when the screen changed and stayed up over whatever page
                    // came next - cTab only hides them inside its own menu
                    // handler (core\fnc_userMenuSelect.sqf:66), which does not
                    // run when the mode changes underneath them.
                    3300,3301,3302,3303,3304,3305,3306,3307,3308,3309,3310,3311,
                    // GHOST: cTab's own map-options menu, same as the others
                    IDC_CTAB_GROUP_MENU,
                    IDC_CTAB_NOTIFICATION]
                };
                if (_displayName == "cTab_TAD_dlg") exitWith {
                    [3300,3301,3302,3303,3304,3305,3306,3307,3308,3309,3310,3311,
                    IDC_CTAB_NOTIFICATION]
                };
                [IDC_CTAB_NOTIFICATION] // default
            };
            if (_displayItems isNotEqualTo []) then {
                _btnActCtrl = _display displayCtrl IDC_CTAB_BTNACT;
                _displayItemsToShow = [];
                
                call {
                    // ---------- GHOST: this mod's own pages -----------
                    // Weather / EW / radio draw into 467200+, the camera apps into
                    // 467100+. The map stays behind them and, on the phone, the app
                    // menu stays up so the next app is one click away.
                    if (_mode in ["ghost_ctab_devices_weather","ghost_ctab_devices_drone","ghost_ctab_devices_jam","ghost_ctab_devices_mesh","ghost_ctab_devices_radio","ghost_ctab_devices_alarm","ghost_ctab_devices_settings","ghost_ctab_devices_log","ghost_ctab_devices_medical","ghost_ctab_devices_convoy","ghost_ctab_devices_engineer","ghost_ctab_devices_support"]) exitWith {
                        _displayItemsToShow = [467200,467201];
                        if (_mode == "ghost_ctab_devices_alarm") then {
                            _displayItemsToShow append [467500,467501,467502,467503,467504];
                                // GHOST: short fuses and the time-of-day field
                                _displayItemsToShow append [467505,467506,467507,467508,467509];
                        };
                        if (_mode == "ghost_ctab_devices_support") then {
                            // GHOST: the four Simplex service keys
                            _displayItemsToShow append [467570,467571,467572,467573];
                        };
                        if (_mode == "ghost_ctab_devices_settings") then {
                            _displayItemsToShow append [467510,467511,467512,467513,467514,467515,467516,467517];
                            // GHOST: then the screen shade and the font pickers
                            _displayItemsToShow append [467520,467521,467522,467523];
                            _displayItemsToShow append [467530,467531,467532,467533];
                            // GHOST: the map switches and drawing tools used to be
                            // two more rows here. They live in the tools drawer now -
                            // on the map, where the thing they act on actually is.
                        };
                        if (_mode == "ghost_ctab_devices_drone") then {
                            _displayItemsToShow append [467720,467721];
                        };
                        if (_mode == "ghost_ctab_devices_weather") then {
                            // GHOST: the current-condition glyph
                            _displayItemsToShow append [467730,467731];
                        };
                        _btnActCtrl ctrlSetTooltip "";
                    };
                    if (_mode in ["ghost_ctab_devices_uav","ghost_ctab_devices_hcam"]) exitWith {
                        _displayItemsToShow = [467100,467101,467102];
                        _btnActCtrl ctrlSetTooltip "";
                    };
                    // ---------- GHOST: embedded intrusion page -----------
                    // The whole page shows; the hacking addon's refresh hides
                    // the cards and intel buttons it has no use for.
                    if (_mode == "ghost_ctab_devices_hack") exitWith {
                        _displayItemsToShow = [
                            8702,8703,8704,8705,8706,8707,8708,8709,8710,
                            8720,8721,8722,8723,8725,8726,8727,8728,8730,8731,8732,8733,
                            8735,8736,8737,8738,8740,8741,8742,8743,8745,8746,8747,8748,
                            8780,8781,8782,8783,8784
                        ];
                        _btnActCtrl ctrlSetTooltip "";
                    };
                    // ---------- DESKTOP -----------
                    if (_mode == "DESKTOP") exitWith {
                        _displayItemsToShow pushBack IDC_CTAB_GROUP_DESKTOP;
                        // GHOST: the tablet's app panel and its weather readout.
                        // No unit mark here - the GFT's dashboard is the apps and
                        // nothing else now.
                        _displayItemsToShow append [467310,467401];
                        // GHOST: the GFT-1 has its own menu, and it opens
                        // from its key rather than sitting on the desktop
                        _displayItemsToShow append [467390,467391];
                        _btnActCtrl ctrlSetText "";
                        _btnActCtrl ctrlSetTooltip "";
                    };
                    // ---------- GHOST: the handset and vehicle-screen dashboards
                    // The GFT's dashboard is cTab's own DESKTOP mode, which is why
                    // nothing bleeds through it. The other two had no such mode -
                    // their menus were overlays toggled on top of the map, so the
                    // scanner rows and cTab's map readouts drew straight over them.
                    // A mode of their own gives them the same clean full screen.
                    // Only the groups: their children are deliberately absent from
                    // the hide lists, and showing a group shows what is in it.
                    if (_mode == "ghost_ctab_devices_menu") exitWith {
                        _displayItemsToShow append [IDC_S7_MENU,IDC_FBCB4_MENU,467410];
                        _btnActCtrl ctrlSetText "";
                        _btnActCtrl ctrlSetTooltip "";
                    };
                    // ---------- BFT -----------
                    if (_mode == "BFT") exitWith {
                        _mapTypes = [_displayName,"mapTypes"] call cTab_fnc_getSettings;
                        _mapType = [_displayName,"mapType"] call cTab_fnc_getSettings;
                        _mapIDC = [_mapTypes,_mapType] call cTab_fnc_getFromPairs;
                        
                        _displayItemsToShow pushBack _mapIDC;
                        
                        _mapTools = [_displayName,"mapTools"] call cTab_fnc_getSettings;
                        if (!isNil "_mapTools" && {_mapTools}) then {
                            _displayItemsToShow append [
                                IDC_CTAB_OSD_HOOK_GRID,
                                IDC_CTAB_OSD_HOOK_ELEVATION,
                                IDC_CTAB_OSD_HOOK_DST,
                                IDC_CTAB_OSD_HOOK_DIR
                            ];
                        };
                        
                        // GHOST: the scanner readout belongs to the map screen only.
                        // (The jam/mesh header icons are left out of the hide list
                        // entirely, so they show on every screen.)
                        if (profileNamespace getVariable ["ghost_ctab_devices_scanPanel", true]) then {
                            _displayItemsToShow append [467700,467701,467702,467703];
                        };

                        // GHOST: the tools drawer, if its key has been pressed. Map
                        // screen only - every tool on it acts on the map, and the
                        // drawing tools need a map control to attach to.
                        if (uiNamespace getVariable ["ghost_ctab_devices_toolsOpen", false]) then {
                            _displayItemsToShow append [IDC_S7_TOOLSBG,TOOL_IDCS];
                        };

                        // GHOST: the key itself comes back with the map. One list
                        // serves all three devices - the keys a display does not
                        // carry are controlNull, and showing those is a no-op.
                        _displayItemsToShow append [
                            IDC_GFT_TOOLKEY,IDC_GFT_TOOLGLYPH,
                            IDC_S23_TOOLKEY,IDC_S23_TOOLGLYPH,
                            IDC_FBCB4_TOOLKEY,IDC_FBCB4_TOOLGLYPH
                        ];

                        // GHOST: cTab's map-options menu is NOT shown on this
                        // mod's devices - see the showMenu branch below. The
                        // app menu and the tools drawer replaced it, and it
                        // has no dismiss button on these cases.
                        if !(_displayName in ["cTab_Android_dlg", "cTab_Tablet_dlg", "cTab_FBCB2_dlg"]) then {
                            _showMenu = [_displayName,"showMenu"] call cTab_fnc_getSettings;
                            if (!isNil "_showMenu" && {_showMenu}) then {
                                _displayItemsToShow pushBack IDC_CTAB_GROUP_MENU;
                            };
                        };
                        
                        _btnActCtrl ctrlSetTooltip "";
                        
                        // update scale and world position when not on interface init
                        if (!_interfaceInit) then {
                            if (_isDialog) then {
                                _settings pushBack ["mapScaleDlg",[_displayName,"mapScaleDlg"] call cTab_fnc_getSettings];
                                _settings pushBack ["mapWorldPos",[_displayName,"mapWorldPos"] call cTab_fnc_getSettings];
                            };
                        };
                    };
                    // ---------- _NOT_ BFT -----------
                    if (_isDialog) then {
                        _mapTypes = [_displayName,"mapTypes"] call cTab_fnc_getSettings;
                        if (count _mapTypes > 1) then {
                            _targetMapName = [_displayName,"mapType"] call cTab_fnc_getSettings;
                            _targetMapIDC = [_mapTypes,_targetMapName] call cTab_fnc_getFromPairs;
                            _targetMapCtrl = _display displayCtrl _targetMapIDC;
                            
                            // If we find the map to be shown, we are switching away from BFT. Lets save map scale and position
                            if (ctrlShown _targetMapCtrl) then {
                                private _mapScale = cTabMapScale * cTabMapScaleFactor / 0.86 * (safeZoneH * 0.8);
                                [_displayName,[["mapWorldPos",cTabMapWorldPos],["mapScaleDlg",_mapScale]],false] call cTab_fnc_setSettings;
                            };
                        };
                    };
                    // ---------- UAV -----------
                    if (_mode == "UAV") exitWith {
                        _displayItemsToShow = [
                            IDC_CTAB_GROUP_UAV,
                            IDC_CTAB_MINIMAPBG,
                            IDC_CTAB_CTABUAVMAP
                        ];
                        _btnActCtrl ctrlSetTooltip (localize "STR_ctab_core_viewGunnerOptics");
                        _settings pushBack ["uavListUpdate",true];
                        if (!_interfaceInit) then {
                            _settings pushBack ["uavCam",[_displayName,"uavCam"] call cTab_fnc_getSettings];
                        };
                    };
                    // ---------- HELMET CAM -----------
                    if (_mode == "HCAM") exitWith {
                        _displayItemsToShow = [
                            IDC_CTAB_GROUP_HCAM,
                            IDC_CTAB_MINIMAPBG,
                            IDC_CTAB_CTABHCAMMAP
                        ];
                        _btnActCtrl ctrlSetTooltip (localize "STR_ctab_core_toggleFullscreen");
                        _settings pushBack ["hCamListUpdate",true];
                        if (!_interfaceInit) then {
                            _settings pushBack ["hCam",[_displayName,"hCam"] call cTab_fnc_getSettings];
                        };
                    };
                    // ---------- MESSAGING -----------
                    if (_mode == "MESSAGE") exitWith {
                        _displayItemsToShow = [IDC_CTAB_GROUP_MESSAGE];
                        call cTab_msg_gui_load;
                        // GHOST: re-place the page every time it comes up. The
                        // hand layout is idempotent, so whatever occasionally
                        // reverts the page to cTab's swept config arrangement -
                        // full-height list, oversize Delete, overflow scrollbar -
                        // is overwritten the moment the app opens, instead of
                        // surviving until the next device open.
                        if (_displayName == "cTab_Tablet_dlg" && {!isNil "ghost_ctab_devices_fnc_messageLayout"}) then {
                            [_display] call ghost_ctab_devices_fnc_messageLayout;
                        };
                        cTabRscLayerMailNotification cutText ["", "PLAIN"];
                        _btnActCtrl ctrlSetTooltip "";
                    };
                    // ---------- MESSAGING COMPOSE -----------
                    if (_mode == "COMPOSE") exitWith {
                        _displayItemsToShow pushBack IDC_CTAB_GROUP_COMPOSE;
                        call cTab_msg_gui_load;
                    };
                    // ---------- FULLSCREEN HELMET CAM -----------
                    if (_mode == "HCAM_FULL") exitWith {
                        _displayItemsToShow = [IDC_CTAB_HCAM_FULL];
                        _data = [_displayName,"hCam"] call cTab_fnc_getSettings;
                        _btnActCtrl ctrlSetTooltip (localize "STR_ctab_core_toggleFullscreen"); 
                        ['rendertarget13',_data] spawn cTab_fnc_createHelmetCam;
                    };
                    // ---------- INTEL FEED -----------
                    if (_mode == "INTELFEED") exitWith {
                        _displayItemsToShow = [1000000];
                        [_display] call ctab_intel_fnc_showIntelFeedUI;
                    };
                };
                
                // hide every _displayItems not in _displayItemsToShow
                {(_display displayCtrl _x) ctrlShow (_x in _displayItemsToShow)} count _displayItems;

                if (_mode == "DESKTOP") then {
                    // if we are in desktop mode, we want to focus on the desktop group
                    // this allows tooltips to be displayed correctly
                    ctrlSetFocus (_display displayCtrl IDC_CTAB_GROUP_DESKTOP);
                };
            };
        };
        // ------------ SHOW ICON TEXT ------------
        if (_x select 0 == "showIconText") exitWith {
            _osdCtrl = _display displayCtrl IDC_CTAB_OSD_TXT_TGGL;
            if (!isNull _osdCtrl) then {
                _text = ["OFF", "ON"] select (_x select 1);
                _osdCtrl ctrlSetText _text;
            };
        };
        // ------------ MAP SCALE DSP------------
        if (_x select 0 == "mapScaleDsp") exitWith {
            if (_mode == "BFT" && !_isDialog) then {
                _mapScaleKm = _x select 1;
                // pre-Calculate map scales
                _mapScaleMin = [_displayName,"mapScaleMin"] call cTab_fnc_getSettings;
                _mapScaleMax = [_displayName,"mapScaleMax"] call cTab_fnc_getSettings;
                _mapScaleKm = call {
                    if (_mapScaleKm >= _mapScaleMax) exitWith {_mapScaleMax};
                    if (_mapScaleKm <= _mapScaleMin) exitWith {_mapScaleMin};
                    // pick the next best scale that is an even multiple of the minimum map scale... It does tip in favour of the larger scale due to the use of logarithm, so its not perfect
                    _mapScaleMin * 2 ^ round (log (_mapScaleKm / _mapScaleMin) / log (2))
                };
                if (_mapScaleKm != (_x select 1)) then {
                    [_displayName,[["mapScaleDsp",_mapScaleKm]],false] call cTab_fnc_setSettings;
                };
                cTabMapScale = _mapScaleKm / cTabMapScaleFactor;
                
                _osdCtrl = _display displayCtrl IDC_CTAB_OSD_MAP_SCALE;
                if (!isNull _osdCtrl) then {
                    // divide by 2 because we want to display the radius, not the diameter
                    _mapScaleTxt = if (_mapScaleKm > 1) then {
                            _mapScaleKm / 2
                    } else {
                        [_mapScaleKm / 2,0,1] call CBA_fnc_formatNumber
                    };
                    _osdCtrl ctrlSetText format ["%1",_mapScaleTxt];    
                };
            };
        };
        // ------------ MAP SCALE DLG------------
        if (_x select 0 == "mapScaleDlg") exitWith {
            if (_mode == "BFT" && _isDialog) then {
                _mapScaleKm = _x select 1;
                _targetMapScale = _mapScaleKm / cTabMapScaleFactor * 0.86 / (safeZoneH * 0.8);
            };
        };
        // ------------ MAP WORLD POSITION ------------
        if (_x select 0 == "mapWorldPos") exitWith {
            if (_mode == "BFT") then {
                if (_isDialog) then {
                    _mapWorldPos = _x select 1;
                    if (_mapWorldPos isNotEqualTo []) then {
                        _targetMapWorldPos = _mapWorldPos;
                    };
                };
            };
        };
        // ------------ MAP TYPE ------------
        if (_x select 0 == "mapType") exitWith {
            _mapTypes = [_displayName,"mapTypes"] call cTab_fnc_getSettings;
            if ((count _mapTypes > 1) && (_mode == "BFT")) then {
                _targetMapName = _x select 1;
                _targetMapIDC = [_mapTypes,_targetMapName] call cTab_fnc_getFromPairs;
                _targetMapCtrl = _display displayCtrl _targetMapIDC;
                
                if (!_interfaceInit && _isDialog) then {
                    _previousMapCtrl = controlNull;
                    {
                        _previousMapIDC = _x select 1;
                        _previousMapCtrl = _display displayCtrl _previousMapIDC;
                        if (ctrlShown _previousMapCtrl) exitWith {};
                        _previousMapCtrl = controlNull;
                    } count _mapTypes;
                    // See if _targetMapCtrl is already being shown
                    if ((!ctrlShown _targetMapCtrl) && (_targetMapCtrl != _previousMapCtrl)) then {
                        // Update _targetMapCtrl to scale and position of _previousMapCtrl
                        if (isNil "_targetMapScale") then {_targetMapScale = ctrlMapScale _previousMapCtrl;};
                        if (isNil "_targetMapWorldPos") then {_targetMapWorldPos = [_previousMapCtrl] call cTab_fnc_ctrlMapCenter};
                    };
                };
                
                // Hide all unwanted map types
                {
                    if (_x select 0 != _targetMapName) then {
                        (_display displayCtrl (_x select 1)) ctrlShow false;
                    };
                } count _mapTypes;
                
                // Update OSD element if it exists
                _osdCtrl = _display displayCtrl IDC_CTAB_OSD_MAP_TGGL;
                if (!isNull _osdCtrl) then {_osdCtrl ctrlSetText _targetMapName;};
                
                // show correct map contorl
                if (!ctrlShown _targetMapCtrl) then {
                    _targetMapCtrl ctrlShow true;
                    // wait until map control is shown, otherwise we can get in trouble with ctrlMapAnimCommit later on, depending on timing
                    while {!ctrlShown _targetMapCtrl} do {};
                };
            };
        };
        // ------------ UAV CAM ------------
        if (_x select 0 == "uavCam") exitWith {
            if (_mode == "UAV") then {
                _data = _x select 1;
                if (_data != "") then {
                    [_data,[[0,"rendertarget8"],[1,"rendertarget9"]]] spawn cTab_fnc_createUavCam;
                } else {
                    [] call cTab_fnc_deleteUAVcam;
                };
            };
        };
        // ------------ HCAM ------------
        if (_x select 0 == "hCam") exitWith {
            _renderTarget = call {
                if (_mode == "HCAM") exitWith {"rendertarget12"};
                if (_mode == "HCAM_FULL") exitWith {"rendertarget13"}
            };
            if (!isNil "_renderTarget") then {
                _data = _x select 1;
                if (_data != "") then {
                    [_renderTarget,_data] spawn cTab_fnc_createHelmetCam;
                } else {
                    [] call cTab_fnc_deleteHelmetCam;
                }
            };
        };
        // ------------ MAP TOOLS ------------
        if (_x select 0 == "mapTools") exitWith {
            cTabDrawMapTools = _x select 1;
            if (_mode == "BFT") then {
                if !(_displayName in ["cTab_TAD_dlg","cTab_TAD_dsp"]) then {
                    {
                        _osdCtrl = _display displayCtrl _x;
                        if (!isNull _osdCtrl) then {
                            _osdCtrl ctrlShow cTabDrawMapTools;
                        };
                    } count [IDC_CTAB_OSD_HOOK_GRID,IDC_CTAB_OSD_HOOK_DIR,IDC_CTAB_OSD_HOOK_DST,IDC_CTAB_OSD_HOOK_ELEVATION];
                };
                _osdCtrl = _display displayCtrl IDC_CTAB_OSD_HOOK_TGGL1;
                if (!isNull _osdCtrl) then {
                    _text = ["CURS", "OWN"] select (_x select 1);
                    _osdCtrl ctrlSetText _text;
                };
                _osdCtrl = _display displayCtrl IDC_CTAB_OSD_HOOK_TGGL2;
                if (!isNull _osdCtrl) then {
                    _text = ["OWN", "CURS"] select (_x select 1);
                    _osdCtrl ctrlSetText _text;
                };
            };
        };
        // ------------ MENU ------------
        // GHOST: cTab's own map-options menu STAYS DOWN on this mod's
        // devices. They carry an app menu and a tools drawer that do the same
        // jobs, and cTab's panel is only dismissed by cTab's own button -
        // which these cases do not have. One player got it up on the GFT and
        // could not get rid of it, because the tablet's hide list never
        // included this group: nothing that happened afterwards could take it
        // away again.
        if (_x select 0 == "showMenu") exitWith {
            _osdCtrl = _display displayCtrl IDC_CTAB_GROUP_MENU;
            if (!isNull _osdCtrl) then {
                if (_displayName in ["cTab_Android_dlg", "cTab_Tablet_dlg", "cTab_FBCB2_dlg"]) then {
                    _osdCtrl ctrlShow false;
                } else {
                    if (_mode == "BFT") then {
                        _osdCtrl ctrlShow (_x select 1);
                    };
                };
            };
        };
        // ------------ UAV List Update ------------
        if (_x select 0 == "uavListUpdate") exitWith {
            if (_mode == "UAV") then {
                _data = [_displayName,"uavCam"] call cTab_fnc_getSettings;
                _uavListCtrl = _display displayCtrl IDC_CTAB_CTABUAVLIST;
                lbClear _uavListCtrl;
                _uavListCtrl lbSetCurSel -1;
                // Populate list of UAVs
                {
                    if (crew _x isNotEqualTo []) then {
                        // GHOST: faction and airframe on the end of the row.
                        // The list mixes the section's drones with anything
                        // else the crew can see through, and a callsign plus a
                        // model name says neither whose it is nor what it is.
                        _index = _uavListCtrl lbAdd format ["%1:%2 (%3) [%4]",groupId group _x,groupId _x,getText (configOf _x >> "displayname"),[_x] call FUNC(droneTag)];
                        _uavListCtrl lbSetData [_index,str _x];
                    };
                } count cTabUAVlist;
                lbSort [_uavListCtrl, "ASC"];
                if (_data != "") then {
                    // Find last selected UAV and select if found
                    for "_x" from 0 to (lbSize _uavListCtrl - 1) do {
                        if (_data == _uavListCtrl lbData _x) exitWith {
                            if (lbCurSel _uavListCtrl != _x) then {
                                _uavListCtrl lbSetCurSel _x;
                            };
                        };
                    };
                    // If no UAV could be selected, clear last selected UAV
                    if (lbCurSel _uavListCtrl == -1) then {
                        [_displayName,[["uavCam",""]]] call cTab_fnc_setSettings;
                    };
                };
            };
        };
        // ------------ HCAM List Update ------------
        if (_x select 0 == "hCamListUpdate") exitWith {
            if (_mode == "HCAM") then {
                _data = [_displayName,"hCam"] call cTab_fnc_getSettings;
                _hcamListCtrl = _display displayCtrl IDC_CTAB_CTABHCAMLIST;
                // Populate list of HCAMs
                lbClear _hcamListCtrl;
                _hcamListCtrl lbSetCurSel -1;
                {
                    _index = _hcamListCtrl lbAdd format ["%1:%2 (%3)",groupId group _x, groupId _x,name _x];
                    _hcamListCtrl lbSetData [_index,str _x];
                } count cTabHcamlist;
                lbSort [_hcamListCtrl, "ASC"];
                if (_data != "") then {
                    // Find last selected hCam and select if found
                    for "_x" from 0 to (lbSize _hcamListCtrl - 1) do {
                        if (_data == _hcamListCtrl lbData _x) exitWith {
                            if (lbCurSel _hcamListCtrl != _x) then {
                                _hcamListCtrl lbSetCurSel _x;
                            };
                        };
                    };
                    // If no hCam could be selected, clear last selected hCam
                    if (lbCurSel _hcamListCtrl == -1) then {
                        [_displayName,[["hCam",""]]] call cTab_fnc_setSettings;
                    };
                };
            };
        };
        // ----------------------------------
    };
} forEach _settings;

// update scale and world position if we have to. If so, fill in the blanks and make the changes
if ((!isNil "_targetMapScale") || (!isNil "_targetMapWorldPos")) then {
    if (isNull _targetMapCtrl) then {
        _targetMapName = [_displayName,"mapType"] call cTab_fnc_getSettings;
        _mapTypes = [_displayName,"mapTypes"] call cTab_fnc_getSettings;
        _targetMapIDC = [_mapTypes,_targetMapName] call cTab_fnc_getFromPairs;
        _targetMapCtrl = _display displayCtrl _targetMapIDC;
    };
    if (isNil "_targetMapScale") then {
        _targetMapScale = ctrlMapScale _targetMapCtrl;
    };
    if (isNil "_targetMapWorldPos") then {
        _targetMapWorldPos = [_targetMapCtrl] call cTab_fnc_ctrlMapCenter;
    };
    _targetMapCtrl ctrlMapAnimAdd [0,_targetMapScale,_targetMapWorldPos];
    ctrlMapAnimCommit _targetMapCtrl;
    while {!(ctrlMapAnimDone _targetMapCtrl)} do {};
};

// now hide the "Loading" control since we are done
if (!isNull _loadingCtrl) then {
    // move mouse cursor to the center of the screen if its a dialog
    if (_interfaceInit && _isDialog) then {
        _ctrlPos = ctrlPosition _loadingCtrl;
        // put the mouse position in the center of the screen
        _mousePos = [(_ctrlPos select 0) + ((_ctrlPos select 2) / 2),(_ctrlPos select 1) + ((_ctrlPos select 3) / 2)];
        // delay moving the mouse cursor by one frame using a PFH, for some reason its not working without
        [{
            [_this select 1] call CBA_fnc_removePerFrameHandler;
            setMousePosition (_this select 0);
        },0,_mousePos] call CBA_fnc_addPerFrameHandler;
    };
    
    _loadingCtrl ctrlShow false;
    while {ctrlShown _loadingCtrl} do {};
};

// call notification system
if (_interfaceInit) then {[] call cTab_fnc_processNotifications};

true
