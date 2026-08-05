// ---------------------------------------------------------------------------
// The rugged tablet. This file is the tablet and nothing else - the S7 is in
// ui_s7.hpp and shares no numbers with it.
//
// Screen content is 1341 x 901 at 257,533 in a 2048 canvas (the map starts at
// 491 under a 42px OSD header and ends above a 50px task bar), on a grid
// (safezoneH * 1.2) tall, 3/4 as wide, nudged right by 96.5/2048 because the
// screen is not centred in the art.
//
// A tile is ONE control - a shortcut button carrying its own icon and label.
// Drawing a picture and a label over a plain button looks right but eats every
// click, which is exactly what happened the first time round.
//
// The tablet has no scanner-on-map readout: you cannot walk with it up, so a
// live readout there would never be read. That belongs to the S7.
//
// TEMPLATE CLASSES LIVE OUT HERE, NEVER INSIDE THE DIALOG: the engine
// instantiates every class in a controls block, template or not, so an in-
// dialog base with no position renders as a phantom box at the origin - the
// tabTile template at 0,0 was the "box over the clock".
// ---------------------------------------------------------------------------

// One tile, one control: the icon rides in ShortcutPos and the label in
// TextPos, so the whole tile is the click target. periods are 0 - a pulse on
// hover reads as blinking.
class GVAR(tabTile): RscButtonMenu {
    idc = -1;
    style = "0x02 + 0x0C + 0x0100";
    x = 0;
    y = 0;
    w = "((241)) / 2048 * ((safezoneH * 1.2) * 3/4)";
    h = "((257)) / 2048 * (safezoneH * 1.2)";
    text = "";
    textureNoShortcut = "";
    size = "((26)) / 2048 * (safezoneH * 1.2)";
    sizeEx = "((26)) / 2048 * (safezoneH * 1.2)";
    colorBackground[] = {0, 0, 0, 0};
    colorBackground2[] = {0, 0, 0, 0};
    colorBackgroundFocused[] = {0, 0, 0, 0};
    animTextureDefault = QPATHTOF(data\tile_n_ca.paa);
    animTextureNormal = QPATHTOF(data\tile_n_ca.paa);
    animTextureDisabled = QPATHTOF(data\tile_n_ca.paa);
    animTextureOver = QPATHTOF(data\tile_o_ca.paa);
    animTextureFocused = QPATHTOF(data\tile_n_ca.paa);
    animTexturePressed = QPATHTOF(data\tile_p_ca.paa);
    periodFocus = 0;
    periodOver = 0;

    class ShortcutPos {
        left = "((78)) / 2048 * ((safezoneH * 1.2) * 3/4)";
        top = "((48)) / 2048 * (safezoneH * 1.2)";
        w = "((84)) / 2048 * ((safezoneH * 1.2) * 3/4)";
        h = "((84)) / 2048 * (safezoneH * 1.2)";
    };
    class TextPos {
        left = 0;
        top = "((150)) / 2048 * (safezoneH * 1.2)";
        right = 0;
        bottom = 0;
    };
    class Attributes {
        font = "RobotoCondensed";
        color = "#E5E5E5";
        align = "center";
        shadow = 0;
    };
};

class cTab_Tablet_dlg {
    class controlsBackground {
        // Grey the screen behind the map. A new class here would merge in AFTER
        // cTab's map control and cover it - that was one build's "no map" - so
        // the settings app repaints this control of cTab's at runtime instead.
        class windowsBG: cTab_RscPicture {
            text = "#(argb,8,8,3)color(0.16,0.17,0.18,1)";
        };
    };

    class controls {
        class GVAR(tabHolder): RscText {
            idc = -1;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
            colorBackground[] = {0, 0, 0, 0};
            onLoad = QUOTE(call FUNC(deviceOpen););
        };

        // The stock icon column goes: every one of those apps is on the panel,
        // and two columns of the same thing is clutter.
        class Desktop: cTab_RscControlsGroup {
            class controls {
                // actBFTtxt cannot be deleted - the other icons inherit from
                // it, so the engine keeps the base alive. Shrink it instead.
                class actBFTtxt: cTab_ActiveText {
                    w = 0;
                    h = 0;
                };
                delete actUAVtxt;
                delete actVIDtxt;
                delete actMSGtxt;
                delete actINTELtxt;
            };
        };

        // The desktop, RuggON-dashboard style: a full-screen grid of rounded
        // LIVE tiles - big glyph, label, and a live readout line fed by
        // FUNC(widgetTick) - with the unit mark in the header. Clicking a tile
        // opens its full app.
        class GVAR(tabMenu): cTab_RscControlsGroup {
            idc = 467310;
            x = "((257)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((533)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((1341)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((950)) / 2048 * (safezoneH * 1.2)";

            class VScrollbar {};
            class HScrollbar {};
            class Scrollbar {};

            class controls {
                class GVAR(tabMenuBg): RscText {
                    idc = 467421;
                    x = 0;
                    y = 0;
                    w = "((1341)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((950)) / 2048 * (safezoneH * 1.2)";
                    colorBackground[] = {0.07, 0.08, 0.09, 1};
                };
                class GVAR(tabMenuTitle): RscText {
                    idc = -1;
                    x = "((28)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((26)) / 2048 * (safezoneH * 1.2)";
                    w = "((700)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((52)) / 2048 * (safezoneH * 1.2)";
                    text = "GHOSTS OF BATTLE";
                    sizeEx = "((40)) / 2048 * (safezoneH * 1.2)";
                    colorText[] = {0.78, 0.80, 0.82, 1};
                };

                class GVAR(tabAppMap): GVAR(tabTile) {
                    idc = 467620;
                    x = "((28)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((110)) / 2048 * (safezoneH * 1.2)";
                    text = "MAP";
                    textureNoShortcut = "\cTab\img\icon_bft_ca.paa";
                    tooltip = "Back to the map";
                    action = QUOTE(['app','map'] call FUNC(click););
                    onButtonClick = QUOTE(['app','map'] call FUNC(click););
                };
                class GVAR(tabAppMessages): GVAR(tabTile) {
                    idc = 467621;
                    x = "((289)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((110)) / 2048 * (safezoneH * 1.2)";
                    text = "MESSAGES";
                    textureNoShortcut = "\cTab\img\icon_mail_ca.paa";
                    tooltip = "Messages and report templates";
                    action = QUOTE(['app','message'] call FUNC(click););
                    onButtonClick = QUOTE(['app','message'] call FUNC(click););
                };
                class GVAR(tabAppUav): GVAR(tabTile) {
                    idc = 467622;
                    x = "((550)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((110)) / 2048 * (safezoneH * 1.2)";
                    text = "UAV CAM";
                    textureNoShortcut = "\cTab\img\icon_uav_ca.paa";
                    tooltip = "UAV feed - pick again for the next aircraft";
                    action = QUOTE(['app','uav'] call FUNC(click););
                    onButtonClick = QUOTE(['app','uav'] call FUNC(click););
                };
                class GVAR(tabAppHcam): GVAR(tabTile) {
                    idc = 467623;
                    x = "((811)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((110)) / 2048 * (safezoneH * 1.2)";
                    text = "HELMET CAM";
                    textureNoShortcut = "\cTab\img\icon_helmetcam_ca.paa";
                    tooltip = "Helmet cam - pick again for the next man";
                    action = QUOTE(['app','hcam'] call FUNC(click););
                    onButtonClick = QUOTE(['app','hcam'] call FUNC(click););
                };
                class GVAR(tabAppIntel): GVAR(tabTile) {
                    idc = 467624;
                    x = "((1072)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((110)) / 2048 * (safezoneH * 1.2)";
                    text = "INTEL";
                    textureNoShortcut = "\z\ctab\addons\intel\data\feed_ca.paa";
                    tooltip = "Intel feed";
                    action = QUOTE(['app','intel'] call FUNC(click););
                    onButtonClick = QUOTE(['app','intel'] call FUNC(click););
                };
                class GVAR(tabAppDrone): GVAR(tabTile) {
                    idc = 467625;
                    x = "((28)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((387)) / 2048 * (safezoneH * 1.2)";
                    text = "DRONE";
                    textureNoShortcut = QPATHTOF(data\icon_ew_ca.paa);
                    tooltip = "Drone detection - bearing and range";
                    action = QUOTE(['app','drone'] call FUNC(click););
                    onButtonClick = QUOTE(['app','drone'] call FUNC(click););
                };
                class GVAR(tabAppJam): GVAR(tabTile) {
                    idc = 467626;
                    x = "((289)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((387)) / 2048 * (safezoneH * 1.2)";
                    text = "JAM";
                    textureNoShortcut = QPATHTOF(data\icon_jam_ca.paa);
                    tooltip = "Jamming level";
                    action = QUOTE(['app','jam'] call FUNC(click););
                    onButtonClick = QUOTE(['app','jam'] call FUNC(click););
                };
                class GVAR(tabAppMesh): GVAR(tabTile) {
                    idc = 467627;
                    x = "((550)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((387)) / 2048 * (safezoneH * 1.2)";
                    text = "MESH";
                    textureNoShortcut = QPATHTOF(data\icon_mesh_ca.paa);
                    tooltip = "Mesh link";
                    action = QUOTE(['app','mesh'] call FUNC(click););
                    onButtonClick = QUOTE(['app','mesh'] call FUNC(click););
                };
                class GVAR(tabAppRadio): GVAR(tabTile) {
                    idc = 467629;
                    x = "((811)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((387)) / 2048 * (safezoneH * 1.2)";
                    text = "RADIO";
                    textureNoShortcut = QPATHTOF(data\icon_radio_ca.paa);
                    tooltip = "Radio and vehicle racks";
                    action = QUOTE(['app','radio'] call FUNC(click););
                    onButtonClick = QUOTE(['app','radio'] call FUNC(click););
                };
                class GVAR(tabAppAlarm): GVAR(tabTile) {
                    idc = 467630;
                    x = "((1072)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((387)) / 2048 * (safezoneH * 1.2)";
                    text = "ALARMS";
                    textureNoShortcut = QPATHTOF(data\icon_alarm_ca.paa);
                    tooltip = "Scanner alarms";
                    action = QUOTE(['app','alarm'] call FUNC(click););
                    onButtonClick = QUOTE(['app','alarm'] call FUNC(click););
                };
                // The weather tile is double-wide, RuggON utility style: glyph
                // and label left, the live readout (467401) on the right half.
                class GVAR(tabAppWeather): GVAR(tabTile) {
                    idc = 467628;
                    x = "((28)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((664)) / 2048 * (safezoneH * 1.2)";
                    w = "((502)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    text = "WEATHER";
                    textureNoShortcut = QPATHTOF(data\icon_weather_ca.paa);
                    tooltip = "Current weather";
                    animTextureDefault = QPATHTOF(data\tilew_n_ca.paa);
                    animTextureNormal = QPATHTOF(data\tilew_n_ca.paa);
                    animTextureDisabled = QPATHTOF(data\tilew_n_ca.paa);
                    animTextureOver = QPATHTOF(data\tilew_o_ca.paa);
                    animTextureFocused = QPATHTOF(data\tilew_n_ca.paa);
                    animTexturePressed = QPATHTOF(data\tilew_p_ca.paa);
                    action = QUOTE(['app','weather'] call FUNC(click););
                    onButtonClick = QUOTE(['app','weather'] call FUNC(click););
                    class ShortcutPos {
                        left = "((78)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                        top = "((48)) / 2048 * (safezoneH * 1.2)";
                        w = "((84)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                        h = "((84)) / 2048 * (safezoneH * 1.2)";
                    };
                    class TextPos {
                        left = 0;
                        top = "((150)) / 2048 * (safezoneH * 1.2)";
                        right = "((261)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                        bottom = 0;
                    };
                };
                class GVAR(tabAppHack): GVAR(tabTile) {
                    idc = 467631;
                    x = "((550)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((664)) / 2048 * (safezoneH * 1.2)";
                    text = "INTRUSION";
                    textureNoShortcut = QPATHTOF(data\icon_hack_ca.paa);
                    tooltip = "Intrusion suite";
                    action = QUOTE(['app','hack'] call FUNC(click););
                    onButtonClick = QUOTE(['app','hack'] call FUNC(click););
                };
                class GVAR(tabAppSettings): GVAR(tabTile) {
                    idc = 467632;
                    x = "((811)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((664)) / 2048 * (safezoneH * 1.2)";
                    text = "SETTINGS";
                    textureNoShortcut = QPATHTOF(data\icon_settings_ca.paa);
                    tooltip = "Device settings - colours and font";
                    action = QUOTE(['app','settings'] call FUNC(click););
                    onButtonClick = QUOTE(['app','settings'] call FUNC(click););
                };
                // A spare tile, inert, held for whatever comes next.
                class GVAR(tabAppSpare0): GVAR(tabTile) {
                    idc = 467633;
                    x = "((1072)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((664)) / 2048 * (safezoneH * 1.2)";
                    text = "";
                    textureNoShortcut = "";
                    animTextureOver = QPATHTOF(data\tile_n_ca.paa);
                    animTexturePressed = QPATHTOF(data\tile_p_ca.paa);
                };

                // Live readout lines, one per data tile, fed by widgetTick.
                class GVAR(tabLiveUav): RscStructuredText {
                    idc = 467440;
                    x = "((550)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((310)) / 2048 * (safezoneH * 1.2)";
                    w = "((241)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((44)) / 2048 * (safezoneH * 1.2)";
                    size = "((24)) / 2048 * (safezoneH * 1.2)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(tabLiveHcam): RscStructuredText {
                    idc = 467441;
                    x = "((811)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((310)) / 2048 * (safezoneH * 1.2)";
                    w = "((241)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((44)) / 2048 * (safezoneH * 1.2)";
                    size = "((24)) / 2048 * (safezoneH * 1.2)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(tabLiveDrone): RscStructuredText {
                    idc = 467442;
                    x = "((28)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((587)) / 2048 * (safezoneH * 1.2)";
                    w = "((241)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((44)) / 2048 * (safezoneH * 1.2)";
                    size = "((24)) / 2048 * (safezoneH * 1.2)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(tabLiveJam): RscStructuredText {
                    idc = 467443;
                    x = "((289)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((587)) / 2048 * (safezoneH * 1.2)";
                    w = "((241)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((44)) / 2048 * (safezoneH * 1.2)";
                    size = "((24)) / 2048 * (safezoneH * 1.2)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(tabLiveMesh): RscStructuredText {
                    idc = 467444;
                    x = "((550)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((587)) / 2048 * (safezoneH * 1.2)";
                    w = "((241)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((44)) / 2048 * (safezoneH * 1.2)";
                    size = "((24)) / 2048 * (safezoneH * 1.2)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(tabLiveRadio): RscStructuredText {
                    idc = 467445;
                    x = "((811)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((587)) / 2048 * (safezoneH * 1.2)";
                    w = "((241)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((44)) / 2048 * (safezoneH * 1.2)";
                    size = "((24)) / 2048 * (safezoneH * 1.2)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(tabLiveAlarm): RscStructuredText {
                    idc = 467446;
                    x = "((1072)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((587)) / 2048 * (safezoneH * 1.2)";
                    w = "((241)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((44)) / 2048 * (safezoneH * 1.2)";
                    size = "((24)) / 2048 * (safezoneH * 1.2)";
                    colorBackground[] = {0, 0, 0, 0};
                };
            };
        };

        // The live weather readout, overlaying the right half of the wide
        // weather tile. Updated by FUNC(widgetTick).
        class GVAR(tabWeather): RscStructuredText {
            idc = 467401;
            x = "((517)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((1245)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((260)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((150)) / 2048 * (safezoneH * 1.2)";
            size = "((26)) / 2048 * (safezoneH * 1.2)";
            colorBackground[] = {0, 0, 0, 0};
        };

        // The unit mark, top-right of the dashboard header.
        class GVAR(tabLogo): RscPicture {
            idc = 467410;
            text = "\z\ghost\addons\media\images\logo_512.paa";
            x = "((1458)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((549)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((120)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((120)) / 2048 * (safezoneH * 1.2)";
            colorText[] = {1, 1, 1, 0.9};
        };

        // --- pages, declared last so they cover the map --------------------
        class GVAR(tabCamPic): RscPicture {
            idc = 467100;
            x = "((257)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((533)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((1341)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((901)) / 2048 * (safezoneH * 1.2)";
        };
        class GVAR(tabCamLabel): RscText {
            idc = 467101;
            x = "((257)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((533)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((1341)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((44)) / 2048 * (safezoneH * 1.2)";
            sizeEx = "((28)) / 2048 * (safezoneH * 1.2)";
            colorBackground[] = {0, 0, 0, 0.55};
        };
        class GVAR(tabInfoBg): RscText {
            idc = 467200;
            x = "((257)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((533)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((1341)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((901)) / 2048 * (safezoneH * 1.2)";
            colorBackground[] = {0.13, 0.13, 0.14, 1};
        };
        // A centred column rather than the full screen - lines that run the
        // whole width put the label a screen away from its value.
        class GVAR(tabInfoTxt): RscStructuredText {
            idc = 467201;
            x = "((577)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((593)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((700)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((500)) / 2048 * (safezoneH * 1.2)";
            size = "((30)) / 2048 * (safezoneH * 1.2)";
            colorBackground[] = {0, 0, 0, 0};
        };

        // Centred on the screen, below the bearing numbers.
        class GVAR(tabCompass): RscPicture {
            idc = 467720;
            text = QPATHTOF(data\icon_compass_ca.paa);
            x = "((747)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((880)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((360)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((360)) / 2048 * (safezoneH * 1.2)";
        };
        class GVAR(tabNeedle): GVAR(tabCompass) {
            idc = 467721;
            text = QPATHTOF(data\icon_needle_ca.paa);
        };

        // weather app: the current-condition glyph, centred below the numbers,
        // tinted the accent colour. Texture picked by FUNC(widgetTick).
        // Below the text block, not over it - the two overlapped before.
        class GVAR(tabWxIcon): RscPicture {
            idc = 467730;
            x = "((807)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((1120)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((240)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((240)) / 2048 * (safezoneH * 1.2)";
        };

        class GVAR(tabAlarm0): cTab_RscButton {
            idc = 467500;
            x = "((317)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((1290)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((220)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((60)) / 2048 * (safezoneH * 1.2)";
            text = "+5 MIN";
            sizeEx = "((26)) / 2048 * (safezoneH * 1.2)";
            colorBackground[] = {0.19, 0.20, 0.21, 1};
            colorBackgroundActive[] = {0.32, 0.34, 0.36, 1};
            action = QUOTE(['alarm',5] call FUNC(click););
        };
        class GVAR(tabAlarm1): GVAR(tabAlarm0) {
            idc = 467501;
            x = "((547)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "+15 MIN";
            action = QUOTE(['alarm',15] call FUNC(click););
        };
        class GVAR(tabAlarm2): GVAR(tabAlarm0) {
            idc = 467502;
            x = "((777)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "+30 MIN";
            action = QUOTE(['alarm',30] call FUNC(click););
        };
        class GVAR(tabAlarm3): GVAR(tabAlarm0) {
            idc = 467503;
            x = "((1007)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "SILENCE";
            action = QUOTE(['alarmSilence'] call FUNC(click););
        };
        // quick set: the short fuses a contact plan actually uses
        class GVAR(tabAlarm5): GVAR(tabAlarm0) {
            idc = 467505;
            x = "((317)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((1370)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            text = "+1 MIN";
            action = QUOTE(['alarm',1] call FUNC(click););
        };
        class GVAR(tabAlarm6): GVAR(tabAlarm5) {
            idc = 467506;
            x = "((547)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "+2 MIN";
            action = QUOTE(['alarm',2] call FUNC(click););
        };
        class GVAR(tabAlarm7): GVAR(tabAlarm5) {
            idc = 467507;
            x = "((777)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "+3 MIN";
            action = QUOTE(['alarm',3] call FUNC(click););
        };
        // an alarm for a time of day, not a countdown
        class GVAR(tabAlarmAt): RscEdit {
            idc = 467508;
            x = "((1007)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((1370)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((220)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((60)) / 2048 * (safezoneH * 1.2)";
            text = "0430";
            sizeEx = "((28)) / 2048 * (safezoneH * 1.2)";
            colorText[] = {0.93, 0.91, 0.86, 1};
            colorBackground[] = {0.10, 0.11, 0.12, 1};
            tooltip = "Time of day, HHMM";
        };
        class GVAR(tabAlarmSet): GVAR(tabAlarm5) {
            idc = 467509;
            x = "((1237)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "SET AT";
            action = QUOTE(['alarmAt'] call FUNC(click););
        };
        class GVAR(tabAlarm4): GVAR(tabAlarm0) {
            idc = 467504;
            x = "((1237)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "CLEAR ALL";
            action = QUOTE(['alarmClear'] call FUNC(click););
        };

        class GVAR(tabSwatch0): cTab_RscButton {
            idc = 467510;
            x = "((317)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((1150)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((160)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((60)) / 2048 * (safezoneH * 1.2)";
            text = "RED";
            sizeEx = "((24)) / 2048 * (safezoneH * 1.2)";
            colorText[] = {0.08, 0.08, 0.09, 1};
            colorBackground[] = {0.78, 0.20, 0.17, 1};
            colorBackgroundActive[] = {0.78, 0.20, 0.17, 1};
            action = QUOTE(['icon',0] call FUNC(click););
        };
        class GVAR(tabSwatch1): GVAR(tabSwatch0) {
            idc = 467511;
            x = "((487)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "GREEN";
            colorBackground[] = {0.22, 0.70, 0.29, 1};
            colorBackgroundActive[] = {0.22, 0.70, 0.29, 1};
            action = QUOTE(['icon',1] call FUNC(click););
        };
        class GVAR(tabSwatch2): GVAR(tabSwatch0) {
            idc = 467512;
            x = "((657)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "BLUE";
            colorBackground[] = {0.24, 0.51, 0.84, 1};
            colorBackgroundActive[] = {0.24, 0.51, 0.84, 1};
            action = QUOTE(['icon',2] call FUNC(click););
        };
        class GVAR(tabSwatch3): GVAR(tabSwatch0) {
            idc = 467513;
            x = "((827)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "YELLOW";
            colorBackground[] = {0.90, 0.80, 0.20, 1};
            colorBackgroundActive[] = {0.90, 0.80, 0.20, 1};
            action = QUOTE(['icon',3] call FUNC(click););
        };
        class GVAR(tabSwatch4): GVAR(tabSwatch0) {
            idc = 467514;
            x = "((997)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "WHITE";
            colorBackground[] = {1, 1, 1, 1};
            colorBackgroundActive[] = {1, 1, 1, 1};
            action = QUOTE(['icon',4] call FUNC(click););
        };
        class GVAR(tabSwatch5): GVAR(tabSwatch0) {
            idc = 467515;
            x = "((1167)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "ORANGE";
            colorBackground[] = {0.91, 0.55, 0.16, 1};
            colorBackgroundActive[] = {0.91, 0.55, 0.16, 1};
            action = QUOTE(['icon',5] call FUNC(click););
        };
        class GVAR(tabSwatch6): GVAR(tabSwatch0) {
            idc = 467516;
            x = "((1337)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "GHOST";
            colorBackground[] = {0.80, 0.26, 0.19, 1};
            colorBackgroundActive[] = {0.80, 0.26, 0.19, 1};
            action = QUOTE(['icon',6] call FUNC(click););
        };

        // settings app: screen background shade
        class GVAR(tabBg0): cTab_RscButton {
            idc = 467520;
            x = "((317)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((1230)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((220)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((60)) / 2048 * (safezoneH * 1.2)";
            text = "BLACK";
            sizeEx = "((24)) / 2048 * (safezoneH * 1.2)";
            colorBackground[] = {0.10, 0.10, 0.11, 1};
            colorBackgroundActive[] = {0.10, 0.10, 0.11, 1};
            action = QUOTE(['bg',0] call FUNC(click););
        };
        class GVAR(tabBg1): GVAR(tabBg0) {
            idc = 467521;
            x = "((547)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "CHARCOAL";
            colorBackground[] = {0.16, 0.17, 0.18, 1};
            colorBackgroundActive[] = {0.16, 0.17, 0.18, 1};
            action = QUOTE(['bg',1] call FUNC(click););
        };
        class GVAR(tabBg2): GVAR(tabBg0) {
            idc = 467522;
            x = "((777)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "SLATE";
            colorBackground[] = {0.15, 0.18, 0.22, 1};
            colorBackgroundActive[] = {0.15, 0.18, 0.22, 1};
            action = QUOTE(['bg',2] call FUNC(click););
        };
        class GVAR(tabBg3): GVAR(tabBg0) {
            idc = 467523;
            x = "((1007)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "OLIVE";
            colorBackground[] = {0.16, 0.18, 0.13, 1};
            colorBackgroundActive[] = {0.16, 0.18, 0.13, 1};
            action = QUOTE(['bg',3] call FUNC(click););
        };

        // settings app: label font. Each button is set in the font it picks, so
        // the choice is legible before it is made.
        class GVAR(tabFont0): cTab_RscButton {
            idc = 467530;
            x = "((317)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((1310)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((220)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((60)) / 2048 * (safezoneH * 1.2)";
            text = "CONDENSED";
            font = "RobotoCondensed";
            sizeEx = "((24)) / 2048 * (safezoneH * 1.2)";
            colorBackground[] = {0.19, 0.20, 0.21, 1};
            colorBackgroundActive[] = {0.32, 0.34, 0.36, 1};
            action = QUOTE(['font',0] call FUNC(click););
        };
        class GVAR(tabFont1): GVAR(tabFont0) {
            idc = 467531;
            x = "((547)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "BOLD";
            font = "RobotoCondensedBold";
            action = QUOTE(['font',1] call FUNC(click););
        };
        class GVAR(tabFont2): GVAR(tabFont0) {
            idc = 467532;
            x = "((777)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "PURISTA";
            font = "PuristaMedium";
            action = QUOTE(['font',2] call FUNC(click););
        };
        class GVAR(tabFont3): GVAR(tabFont0) {
            idc = 467533;
            x = "((1007)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "MONO";
            font = "EtelkaMonospacePro";
            action = QUOTE(['font',3] call FUNC(click););
        };

        // Jam and mesh state in the header, beside cTab's signal icons. These
        // are never hidden - the state is worth seeing on every screen.
        class GVAR(tabJamIcon): RscPicture {
            idc = 467710;
            text = QPATHTOF(data\icon_jam_ca.paa);
            x = "((1436)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((497)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((30)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((30)) / 2048 * (safezoneH * 1.2)";
        };
        class GVAR(tabMeshIcon): GVAR(tabJamIcon) {
            idc = 467711;
            text = QPATHTOF(data\icon_mesh_ca.paa);
            x = "((1472)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
        };
    };
};
