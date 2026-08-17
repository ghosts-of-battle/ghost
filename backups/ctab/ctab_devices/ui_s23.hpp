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

    // zero: the glyph is a control of its own now (the layout centres it on
    // the live tile, which ShortcutPos could not), and all the card's text
    // comes from the live overlay, so the button label stays empty.
    class ShortcutPos {
        left = 0;
        top = 0;
        w = 0;
        h = 0;
    };
    class TextPos {
        left = 0;
        top = 0;
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

// The tile glyph. Its own control rather than the button's ShortcutPos, which
// is evaluated from config once and never rescales - the layout stretches
// these tiles well past their authored size, so a config-anchored glyph could
// not stay centred on one. Placed by the layout.
class GVAR(s7Icon): RscPicture {
    idc = -1;
    text = "";
    x = 0;
    y = 0;
    w = 0;
    h = 0;
    colorText[] = {1, 1, 1, 1};
};

// The glass card drawn behind each dashboard tile, as on the GFT: a rounded
// translucent panel that gives the tile an edge against the dark screen. A
// picture rather than the button's own animTexture - the texture route renders
// black on these dashboards, a plain picture provably draws.
class GVAR(s7Card): RscPicture {
    idc = -1;
    text = QPATHTOF(data\tile_glass_ca.paa);
    x = 0;
    y = 0;
    w = 0;
    h = 0;
    colorText[] = {1, 1, 1, 1};
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

        // The case art itself, so the first frame already wears the S23 -
        // the runtime skin pass in deviceSkin then only handles the tan case
        // and cTab's repaints. Without this the S7 flashed at every open.
        class background: cTab_android_background {
            text = QPATHTOF(data\s23_blk_ca.paa);
        };
        // cTab's loading overlay, centred on this glass rather than the S7's
        class loadingtxt: cTab_android_loadingtxt {
            text = "S23 HANDHELD";
            x = "((232)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((661)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((1538)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((725)) / 2048 * (safezoneH * 1.4)";
        };

        // --- the dashboard: the whole glass, as on the GFT ------------------
        // It used to be a strip down the right-hand 45% shown over the live
        // map. As a mode of its own it gets the screen to itself, which is
        // what stopped the scanner rows and cTab's readouts drawing through
        // it. Card text comes from the live overlays (467450+), fed by
        // FUNC(widgetTick); the buttons carry the glyph and the label.
        class GVAR(s7Menu): cTab_RscControlsGroup {
            idc = 467300;
            x = "((1076)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((773)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((510)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            // 830, not 564. The grid is six rows of 121 on a 129 pitch from
            // y=48, so the last row ends at 814 - and the old 564 cut it a
            // hundred and twenty short. Every layout scales this group's
            // children by newHeight/authoredHeight, so an authored height that
            // does not cover its own content throws the bottom row off the
            // screen no matter what the layout does.
            //
            // 830 rather than exactly 814: a controls group puts a SCROLLBAR up
            // the moment its content reaches its bounds, and content sitting
            // exactly on the edge is a rounding error away from doing that.
            h = "((830)) / 2048 * (safezoneH * 1.4)";

            class VScrollbar {};
            class HScrollbar {};
            class Scrollbar {};

            class controls {
                class GVAR(s7MenuBg): RscPicture {
                    idc = 467421;
                    x = 0;
                    y = 0;
                    w = "((510)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    h = "((564)) / 2048 * (safezoneH * 1.4)";
                    // A PLAIN RECTANGLE, not the shaped pagebg it used to be.
                    // That art rounds its bottom corners, and its arc is far
                    // bigger than the case's own screen corner - so each
                    // bottom corner cut through to the lighter screen backdrop
                    // behind it. That pale L round the corner is the "over-
                    // lapping corners". The corner mask, cut from this device's
                    // own art, is what rounds the screen; nothing else should
                    // try to.
                    text = "#(argb,8,8,3)color(1,1,1,1)";
                    colorText[] = {0.07, 0.08, 0.09, 1};
                };
                class GVAR(s7MenuTitle): RscText {
                    idc = IDC_S7_MENUTITLE;
                    x = "((10)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((8)) / 2048 * (safezoneH * 1.4)";
                    w = "((360)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    h = "((32)) / 2048 * (safezoneH * 1.4)";
                    text = "GHOSTS OF BATTLE";
                    sizeEx = "((26)) / 2048 * (safezoneH * 1.4)";
                    colorText[] = {0.78, 0.80, 0.82, 1};
                };

                // The glass cards, declared BEFORE the tiles so they draw
                // underneath. The layout gives each one its tile's rect.
                class GVAR(s7Card0): GVAR(s7Card) {
                    idc = 467820;
                };
                class GVAR(s7Card1): GVAR(s7Card) {
                    idc = 467821;
                };
                class GVAR(s7Card2): GVAR(s7Card) {
                    idc = 467822;
                };
                class GVAR(s7Card3): GVAR(s7Card) {
                    idc = 467823;
                };
                class GVAR(s7Card4): GVAR(s7Card) {
                    idc = 467824;
                };
                class GVAR(s7Card5): GVAR(s7Card) {
                    idc = 467825;
                };
                class GVAR(s7Card6): GVAR(s7Card) {
                    idc = 467826;
                };
                class GVAR(s7Card7): GVAR(s7Card) {
                    idc = 467827;
                };
                class GVAR(s7Card8): GVAR(s7Card) {
                    idc = 467828;
                };
                class GVAR(s7Card9): GVAR(s7Card) {
                    idc = 467829;
                };
                class GVAR(s7Card10): GVAR(s7Card) {
                    idc = 467830;
                };
                class GVAR(s7Card11): GVAR(s7Card) {
                    idc = 467831;
                };
                class GVAR(s7Card12): GVAR(s7Card) {
                    idc = 467832;
                };
                class GVAR(s7Card13): GVAR(s7Card) {
                    idc = 467833;
                };
                class GVAR(s7Card14): GVAR(s7Card) {
                    idc = 467834;
                };
                class GVAR(s7Card15): GVAR(s7Card) {
                    idc = 467835;
                };

                class GVAR(s7AppDrone): GVAR(s7Tile) {
                    idc = 467605;
                    x = "((8)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((48)) / 2048 * (safezoneH * 1.4)";
                    tooltip = "Drone detection - bearing and range";
                    action = QUOTE([ARR_2('app','drone')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','drone')] call FUNC(click););
                };
                class GVAR(s7AppJam): GVAR(s7Tile) {
                    idc = 467606;
                    x = "((175)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((48)) / 2048 * (safezoneH * 1.4)";
                    tooltip = "Jamming level";
                    action = QUOTE([ARR_2('app','jam')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','jam')] call FUNC(click););
                };
                class GVAR(s7AppMesh): GVAR(s7Tile) {
                    idc = 467607;
                    x = "((342)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((48)) / 2048 * (safezoneH * 1.4)";
                    tooltip = "Mesh link";
                    action = QUOTE([ARR_2('app','mesh')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','mesh')] call FUNC(click););
                };
                class GVAR(s7AppUav): GVAR(s7Tile) {
                    idc = 467602;
                    x = "((8)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((177)) / 2048 * (safezoneH * 1.4)";
                    tooltip = "UAV feed - pick again for the next aircraft";
                    action = QUOTE([ARR_2('app','uav')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','uav')] call FUNC(click););
                };
                class GVAR(s7AppHcam): GVAR(s7Tile) {
                    idc = 467603;
                    x = "((175)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((177)) / 2048 * (safezoneH * 1.4)";
                    tooltip = "Helmet cam - pick again for the next man";
                    action = QUOTE([ARR_2('app','hcam')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','hcam')] call FUNC(click););
                };
                class GVAR(s7AppAlarm): GVAR(s7Tile) {
                    idc = 467610;
                    x = "((342)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((177)) / 2048 * (safezoneH * 1.4)";
                    tooltip = "Scanner alarms";
                    action = QUOTE([ARR_2('app','alarm')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','alarm')] call FUNC(click););
                };
                class GVAR(s7AppMap): GVAR(s7Tile) {
                    idc = 467600;
                    x = "((8)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((306)) / 2048 * (safezoneH * 1.4)";
                    tooltip = "Back to the map";
                    action = QUOTE([ARR_2('app','map')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','map')] call FUNC(click););
                };
                class GVAR(s7AppMessages): GVAR(s7Tile) {
                    idc = 467601;
                    x = "((175)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((306)) / 2048 * (safezoneH * 1.4)";
                    tooltip = "Messages and report templates";
                    action = QUOTE([ARR_2('app','message')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','message')] call FUNC(click););
                };
                class GVAR(s7AppIntel): GVAR(s7Tile) {
                    idc = 467604;
                    x = "((342)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((306)) / 2048 * (safezoneH * 1.4)";
                    tooltip = "Intel feed";
                    action = QUOTE([ARR_2('app','intel')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','intel')] call FUNC(click););
                };
                class GVAR(s7AppWeather): GVAR(s7Tile) {
                    idc = 467608;
                    x = "((8)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((435)) / 2048 * (safezoneH * 1.4)";
                    tooltip = "Current weather";
                    action = QUOTE([ARR_2('app','weather')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','weather')] call FUNC(click););
                };
                class GVAR(s7AppRadio): GVAR(s7Tile) {
                    idc = 467609;
                    x = "((175)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((435)) / 2048 * (safezoneH * 1.4)";
                    tooltip = "Radio and vehicle racks";
                    action = QUOTE([ARR_2('app','radio')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','radio')] call FUNC(click););
                };
                class GVAR(s7AppSettings): GVAR(s7Tile) {
                    idc = 467611;
                    x = "((342)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((435)) / 2048 * (safezoneH * 1.4)";
                    tooltip = "Device settings - colours and font";
                    action = QUOTE([ARR_2('app','settings')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','settings')] call FUNC(click););
                };
                class GVAR(s7AppConvoy): GVAR(s7Tile) {
                    idc = 467614;
                    x = "((342)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((564)) / 2048 * (safezoneH * 1.4)";
                    tooltip = "Convoy - pick a column and watch its vehicles";
                    action = QUOTE([ARR_2('app','convoy')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','convoy')] call FUNC(click););
                };
                class GVAR(s7AppEngineer): GVAR(s7Tile) {
                    idc = 467615;
                    // A CELL OF ITS OWN. This was the only tile left at 0,0 -
                    // the grid is 3 wide and there were 16 tiles for 15 cells,
                    // so this one was parked at the group's origin, directly on
                    // top of the drone tile. Pressing DEMO opened DRONES.
                    x = "((8)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((693)) / 2048 * (safezoneH * 1.4)";
                    tooltip = "Demolitions - your remote charges, fired from the device";
                    action = QUOTE([ARR_2('app','engineer')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','engineer')] call FUNC(click););
                };
                class GVAR(s7AppMedical): GVAR(s7Tile) {
                    idc = 467613;
                    x = "((175)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((564)) / 2048 * (safezoneH * 1.4)";
                    tooltip = "Squad medical - vitals and casualties";
                    action = QUOTE([ARR_2('app','medical')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','medical')] call FUNC(click););
                };
                class GVAR(s7AppLog): GVAR(s7Tile) {
                    idc = 467612;
                    x = "((8)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((564)) / 2048 * (safezoneH * 1.4)";
                    tooltip = "Filed reports - the shared HQ log";
                    action = QUOTE([ARR_2('app','log')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','log')] call FUNC(click););
                };


                // The tile glyphs. Their own controls rather than the buttons'
                // ShortcutPos, which is evaluated from config once and never
                // rescales - the layout stretches these tiles well over 2x, so a
                // config-anchored glyph cannot stay centred on them. Declared
                // AFTER the tiles so the tile texture cannot cover them; clicks
                // are unaffected because dispatch is by catcher rectangle, not
                // by control hit-testing.
                class GVAR(s7Icon0): GVAR(s7Icon) {
                    idc = 467840;
                    text = "\cTab\img\icon_bft_ca.paa";
                };
                class GVAR(s7Icon1): GVAR(s7Icon) {
                    idc = 467841;
                    text = "\cTab\img\icon_mail_ca.paa";
                };
                class GVAR(s7Icon2): GVAR(s7Icon) {
                    idc = 467842;
                    text = "\cTab\img\icon_uav_ca.paa";
                };
                class GVAR(s7Icon3): GVAR(s7Icon) {
                    idc = 467843;
                    text = "\cTab\img\icon_helmetcam_ca.paa";
                };
                class GVAR(s7Icon4): GVAR(s7Icon) {
                    idc = 467844;
                    text = "\z\ctab\addons\intel\data\feed_ca.paa";
                };
                class GVAR(s7Icon5): GVAR(s7Icon) {
                    idc = 467845;
                    text = QPATHTOF(data\icon_ew_ca.paa);
                };
                class GVAR(s7Icon6): GVAR(s7Icon) {
                    idc = 467846;
                    text = QPATHTOF(data\icon_jam_ca.paa);
                };
                class GVAR(s7Icon7): GVAR(s7Icon) {
                    idc = 467847;
                    text = QPATHTOF(data\icon_mesh_ca.paa);
                };
                class GVAR(s7Icon8): GVAR(s7Icon) {
                    idc = 467848;
                    text = QPATHTOF(data\icon_weather_ca.paa);
                };
                class GVAR(s7Icon9): GVAR(s7Icon) {
                    idc = 467849;
                    text = QPATHTOF(data\icon_radio_ca.paa);
                };
                class GVAR(s7Icon10): GVAR(s7Icon) {
                    idc = 467850;
                    text = QPATHTOF(data\icon_alarm_ca.paa);
                };
                class GVAR(s7Icon11): GVAR(s7Icon) {
                    idc = 467851;
                    text = QPATHTOF(data\icon_settings_ca.paa);
                };
                class GVAR(s7Icon12): GVAR(s7Icon) {
                    idc = 467852;
                    text = QPATHTOF(data\icon_log_ca.paa);
                };
                class GVAR(s7Icon14): GVAR(s7Icon) {
                    idc = 467854;
                    text = QPATHTOF(data\icon_convoy_ca.paa);
                };
                class GVAR(s7Icon15): GVAR(s7Icon) {
                    idc = 467855;
                    text = QPATHTOF(data\icon_demo_ca.paa);
                };
                class GVAR(s7Icon13): GVAR(s7Icon) {
                    idc = 467853;
                    text = "\z\ghost\addons\media\images\Icons\MedicalArea.paa";
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
                class GVAR(s7LiveConvoy): RscStructuredText {
                    idc = 467464;
                    x = "((352)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((572)) / 2048 * (safezoneH * 1.4)";
                    w = "((139)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    h = "((107)) / 2048 * (safezoneH * 1.4)";
                    size = "((20)) / 2048 * (safezoneH * 1.4)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(s7LiveEngineer): RscStructuredText {
                    idc = 467465;
                    x = "((352)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((572)) / 2048 * (safezoneH * 1.4)";
                    w = "((139)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    h = "((107)) / 2048 * (safezoneH * 1.4)";
                    size = "((20)) / 2048 * (safezoneH * 1.4)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(s7LiveMedical): RscStructuredText {
                    idc = 467463;
                    x = "((185)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((572)) / 2048 * (safezoneH * 1.4)";
                    w = "((139)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    h = "((107)) / 2048 * (safezoneH * 1.4)";
                    size = "((20)) / 2048 * (safezoneH * 1.4)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(s7LiveLog): RscStructuredText {
                    idc = 467462;
                    x = "((18)) / 2048 * ((safezoneH * 1.4) * 3/4)";
                    y = "((572)) / 2048 * (safezoneH * 1.4)";
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

        class GVAR(s7InfoBg): RscPicture {
            idc = 467200;
            x = "((452)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((773)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((1134)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((564)) / 2048 * (safezoneH * 1.4)";
            // plain rectangle - the corner mask rounds the screen, and this
            // page's own rounded corners cut through to the backdrop behind
            text = "#(argb,8,8,3)color(1,1,1,1)";
            colorText[] = {0.13, 0.13, 0.14, 1};
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

        class GVAR(s7WxIconDetail): GVAR(s7WxIcon) {
            idc = 467731;
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
            action = QUOTE([ARR_2('alarm',5)] call FUNC(click););
        };
        class GVAR(s7Alarm1): GVAR(s7Alarm0) {
            idc = 467501;
            x = "((710)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "+15 MIN";
            action = QUOTE([ARR_2('alarm',15)] call FUNC(click););
        };
        class GVAR(s7Alarm2): GVAR(s7Alarm0) {
            idc = 467502;
            x = "((910)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "+30 MIN";
            action = QUOTE([ARR_2('alarm',30)] call FUNC(click););
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
            action = QUOTE([ARR_2('alarm',1)] call FUNC(click););
        };
        class GVAR(s7Alarm6): GVAR(s7Alarm5) {
            idc = 467506;
            x = "((710)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "+2 MIN";
            action = QUOTE([ARR_2('alarm',2)] call FUNC(click););
        };
        class GVAR(s7Alarm7): GVAR(s7Alarm5) {
            idc = 467507;
            x = "((910)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "+3 MIN";
            action = QUOTE([ARR_2('alarm',3)] call FUNC(click););
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
        // One DEL key per roster row, for the timer's setter or an admin.
        // No config action - the catcher path dispatches, and a second path
        // firing the same press would take two rows. Visibility belongs to
        // FUNC(alarmDelSync) alone.
        class GVAR(s7AlarmDel0): GVAR(s7Alarm0) {
            idc = 467560;
            text = "DEL #1";
            action = "";
        };
        class GVAR(s7AlarmDel1): GVAR(s7AlarmDel0) {
            idc = 467561;
            text = "DEL #2";
        };
        class GVAR(s7AlarmDel2): GVAR(s7AlarmDel0) {
            idc = 467562;
            text = "DEL #3";
        };
        class GVAR(s7AlarmDel3): GVAR(s7AlarmDel0) {
            idc = 467563;
            text = "DEL #4";
        };
        class GVAR(s7AlarmDel4): GVAR(s7AlarmDel0) {
            idc = 467564;
            text = "DEL #5";
        };
        class GVAR(s7AlarmDel5): GVAR(s7AlarmDel0) {
            idc = 467565;
            text = "DEL #6";
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
            action = QUOTE([ARR_2('icon',0)] call FUNC(click););
        };
        class GVAR(s7Swatch1): GVAR(s7Swatch0) {
            idc = 467511;
            x = "((650)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "GREEN";
            colorBackground[] = {0.22, 0.70, 0.29, 1};
            colorBackgroundActive[] = {0.22, 0.70, 0.29, 1};
            action = QUOTE([ARR_2('icon',1)] call FUNC(click););
        };
        class GVAR(s7Swatch2): GVAR(s7Swatch0) {
            idc = 467512;
            x = "((790)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "BLUE";
            colorBackground[] = {0.24, 0.51, 0.84, 1};
            colorBackgroundActive[] = {0.24, 0.51, 0.84, 1};
            action = QUOTE([ARR_2('icon',2)] call FUNC(click););
        };
        class GVAR(s7Swatch3): GVAR(s7Swatch0) {
            idc = 467513;
            x = "((930)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "YELLOW";
            colorBackground[] = {0.90, 0.80, 0.20, 1};
            colorBackgroundActive[] = {0.90, 0.80, 0.20, 1};
            action = QUOTE([ARR_2('icon',3)] call FUNC(click););
        };
        class GVAR(s7Swatch4): GVAR(s7Swatch0) {
            idc = 467514;
            x = "((1070)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "WHITE";
            colorBackground[] = {1, 1, 1, 1};
            colorBackgroundActive[] = {1, 1, 1, 1};
            action = QUOTE([ARR_2('icon',4)] call FUNC(click););
        };
        class GVAR(s7Swatch5): GVAR(s7Swatch0) {
            idc = 467515;
            x = "((1210)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "ORANGE";
            colorBackground[] = {0.91, 0.55, 0.16, 1};
            colorBackgroundActive[] = {0.91, 0.55, 0.16, 1};
            action = QUOTE([ARR_2('icon',5)] call FUNC(click););
        };
        class GVAR(s7Swatch6): GVAR(s7Swatch0) {
            idc = 467516;
            x = "((1350)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "GHOST";
            colorBackground[] = {0.80, 0.26, 0.19, 1};
            colorBackgroundActive[] = {0.80, 0.26, 0.19, 1};
            action = QUOTE([ARR_2('icon',6)] call FUNC(click););
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
            action = QUOTE([ARR_2('bg',0)] call FUNC(click););
        };
        class GVAR(s7Bg1): GVAR(s7Bg0) {
            idc = 467521;
            x = "((710)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "CHARCOAL";
            colorBackground[] = {0.16, 0.17, 0.18, 1};
            colorBackgroundActive[] = {0.16, 0.17, 0.18, 1};
            action = QUOTE([ARR_2('bg',1)] call FUNC(click););
        };
        class GVAR(s7Bg2): GVAR(s7Bg0) {
            idc = 467522;
            x = "((910)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "SLATE";
            colorBackground[] = {0.15, 0.18, 0.22, 1};
            colorBackgroundActive[] = {0.15, 0.18, 0.22, 1};
            action = QUOTE([ARR_2('bg',2)] call FUNC(click););
        };
        class GVAR(s7Bg3): GVAR(s7Bg0) {
            idc = 467523;
            x = "((1110)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "OLIVE";
            colorBackground[] = {0.16, 0.18, 0.13, 1};
            colorBackgroundActive[] = {0.16, 0.18, 0.13, 1};
            action = QUOTE([ARR_2('bg',3)] call FUNC(click););
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
            action = QUOTE([ARR_2('font',0)] call FUNC(click););
        };
        class GVAR(s7Font1): GVAR(s7Font0) {
            idc = 467531;
            x = "((710)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "BOLD";
            font = "RobotoCondensedBold";
            action = QUOTE([ARR_2('font',1)] call FUNC(click););
        };
        class GVAR(s7Font2): GVAR(s7Font0) {
            idc = 467532;
            x = "((910)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "PURISTA";
            font = "PuristaMedium";
            action = QUOTE([ARR_2('font',2)] call FUNC(click););
        };
        class GVAR(s7Font3): GVAR(s7Font0) {
            idc = 467533;
            x = "((1110)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "MONO";
            font = "EtelkaMonospacePro";
            action = QUOTE([ARR_2('font',3)] call FUNC(click););
        };

        // --- tools drawer ---------------------------------------------------
        // cTab's own map switches and this mod's drawing tools, on one panel
        // over the map. Declared before them so it backs them rather than
        // covering them. The layouts place the lot; the numbers here only need
        // to be sane for the first frame.
        class GVAR(s7ToolsBg): RscText {
            idc = 467320;
            x = "((510)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((1300)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((1120)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((170)) / 2048 * (safezoneH * 1.4)";
            colorBackground[] = {0.07, 0.08, 0.09, 0.97};
        };

        // cTab's own map switches. The handset has no bezel keys and the
        // vehicle screen has no function buttons, so the switches that live on
        // the tablet's key strip have nowhere else to go. Each one calls cTab's
        // own function - the state is cTab's, not ours.
        // No plain "TEXT" switch: beside TEXT +/- it read as a header, and the
        // label toggle it carried was not worth that confusion.
        class GVAR(s7Tool1): GVAR(toolKey) {
            idc = 467541;
            x = "((650)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((1330)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((130)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((56)) / 2048 * (safezoneH * 1.4)";
            text = "TEXT +";
            tooltip = "Larger icon labels";
            sizeEx = "((20)) / 2048 * (safezoneH * 1.4)";
            colorBackground[] = {0.19, 0.20, 0.21, 1};
            colorBackgroundActive[] = {0.32, 0.34, 0.36, 1};
            action = QUOTE(['mapTextUp'] call FUNC(click););
        };
        class GVAR(s7Tool2): GVAR(s7Tool1) {
            idc = 467542;
            x = "((790)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "TEXT -";
            tooltip = "Smaller icon labels";
            action = QUOTE(['mapTextDown'] call FUNC(click););
        };
        class GVAR(s7Tool3): GVAR(s7Tool1) {
            idc = 467543;
            x = "((930)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "TOOLS";
            tooltip = "Show or hide cTab's grid, elevation and bearing readout";
            action = QUOTE(['mapTools'] call FUNC(click););
        };
        class GVAR(s7Tool4): GVAR(s7Tool1) {
            idc = 467544;
            x = "((1070)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "MAP";
            tooltip = "Switch between the satellite and topographic map";
            action = QUOTE(['mapType'] call FUNC(click););
        };
        class GVAR(s7Tool5): GVAR(s7Tool1) {
            idc = 467545;
            x = "((1210)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "CENTRE";
            tooltip = "Recentre the map on your own position";
            action = QUOTE(['mapCentre'] call FUNC(click););
        };
        class GVAR(s7Tool6): GVAR(s7Tool1) {
            idc = 467546;
            x = "((1350)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "SCANNER";
            tooltip = "Show or hide the scanner readout on the map";
            action = QUOTE(['scanPanel'] call FUNC(click););
        };

        // The drawing tools, beside them. Picking one drops the device back to
        // its map, which is the only place a tool has anything to draw on.
        class GVAR(s7Draw0): GVAR(toolKey) {
            idc = 467550;
            x = "((510)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((1400)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((130)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((56)) / 2048 * (safezoneH * 1.4)";
            text = "COMPASS";
            tooltip = "Drop an origin, then read bearing and range to the cursor";
            sizeEx = "((20)) / 2048 * (safezoneH * 1.4)";
            colorBackground[] = {0.14, 0.20, 0.24, 1};
            colorBackgroundActive[] = {0.24, 0.34, 0.40, 1};
            action = QUOTE([ARR_2('tool','compass')] call FUNC(click););
        };
        class GVAR(s7Draw1): GVAR(s7Draw0) {
            idc = 467551;
            x = "((650)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "DISTANCE";
            tooltip = "Lay a chain of points and read the running total";
            action = QUOTE([ARR_2('tool','distance')] call FUNC(click););
        };
        class GVAR(s7Draw2): GVAR(s7Draw0) {
            idc = 467552;
            x = "((790)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "PROFILE";
            tooltip = "Two points draw a terrain profile between them";
            action = QUOTE([ARR_2('tool','height')] call FUNC(click););
        };
        class GVAR(s7Draw3): GVAR(s7Draw0) {
            idc = 467553;
            x = "((930)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "SIGHT";
            tooltip = "Trace what an observer at the base point can see";
            action = QUOTE([ARR_2('tool','sight')] call FUNC(click););
        };
        class GVAR(s7Draw4): GVAR(s7Draw0) {
            idc = 467554;
            x = "((1070)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "BUILDING";
            tooltip = "Number the buildings under the cursor";
            action = QUOTE([ARR_2('tool','houses')] call FUNC(click););
        };
        class GVAR(s7Draw5): GVAR(s7Draw0) {
            idc = 467555;
            x = "((1210)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "GRID";
            tooltip = "Lay a numbered reference grid over an area";
            action = QUOTE([ARR_2('tool','grid')] call FUNC(click););
        };
        class GVAR(s7Draw6): GVAR(s7Draw0) {
            idc = 467556;
            x = "((1350)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "FLAT";
            tooltip = "Find ground flat enough to land on";
            action = QUOTE([ARR_2('tool','flat')] call FUNC(click););
        };
        class GVAR(s7Draw7): GVAR(s7Draw0) {
            idc = 467557;
            x = "((1490)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "TOOL OFF";
            tooltip = "Put the tools away and clear what they drew";
            action = QUOTE([ARR_2('tool','')] call FUNC(click););
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

        // Declared LAST deliberately: config controls draw in declaration
        // order, and the menu key must sit on top of every page, or the app
        // screens bury the only way back to the menu.
        // The menu key, top right of the glass. This case has no bezel keys,
        // so without it there is no way into the card menu at all.
        // Rounded, like everything else on this screen - GVAR(glassKey)
        // carries the corner in a texture, because a plain button cannot round
        // itself. The hover shade comes from the texture set too, so there is
        // no colorBackgroundActive here any more.
        class GVAR(s23BtnMenu): GVAR(glassKey) {
            idc = 467394;
            x = "((1655)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((745)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((96)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((80)) / 2048 * (safezoneH * 1.4)";
            tooltip = "Menu";
            action = QUOTE(['menu'] call FUNC(click););
        };
        class GVAR(s23MenuGlyph): RscPicture {
            idc = 467395;
            text = QPATHTOF(data\icon_menu_ca.paa);
            x = "((1674)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((760)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((58)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((50)) / 2048 * (safezoneH * 1.4)";
            colorText[] = {0.9, 0.9, 0.9, 1};
        };

        // The tools key, bottom right of the glass, diagonally opposite the app
        // menu key. Same shape, dotted glyph rather than barred, so the two
        // read as a pair without reading as the same button.
        class GVAR(s23BtnTools): GVAR(s23BtnMenu) {
            idc = 467396;
            y = "((1290)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            tooltip = "Map tools";
            action = QUOTE(['tools'] call FUNC(click););
        };
        class GVAR(s23ToolsGlyph): GVAR(s23MenuGlyph) {
            idc = 467397;
            text = QPATHTOF(data\icon_tools_ca.paa);
            y = "((1305)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
        };


        // THE CORNER MASK. This screen is a rounded rectangle and every full
        // screen control - map, dashboard, pages - is a rectangle, so their
        // square corners painted over the case. Rather than inset each one,
        // this puts the case's own corner arcs back on top of the lot.
        // Declared LAST so nothing can draw over it, and left out of every
        // hide list so no mode can take it away.
        class GVAR(s23Mask): RscPicture {
            idc = IDC_S23_MASK;
            text = QPATHTOF(data\s23_blk_mask_ca.paa);
            x = 0;
            y = 0;
            w = 0;
            h = 0;
        };

        // THE LAYOUT HOOK MUST BE THE LAST CONTROL IN THIS BLOCK.
        // Controls are created in declaration order and onLoad fires as each
        // one is made, so a hook declared at the top runs while every control
        // below it is still controlNull - the layout then silently placed
        // nothing and its once-per-display guard blocked the later pass that
        // would have worked. Everything stayed at its config position. Zero
        // size and transparent, so being last costs no z-order.
        class GVAR(s7Holder): RscText {
            idc = -1;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
            colorBackground[] = {0, 0, 0, 0};
            onLoad = QUOTE(call FUNC(deviceLayout););
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
    w = ((300)) / 2048 * (0.86);
    h = ((40)) / 2048 * ((0.86) * 4/3);
    font = "EtelkaMonospacePro";
    sizeEx = ((32)) / 2048 * ((0.86) * 4/3);
    colorText[] = {1, 1, 1, 0.75};
    colorBackground[] = {0, 0, 0, 0.75};
    shadow = 0;
};

class RscTitles {
    class cTab_Android_dsp {
        class controls {

            // the case art, so the held-up phone never flashes the S7 either
            class background: cTab_android_background {
                text = QPATHTOF(data\s23_blk_ca.paa);
            };


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


            // THE CORNER MASK. This screen is a rounded rectangle and every full
            // screen control - map, dashboard, pages - is a rectangle, so their
            // square corners painted over the case. Rather than inset each one,
            // this puts the case's own corner arcs back on top of the lot.
            // Declared LAST so nothing can draw over it, and left out of every
            // hide list so no mode can take it away.
            class GVAR(dspMask): RscPicture {
                idc = IDC_S23_MASK;
                text = QPATHTOF(data\s23_blk_mask_ca.paa);
                x = 0;
                y = 0;
                w = 0;
                h = 0;
            };

            // The HUD's own layout hook, LAST for the same reason the dialog's
            // is. This display never had one at all, so the held-up phone kept
            // cTab's raw placement. deviceLayout tells the two apart by idd.
            class GVAR(dspHolder): RscText {
                idc = -1;
                x = 0;
                y = 0;
                w = 0;
                h = 0;
                colorBackground[] = {0, 0, 0, 0};
                onLoad = QUOTE(call FUNC(deviceLayout););
            };
        };
    };
};
