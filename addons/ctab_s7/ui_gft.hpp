// ---------------------------------------------------------------------------
// The GFT-1 rugged tablet. Its OWN display class - not a patch of cTab's tablet -
// because every device here is configured separately: touching a shared dialog
// to suit one device breaks the others, which is exactly how the S7 got a menu
// key it never asked for.
//
// It inherits cTab_Tablet_dlg so it starts life with the map, the OSD, cTab's
// own groups and this addon's app pages, then takes the current tablet's
// dashboard back out and puts up its own: no tile grid on the desktop, one
// menu key, and the intrusion suite aboard.
//
// The screen aperture in the source art is x 246, y 666, 1574 x 948 of 2048 - a
// different rectangle to cTab's tablet, so FUNC(gftLayout) moves the inherited
// controls into it at open. One rectangle, derived once, the way the hacking
// tablet does it: thirty hardcoded positions here would drift the first time
// the art moved.
// ---------------------------------------------------------------------------

// Menu tile template at root - a template inside a controls block is drawn by
// the engine as a phantom box at the origin.
class GVAR(gftTile): RscButtonMenu {
    idc = -1;
    style = "0x02 + 0x0C + 0x0100";
    x = 0;
    y = 0;
    w = "((300)) / 2048 * ((safezoneH * 1.2) * 3/4)";
    h = "((150)) / 2048 * (safezoneH * 1.2)";
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
        left = "((122)) / 2048 * ((safezoneH * 1.2) * 3/4)";
        top = "((24)) / 2048 * (safezoneH * 1.2)";
        w = "((56)) / 2048 * ((safezoneH * 1.2) * 3/4)";
        h = "((56)) / 2048 * (safezoneH * 1.2)";
    };
    class TextPos {
        left = 0;
        top = "((98)) / 2048 * (safezoneH * 1.2)";
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

class GVAR(gft_dlg): cTab_Tablet_dlg {
    idd = 177390;
    onLoad = QUOTE(_this call cTab_fnc_onIfOpen;);
    onUnload = QUOTE([] call cTab_fnc_onIfclose;);

    class controls {
        // The current tablet's dashboard is not this device's screen.
        delete GVAR(tabMenu);
        delete GVAR(tabWeather);
        delete GVAR(tabLogo);

        // Fires whenever this tablet opens.
        class GVAR(gftHolder): RscText {
            idc = -1;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
            colorBackground[] = {0, 0, 0, 0};
            onLoad = QUOTE(call FUNC(deviceOpen););
        };

        // --- the menu key, top-right of the glass -----------------------
        class GVAR(gftBtnMenu): cTab_RscButton {
            idc = 467390;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
            text = "";
            colorBackground[] = {0, 0, 0, 0.55};
            colorBackgroundActive[] = {0.32, 0.34, 0.36, 0.85};
            colorFocused[] = {0, 0, 0, 0.55};
            colorShadow[] = {0, 0, 0, 0};
            colorBorder[] = {0, 0, 0, 0};
            borderSize = 0;
            offsetX = 0;
            offsetY = 0;
            offsetPressedX = 0;
            offsetPressedY = 0;
            tooltip = "Apps";
            action = QUOTE(['menu'] call FUNC(click););
        };
        class GVAR(gftBtnMenuGlyph): RscPicture {
            idc = 467391;
            text = QPATHTOF(data\icon_menu_ca.paa);
            x = 0;
            y = 0;
            w = 0;
            h = 0;
        };

        // --- the app menu, hidden until the key is pressed ---------------
        class GVAR(gftMenu): cTab_RscControlsGroup {
            idc = 467320;
            x = 0;
            y = 0;
            w = 0;
            h = 0;

            class VScrollbar {};
            class HScrollbar {};
            class Scrollbar {};

            class controls {
                class GVAR(gftMenuBg): RscText {
                    idc = 467321;
                    x = 0;
                    y = 0;
                    w = "((1000)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((900)) / 2048 * (safezoneH * 1.2)";
                    colorBackground[] = {0.07, 0.08, 0.09, 0.97};
                };
                class GVAR(gftMenuTitle): RscText {
                    idc = -1;
                    x = "((20)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((16)) / 2048 * (safezoneH * 1.2)";
                    w = "((700)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((48)) / 2048 * (safezoneH * 1.2)";
                    text = "GHOSTS OF BATTLE";
                    sizeEx = "((36)) / 2048 * (safezoneH * 1.2)";
                    colorText[] = {0.78, 0.80, 0.82, 1};
                };

                class GVAR(gftAppMap): GVAR(gftTile) {
                    idc = 467660;
                    x = "((20)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((80)) / 2048 * (safezoneH * 1.2)";
                    text = "MAP";
                    textureNoShortcut = "\cTab\img\icon_bft_ca.paa";
                    tooltip = "Back to the map";
                    action = QUOTE(['app','map'] call FUNC(click););
                };
                class GVAR(gftAppMessages): GVAR(gftTile) {
                    idc = 467661;
                    x = "((340)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((80)) / 2048 * (safezoneH * 1.2)";
                    text = "MESSAGES";
                    textureNoShortcut = "\cTab\img\icon_mail_ca.paa";
                    tooltip = "Messages and report templates";
                    action = QUOTE(['app','message'] call FUNC(click););
                };
                class GVAR(gftAppIntel): GVAR(gftTile) {
                    idc = 467662;
                    x = "((660)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((80)) / 2048 * (safezoneH * 1.2)";
                    text = "INTEL";
                    textureNoShortcut = "\z\ctab\addons\intel\data\feed_ca.paa";
                    tooltip = "Intel feed";
                    action = QUOTE(['app','intel'] call FUNC(click););
                };
                class GVAR(gftAppUav): GVAR(gftTile) {
                    idc = 467663;
                    x = "((20)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((250)) / 2048 * (safezoneH * 1.2)";
                    text = "UAV CAM";
                    textureNoShortcut = "\cTab\img\icon_uav_ca.paa";
                    tooltip = "UAV feed - pick again for the next aircraft";
                    action = QUOTE(['app','uav'] call FUNC(click););
                };
                class GVAR(gftAppHcam): GVAR(gftTile) {
                    idc = 467664;
                    x = "((340)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((250)) / 2048 * (safezoneH * 1.2)";
                    text = "HELMET CAM";
                    textureNoShortcut = "\cTab\img\icon_helmetcam_ca.paa";
                    tooltip = "Helmet cam - pick again for the next man";
                    action = QUOTE(['app','hcam'] call FUNC(click););
                };
                class GVAR(gftAppHack): GVAR(gftTile) {
                    idc = 467665;
                    x = "((660)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((250)) / 2048 * (safezoneH * 1.2)";
                    text = "INTRUSION";
                    textureNoShortcut = QPATHTOF(data\icon_hack_ca.paa);
                    tooltip = "Intrusion suite";
                    action = QUOTE(['app','hack'] call FUNC(click););
                };
                class GVAR(gftAppDrone): GVAR(gftTile) {
                    idc = 467666;
                    x = "((20)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((420)) / 2048 * (safezoneH * 1.2)";
                    text = "DRONE";
                    textureNoShortcut = QPATHTOF(data\icon_ew_ca.paa);
                    tooltip = "Drone detection - bearing and range";
                    action = QUOTE(['app','drone'] call FUNC(click););
                };
                class GVAR(gftAppJam): GVAR(gftTile) {
                    idc = 467667;
                    x = "((340)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((420)) / 2048 * (safezoneH * 1.2)";
                    text = "JAM";
                    textureNoShortcut = QPATHTOF(data\icon_jam_ca.paa);
                    tooltip = "Jamming level";
                    action = QUOTE(['app','jam'] call FUNC(click););
                };
                class GVAR(gftAppMesh): GVAR(gftTile) {
                    idc = 467668;
                    x = "((660)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((420)) / 2048 * (safezoneH * 1.2)";
                    text = "MESH";
                    textureNoShortcut = QPATHTOF(data\icon_mesh_ca.paa);
                    tooltip = "Mesh link";
                    action = QUOTE(['app','mesh'] call FUNC(click););
                };
                class GVAR(gftAppWeather): GVAR(gftTile) {
                    idc = 467669;
                    x = "((20)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((590)) / 2048 * (safezoneH * 1.2)";
                    text = "WEATHER";
                    textureNoShortcut = QPATHTOF(data\icon_weather_ca.paa);
                    tooltip = "Current weather";
                    action = QUOTE(['app','weather'] call FUNC(click););
                };
                class GVAR(gftAppRadio): GVAR(gftTile) {
                    idc = 467670;
                    x = "((340)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((590)) / 2048 * (safezoneH * 1.2)";
                    text = "RADIO";
                    textureNoShortcut = QPATHTOF(data\icon_radio_ca.paa);
                    tooltip = "Radio and vehicle racks";
                    action = QUOTE(['app','radio'] call FUNC(click););
                };
                class GVAR(gftAppAlarm): GVAR(gftTile) {
                    idc = 467671;
                    x = "((660)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((590)) / 2048 * (safezoneH * 1.2)";
                    text = "ALARMS";
                    textureNoShortcut = QPATHTOF(data\icon_alarm_ca.paa);
                    tooltip = "Scanner alarms";
                    action = QUOTE(['app','alarm'] call FUNC(click););
                };
                class GVAR(gftAppSettings): GVAR(gftTile) {
                    idc = 467672;
                    x = "((20)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    y = "((760)) / 2048 * (safezoneH * 1.2)";
                    w = "((940)) / 2048 * ((safezoneH * 1.2) * 3/4)";
                    h = "((60)) / 2048 * (safezoneH * 1.2)";
                    text = "SETTINGS";
                    textureNoShortcut = "";
                    tooltip = "Device settings - colours and font";
                    action = QUOTE(['app','settings'] call FUNC(click););
                    class TextPos {
                        left = 0;
                        top = 0;
                        right = 0;
                        bottom = 0;
                    };
                };
            };
        };
    };
};
