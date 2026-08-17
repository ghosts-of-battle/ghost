// ---------------------------------------------------------------------------
// The FBCB4 - the vehicle display, rebuilt. It is cTab's FBCB2 wearing a new
// border and carrying the live-tile menu the handhelds have, opened from a key
// in the top right rather than from a strip of function buttons.
//
// No intrusion aboard - nobody runs an intrusion from a moving vehicle - but
// messaging IS: the tablet's message page is grafted in at the bottom of this
// file, reached from the F2 key painted on the case.
//
// The border art's glass is a different rectangle to the one cTab laid the
// FBCB2 out for - x 238, y 574, 1571 x 874 of 2048 against cTab's 810 x 810 at
// 685, 608 - so FUNC(fbcb4Layout) moves the controls into it. That is also why
// the map comes out considerably bigger than the FBCB2's.
// ---------------------------------------------------------------------------

// The glass card drawn behind each dashboard tile, as on the GFT: a rounded
// translucent panel that gives the tile an edge against the dark screen. A
// picture rather than the button's own animTexture - the texture route renders
// black on these dashboards, a plain picture provably draws.
class GVAR(fbcb4Card): RscPicture {
    idc = -1;
    text = QPATHTOF(data\tile_glass_ca.paa);
    x = 0;
    y = 0;
    w = 0;
    h = 0;
    colorText[] = {1, 1, 1, 1};
};

// The tile glyph. Its own control rather than the button's ShortcutPos, which
// is evaluated from config once and never rescales - the layout stretches
// these tiles well past their authored size, so a config-anchored glyph could
// not stay centred on one. Placed by the layout.
class GVAR(fbcb4Icon): RscPicture {
    idc = -1;
    text = "";
    x = 0;
    y = 0;
    w = 0;
    h = 0;
    colorText[] = {1, 1, 1, 1};
};

// Template at root, never inside a controls block - the engine draws an
// in-dialog template as a phantom box at the origin.
class GVAR(fbcb4Tile): RscButtonMenu {
    idc = -1;
    style = "0x02 + 0x0C + 0x0100";
    x = 0;
    y = 0;
    w = 0;
    h = 0;
    text = "";
    textureNoShortcut = "";
    size = "((22)) / 2048 * (safezoneH * 1.6)";
    sizeEx = "((22)) / 2048 * (safezoneH * 1.6)";
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

    // zero: the glyph is a control of its own now, and the label comes from
    // the live readout that widgetTick writes
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



class cTab_FBCB2_dlg {
    class controlsBackground {
        // the new border, in place of cTab's FBCB2 art
        class background: cTab_FBCB2_background {
            text = QPATHTOF(data\fbcb4_screen_ca.paa);
        };
    };

    class controls {
        class GVAR(fbcb4Menu): cTab_RscControlsGroup {
            idc = 467330;
            x = 0;
            y = 0;
            w = 0;
            h = 0;

            class VScrollbar {};
            class HScrollbar {};
            class Scrollbar {};

            class controls {
                class GVAR(fbcb4MenuBg): RscPicture {
                    idc = 467331;
                    x = 0;
                    y = 0;
                    w = "((1571)) / 2048 * ((safezoneH * 1.6) * 3/4)";
                    h = "((874)) / 2048 * (safezoneH * 1.6)";
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
                // The dashboard header, the GFT's to the letter - the unit
                // mark itself is a top-level control (467410), because the
                // group's child-scaling pass would stretch it out of square.
                class GVAR(fbcb4MenuTitle): RscText {
                    idc = IDC_S7_MENUTITLE;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    text = "GHOSTS OF BATTLE";
                    colorText[] = {0.78, 0.80, 0.82, 1};
                };

                // The glass cards, declared BEFORE the tiles so they draw
                // underneath. The layout gives each one its tile's rect.
                class GVAR(fbcb4Card0): GVAR(fbcb4Card) {
                    idc = 467800;
                };
                class GVAR(fbcb4Card1): GVAR(fbcb4Card) {
                    idc = 467801;
                };
                class GVAR(fbcb4Card2): GVAR(fbcb4Card) {
                    idc = 467802;
                };
                class GVAR(fbcb4Card3): GVAR(fbcb4Card) {
                    idc = 467803;
                };
                class GVAR(fbcb4Card4): GVAR(fbcb4Card) {
                    idc = 467804;
                };
                class GVAR(fbcb4Card5): GVAR(fbcb4Card) {
                    idc = 467805;
                };
                class GVAR(fbcb4Card6): GVAR(fbcb4Card) {
                    idc = 467806;
                };
                class GVAR(fbcb4Card7): GVAR(fbcb4Card) {
                    idc = 467807;
                };
                class GVAR(fbcb4Card8): GVAR(fbcb4Card) {
                    idc = 467808;
                };
                class GVAR(fbcb4Card9): GVAR(fbcb4Card) {
                    idc = 467809;
                };
                class GVAR(fbcb4Card10): GVAR(fbcb4Card) {
                    idc = 467810;
                };
                class GVAR(fbcb4Card11): GVAR(fbcb4Card) {
                    idc = 467811;
                };
                class GVAR(fbcb4Card12): GVAR(fbcb4Card) {
                    idc = 467812;
                };
                class GVAR(fbcb4Card13): GVAR(fbcb4Card) {
                    idc = 467813;
                };

                class GVAR(fbcb4AppMap): GVAR(fbcb4Tile) {
                    idc = 467680;
                    tooltip = "Back to the map";
                    action = QUOTE([ARR_2('app','map')] call FUNC(click););
                };
                class GVAR(fbcb4AppUav): GVAR(fbcb4Tile) {
                    idc = 467681;
                    tooltip = "UAV feed";
                    action = QUOTE([ARR_2('app','uav')] call FUNC(click););
                };
                class GVAR(fbcb4AppIntel): GVAR(fbcb4Tile) {
                    idc = 467683;
                    tooltip = "Intel feed";
                    action = QUOTE([ARR_2('app','intel')] call FUNC(click););
                };
                class GVAR(fbcb4AppDrone): GVAR(fbcb4Tile) {
                    idc = 467684;
                    tooltip = "Drone detection";
                    action = QUOTE([ARR_2('app','drone')] call FUNC(click););
                };
                class GVAR(fbcb4AppJam): GVAR(fbcb4Tile) {
                    idc = 467685;
                    tooltip = "Jamming level";
                    action = QUOTE([ARR_2('app','jam')] call FUNC(click););
                };
                class GVAR(fbcb4AppMesh): GVAR(fbcb4Tile) {
                    idc = 467686;
                    tooltip = "Mesh link";
                    action = QUOTE([ARR_2('app','mesh')] call FUNC(click););
                };
                class GVAR(fbcb4AppWeather): GVAR(fbcb4Tile) {
                    idc = 467687;
                    tooltip = "Current weather";
                    action = QUOTE([ARR_2('app','weather')] call FUNC(click););
                };
                class GVAR(fbcb4AppRadio): GVAR(fbcb4Tile) {
                    idc = 467688;
                    tooltip = "Radio and vehicle racks";
                    action = QUOTE([ARR_2('app','radio')] call FUNC(click););
                };
                class GVAR(fbcb4AppSettings): GVAR(fbcb4Tile) {
                    idc = 467690;
                    tooltip = "Device settings";
                    action = QUOTE([ARR_2('app','settings')] call FUNC(click););
                };
                class GVAR(fbcb4AppConvoy): GVAR(fbcb4Tile) {
                    idc = 467693;
                    tooltip = "Convoy - register this vehicle and watch the column";
                    action = QUOTE([ARR_2('app','convoy')] call FUNC(click););
                };
                // MEDICAL stands TALL in the right-hand column, as on the GFT,
                // so its own texture is the tall one - a square tile's art
                // stretched over two rows gives oval corners.
                class GVAR(fbcb4AppMedical): GVAR(fbcb4Tile) {
                    idc = 467692;
                    tooltip = "Squad medical - vitals and casualties";
                    animTextureDefault = QPATHTOF(data\tiletall_n_ca.paa);
                    animTextureNormal = QPATHTOF(data\tiletall_n_ca.paa);
                    animTextureDisabled = QPATHTOF(data\tiletall_n_ca.paa);
                    animTextureOver = QPATHTOF(data\tiletall_o_ca.paa);
                    animTextureFocused = QPATHTOF(data\tiletall_n_ca.paa);
                    animTexturePressed = QPATHTOF(data\tiletall_p_ca.paa);
                    action = QUOTE([ARR_2('app','medical')] call FUNC(click););
                };
                class GVAR(fbcb4AppLog): GVAR(fbcb4Tile) {
                    idc = 467691;
                    tooltip = "Filed reports - the shared HQ log";
                    action = QUOTE([ARR_2('app','log')] call FUNC(click););
                };

                // The tile glyphs - their own controls, for the same reason as
                // the handset's: ShortcutPos is config-frozen and cannot stay
                // centred on a tile the layout stretches.
                class GVAR(fbcb4Icon0): GVAR(fbcb4Icon) {
                    idc = 467860;
                    text = "\cTab\img\icon_bft_ca.paa";
                };
                class GVAR(fbcb4Icon1): GVAR(fbcb4Icon) {
                    idc = 467861;
                    text = "\cTab\img\icon_uav_ca.paa";
                };
                class GVAR(fbcb4Icon2): GVAR(fbcb4Icon) {
                    idc = 467862;
                    text = "\cTab\img\icon_helmetcam_ca.paa";
                };
                class GVAR(fbcb4Icon3): GVAR(fbcb4Icon) {
                    idc = 467863;
                    text = "\z\ctab\addons\intel\data\feed_ca.paa";
                };
                class GVAR(fbcb4Icon4): GVAR(fbcb4Icon) {
                    idc = 467864;
                    text = QPATHTOF(data\icon_ew_ca.paa);
                };
                class GVAR(fbcb4Icon5): GVAR(fbcb4Icon) {
                    idc = 467865;
                    text = QPATHTOF(data\icon_jam_ca.paa);
                };
                class GVAR(fbcb4Icon6): GVAR(fbcb4Icon) {
                    idc = 467866;
                    text = QPATHTOF(data\icon_mesh_ca.paa);
                };
                class GVAR(fbcb4Icon7): GVAR(fbcb4Icon) {
                    idc = 467867;
                    text = QPATHTOF(data\icon_weather_ca.paa);
                };
                class GVAR(fbcb4Icon8): GVAR(fbcb4Icon) {
                    idc = 467868;
                    text = QPATHTOF(data\icon_radio_ca.paa);
                };
                class GVAR(fbcb4Icon9): GVAR(fbcb4Icon) {
                    idc = 467869;
                    text = QPATHTOF(data\icon_alarm_ca.paa);
                };
                class GVAR(fbcb4Icon10): GVAR(fbcb4Icon) {
                    idc = 467870;
                    text = QPATHTOF(data\icon_settings_ca.paa);
                };
                class GVAR(fbcb4Icon11): GVAR(fbcb4Icon) {
                    idc = 467871;
                    text = QPATHTOF(data\icon_log_ca.paa);
                };
                class GVAR(fbcb4Icon13): GVAR(fbcb4Icon) {
                    idc = 467873;
                    text = QPATHTOF(data\icon_convoy_ca.paa);
                };
                class GVAR(fbcb4Icon12): GVAR(fbcb4Icon) {
                    idc = 467872;
                    text = "\z\ghost\addons\media\images\Icons\MedicalArea.paa";
                };

                class GVAR(fbcb4LiveMap): RscStructuredText {
                    idc = 467470;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    size = "((20)) / 2048 * (safezoneH * 1.6)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(fbcb4LiveUav): RscStructuredText {
                    idc = 467471;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    size = "((20)) / 2048 * (safezoneH * 1.6)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(fbcb4LiveHcam): RscStructuredText {
                    idc = 467472;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    size = "((20)) / 2048 * (safezoneH * 1.6)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(fbcb4LiveIntel): RscStructuredText {
                    idc = 467473;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    size = "((20)) / 2048 * (safezoneH * 1.6)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(fbcb4LiveDrone): RscStructuredText {
                    idc = 467474;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    size = "((20)) / 2048 * (safezoneH * 1.6)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(fbcb4LiveJam): RscStructuredText {
                    idc = 467475;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    size = "((20)) / 2048 * (safezoneH * 1.6)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(fbcb4LiveMesh): RscStructuredText {
                    idc = 467476;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    size = "((20)) / 2048 * (safezoneH * 1.6)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(fbcb4LiveWeather): RscStructuredText {
                    idc = 467477;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    size = "((20)) / 2048 * (safezoneH * 1.6)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(fbcb4LiveRadio): RscStructuredText {
                    idc = 467478;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    size = "((20)) / 2048 * (safezoneH * 1.6)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(fbcb4LiveAlarm): RscStructuredText {
                    idc = 467479;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    size = "((20)) / 2048 * (safezoneH * 1.6)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(fbcb4LiveSettings): RscStructuredText {
                    idc = 467480;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    size = "((20)) / 2048 * (safezoneH * 1.6)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(fbcb4LiveConvoy): RscStructuredText {
                    idc = 467483;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    size = "((20)) / 2048 * (safezoneH * 1.6)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(fbcb4LiveMedical): RscStructuredText {
                    idc = 467482;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    size = "((20)) / 2048 * (safezoneH * 1.6)";
                    colorBackground[] = {0, 0, 0, 0};
                };
                class GVAR(fbcb4LiveLog): RscStructuredText {
                    idc = 467481;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    size = "((20)) / 2048 * (safezoneH * 1.6)";
                    colorBackground[] = {0, 0, 0, 0};
                };
            };
        };

        // --- pages, declared last so they cover the map and the tiles -------
        // Positions here are the phone's; FUNC(fbcb4Layout) moves every
        // one of them into this screen's glass when the display opens.
        class GVAR(f4CamPic): RscPicture {
            idc = 467100;
            x = "((452)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((773)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((1134)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((564)) / 2048 * (safezoneH * 1.4)";
        };
        class GVAR(f4CamLabel): RscText {
            idc = 467101;
            x = "((452)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((773)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((1134)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((50)) / 2048 * (safezoneH * 1.4)";
            sizeEx = "((28)) / 2048 * (safezoneH * 1.4)";
            colorBackground[] = {0, 0, 0, 0.55};
        };
        // the feed picker, BCE style: a drop-down over the picture
        class GVAR(f4CamList): RscCombo {
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

        class GVAR(f4InfoBg): RscPicture {
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
        class GVAR(f4InfoTxt): RscStructuredText {
            idc = 467201;
            x = "((669)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((800)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((700)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((300)) / 2048 * (safezoneH * 1.4)";
            size = "((28)) / 2048 * (safezoneH * 1.4)";
            colorBackground[] = {0, 0, 0, 0};
        };

        // drone compass, centred on the screen below the numbers
        class GVAR(f4Compass): RscPicture {
            idc = 467720;
            text = QPATHTOF(data\icon_compass_ca.paa);
            x = "((869)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((1000)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((300)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((300)) / 2048 * (safezoneH * 1.4)";
        };
        class GVAR(f4Needle): GVAR(f4Compass) {
            idc = 467721;
            text = QPATHTOF(data\icon_needle_ca.paa);
        };

        // weather app: the current-condition glyph, centred below the numbers,
        // tinted the accent colour. Texture picked by FUNC(widgetTick).
        // Below the text block, not over it - the two overlapped before.
        class GVAR(f4WxIcon): RscPicture {
            idc = 467730;
            x = "((934)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((1120)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((170)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((170)) / 2048 * (safezoneH * 1.4)";
        };

        class GVAR(f4WxIconDetail): GVAR(f4WxIcon) {
            idc = 467731;
        };

        // alarm app buttons
        class GVAR(f4Alarm0): cTab_RscButton {
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
        class GVAR(f4Alarm1): GVAR(f4Alarm0) {
            idc = 467501;
            x = "((710)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "+15 MIN";
            action = QUOTE([ARR_2('alarm',15)] call FUNC(click););
        };
        class GVAR(f4Alarm2): GVAR(f4Alarm0) {
            idc = 467502;
            x = "((910)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "+30 MIN";
            action = QUOTE([ARR_2('alarm',30)] call FUNC(click););
        };
        class GVAR(f4Alarm3): GVAR(f4Alarm0) {
            idc = 467503;
            x = "((1110)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "SILENCE";
            action = QUOTE(['alarmSilence'] call FUNC(click););
        };
        // quick set: the short fuses a contact plan actually uses
        class GVAR(f4Alarm5): GVAR(f4Alarm0) {
            idc = 467505;
            x = "((510)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((1170)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            text = "+1 MIN";
            action = QUOTE([ARR_2('alarm',1)] call FUNC(click););
        };
        class GVAR(f4Alarm6): GVAR(f4Alarm5) {
            idc = 467506;
            x = "((710)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "+2 MIN";
            action = QUOTE([ARR_2('alarm',2)] call FUNC(click););
        };
        class GVAR(f4Alarm7): GVAR(f4Alarm5) {
            idc = 467507;
            x = "((910)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "+3 MIN";
            action = QUOTE([ARR_2('alarm',3)] call FUNC(click););
        };
        // an alarm for a time of day, not a countdown
        class GVAR(f4AlarmAt): RscEdit {
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
        class GVAR(f4AlarmSet): GVAR(f4Alarm5) {
            idc = 467509;
            x = "((1310)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "SET AT";
            action = QUOTE(['alarmAt'] call FUNC(click););
        };
        class GVAR(f4Alarm4): GVAR(f4Alarm0) {
            idc = 467504;
            x = "((1310)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "CLEAR ALL";
            action = QUOTE(['alarmClear'] call FUNC(click););
        };

        // settings app swatches
        class GVAR(f4Swatch0): cTab_RscButton {
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
        class GVAR(f4Swatch1): GVAR(f4Swatch0) {
            idc = 467511;
            x = "((650)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "GREEN";
            colorBackground[] = {0.22, 0.70, 0.29, 1};
            colorBackgroundActive[] = {0.22, 0.70, 0.29, 1};
            action = QUOTE([ARR_2('icon',1)] call FUNC(click););
        };
        class GVAR(f4Swatch2): GVAR(f4Swatch0) {
            idc = 467512;
            x = "((790)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "BLUE";
            colorBackground[] = {0.24, 0.51, 0.84, 1};
            colorBackgroundActive[] = {0.24, 0.51, 0.84, 1};
            action = QUOTE([ARR_2('icon',2)] call FUNC(click););
        };
        class GVAR(f4Swatch3): GVAR(f4Swatch0) {
            idc = 467513;
            x = "((930)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "YELLOW";
            colorBackground[] = {0.90, 0.80, 0.20, 1};
            colorBackgroundActive[] = {0.90, 0.80, 0.20, 1};
            action = QUOTE([ARR_2('icon',3)] call FUNC(click););
        };
        class GVAR(f4Swatch4): GVAR(f4Swatch0) {
            idc = 467514;
            x = "((1070)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "WHITE";
            colorBackground[] = {1, 1, 1, 1};
            colorBackgroundActive[] = {1, 1, 1, 1};
            action = QUOTE([ARR_2('icon',4)] call FUNC(click););
        };
        class GVAR(f4Swatch5): GVAR(f4Swatch0) {
            idc = 467515;
            x = "((1210)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "ORANGE";
            colorBackground[] = {0.91, 0.55, 0.16, 1};
            colorBackgroundActive[] = {0.91, 0.55, 0.16, 1};
            action = QUOTE([ARR_2('icon',5)] call FUNC(click););
        };
        class GVAR(f4Swatch6): GVAR(f4Swatch0) {
            idc = 467516;
            x = "((1350)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "GHOST";
            colorBackground[] = {0.80, 0.26, 0.19, 1};
            colorBackgroundActive[] = {0.80, 0.26, 0.19, 1};
            action = QUOTE([ARR_2('icon',6)] call FUNC(click););
        };

        // settings app: screen background shade
        class GVAR(f4Bg0): cTab_RscButton {
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
        class GVAR(f4Bg1): GVAR(f4Bg0) {
            idc = 467521;
            x = "((710)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "CHARCOAL";
            colorBackground[] = {0.16, 0.17, 0.18, 1};
            colorBackgroundActive[] = {0.16, 0.17, 0.18, 1};
            action = QUOTE([ARR_2('bg',1)] call FUNC(click););
        };
        class GVAR(f4Bg2): GVAR(f4Bg0) {
            idc = 467522;
            x = "((910)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "SLATE";
            colorBackground[] = {0.15, 0.18, 0.22, 1};
            colorBackgroundActive[] = {0.15, 0.18, 0.22, 1};
            action = QUOTE([ARR_2('bg',2)] call FUNC(click););
        };
        class GVAR(f4Bg3): GVAR(f4Bg0) {
            idc = 467523;
            x = "((1110)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "OLIVE";
            colorBackground[] = {0.16, 0.18, 0.13, 1};
            colorBackgroundActive[] = {0.16, 0.18, 0.13, 1};
            action = QUOTE([ARR_2('bg',3)] call FUNC(click););
        };

        // settings app: label font. Each button is set in the font it picks, so
        // the choice is legible before it is made.
        class GVAR(f4Font0): cTab_RscButton {
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
        class GVAR(f4Font1): GVAR(f4Font0) {
            idc = 467531;
            x = "((710)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "BOLD";
            font = "RobotoCondensedBold";
            action = QUOTE([ARR_2('font',1)] call FUNC(click););
        };
        class GVAR(f4Font2): GVAR(f4Font0) {
            idc = 467532;
            x = "((910)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "PURISTA";
            font = "PuristaMedium";
            action = QUOTE([ARR_2('font',2)] call FUNC(click););
        };
        class GVAR(f4Font3): GVAR(f4Font0) {
            idc = 467533;
            x = "((1110)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "MONO";
            font = "EtelkaMonospacePro";
            action = QUOTE([ARR_2('font',3)] call FUNC(click););
        };

        // --- tools drawer ---------------------------------------------------
        // The panel the map switches and drawing tools sit on, over the map.
        // Declared before them so it backs them; the layout places the lot.
        class GVAR(f4ToolsBg): RscText {
            idc = 467320;
            x = "((510)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            y = "((1320)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
            w = "((1120)) / 2048 * ((safezoneH * 1.4) * 3/4)";
            h = "((170)) / 2048 * (safezoneH * 1.4)";
            colorBackground[] = {0.07, 0.08, 0.09, 0.97};
        };

        // cTab's own map switches. This screen has no function buttons, so the
        // switches that live on the tablet's key strip have nowhere else to go.
        // Each one calls cTab's own function - the state is cTab's, not ours.
        // No plain "TEXT" switch: beside TEXT +/- it read as a header, and the
        // label toggle it carried was not worth that confusion.
        class GVAR(f4Tool1): GVAR(toolKey) {
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
        class GVAR(f4Tool2): GVAR(f4Tool1) {
            idc = 467542;
            x = "((790)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "TEXT -";
            tooltip = "Smaller icon labels";
            action = QUOTE(['mapTextDown'] call FUNC(click););
        };
        class GVAR(f4Tool3): GVAR(f4Tool1) {
            idc = 467543;
            x = "((930)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "TOOLS";
            tooltip = "Show or hide cTab's grid, elevation and bearing readout";
            action = QUOTE(['mapTools'] call FUNC(click););
        };
        class GVAR(f4Tool4): GVAR(f4Tool1) {
            idc = 467544;
            x = "((1070)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "MAP";
            tooltip = "Switch between the satellite and topographic map";
            action = QUOTE(['mapType'] call FUNC(click););
        };
        class GVAR(f4Tool5): GVAR(f4Tool1) {
            idc = 467545;
            x = "((1210)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "CENTRE";
            tooltip = "Recentre the map on your own position";
            action = QUOTE(['mapCentre'] call FUNC(click););
        };
        class GVAR(f4Tool6): GVAR(f4Tool1) {
            idc = 467546;
            x = "((1350)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "SCANNER";
            tooltip = "Show or hide the scanner readout on the map";
            action = QUOTE(['scanPanel'] call FUNC(click););
        };

        // settings app: the drawing tools. Picking one drops the device back
        // to its map, which is the only place a tool has anything to draw on.
        class GVAR(f4Draw0): GVAR(toolKey) {
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
        class GVAR(f4Draw1): GVAR(f4Draw0) {
            idc = 467551;
            x = "((650)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "DISTANCE";
            tooltip = "Lay a chain of points and read the running total";
            action = QUOTE([ARR_2('tool','distance')] call FUNC(click););
        };
        class GVAR(f4Draw2): GVAR(f4Draw0) {
            idc = 467552;
            x = "((790)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "PROFILE";
            tooltip = "Two points draw a terrain profile between them";
            action = QUOTE([ARR_2('tool','height')] call FUNC(click););
        };
        class GVAR(f4Draw3): GVAR(f4Draw0) {
            idc = 467553;
            x = "((930)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "SIGHT";
            tooltip = "Trace what an observer at the base point can see";
            action = QUOTE([ARR_2('tool','sight')] call FUNC(click););
        };
        class GVAR(f4Draw4): GVAR(f4Draw0) {
            idc = 467554;
            x = "((1070)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "BUILDING";
            tooltip = "Number the buildings under the cursor";
            action = QUOTE([ARR_2('tool','houses')] call FUNC(click););
        };
        class GVAR(f4Draw5): GVAR(f4Draw0) {
            idc = 467555;
            x = "((1210)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "GRID";
            tooltip = "Lay a numbered reference grid over an area";
            action = QUOTE([ARR_2('tool','grid')] call FUNC(click););
        };
        class GVAR(f4Draw6): GVAR(f4Draw0) {
            idc = 467556;
            x = "((1350)) / 2048 * ((safezoneH * 1.4) * 3/4) + (safezoneX + (safezoneW - ((safezoneH * 1.4) * 3/4)) / 2)";
            text = "FLAT";
            tooltip = "Find ground flat enough to land on";
            action = QUOTE([ARR_2('tool','flat')] call FUNC(click););
        };
        class GVAR(f4Draw7): GVAR(f4Draw0) {
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
        class GVAR(f4ScanUav): GVAR(s7ScanRow) {
            idc = 467700;
            y = "((795)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
        };
        class GVAR(f4ScanJam): GVAR(s7ScanRow) {
            idc = 467701;
            y = "((835)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
        };
        class GVAR(f4ScanMesh): GVAR(s7ScanRow) {
            idc = 467702;
            y = "((875)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
        };
        class GVAR(f4ScanRadio): GVAR(s7ScanRow) {
            idc = 467703;
            y = "((915)) / 2048 * (safezoneH * 1.4) + (safezoneY + (safezoneH - (safezoneH * 1.4)) / 2)";
        };

        // Jam and mesh state, in the header beside cTab's signal icons.

        // The unit mark in the dashboard header. Top-level rather than a child
        // of the menu group: the group's child-scaling pass stretches by x and
        // y separately, which would pull the mark out of square.
        class GVAR(f4Logo): RscPicture {
            idc = 467410;
            // the worn print, so the mark on the screen matches the scuffed
            // decals on all three cases rather than looking freshly applied
            text = QPATHTOF(data\logo_worn_ca.paa);
            x = 0;
            y = 0;
            w = 0;
            h = 0;
            colorText[] = {1, 1, 1, 0.9};
        };

        // --- the message page, grafted from the tablet ---------------------
        // cTab never built messaging into the FBCB2, but the engine behind it
        // (cTab_msg_gui_load and friends) reads the ACTIVE interface from
        // cTabIfOpen, so the whole page works here once the controls exist
        // under cTab's own IDCs. Geometry is all 0 - the layout places every
        // piece inside the glass. Declared BEFORE the on-glass keys below, so
        // the keys stay on top of this page like every other.
        class GVAR(f4Msg): cTab_RscControlsGroup {
            idc = 4650;
            x = 0;
            y = 0;
            w = 0;
            h = 0;

            class VScrollbar {};
            class HScrollbar {};
            class Scrollbar {};

            class controls {
                class GVAR(f4MsgInboxFrame): cTab_RscFrame {
                    idc = 14;
                    text = "INBOX";
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                };
                class GVAR(f4MsgList): cTab_RscListBox_Tablet {
                    idc = 15000;
                    style = 16;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                    onLBSelChanged = "call cTab_msg_get_mailTxt;";
                };
                class GVAR(f4MsgText): cTab_RscEdit_Tablet {
                    idc = 18510;
                    htmlControl = 1;
                    style = 16;
                    lineSpacing = 0.2;
                    text = "No message selected";
                    canModify = 0;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                };
                class GVAR(f4MsgComposeFrame): cTab_RscFrame {
                    idc = 15;
                    text = "COMPOSE";
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                };
                class GVAR(f4MsgRecipients): cTab_RscListBox_Tablet {
                    idc = 15010;
                    style = 16;
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                };
                class GVAR(f4MsgCompose): cTab_RscEdit_Tablet {
                    idc = 14000;
                    htmlControl = 1;
                    style = 16;
                    lineSpacing = 0.2;
                    text = "";
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                };
                class GVAR(f4MsgTemplates): cTab_RscButton_Tablet {
                    idc = 16150;
                    text = "TEMPLATES";
                    tooltip = "Report templates";
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                };
                class GVAR(f4MsgMedevac): cTab_RscButton_Tablet {
                    idc = 16140;
                    text = "MEDEVAC";
                    tooltip = "MEDEVAC template";
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                };
                class GVAR(f4MsgSend): cTab_RscButton_Tablet {
                    idc = 16130;
                    text = "SEND";
                    tooltip = "Send to the selected recipients";
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                };
                class GVAR(f4MsgDelete): cTab_RscButton_Tablet_Danger {
                    idc = 16120;
                    text = "DELETE";
                    tooltip = "Delete the selected message";
                    x = 0;
                    y = 0;
                    w = 0;
                    h = 0;
                };
            };
        };

        // Declared last: on top of every page, same as the handset's key.
        // The menu key, top right of the glass - positioned by the layout, and
        // rounded like the tiles by GVAR(glassKey), which carries the corner
        // and the hover shade in its textures.
        class GVAR(fbcb4BtnMenu): GVAR(glassKey) {
            idc = 467392;
            tooltip = "Apps";
            action = QUOTE(['menu'] call FUNC(click););
        };
        class GVAR(fbcb4BtnMenuGlyph): RscPicture {
            idc = 467393;
            text = QPATHTOF(data\icon_menu_ca.paa);
            x = 0;
            y = 0;
            w = 0;
            h = 0;
        };

        // The tools key, bottom right of the glass opposite the app key, and
        // the power key painted on the case art below it - the vehicle screen
        // has no other way out, so the art's own button is made to mean it.
        // All three are placed by the layout.
        class GVAR(fbcb4BtnTools): GVAR(fbcb4BtnMenu) {
            idc = 467386;
            tooltip = "Map tools";
            action = QUOTE(['tools'] call FUNC(click););
        };
        class GVAR(fbcb4BtnToolsGlyph): GVAR(fbcb4BtnMenuGlyph) {
            idc = 467387;
            text = QPATHTOF(data\icon_tools_ca.paa);
        };
        // The power key is NOT one of the two on-glass keys: it is an
        // invisible catcher laid over a button PAINTED ON THE CASE, and so are
        // F1-F3 below it. It inherits from the plain button deliberately -
        // hung off the menu key it would have picked up that key's rounded
        // texture and drawn four dark tiles on the bezel.
        class GVAR(fbcb4BtnPower): cTab_RscButton {
            idc = 467385;
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
            tooltip = "Power off";
            action = QUOTE(['close'] call FUNC(click););
        };

        // The F1-F3 keys painted down the art's left edge, wired like the
        // power key: F1 map, F2 messages, F3 settings. Placed by the layout
        // at the paint's own rectangles.
        class GVAR(fbcb4KeyF1): GVAR(fbcb4BtnPower) {
            idc = IDC_FBCB4_KEYF1;
            tooltip = "Map";
            action = QUOTE([ARR_2('app','map')] call FUNC(click););
        };
        class GVAR(fbcb4KeyF2): GVAR(fbcb4BtnPower) {
            idc = IDC_FBCB4_KEYF2;
            tooltip = "Messages";
            action = QUOTE([ARR_2('app','message')] call FUNC(click););
        };
        class GVAR(fbcb4KeyF3): GVAR(fbcb4BtnPower) {
            idc = IDC_FBCB4_KEYF3;
            tooltip = "Settings";
            action = QUOTE([ARR_2('app','settings')] call FUNC(click););
        };


        // THE CORNER MASK: this screen is a rounded rectangle and the map, the
        // dashboard and every page are not, so their square corners painted
        // over the case. Cut from this device's own art. Declared LAST so
        // nothing draws over it, and in no hide list so no mode removes it.
        class GVAR(f4Mask): RscPicture {
            idc = IDC_FBCB4_MASK;
            text = QPATHTOF(data\fbcb4_screen_mask_ca.paa);
            x = 0;
            y = 0;
            w = 0;
            h = 0;
        };

        // THE LAYOUT HOOK MUST BE THE LAST CONTROL IN THIS BLOCK - onLoad fires
        // as each control is created, so a hook at the top runs while every
        // control below it is still controlNull and the layout places nothing.
        class GVAR(fbcb4Holder): RscText {
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
