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
    h = "((212)) / 2048 * (safezoneH * 1.2)";
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

    // ShortcutPos is evaluated from config once and never rescaled, but the
    // layout stretches every tile 1.20x wider fitting the dashboard to the
    // GFT's glass (glass 1574 wide over authored 1341 - both fractions of
    // safezoneH, so the ratio is constant on every screen). left is therefore
    // authored PRE-stretched: 103 + 42 = 145 = half of 241 x 1.20, which is
    // what actually centres the icon on the live tile.
    class ShortcutPos {
        left = "((103)) / 2048 * ((safezoneH * 1.2) * 3/4)";
        top = "((26)) / 2048 * (safezoneH * 1.2)";
        w = "((84)) / 2048 * ((safezoneH * 1.2) * 3/4)";
        h = "((84)) / 2048 * (safezoneH * 1.2)";
    };
    class TextPos {
        left = 0;
        top = "((120)) / 2048 * (safezoneH * 1.2)";
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

// The glass card drawn behind each dashboard tile - a rounded translucent
// panel that gives the tile an edge against the dark desktop. A separate
// picture rather than the button's own animTexture because the texture route
// rendered black on the dashboard in game; a plain RscPicture provably draws.
class GVAR(tabCard): RscPicture {
    idc = -1;
    text = QPATHTOF(data\tile_glass_ca.paa);
    x = 0;
    y = 0;
    w = "((241)) / 2048 * ((safezoneH * 1.2) * 3/4)";
    h = "((212)) / 2048 * (safezoneH * 1.2)";
    colorText[] = {1, 1, 1, 1};
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

        // The GFT case from the first frame - the old tablet frame flashed at
        // every open, and stayed whenever cTab repainted before our tick.
        class background: cTab_Tablet_background {
            text = QPATHTOF(data\gft_screen_ca.paa);
        };
        class loadingtxt: cTab_Tablet_loadingtxt {
            text = "GFT-1 RUGGED TABLET";
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
                class GVAR(tabMenuBg): RscPicture {
                    idc = 467421;
                    x = 0;
                    y = 0;
                    w = "((1341)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((950)) / 2048 * (safezoneH * 1.2)";
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
                // The glass cards, one per tile, declared BEFORE the tiles so
                // they draw underneath. Same rects as the tiles they back; the
                // layout's child-scaling pass carries card and tile together.
                // The spare tile gets none - an empty glass box is clutter.
                class GVAR(tabCard0): GVAR(tabCard) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    x = "((28)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((20)) / 2048 * (safezoneH * 1.2)";
                };
                class GVAR(tabCard1): GVAR(tabCard) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    x = "((273)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((20)) / 2048 * (safezoneH * 1.2)";
                };
                class GVAR(tabCard2): GVAR(tabCard) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    x = "((518)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((20)) / 2048 * (safezoneH * 1.2)";
                };
                class GVAR(tabCard3): GVAR(tabCard) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    x = "((763)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((20)) / 2048 * (safezoneH * 1.2)";
                };
                class GVAR(tabCard4): GVAR(tabCard) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    x = "((28)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((252)) / 2048 * (safezoneH * 1.2)";
                };
                class GVAR(tabCard5): GVAR(tabCard) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    x = "((273)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((252)) / 2048 * (safezoneH * 1.2)";
                };
                class GVAR(tabCard6): GVAR(tabCard) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    x = "((518)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((252)) / 2048 * (safezoneH * 1.2)";
                };
                class GVAR(tabCard7): GVAR(tabCard) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    x = "((763)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((252)) / 2048 * (safezoneH * 1.2)";
                };
                class GVAR(tabCard8): GVAR(tabCard) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    x = "((518)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((484)) / 2048 * (safezoneH * 1.2)";
                };
                class GVAR(tabCard9): GVAR(tabCard) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    x = "((763)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((484)) / 2048 * (safezoneH * 1.2)";
                };
                class GVAR(tabCardWeather): GVAR(tabCard) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    text = QPATHTOF(data\tile_glassw_ca.paa);
                    x = "((28)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((484)) / 2048 * (safezoneH * 1.2)";
                    w = "((470)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                };
                class GVAR(tabCard10): GVAR(tabCard) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    x = "((1008)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((484)) / 2048 * (safezoneH * 1.2)";
                };
                class GVAR(tabCard11): GVAR(tabCard) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    x = "((28)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((716)) / 2048 * (safezoneH * 1.2)";
                };
                class GVAR(tabCard12): GVAR(tabCard) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    x = "((273)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((716)) / 2048 * (safezoneH * 1.2)";
                };
                class GVAR(tabCard14): GVAR(tabCard) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    x = "((518)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((716)) / 2048 * (safezoneH * 1.2)";
                };
                class GVAR(tabCard15): GVAR(tabCard) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    x = "((763)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((716)) / 2048 * (safezoneH * 1.2)";
                };
                class GVAR(tabCard13): GVAR(tabCard) {
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    x = "((1008)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((20)) / 2048 * (safezoneH * 1.2)";
                    h = "((444)) / 2048 * (safezoneH * 1.2)";
                    text = QPATHTOF(data\tiletall_n_ca.paa);
                };
                class GVAR(tabCard16): GVAR(tabCard) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    x = "((1008)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((716)) / 2048 * (safezoneH * 1.2)";
                };

                class GVAR(tabAppMap): GVAR(tabTile) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    idc = 467620;
                    x = "((28)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((20)) / 2048 * (safezoneH * 1.2)";
                    text = "MAP";
                    textureNoShortcut = "\cTab\img\icon_bft_ca.paa";
                    tooltip = "Back to the map";
                    action = QUOTE([ARR_2('app','map')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','map')] call FUNC(click););
                };
                class GVAR(tabAppMessages): GVAR(tabTile) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    idc = 467621;
                    x = "((273)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((20)) / 2048 * (safezoneH * 1.2)";
                    text = "MESSAGES";
                    textureNoShortcut = "\cTab\img\icon_mail_ca.paa";
                    tooltip = "Messages and report templates";
                    action = QUOTE([ARR_2('app','message')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','message')] call FUNC(click););
                };
                class GVAR(tabAppUav): GVAR(tabTile) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    idc = 467622;
                    x = "((518)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((20)) / 2048 * (safezoneH * 1.2)";
                    text = "UAV CAM";
                    textureNoShortcut = "\cTab\img\icon_uav_ca.paa";
                    tooltip = "UAV feed - pick again for the next aircraft";
                    action = QUOTE([ARR_2('app','uav')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','uav')] call FUNC(click););
                };
                class GVAR(tabAppHcam): GVAR(tabTile) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    idc = 467623;
                    x = "((763)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((20)) / 2048 * (safezoneH * 1.2)";
                    text = "HELMET CAM";
                    textureNoShortcut = "\cTab\img\icon_helmetcam_ca.paa";
                    tooltip = "Helmet cam - pick again for the next man";
                    action = QUOTE([ARR_2('app','hcam')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','hcam')] call FUNC(click););
                };
                class GVAR(tabAppIntel): GVAR(tabTile) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    idc = 467624;
                    x = "((28)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((252)) / 2048 * (safezoneH * 1.2)";
                    text = "INTEL";
                    textureNoShortcut = "\z\ctab\addons\intel\data\feed_ca.paa";
                    tooltip = "Intel feed";
                    action = QUOTE([ARR_2('app','intel')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','intel')] call FUNC(click););
                };
                class GVAR(tabAppDrone): GVAR(tabTile) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    idc = 467625;
                    x = "((273)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((252)) / 2048 * (safezoneH * 1.2)";
                    text = "DRONE";
                    textureNoShortcut = QPATHTOF(data\icon_ew_ca.paa);
                    tooltip = "Drone detection - bearing and range";
                    action = QUOTE([ARR_2('app','drone')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','drone')] call FUNC(click););
                };
                class GVAR(tabAppJam): GVAR(tabTile) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    idc = 467626;
                    x = "((518)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((252)) / 2048 * (safezoneH * 1.2)";
                    text = "JAM";
                    textureNoShortcut = QPATHTOF(data\icon_jam_ca.paa);
                    tooltip = "Jamming level";
                    action = QUOTE([ARR_2('app','jam')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','jam')] call FUNC(click););
                };
                class GVAR(tabAppMesh): GVAR(tabTile) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    idc = 467627;
                    x = "((763)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((252)) / 2048 * (safezoneH * 1.2)";
                    text = "MESH";
                    textureNoShortcut = QPATHTOF(data\icon_mesh_ca.paa);
                    tooltip = "Mesh link";
                    action = QUOTE([ARR_2('app','mesh')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','mesh')] call FUNC(click););
                };
                class GVAR(tabAppRadio): GVAR(tabTile) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    idc = 467629;
                    x = "((518)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((484)) / 2048 * (safezoneH * 1.2)";
                    text = "RADIO";
                    textureNoShortcut = QPATHTOF(data\icon_radio_ca.paa);
                    tooltip = "Radio and vehicle racks";
                    action = QUOTE([ARR_2('app','radio')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','radio')] call FUNC(click););
                };
                class GVAR(tabAppAlarm): GVAR(tabTile) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    idc = 467630;
                    x = "((763)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((484)) / 2048 * (safezoneH * 1.2)";
                    text = "ALARMS";
                    textureNoShortcut = QPATHTOF(data\icon_alarm_ca.paa);
                    tooltip = "Scanner alarms";
                    action = QUOTE([ARR_2('app','alarm')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','alarm')] call FUNC(click););
                };
                // The weather tile is double-wide, RuggON utility style: glyph
                // and label left, the live readout (467401) on the right half.
                class GVAR(tabAppWeather): GVAR(tabTile) {
                    idc = 467628;
                    x = "((28)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((484)) / 2048 * (safezoneH * 1.2)";
                    w = "((470)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    text = "WEATHER";
                    textureNoShortcut = QPATHTOF(data\icon_weather_ca.paa);
                    tooltip = "Current weather";
                    animTextureDefault = QPATHTOF(data\tilew_n_ca.paa);
                    animTextureNormal = QPATHTOF(data\tilew_n_ca.paa);
                    animTextureDisabled = QPATHTOF(data\tilew_n_ca.paa);
                    animTextureOver = QPATHTOF(data\tilew_o_ca.paa);
                    animTextureFocused = QPATHTOF(data\tilew_n_ca.paa);
                    animTexturePressed = QPATHTOF(data\tilew_p_ca.paa);
                    action = QUOTE([ARR_2('app','weather')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','weather')] call FUNC(click););
                    // 84 x 84 like every other glyph. This one carried the
                    // TILE's height, 212, and a shortcut picture is stretched
                    // to whatever box it is given - the weather glyph was
                    // drawn two and a half times too tall.
                    //
                    // left centres it over its own label rather than over the
                    // tile: this tile is two cells wide, and the label sits in
                    // the left half at (564 - 261) / 2 = 151.5 of the stretched
                    // width. 151.5 - 42 puts the glyph's centre on the same
                    // line. Authored pre-stretched, as the base class explains.
                    class ShortcutPos {
                        left = "((110)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                        top = "((26)) / 2048 * (safezoneH * 1.2)";
                        w = "((84)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                        h = "((84)) / 2048 * (safezoneH * 1.2)";
                    };
                    class TextPos {
                        left = 0;
                        top = "((120)) / 2048 * (safezoneH * 1.2)";
                        right = "((261)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                        bottom = 0;
                    };
                };
                class GVAR(tabAppHack): GVAR(tabTile) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    idc = 467631;
                    x = "((1008)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((484)) / 2048 * (safezoneH * 1.2)";
                    text = "INTRUSION";
                    textureNoShortcut = QPATHTOF(data\icon_hack_ca.paa);
                    tooltip = "Intrusion suite";
                    action = QUOTE([ARR_2('app','hack')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','hack')] call FUNC(click););
                };
                class GVAR(tabAppSettings): GVAR(tabTile) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    idc = 467632;
                    x = "((28)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((716)) / 2048 * (safezoneH * 1.2)";
                    text = "SETTINGS";
                    textureNoShortcut = QPATHTOF(data\icon_settings_ca.paa);
                    tooltip = "Device settings - colours and font";
                    action = QUOTE([ARR_2('app','settings')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','settings')] call FUNC(click););
                };
                class GVAR(tabAppLog): GVAR(tabTile) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    idc = 467633;
                    x = "((273)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((716)) / 2048 * (safezoneH * 1.2)";
                    text = "LOG";
                    textureNoShortcut = QPATHTOF(data\icon_log_ca.paa);
                    tooltip = "Filed reports - the shared HQ log";
                    action = QUOTE([ARR_2('app','log')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','log')] call FUNC(click););
                };

                // The squad roster lives on the free bottom row, three cells
                // wide - it lists people, which a one-cell tile cannot do.
                class GVAR(tabAppConvoy): GVAR(tabTile) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    idc = 467635;
                    x = "((518)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((716)) / 2048 * (safezoneH * 1.2)";
                    text = "CONVOY";
                    textureNoShortcut = QPATHTOF(data\icon_convoy_ca.paa);
                    tooltip = "Convoy - pick a column and watch its vehicles";
                    action = QUOTE([ARR_2('app','convoy')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','convoy')] call FUNC(click););
                };
                // Simplex Support Services, GFT ONLY - the request screens
                // are full map flows, which a handset has no room for. The
                // page's four service keys each raise Simplex's own GUI.
                class GVAR(tabAppSupport): GVAR(tabTile) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    idc = 467637;
                    x = "((1008)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((716)) / 2048 * (safezoneH * 1.2)";
                    text = "SUPPORT";
                    textureNoShortcut = "\A3\Ui_f\data\GUI\Cfg\CommunicationMenu\call_ca.paa";
                    tooltip = "Simplex support - CAS, artillery, transport, logistics";
                    action = QUOTE([ARR_2('app','support')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','support')] call FUNC(click););
                };

                class GVAR(tabAppEngineer): GVAR(tabTile) {
                    h = "((212)) / 2048 * (safezoneH * 1.2)";
                    w = "((225)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    idc = 467636;
                    x = "((763)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((716)) / 2048 * (safezoneH * 1.2)";
                    text = "DEMO";
                    textureNoShortcut = QPATHTOF(data\icon_demo_ca.paa);
                    tooltip = "Demolitions - your remote charges, fired from the device";
                    action = QUOTE([ARR_2('app','engineer')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','engineer')] call FUNC(click););
                };
                // MEDICAL is a TALL tile at the end of the grid - it carries a
                // roster, which needs height rather than the width it used to
                // take across the bottom. Its own texture, drawn at this
                // tile's aspect, so the corners match the square ones.
                class GVAR(tabAppMedical): GVAR(tabTile) {
                    idc = 467634;
                    x = "((1008)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((20)) / 2048 * (safezoneH * 1.2)";
                    h = "((444)) / 2048 * (safezoneH * 1.2)";
                    text = "MEDICAL";
                    textureNoShortcut = "\z\ghost\addons\media\images\Icons\MedicalArea.paa";
                    tooltip = "Squad medical - vitals and casualties";
                    animTextureDefault = QPATHTOF(data\tiletall_n_ca.paa);
                    animTextureNormal = QPATHTOF(data\tiletall_n_ca.paa);
                    animTextureDisabled = QPATHTOF(data\tiletall_n_ca.paa);
                    animTextureOver = QPATHTOF(data\tiletall_o_ca.paa);
                    animTextureFocused = QPATHTOF(data\tiletall_n_ca.paa);
                    animTexturePressed = QPATHTOF(data\tiletall_p_ca.paa);
                    action = QUOTE([ARR_2('app','medical')] call FUNC(click););
                    onButtonClick = QUOTE([ARR_2('app','medical')] call FUNC(click););
                    // 84 x 84, the same square every other tile's glyph gets -
                    // and it has to be square, because a shortcut picture is
                    // stretched to whatever box it is given. This one carried
                    // the TILE's width, 225, which drew the medical cross two
                    // and a half times too wide, squashed flat, and off to the
                    // right of the label under it (the box centres at left +
                    // w/2, so 225 moved the glyph as well as stretching it).
                    class ShortcutPos {
                        left = "((103)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                        top = "((22)) / 2048 * (safezoneH * 1.2)";
                        w = "((84)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                        h = "((84)) / 2048 * (safezoneH * 1.2)";
                    };
                    class TextPos {
                        left = 0;
                        top = "((116)) / 2048 * (safezoneH * 1.2)";
                        right = 0;
                        bottom = 0;
                    };
                };
                // the roster itself, filling the rest of that tile
                class GVAR(tabLiveMedical): RscStructuredText {
                    idc = 467448;
                    x = "((1016)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((170)) / 2048 * (safezoneH * 1.2)";
                    w = "((209)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((284)) / 2048 * (safezoneH * 1.2)";
                    size = "((20)) / 2048 * (safezoneH * 1.2)";
                    colorBackground[] = {0, 0, 0, 0};
                };

                // Live readout lines, one per data tile, fed by widgetTick.
                class GVAR(tabLiveUav): RscStructuredText {
                    idc = 467440;
                    x = "((550)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((176)) / 2048 * (safezoneH * 1.2)";
                    w = "((241)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((44)) / 2048 * (safezoneH * 1.2)";
                    size = "((24)) / 2048 * (safezoneH * 1.2)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(tabLiveHcam): RscStructuredText {
                    idc = 467441;
                    x = "((811)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((176)) / 2048 * (safezoneH * 1.2)";
                    w = "((241)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((44)) / 2048 * (safezoneH * 1.2)";
                    size = "((24)) / 2048 * (safezoneH * 1.2)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(tabLiveDrone): RscStructuredText {
                    idc = 467442;
                    x = "((28)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((408)) / 2048 * (safezoneH * 1.2)";
                    w = "((241)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((44)) / 2048 * (safezoneH * 1.2)";
                    size = "((24)) / 2048 * (safezoneH * 1.2)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(tabLiveJam): RscStructuredText {
                    idc = 467443;
                    x = "((289)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((408)) / 2048 * (safezoneH * 1.2)";
                    w = "((241)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((44)) / 2048 * (safezoneH * 1.2)";
                    size = "((24)) / 2048 * (safezoneH * 1.2)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(tabLiveMesh): RscStructuredText {
                    idc = 467444;
                    x = "((550)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((408)) / 2048 * (safezoneH * 1.2)";
                    w = "((241)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((44)) / 2048 * (safezoneH * 1.2)";
                    size = "((24)) / 2048 * (safezoneH * 1.2)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(tabLiveRadio): RscStructuredText {
                    idc = 467445;
                    x = "((811)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((408)) / 2048 * (safezoneH * 1.2)";
                    w = "((241)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((44)) / 2048 * (safezoneH * 1.2)";
                    size = "((24)) / 2048 * (safezoneH * 1.2)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(tabLiveLog): RscStructuredText {
                    idc = 467447;
                    x = "((1072)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((640)) / 2048 * (safezoneH * 1.2)";
                    w = "((241)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((44)) / 2048 * (safezoneH * 1.2)";
                    size = "((24)) / 2048 * (safezoneH * 1.2)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(tabLiveEngineer): RscStructuredText {
                    idc = 467449;
                    x = "((771)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((872)) / 2048 * (safezoneH * 1.2)";
                    w = "((241)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((44)) / 2048 * (safezoneH * 1.2)";
                    size = "((24)) / 2048 * (safezoneH * 1.2)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(tabLiveAlarm): RscStructuredText {
                    idc = 467446;
                    x = "((1072)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((408)) / 2048 * (safezoneH * 1.2)";
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
            y = "((1065)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((260)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((150)) / 2048 * (safezoneH * 1.2)";
            size = "((26)) / 2048 * (safezoneH * 1.2)";
            colorBackground[] = {0, 0, 0, 0};
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
        class GVAR(tabInfoBg): RscPicture {
            idc = 467200;
            x = "((257)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((533)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((1341)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((901)) / 2048 * (safezoneH * 1.2)";
            // plain rectangle - the corner mask rounds the screen, and this
            // page's own rounded corners cut through to the backdrop behind
            text = "#(argb,8,8,3)color(1,1,1,1)";
            colorText[] = {0.13, 0.13, 0.14, 1};
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

        class GVAR(tabWxIconDetail): GVAR(tabWxIcon) {
            idc = 467731;
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
            action = QUOTE([ARR_2('alarm',5)] call FUNC(click););
        };
        class GVAR(tabAlarm1): GVAR(tabAlarm0) {
            idc = 467501;
            x = "((547)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "+15 MIN";
            action = QUOTE([ARR_2('alarm',15)] call FUNC(click););
        };
        class GVAR(tabAlarm2): GVAR(tabAlarm0) {
            idc = 467502;
            x = "((777)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "+30 MIN";
            action = QUOTE([ARR_2('alarm',30)] call FUNC(click););
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
            action = QUOTE([ARR_2('alarm',1)] call FUNC(click););
        };
        class GVAR(tabAlarm6): GVAR(tabAlarm5) {
            idc = 467506;
            x = "((547)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "+2 MIN";
            action = QUOTE([ARR_2('alarm',2)] call FUNC(click););
        };
        class GVAR(tabAlarm7): GVAR(tabAlarm5) {
            idc = 467507;
            x = "((777)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "+3 MIN";
            action = QUOTE([ARR_2('alarm',3)] call FUNC(click););
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
        // One DEL key per roster row, for the timer's setter or an admin.
        // No config action: the catcher path dispatches, and a second path
        // firing the same press would take two rows. Visibility belongs to
        // FUNC(alarmDelSync) alone - the fork's show list never touches these.
        class GVAR(tabAlarmDel0): GVAR(tabAlarm0) {
            idc = 467560;
            text = "DEL #1";
            action = "";
        };
        class GVAR(tabAlarmDel1): GVAR(tabAlarmDel0) {
            idc = 467561;
            text = "DEL #2";
        };
        class GVAR(tabAlarmDel2): GVAR(tabAlarmDel0) {
            idc = 467562;
            text = "DEL #3";
        };
        class GVAR(tabAlarmDel3): GVAR(tabAlarmDel0) {
            idc = 467563;
            text = "DEL #4";
        };
        class GVAR(tabAlarmDel4): GVAR(tabAlarmDel0) {
            idc = 467564;
            text = "DEL #5";
        };
        class GVAR(tabAlarmDel5): GVAR(tabAlarmDel0) {
            idc = 467565;
            text = "DEL #6";
        };

        // The SUPPORT page's four service keys - each raises Simplex's own
        // request screen over the tablet. No config action: the catcher path
        // dispatches, and a second path firing the same press would open the
        // screen twice.
        class GVAR(tabSupCas): GVAR(tabAlarm0) {
            idc = 467570;
            text = "CAS";
            action = "";
        };
        class GVAR(tabSupArty): GVAR(tabSupCas) {
            idc = 467571;
            text = "ARTILLERY";
        };
        class GVAR(tabSupTrans): GVAR(tabSupCas) {
            idc = 467572;
            text = "TRANSPORT";
        };
        class GVAR(tabSupLog): GVAR(tabSupCas) {
            idc = 467573;
            text = "LOGISTICS";
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
            action = QUOTE([ARR_2('icon',0)] call FUNC(click););
        };
        class GVAR(tabSwatch1): GVAR(tabSwatch0) {
            idc = 467511;
            x = "((487)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "GREEN";
            colorBackground[] = {0.22, 0.70, 0.29, 1};
            colorBackgroundActive[] = {0.22, 0.70, 0.29, 1};
            action = QUOTE([ARR_2('icon',1)] call FUNC(click););
        };
        class GVAR(tabSwatch2): GVAR(tabSwatch0) {
            idc = 467512;
            x = "((657)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "BLUE";
            colorBackground[] = {0.24, 0.51, 0.84, 1};
            colorBackgroundActive[] = {0.24, 0.51, 0.84, 1};
            action = QUOTE([ARR_2('icon',2)] call FUNC(click););
        };
        class GVAR(tabSwatch3): GVAR(tabSwatch0) {
            idc = 467513;
            x = "((827)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "YELLOW";
            colorBackground[] = {0.90, 0.80, 0.20, 1};
            colorBackgroundActive[] = {0.90, 0.80, 0.20, 1};
            action = QUOTE([ARR_2('icon',3)] call FUNC(click););
        };
        class GVAR(tabSwatch4): GVAR(tabSwatch0) {
            idc = 467514;
            x = "((997)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "WHITE";
            colorBackground[] = {1, 1, 1, 1};
            colorBackgroundActive[] = {1, 1, 1, 1};
            action = QUOTE([ARR_2('icon',4)] call FUNC(click););
        };
        class GVAR(tabSwatch5): GVAR(tabSwatch0) {
            idc = 467515;
            x = "((1167)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "ORANGE";
            colorBackground[] = {0.91, 0.55, 0.16, 1};
            colorBackgroundActive[] = {0.91, 0.55, 0.16, 1};
            action = QUOTE([ARR_2('icon',5)] call FUNC(click););
        };
        class GVAR(tabSwatch6): GVAR(tabSwatch0) {
            idc = 467516;
            x = "((1337)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "GHOST";
            colorBackground[] = {0.80, 0.26, 0.19, 1};
            colorBackgroundActive[] = {0.80, 0.26, 0.19, 1};
            action = QUOTE([ARR_2('icon',6)] call FUNC(click););
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
            action = QUOTE([ARR_2('bg',0)] call FUNC(click););
        };
        class GVAR(tabBg1): GVAR(tabBg0) {
            idc = 467521;
            x = "((547)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "CHARCOAL";
            colorBackground[] = {0.16, 0.17, 0.18, 1};
            colorBackgroundActive[] = {0.16, 0.17, 0.18, 1};
            action = QUOTE([ARR_2('bg',1)] call FUNC(click););
        };
        class GVAR(tabBg2): GVAR(tabBg0) {
            idc = 467522;
            x = "((777)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "SLATE";
            colorBackground[] = {0.15, 0.18, 0.22, 1};
            colorBackgroundActive[] = {0.15, 0.18, 0.22, 1};
            action = QUOTE([ARR_2('bg',2)] call FUNC(click););
        };
        class GVAR(tabBg3): GVAR(tabBg0) {
            idc = 467523;
            x = "((1007)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "OLIVE";
            colorBackground[] = {0.16, 0.18, 0.13, 1};
            colorBackgroundActive[] = {0.16, 0.18, 0.13, 1};
            action = QUOTE([ARR_2('bg',3)] call FUNC(click););
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
            action = QUOTE([ARR_2('font',0)] call FUNC(click););
        };
        class GVAR(tabFont1): GVAR(tabFont0) {
            idc = 467531;
            x = "((547)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "BOLD";
            font = "RobotoCondensedBold";
            action = QUOTE([ARR_2('font',1)] call FUNC(click););
        };
        class GVAR(tabFont2): GVAR(tabFont0) {
            idc = 467532;
            x = "((777)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "PURISTA";
            font = "PuristaMedium";
            action = QUOTE([ARR_2('font',2)] call FUNC(click););
        };
        class GVAR(tabFont3): GVAR(tabFont0) {
            idc = 467533;
            x = "((1007)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "MONO";
            font = "EtelkaMonospacePro";
            action = QUOTE([ARR_2('font',3)] call FUNC(click););
        };

        // --- tools drawer ---------------------------------------------------
        // The panel the map switches and drawing tools sit on, over the map.
        // Declared before them so it backs them rather than covering them; the
        // layout places the lot, these numbers only carry the first frame.
        class GVAR(tabToolsBg): RscText {
            idc = 467320;
            x = "((317)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((1300)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((1830)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((190)) / 2048 * (safezoneH * 1.2)";
            colorBackground[] = {0.07, 0.08, 0.09, 0.97};
        };

        // cTab's own map switches. The tablet has bezel keys for these, but a
        // key strip you have to hunt along is not the same as a labelled
        // button, and the drawer is where the user asked for them.
        // No plain "TEXT" switch: beside TEXT +/- it read as a header, and the
        // label toggle it carried was not worth that confusion.
        class GVAR(tabTool1): GVAR(toolKey) {
            idc = 467541;
            x = "((317)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((1310)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((220)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((60)) / 2048 * (safezoneH * 1.2)";
            text = "TEXT +";
            tooltip = "Larger icon labels";
            sizeEx = "((24)) / 2048 * (safezoneH * 1.2)";
            colorBackground[] = {0.19, 0.20, 0.21, 1};
            colorBackgroundActive[] = {0.32, 0.34, 0.36, 1};
            action = QUOTE(['mapTextUp'] call FUNC(click););
        };
        class GVAR(tabTool2): GVAR(tabTool1) {
            idc = 467542;
            text = "TEXT -";
            tooltip = "Smaller icon labels";
            action = QUOTE(['mapTextDown'] call FUNC(click););
        };
        class GVAR(tabTool3): GVAR(tabTool1) {
            idc = 467543;
            text = "TOOLS";
            tooltip = "Show or hide cTab's grid, elevation and bearing readout";
            action = QUOTE(['mapTools'] call FUNC(click););
        };
        class GVAR(tabTool4): GVAR(tabTool1) {
            idc = 467544;
            text = "MAP";
            tooltip = "Switch between the satellite and topographic map";
            action = QUOTE(['mapType'] call FUNC(click););
        };
        class GVAR(tabTool5): GVAR(tabTool1) {
            idc = 467545;
            text = "CENTRE";
            tooltip = "Recentre the map on your own position";
            action = QUOTE(['mapCentre'] call FUNC(click););
        };
        class GVAR(tabTool6): GVAR(tabTool1) {
            idc = 467546;
            text = "SCANNER";
            tooltip = "Show or hide the scanner readout on the map";
            action = QUOTE(['scanPanel'] call FUNC(click););
        };

        // The drawing tools, the row beneath them.
        class GVAR(tabDraw0): GVAR(toolKey) {
            idc = 467550;
            x = "((317)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((1385)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((220)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((60)) / 2048 * (safezoneH * 1.2)";
            text = "COMPASS";
            tooltip = "Drop an origin, then read bearing and range to the cursor";
            sizeEx = "((24)) / 2048 * (safezoneH * 1.2)";
            colorBackground[] = {0.14, 0.20, 0.24, 1};
            colorBackgroundActive[] = {0.24, 0.34, 0.40, 1};
            action = QUOTE([ARR_2('tool','compass')] call FUNC(click););
        };
        class GVAR(tabDraw1): GVAR(tabDraw0) {
            idc = 467551;
            x = "((547)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "DISTANCE";
            tooltip = "Lay a chain of points and read the running total";
            action = QUOTE([ARR_2('tool','distance')] call FUNC(click););
        };
        class GVAR(tabDraw2): GVAR(tabDraw0) {
            idc = 467552;
            x = "((777)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "PROFILE";
            tooltip = "Two points draw a terrain profile between them";
            action = QUOTE([ARR_2('tool','height')] call FUNC(click););
        };
        class GVAR(tabDraw3): GVAR(tabDraw0) {
            idc = 467553;
            x = "((1007)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "SIGHT";
            tooltip = "Trace what an observer at the base point can see";
            action = QUOTE([ARR_2('tool','sight')] call FUNC(click););
        };
        class GVAR(tabDraw4): GVAR(tabDraw0) {
            idc = 467554;
            x = "((1237)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "BUILDING";
            tooltip = "Number the buildings under the cursor";
            action = QUOTE([ARR_2('tool','houses')] call FUNC(click););
        };
        class GVAR(tabDraw5): GVAR(tabDraw0) {
            idc = 467555;
            x = "((1467)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "GRID";
            tooltip = "Lay a numbered reference grid over an area";
            action = QUOTE([ARR_2('tool','grid')] call FUNC(click););
        };
        class GVAR(tabDraw6): GVAR(tabDraw0) {
            idc = 467556;
            x = "((1697)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "FLAT";
            tooltip = "Find ground flat enough to land on";
            action = QUOTE([ARR_2('tool','flat')] call FUNC(click););
        };
        class GVAR(tabDraw7): GVAR(tabDraw0) {
            idc = 467557;
            x = "((1927)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            text = "TOOL OFF";
            tooltip = "Put the tools away and clear what they drew";
            action = QUOTE([ARR_2('tool','')] call FUNC(click););
        };

        // Jam and mesh state in the header, beside cTab's signal icons. These
        // are never hidden - the state is worth seeing on every screen.

        // The GFT's menu key - the fork and the layout have referenced
        // 467390/467391 since the GFT era, but the classes died with the old
        // ITC file and were never redeclared: the tablet genuinely had no
        // menu button. Declared last so no page can bury it.
        // Rounded like the tiles - GVAR(glassKey) carries the corner in a
        // texture, and the hover shade with it, so no colorBackgroundActive.
        class GVAR(tabBtnMenu): GVAR(glassKey) {
            idc = 467390;
            x = "((1660)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((790)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((96)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((80)) / 2048 * (safezoneH * 1.2)";
            tooltip = "Menu";
            action = QUOTE(['menu'] call FUNC(click););
        };
        class GVAR(tabBtnMenuGlyph): RscPicture {
            idc = 467391;
            text = QPATHTOF(data\icon_menu_ca.paa);
            x = "((1679)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            y = "((805)) / 2048 * (safezoneH * 1.2) + (safezoneY + (safezoneH - (safezoneH * 1.2)) / 2)";
            w = "((58)) / 2048 * ((safezoneH * 1.2) * 3/4)";
            h = "((50)) / 2048 * (safezoneH * 1.2)";
            colorText[] = {0.9, 0.9, 0.9, 1};
        };

        // The tools key, same shape as the menu key on the other side of the
        // glass, dotted rather than barred so the two do not read alike.
        class GVAR(tabBtnTools): GVAR(tabBtnMenu) {
            idc = 467388;
            x = "((317)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
            tooltip = "Map tools";
            action = QUOTE(['tools'] call FUNC(click););
        };
        class GVAR(tabBtnToolsGlyph): GVAR(tabBtnMenuGlyph) {
            idc = 467389;
            text = QPATHTOF(data\icon_tools_ca.paa);
            x = "((336)) / 2048 * ((safezoneH * 1.2) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.2) * 3/4)) / 2 + (((safezoneH * 1.2) * 3/4) * 96.5 / 2048))";
        };

        // The APP1-APP3 and Input Lock keys painted down the case's left
        // bezel, wired the way the FBCB4's power key is: an invisible catcher
        // over the paint, given the meaning the label promises. APP1 map,
        // APP2 messages, APP3 settings, Input Lock closes the tablet. Placed
        // by the layout at the paint's own rectangles.
        class GVAR(gftKeyApp1): cTab_RscButton {
            idc = IDC_GFT_KEYAPP1;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
            text = "";
            colorBackground[] = {0, 0, 0, 0};
            colorBackgroundActive[] = {1, 1, 1, 0.12};
            colorFocused[] = {0, 0, 0, 0};
            colorShadow[] = {0, 0, 0, 0};
            colorBorder[] = {0, 0, 0, 0};
            borderSize = 0;
            offsetX = 0;
            offsetY = 0;
            offsetPressedX = 0;
            offsetPressedY = 0;
            tooltip = "Map";
            action = QUOTE([ARR_2('app','map')] call FUNC(click););
        };
        class GVAR(gftKeyApp2): GVAR(gftKeyApp1) {
            idc = IDC_GFT_KEYAPP2;
            tooltip = "Messages";
            action = QUOTE([ARR_2('app','message')] call FUNC(click););
        };
        class GVAR(gftKeyApp3): GVAR(gftKeyApp1) {
            idc = IDC_GFT_KEYAPP3;
            tooltip = "Settings";
            action = QUOTE([ARR_2('app','settings')] call FUNC(click););
        };
        class GVAR(gftKeyLock): GVAR(gftKeyApp1) {
            idc = IDC_GFT_KEYLOCK;
            tooltip = "Close the tablet";
            action = QUOTE(['close'] call FUNC(click););
        };

        // The right-hand column, painted to mirror the left one.
        class GVAR(gftKeyApp4): GVAR(gftKeyApp1) {
            idc = IDC_GFT_KEYAPP4;
            tooltip = "Intel feed";
            action = QUOTE([ARR_2('app','intel')] call FUNC(click););
        };
        class GVAR(gftKeyApp5): GVAR(gftKeyApp1) {
            idc = IDC_GFT_KEYAPP5;
            tooltip = "Filed reports - the shared HQ log";
            action = QUOTE([ARR_2('app','log')] call FUNC(click););
        };
        class GVAR(gftKeyHome): GVAR(gftKeyApp1) {
            idc = IDC_GFT_KEYHOME;
            tooltip = "Home - the app dashboard";
            action = QUOTE(['menu'] call FUNC(click););
        };
        class GVAR(gftKeyPower): GVAR(gftKeyApp1) {
            idc = IDC_GFT_KEYPOWER;
            tooltip = "Power off";
            action = QUOTE(['close'] call FUNC(click););
        };


        // THE CORNER MASK, RETIRED. cTab 2.8 draws the case art OVER the
        // screen content (its background control is declared after every page),
        // and the art's corner nooks are baked fully opaque - the art rounds
        // the screen by itself, and an art corner cannot be misaligned. The
        // control stays declared so old references stay valid;
        // FUNC(tabletLayout) switches it off.
        class GVAR(tabMask): RscPicture {
            idc = IDC_GFT_MASK;
            text = QPATHTOF(data\gft_screen_mask_ca.paa);
            x = 0;
            y = 0;
            w = 0;
            h = 0;
        };

        // THE LAYOUT HOOK MUST BE THE LAST CONTROL IN THIS BLOCK - onLoad fires
        // as each control is created, so a hook at the top runs while every
        // control below it is still controlNull and the layout places nothing.
        class GVAR(tabHolder): RscText {
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
