// ---------------------------------------------------------------------------
// The S7 Android. This file is the phone and nothing else - the rugged tablet
// is in ui_tablet.hpp and shares no numbers with it.
//
// Positions are the bezel art's pixels, converted the way cTab converts its
// own. The phone's screen is 1134 x 624 at 452,713 inside a 2048 canvas, with
// a 60px OSD header, drawn on a grid (safezoneH * 1.4) tall and 3/4 as wide.
//
// Order matters: controls draw in the order they are declared.
//
// TEMPLATE CLASSES LIVE OUT HERE, NEVER INSIDE THE DIALOG: the engine
// instantiates every class in a controls block, template or not, so an in-
// dialog base with no position renders as a phantom box at the origin. The
// s7Tile template drawn at 0,0 was a whole session's "black box".
// ---------------------------------------------------------------------------

// One tile, one control: the icon rides in ShortcutPos and the label in
// TextPos, so the whole tile is the click target. periods are 0 - a pulse on
// hover reads as blinking.
class GVAR(s7Tile): RscButtonMenu {
    idc = -1;
    style = "0x02 + 0x0C + 0x0100";
    x = 0;
    y = 0;
    w = "((159)) / 2048 * ((safezoneH * 1.4) * 3/4)";
    h = "((121)) / 2048 * (safezoneH * 1.4)";
    text = "";
    textureNoShortcut = "";
    size = "((18)) / 2048 * (safezoneH * 1.4)";
    sizeEx = "((18)) / 2048 * (safezoneH * 1.4)";
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

    // RIDAR card: small glyph in the top-right corner; the card's text all
    // comes from the live overlay, so the button label stays empty.
    class ShortcutPos {
        left = "((115)) / 2048 * ((safezoneH * 1.4) * 3/4)";
        top = "((10)) / 2048 * (safezoneH * 1.4)";
        w = "((34)) / 2048 * ((safezoneH * 1.4) * 3/4)";
        h = "((34)) / 2048 * (safezoneH * 1.4)";
    };
    class TextPos {
        left = 0;
        top = "((96)) / 2048 * (safezoneH * 1.4)";
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

// The scanner readout row, styled exactly like cTab's own map-tools rows.
class GVAR(s7ScanRow): RscText {
    idc = -1;
    style = 2;
    x = "((478)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
    w = "((300)) / 2048 * ((safezoneH * 1.4) * 3/4)";
    h = "((40)) / 2048 * (safezoneH * 1.4)";
    font = "EtelkaMonospacePro";
    sizeEx = "((32)) / 2048 * (safezoneH * 1.4)";
    colorText[] = {1, 1, 1, 0.75};
    colorBackground[] = {0, 0, 0, 0.75};
    shadow = 0;
};

class cTab_Android_dlg {
    // Grey the screen behind the map. Done in config so it is simply true,
    // rather than something a script has to remember to do.
    class controlsBackground {
        // Grey the screen behind the map. A new class here would merge in AFTER
        // cTab's map control and cover it - that was one build's "no map" - so
        // the settings app repaints this control of cTab's at runtime instead.
        class windowsBG: cTab_android_windowsBG {
            text = "#(argb,8,8,3)color(0.16,0.17,0.18,1)";
        };
    };

    class controls {
        // Fires whenever the phone is opened: starts the readouts and puts the
        // app menu away.
        class GVAR(s7Holder): RscText {
            idc = -1;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
            colorBackground[] = {0, 0, 0, 0};
            onLoad = QUOTE(call FUNC(deviceOpen););
        };

        // --- app menu: right 45% of the screen, RIDAR-style data cards -----
        // Map stays live on the left, cards on the right - straight from the
        // user's RIDAR reference. Card text comes from the live overlays
        // (467450+), fed by FUNC(widgetTick); the buttons carry only the
        // texture and the corner glyph.
        class GVAR(s7Menu): cTab_RscControlsGroup {
            idc = 467300;
            x = "((1076)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((773)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((510)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((564)) / 2048 * (safezoneH * 1.4)";

            class VScrollbar {};
            class HScrollbar {};
            class Scrollbar {};

            class controls {
                class GVAR(s7MenuBg): RscText {
                    idc = 467421;
                    x = 0;
                    y = 0;
                    w = "((510)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    h = "((564)) / 2048 * (safezoneH * 1.4)";
                    colorBackground[] = {0.07, 0.08, 0.09, 0.97};
                };
                class GVAR(s7MenuTitle): RscText {
                    idc = -1;
                    x = "((10)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((8)) / 2048 * (safezoneH * 1.4)";
                    w = "((360)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    h = "((32)) / 2048 * (safezoneH * 1.4)";
                    text = "GHOSTS OF BATTLE";
                    sizeEx = "((26)) / 2048 * (safezoneH * 1.4)";
                    colorText[] = {0.78, 0.80, 0.82, 1};
                };

                class GVAR(s7AppDrone): GVAR(s7Tile) {
                    idc = 467605;
                    x = "((8)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((48)) / 2048 * (safezoneH * 1.4)";
                    textureNoShortcut = QPATHTOF(data\icon_ew_ca.paa);
                    tooltip = "Drone detection - bearing and range";
                    action = QUOTE(['app','drone'] call FUNC(click););
                    onButtonClick = QUOTE(['app','drone'] call FUNC(click););
                };
                class GVAR(s7AppJam): GVAR(s7Tile) {
                    idc = 467606;
                    x = "((175)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((48)) / 2048 * (safezoneH * 1.4)";
                    textureNoShortcut = QPATHTOF(data\icon_jam_ca.paa);
                    tooltip = "Jamming level";
                    action = QUOTE(['app','jam'] call FUNC(click););
                    onButtonClick = QUOTE(['app','jam'] call FUNC(click););
                };
                class GVAR(s7AppMesh): GVAR(s7Tile) {
                    idc = 467607;
                    x = "((342)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((48)) / 2048 * (safezoneH * 1.4)";
                    textureNoShortcut = QPATHTOF(data\icon_mesh_ca.paa);
                    tooltip = "Mesh link";
                    action = QUOTE(['app','mesh'] call FUNC(click););
                    onButtonClick = QUOTE(['app','mesh'] call FUNC(click););
                };
                class GVAR(s7AppUav): GVAR(s7Tile) {
                    idc = 467602;
                    x = "((8)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((177)) / 2048 * (safezoneH * 1.4)";
                    textureNoShortcut = "\cTab\img\icon_uav_ca.paa";
                    tooltip = "UAV feed - pick again for the next aircraft";
                    action = QUOTE(['app','uav'] call FUNC(click););
                    onButtonClick = QUOTE(['app','uav'] call FUNC(click););
                };
                class GVAR(s7AppHcam): GVAR(s7Tile) {
                    idc = 467603;
                    x = "((175)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((177)) / 2048 * (safezoneH * 1.4)";
                    textureNoShortcut = "\cTab\img\icon_helmetcam_ca.paa";
                    tooltip = "Helmet cam - pick again for the next man";
                    action = QUOTE(['app','hcam'] call FUNC(click););
                    onButtonClick = QUOTE(['app','hcam'] call FUNC(click););
                };
                class GVAR(s7AppAlarm): GVAR(s7Tile) {
                    idc = 467610;
                    x = "((342)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((177)) / 2048 * (safezoneH * 1.4)";
                    textureNoShortcut = QPATHTOF(data\icon_alarm_ca.paa);
                    tooltip = "Scanner alarms";
                    action = QUOTE(['app','alarm'] call FUNC(click););
                    onButtonClick = QUOTE(['app','alarm'] call FUNC(click););
                };
                class GVAR(s7AppMap): GVAR(s7Tile) {
                    idc = 467600;
                    x = "((8)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((306)) / 2048 * (safezoneH * 1.4)";
                    textureNoShortcut = "\cTab\img\icon_bft_ca.paa";
                    tooltip = "Back to the map";
                    action = QUOTE(['app','map'] call FUNC(click););
                    onButtonClick = QUOTE(['app','map'] call FUNC(click););
                };
                class GVAR(s7AppMessages): GVAR(s7Tile) {
                    idc = 467601;
                    x = "((175)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((306)) / 2048 * (safezoneH * 1.4)";
                    textureNoShortcut = "\cTab\img\icon_mail_ca.paa";
                    tooltip = "Messages and report templates";
                    action = QUOTE(['app','message'] call FUNC(click););
                    onButtonClick = QUOTE(['app','message'] call FUNC(click););
                };
                class GVAR(s7AppIntel): GVAR(s7Tile) {
                    idc = 467604;
                    x = "((342)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((306)) / 2048 * (safezoneH * 1.4)";
                    textureNoShortcut = "\z\ctab\addons\intel\data\feed_ca.paa";
                    tooltip = "Intel feed";
                    action = QUOTE(['app','intel'] call FUNC(click););
                    onButtonClick = QUOTE(['app','intel'] call FUNC(click););
                };
                class GVAR(s7AppWeather): GVAR(s7Tile) {
                    idc = 467608;
                    x = "((8)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((435)) / 2048 * (safezoneH * 1.4)";
                    textureNoShortcut = QPATHTOF(data\icon_weather_ca.paa);
                    tooltip = "Current weather";
                    action = QUOTE(['app','weather'] call FUNC(click););
                    onButtonClick = QUOTE(['app','weather'] call FUNC(click););
                };
                class GVAR(s7AppRadio): GVAR(s7Tile) {
                    idc = 467609;
                    x = "((175)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((435)) / 2048 * (safezoneH * 1.4)";
                    textureNoShortcut = QPATHTOF(data\icon_radio_ca.paa);
                    tooltip = "Radio and vehicle racks";
                    action = QUOTE(['app','radio'] call FUNC(click););
                    onButtonClick = QUOTE(['app','radio'] call FUNC(click););
                };
                class GVAR(s7AppSettings): GVAR(s7Tile) {
                    idc = 467611;
                    x = "((342)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((435)) / 2048 * (safezoneH * 1.4)";
                    textureNoShortcut = QPATHTOF(data\icon_settings_ca.paa);
                    tooltip = "Device settings - colours and font";
                    action = QUOTE(['app','settings'] call FUNC(click););
                    onButtonClick = QUOTE(['app','settings'] call FUNC(click););
                };

                // Live card faces: big value, label, trend - FUNC(widgetTick).
                class GVAR(s7LiveDrone): RscStructuredText {
                    idc = 467450;
                    x = "((18)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((56)) / 2048 * (safezoneH * 1.4)";
                    w = "((139)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    h = "((107)) / 2048 * (safezoneH * 1.4)";
                    size = "((20)) / 2048 * (safezoneH * 1.4)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(s7LiveJam): RscStructuredText {
                    idc = 467451;
                    x = "((185)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((56)) / 2048 * (safezoneH * 1.4)";
                    w = "((139)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    h = "((107)) / 2048 * (safezoneH * 1.4)";
                    size = "((20)) / 2048 * (safezoneH * 1.4)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(s7LiveMesh): RscStructuredText {
                    idc = 467452;
                    x = "((352)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((56)) / 2048 * (safezoneH * 1.4)";
                    w = "((139)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    h = "((107)) / 2048 * (safezoneH * 1.4)";
                    size = "((20)) / 2048 * (safezoneH * 1.4)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(s7LiveUav): RscStructuredText {
                    idc = 467453;
                    x = "((18)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((185)) / 2048 * (safezoneH * 1.4)";
                    w = "((139)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    h = "((107)) / 2048 * (safezoneH * 1.4)";
                    size = "((20)) / 2048 * (safezoneH * 1.4)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(s7LiveHcam): RscStructuredText {
                    idc = 467454;
                    x = "((185)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((185)) / 2048 * (safezoneH * 1.4)";
                    w = "((139)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    h = "((107)) / 2048 * (safezoneH * 1.4)";
                    size = "((20)) / 2048 * (safezoneH * 1.4)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(s7LiveAlarm): RscStructuredText {
                    idc = 467455;
                    x = "((352)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((185)) / 2048 * (safezoneH * 1.4)";
                    w = "((139)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    h = "((107)) / 2048 * (safezoneH * 1.4)";
                    size = "((20)) / 2048 * (safezoneH * 1.4)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(s7LiveMap): RscStructuredText {
                    idc = 467456;
                    x = "((18)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((314)) / 2048 * (safezoneH * 1.4)";
                    w = "((139)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    h = "((107)) / 2048 * (safezoneH * 1.4)";
                    size = "((20)) / 2048 * (safezoneH * 1.4)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(s7LiveMessages): RscStructuredText {
                    idc = 467457;
                    x = "((185)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((314)) / 2048 * (safezoneH * 1.4)";
                    w = "((139)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    h = "((107)) / 2048 * (safezoneH * 1.4)";
                    size = "((20)) / 2048 * (safezoneH * 1.4)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(s7LiveIntel): RscStructuredText {
                    idc = 467458;
                    x = "((352)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((314)) / 2048 * (safezoneH * 1.4)";
                    w = "((139)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    h = "((107)) / 2048 * (safezoneH * 1.4)";
                    size = "((20)) / 2048 * (safezoneH * 1.4)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(s7LiveWeather): RscStructuredText {
                    idc = 467459;
                    x = "((18)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((443)) / 2048 * (safezoneH * 1.4)";
                    w = "((139)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    h = "((107)) / 2048 * (safezoneH * 1.4)";
                    size = "((20)) / 2048 * (safezoneH * 1.4)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(s7LiveRadio): RscStructuredText {
                    idc = 467460;
                    x = "((185)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((443)) / 2048 * (safezoneH * 1.4)";
                    w = "((139)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    h = "((107)) / 2048 * (safezoneH * 1.4)";
                    size = "((20)) / 2048 * (safezoneH * 1.4)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(s7LiveSettings): RscStructuredText {
                    idc = 467461;
                    x = "((352)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((443)) / 2048 * (safezoneH * 1.4)";
                    w = "((139)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    h = "((107)) / 2048 * (safezoneH * 1.4)";
                    size = "((20)) / 2048 * (safezoneH * 1.4)";
                    colorBackground[] = {0, 0, 0, 0};
                };
            };
        };

        // The top bezel key. cTab positions this button for the S7 art but
        // never instantiates it, so the key was dead - it opens the menu.
        class GVAR(s7BtnApps): cTab_android_btnBack {
            idc = 467399;
            action = QUOTE(['menu'] call FUNC(click););
            tooltip = "Apps";
        };

        // cTab's own map-options menu has a free slot; the scanner readout's
        // switch belongs there with the other map switches.
        class menuContainer: cTab_RscControlsGroup {
            class controls {
                class btnTextonoff;
                class GVAR(s7BtnScanPanel): btnTextonoff {
                    idc = 467398;
                    text = "Scanner Panel";
                    y = "((((((713) + (60))) + ((((624) - (60) - (0))) * 0.05) + ((((((624) - (60) - (0))) - ((((624) - (60) - (0))) * 0.05) * 8) / 7) + ((((624) - (60) - (0))) * 0.05)) * (4 - 1))) - (((713) + (60)))) / 2048  * (safezoneH * 1.4)";
                    tooltip = "Show or hide the scanner readout on the map";
                    action = QUOTE(['scanPanel'] call FUNC(click););
                };
            };
        };

        // --- pages, declared last so they cover the map and the icons -------
        class GVAR(s7CamPic): RscPicture {
            idc = 467100;
            x = "((452)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((773)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((1134)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((564)) / 2048 * (safezoneH * 1.4)";
        };
        class GVAR(s7CamLabel): RscText {
            idc = 467101;
            x = "((452)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((773)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((1134)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((50)) / 2048 * (safezoneH * 1.4)";
            sizeEx = "((28)) / 2048 * (safezoneH * 1.4)";
            colorBackground[] = {0, 0, 0, 0.55};
        };
        // the feed picker, BCE style: a drop-down over the picture
        class GVAR(s7CamList): RscCombo {
            idc = 467102;
            x = "((478)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((1270)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((1080)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((52)) / 2048 * (safezoneH * 1.4)";
            sizeEx = "((26)) / 2048 * (safezoneH * 1.4)";
            colorText[] = {0.93, 0.91, 0.86, 1};
            colorBackground[] = {0.10, 0.11, 0.12, 0.95};
            colorSelectBackground[] = {0.24, 0.51, 0.84, 1};
            onLBSelChanged = QUOTE([_this select 1] call FUNC(camSelect););
        };

        class GVAR(s7InfoBg): RscText {
            idc = 467200;
            x = "((452)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((773)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((1134)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((564)) / 2048 * (safezoneH * 1.4)";
            colorBackground[] = {0.13, 0.13, 0.14, 1};
        };
        // A centred column rather than the full screen - lines that run the
        // whole width put the label a screen away from its value.
        class GVAR(s7InfoTxt): RscStructuredText {
            idc = 467201;
            x = "((669)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((800)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((700)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((300)) / 2048 * (safezoneH * 1.4)";
            size = "((28)) / 2048 * (safezoneH * 1.4)";
            colorBackground[] = {0, 0, 0, 0};
        };

        // drone compass, centred on the screen below the numbers
        class GVAR(s7Compass): RscPicture {
            idc = 467720;
            text = QPATHTOF(data\icon_compass_ca.paa);
            x = "((869)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((1000)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((300)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((300)) / 2048 * (safezoneH * 1.4)";
        };
        class GVAR(s7Needle): GVAR(s7Compass) {
            idc = 467721;
            text = QPATHTOF(data\icon_needle_ca.paa);
        };

        // weather app: the current-condition glyph, centred below the numbers,
        // tinted the accent colour. Texture picked by FUNC(widgetTick).
        // Below the text block, not over it - the two overlapped before.
        class GVAR(s7WxIcon): RscPicture {
            idc = 467730;
            x = "((934)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((1120)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((170)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((170)) / 2048 * (safezoneH * 1.4)";
        };

        // alarm app buttons
        class GVAR(s7Alarm0): cTab_RscButton {
            idc = 467500;
            x = "((510)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((1240)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((190)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((56)) / 2048 * (safezoneH * 1.4)";
            text = "+5 MIN";
            sizeEx = "((24)) / 2048 * (safezoneH * 1.4)";
            colorBackground[] = {0.19, 0.20, 0.21, 1};
            colorBackgroundActive[] = {0.32, 0.34, 0.36, 1};
            action = QUOTE(['alarm',5] call FUNC(click););
        };
        class GVAR(s7Alarm1): GVAR(s7Alarm0) {
            idc = 467501;
            x = "((710)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "+15 MIN";
            action = QUOTE(['alarm',15] call FUNC(click););
        };
        class GVAR(s7Alarm2): GVAR(s7Alarm0) {
            idc = 467502;
            x = "((910)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "+30 MIN";
            action = QUOTE(['alarm',30] call FUNC(click););
        };
        class GVAR(s7Alarm3): GVAR(s7Alarm0) {
            idc = 467503;
            x = "((1110)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "SILENCE";
            action = QUOTE(['alarmSilence'] call FUNC(click););
        };
        // quick set: the short fuses a contact plan actually uses
        class GVAR(s7Alarm5): GVAR(s7Alarm0) {
            idc = 467505;
            x = "((510)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((1170)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            text = "+1 MIN";
            action = QUOTE(['alarm',1] call FUNC(click););
        };
        class GVAR(s7Alarm6): GVAR(s7Alarm5) {
            idc = 467506;
            x = "((710)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "+2 MIN";
            action = QUOTE(['alarm',2] call FUNC(click););
        };
        class GVAR(s7Alarm7): GVAR(s7Alarm5) {
            idc = 467507;
            x = "((910)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "+3 MIN";
            action = QUOTE(['alarm',3] call FUNC(click););
        };
        // an alarm for a time of day, not a countdown
        class GVAR(s7AlarmAt): RscEdit {
            idc = 467508;
            x = "((1110)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((1170)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((190)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((56)) / 2048 * (safezoneH * 1.4)";
            text = "0430";
            sizeEx = "((26)) / 2048 * (safezoneH * 1.4)";
            colorText[] = {0.93, 0.91, 0.86, 1};
            colorBackground[] = {0.10, 0.11, 0.12, 1};
            tooltip = "Time of day, HHMM";
        };
        class GVAR(s7AlarmSet): GVAR(s7Alarm5) {
            idc = 467509;
            x = "((1310)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "SET AT";
            action = QUOTE(['alarmAt'] call FUNC(click););
        };
        class GVAR(s7Alarm4): GVAR(s7Alarm0) {
            idc = 467504;
            x = "((1310)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "CLEAR ALL";
            action = QUOTE(['alarmClear'] call FUNC(click););
        };

        // settings app swatches
        class GVAR(s7Swatch0): cTab_RscButton {
            idc = 467510;
            x = "((510)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((1120)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((130)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((56)) / 2048 * (safezoneH * 1.4)";
            text = "RED";
            sizeEx = "((22)) / 2048 * (safezoneH * 1.4)";
            colorText[] = {0.08, 0.08, 0.09, 1};
            colorBackground[] = {0.78, 0.20, 0.17, 1};
            colorBackgroundActive[] = {0.78, 0.20, 0.17, 1};
            action = QUOTE(['icon',0] call FUNC(click););
        };
        class GVAR(s7Swatch1): GVAR(s7Swatch0) {
            idc = 467511;
            x = "((650)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "GREEN";
            colorBackground[] = {0.22, 0.70, 0.29, 1};
            colorBackgroundActive[] = {0.22, 0.70, 0.29, 1};
            action = QUOTE(['icon',1] call FUNC(click););
        };
        class GVAR(s7Swatch2): GVAR(s7Swatch0) {
            idc = 467512;
            x = "((790)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "BLUE";
            colorBackground[] = {0.24, 0.51, 0.84, 1};
            colorBackgroundActive[] = {0.24, 0.51, 0.84, 1};
            action = QUOTE(['icon',2] call FUNC(click););
        };
        class GVAR(s7Swatch3): GVAR(s7Swatch0) {
            idc = 467513;
            x = "((930)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "YELLOW";
            colorBackground[] = {0.90, 0.80, 0.20, 1};
            colorBackgroundActive[] = {0.90, 0.80, 0.20, 1};
            action = QUOTE(['icon',3] call FUNC(click););
        };
        class GVAR(s7Swatch4): GVAR(s7Swatch0) {
            idc = 467514;
            x = "((1070)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "WHITE";
            colorBackground[] = {1, 1, 1, 1};
            colorBackgroundActive[] = {1, 1, 1, 1};
            action = QUOTE(['icon',4] call FUNC(click););
        };
        class GVAR(s7Swatch5): GVAR(s7Swatch0) {
            idc = 467515;
            x = "((1210)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "ORANGE";
            colorBackground[] = {0.91, 0.55, 0.16, 1};
            colorBackgroundActive[] = {0.91, 0.55, 0.16, 1};
            action = QUOTE(['icon',5] call FUNC(click););
        };
        class GVAR(s7Swatch6): GVAR(s7Swatch0) {
            idc = 467516;
            x = "((1350)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "GHOST";
            colorBackground[] = {0.80, 0.26, 0.19, 1};
            colorBackgroundActive[] = {0.80, 0.26, 0.19, 1};
            action = QUOTE(['icon',6] call FUNC(click););
        };

        // settings app: screen background shade
        class GVAR(s7Bg0): cTab_RscButton {
            idc = 467520;
            x = "((510)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((1190)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((190)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((56)) / 2048 * (safezoneH * 1.4)";
            text = "BLACK";
            sizeEx = "((22)) / 2048 * (safezoneH * 1.4)";
            colorBackground[] = {0.10, 0.10, 0.11, 1};
            colorBackgroundActive[] = {0.10, 0.10, 0.11, 1};
            action = QUOTE(['bg',0] call FUNC(click););
        };
        class GVAR(s7Bg1): GVAR(s7Bg0) {
            idc = 467521;
            x = "((710)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "CHARCOAL";
            colorBackground[] = {0.16, 0.17, 0.18, 1};
            colorBackgroundActive[] = {0.16, 0.17, 0.18, 1};
            action = QUOTE(['bg',1] call FUNC(click););
        };
        class GVAR(s7Bg2): GVAR(s7Bg0) {
            idc = 467522;
            x = "((910)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "SLATE";
            colorBackground[] = {0.15, 0.18, 0.22, 1};
            colorBackgroundActive[] = {0.15, 0.18, 0.22, 1};
            action = QUOTE(['bg',2] call FUNC(click););
        };
        class GVAR(s7Bg3): GVAR(s7Bg0) {
            idc = 467523;
            x = "((1110)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "OLIVE";
            colorBackground[] = {0.16, 0.18, 0.13, 1};
            colorBackgroundActive[] = {0.16, 0.18, 0.13, 1};
            action = QUOTE(['bg',3] call FUNC(click););
        };

        // settings app: label font. Each button is set in the font it picks, so
        // the choice is legible before it is made.
        class GVAR(s7Font0): cTab_RscButton {
            idc = 467530;
            x = "((510)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((1260)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((190)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((56)) / 2048 * (safezoneH * 1.4)";
            text = "CONDENSED";
            font = "RobotoCondensed";
            sizeEx = "((22)) / 2048 * (safezoneH * 1.4)";
            colorBackground[] = {0.19, 0.20, 0.21, 1};
            colorBackgroundActive[] = {0.32, 0.34, 0.36, 1};
            action = QUOTE(['font',0] call FUNC(click););
        };
        class GVAR(s7Font1): GVAR(s7Font0) {
            idc = 467531;
            x = "((710)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "BOLD";
            font = "RobotoCondensedBold";
            action = QUOTE(['font',1] call FUNC(click););
        };
        class GVAR(s7Font2): GVAR(s7Font0) {
            idc = 467532;
            x = "((910)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "PURISTA";
            font = "PuristaMedium";
            action = QUOTE(['font',2] call FUNC(click););
        };
        class GVAR(s7Font3): GVAR(s7Font0) {
            idc = 467533;
            x = "((1110)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "MONO";
            font = "EtelkaMonospacePro";
            action = QUOTE(['font',3] call FUNC(click););
        };

        // --- map screen readouts -------------------------------------------
        // The scanner readout, opposite cTab's own map-tools readout and built
        // to match it exactly: one row per value, mono font at the same 32px,
        // white at 0.75 on black at 0.75. No title - the map tools do not carry
        // one either, and the labels say what each row is. The row template is
        // at file root - in here it would render as a phantom box.
        class GVAR(s7ScanUav): GVAR(s7ScanRow) {
            idc = 467700;
            y = "((795)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
        };
        class GVAR(s7ScanJam): GVAR(s7ScanRow) {
            idc = 467701;
            y = "((835)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
        };
        class GVAR(s7ScanMesh): GVAR(s7ScanRow) {
            idc = 467702;
            y = "((875)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
        };
        class GVAR(s7ScanRadio): GVAR(s7ScanRow) {
            idc = 467703;
            y = "((915)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
        };

        // Jam and mesh state, in the header beside cTab's signal icons.
        class GVAR(s7JamIcon): RscPicture {
            idc = 467710;
            text = QPATHTOF(data\icon_jam_ca.paa);
            x = "((1386)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((722)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((42)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((42)) / 2048 * (safezoneH * 1.4)";
        };
        class GVAR(s7MeshIcon): GVAR(s7JamIcon) {
            idc = 467711;
            text = QPATHTOF(data\icon_mesh_ca.paa);
            x = "((1434)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
        };
    };
};

// ---------------------------------------------------------------------------
// The S7 HUD display - the phone held up in the corner, which is how it is
// carried most of the time. cTab draws it from a different grid to the dialog
// (0.86 wide, 4/3 of that tall, pinned bottom-left), so the same art pixels
// need their own expressions here; the IDCs are the dialog's, so
// FUNC(overlayTick) fills both without knowing which is up.
//
// The display is declared INSIDE RscTitles by cTab, so the patch has to be
// nested there too - a root-level class of the same name is simply a different,
// dead class. That was one build with no readout on the HUD at all.
//
// Nothing hides these: the HUD has no modes, it is always the map, so the
// scanner readout belongs on it permanently. That is the whole point of the
// phone - you can walk with it.
// ---------------------------------------------------------------------------

// Template at root, never inside a controls block, or the engine draws it as a
// phantom box at the origin.
class GVAR(dspScanRow): RscText {
    idc = -1;
    style = 2;
    x = "((478)) / 2048 * (0.86) + (safezoneX - (0.86) * 0.17)";
    w = "((300)) / 2048 * (0.86)";
    h = "((40)) / 2048 * ((0.86) * 4/3)";
    font = "EtelkaMonospacePro";
    sizeEx = "((32)) / 2048 * ((0.86) * 4/3)";
    colorText[] = {1, 1, 1, 0.75};
    colorBackground[] = {0, 0, 0, 0.75};
    shadow = 0;
};

class RscTitles {
    class cTab_Android_dsp {
        class controls {
            class GVAR(dspScanUav): GVAR(dspScanRow) {
                idc = 467700;
                y = "((795)) / 2048 * ((0.86) * 4/3) + (safezoneY + safezoneH * 0.88 - ((0.86) * 4/3) * 0.72)";
            };
            class GVAR(dspScanJam): GVAR(dspScanRow) {
                idc = 467701;
                y = "((835)) / 2048 * ((0.86) * 4/3) + (safezoneY + safezoneH * 0.88 - ((0.86) * 4/3) * 0.72)";
            };
            class GVAR(dspScanMesh): GVAR(dspScanRow) {
                idc = 467702;
                y = "((875)) / 2048 * ((0.86) * 4/3) + (safezoneY + safezoneH * 0.88 - ((0.86) * 4/3) * 0.72)";
            };
            class GVAR(dspScanRadio): GVAR(dspScanRow) {
                idc = 467703;
                y = "((915)) / 2048 * ((0.86) * 4/3) + (safezoneY + safezoneH * 0.88 - ((0.86) * 4/3) * 0.72)";
            };

            // Jam and mesh state in the HUD header, beside cTab's own icons.
            class GVAR(dspJamIcon): RscPicture {
                idc = 467710;
                text = QPATHTOF(data\icon_jam_ca.paa);
                x = "((1386)) / 2048 * (0.86) + (safezoneX - (0.86) * 0.17)";
                y = "((722)) / 2048 * ((0.86) * 4/3) + (safezoneY + safezoneH * 0.88 - ((0.86) * 4/3) * 0.72)";
                w = "((42)) / 2048 * (0.86)";
                h = "((42)) / 2048 * ((0.86) * 4/3)";
            };
            class GVAR(dspMeshIcon): GVAR(dspJamIcon) {
                idc = 467711;
                text = QPATHTOF(data\icon_mesh_ca.paa);
                x = "((1434)) / 2048 * (0.86) + (safezoneX - (0.86) * 0.17)";
            };
        };
    };
};
