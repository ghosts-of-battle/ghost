// THE BASE CLASSES COME FROM THE GAME, NOT FROM A COPY OF THEM. In the mission
// these resolved through the mission's dialogs/defines.hpp - 2438 lines of
// BIS_fnc_exportGUIBaseClasses output that a description.ext needs and a mod
// does not. A PBO inherits from the real a3/ui_f classes by declaring them.
class RscText;
class RscStructuredText;
class RscButton;
class RscTree;
class RscControlsGroup;

// ROLE SELECTION, in the ghost suite's design.
//
// IT WAS RscDisplayTeamSwitch. That gave it the vanilla team-switch chrome -
// a bevelled frame, Purista, the engine's own blue-grey - which is a different
// mod's look from every other screen a player sees in this mission. It is now a
// plain dialog drawn the way TAC//MSG and TAC//ADMIN are drawn: a flat ground,
// exact rules, RobotoCondensed, one accent, zero corner radius.
//
// THE IDCs ARE THE OLD ONES. 1000 title, 1500 tree, 1205 group, 1100 card,
// 2400 select - so fn_initGroupMenu, fn_onGroupMenuTvSelectChange and
// fn_selectPosition drive this layout without a line of their addressing
// changing. Rearranging a dialog is free when nothing addresses controls by
// position.
//
// COLOURS HERE ARE ONLY THE OPENING FRAME. Every one is set again at runtime by
// ghost_groups_fnc_styleGroupMenu from the player's ghost tacpad settings - scheme,
// opacity and UI size - so this screen follows Night Olive and Sand with the
// rest of the suite. What is baked in is the dark scheme, so nothing flashes on
// the way up.

class RscGhostText: RscText {
    idc = -1;
    style = ST_LEFT;
    font = "RobotoCondensed";
    sizeEx = "0.8 * (0.025 * safezoneH)";
    colorText[] = {0.90, 0.90, 0.88, 1};
    colorBackground[] = {0, 0, 0, 0};
    shadow = 0;
    x = 0;
    y = 0;
    w = 0;
    h = 0;
};

class RscGhostStructuredText: RscStructuredText {
    idc = -1;
    size = "0.8 * (0.025 * safezoneH)";
    colorBackground[] = {0, 0, 0, 0};
    shadow = 0;
    x = 0;
    y = 0;
    w = 0;
    h = 0;

    class Attributes {
        font = "RobotoCondensed";
        color = "#E6E6E1";
        align = "left";
        shadow = 0;
    };
};

// A labelled rectangle. Not a bevel, not a gradient, not a rounded corner - the
// suite's outlined cell, filling to the accent when the pointer is on it.
class RscGhostButton: RscButton {
    idc = -1;
    style = ST_CENTER;
    font = "RobotoCondensedBold";
    sizeEx = "0.8 * (0.025 * safezoneH)";
    borderSize = 0;
    offsetX = 0;
    offsetY = 0;
    offsetPressedX = 0;
    offsetPressedY = 0;
    colorText[] = {0.90, 0.90, 0.88, 1};
    colorActive[] = {1, 1, 1, 1};
    colorBackground[] = {0.10, 0.10, 0.10, 1};
    colorBackgroundActive[] = {0.85, 0.28, 0.20, 1};
    colorBackgroundDisabled[] = {0.10, 0.10, 0.10, 1};
    colorDisabled[] = {0.42, 0.42, 0.41, 1};
    colorFocused[] = {0.14, 0.14, 0.14, 1};
    colorShadow[] = {0, 0, 0, 0};
    colorBorder[] = {0, 0, 0, 0};
    soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0.06, 1};
    soundEnter[] = {"", 0, 1};
    soundPush[] = {"", 0, 1};
    soundEscape[] = {"", 0, 1};
    x = 0;
    y = 0;
    w = 0;
    h = 0;
};

// SELECTION IS THE TEXT, NOT A BLOCK. The selected row is written in the accent
// on the same ground as every other row - no fill behind it.
//
// It was a solid accent bar with the ground colour written on it, which is how
// the suite marks a selected row in a dense table. On this screen it is wrong:
// the rows carry a picture and two colours of their own - dim for taken, accent
// for yours - and a block of solid colour under one of them buries all of that
// under the one row you are actually looking at.
//
// THESE FOUR ARE CONFIG-ONLY. Arma has no runtime setter for a tree's selection
// colours, so unlike everything else on this screen they do not follow a scheme
// change - a player on Olive or Sand gets the red selection. It is one row of
// one control, and the alternative is repainting the whole tree by hand on every
// selection change.
class RscGhostTree: RscTree {
    idc = -1;
    font = "RobotoCondensed";
    sizeEx = "0.85 * (0.025 * safezoneH)";
    colorText[] = {0.90, 0.90, 0.88, 1};
    colorBackground[] = {0.07, 0.07, 0.07, 1};
    colorSelect[] = {0.85, 0.28, 0.20, 1};
    colorSelectBackground[] = {0, 0, 0, 0};
    colorMarked[] = {0.85, 0.28, 0.20, 1};
    colorMarkedSelected[] = {0.85, 0.28, 0.20, 1};
    colorMarkedBackground[] = {0, 0, 0, 0};
    colorMarkedSelectedBackground[] = {0, 0, 0, 0};
    colorBorder[] = {0, 0, 0, 0};
    shadow = 0;
    multiselectEnabled = 0;
    x = 0;
    y = 0;
    w = 0;
    h = 0;
};

class RscGhostGroup: RscControlsGroup {
    idc = -1;
    x = 0;
    y = 0;
    w = 0;
    h = 0;
};

class YMF_groupMenu {
    idd = 9702;
    name = "YMF_groupMenu";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "call ghost_groups_fnc_styleGroupMenu;";
    onUnload = "";

    class controlsBackground {
        // The ground. Full bleed, because this screen IS the screen - a player
        // picking a slot is not doing anything else.
        class Background: RscGhostText {
            idc = 9710;
            text = "";
            x = "safezoneX";
            y = "safezoneY";
            w = "safezoneW";
            h = "safezoneH";
            colorBackground[] = {0.05, 0.05, 0.05, 0.96};
        };
    };

    class controls {
        // ------------------------------------------------------------ header --
        class Wordmark: RscGhostStructuredText {
            idc = 9711;
            text = "";
            x = "0.020 * safezoneW + safezoneX";
            y = "0.026 * safezoneH + safezoneY";
            w = "0.140 * safezoneW";
            h = "0.038 * safezoneH";
        };

        // Set by fn_initGroupMenu - "<FACTION> Role Selection". Kept at idc 1000
        // because that is where it already writes.
        class Title: RscGhostText {
            idc = 1000;
            text = "";
            style = ST_LEFT;
            font = "RobotoCondensedBold";
            sizeEx = "0.62 * (0.025 * safezoneH)";
            x = "0.164 * safezoneW + safezoneX";
            y = "0.026 * safezoneH + safezoneY";
            w = "0.400 * safezoneW";
            h = "0.038 * safezoneH";
        };

        class OpenCount: RscGhostStructuredText {
            idc = 9712;
            text = "";
            x = "0.700 * safezoneW + safezoneX";
            y = "0.026 * safezoneH + safezoneY";
            w = "0.280 * safezoneW";
            h = "0.038 * safezoneH";
        };

        class HeaderRule: RscGhostText {
            idc = 9713;
            text = "";
            x = "0.020 * safezoneW + safezoneX";
            y = "0.070 * safezoneH + safezoneY";
            w = "0.960 * safezoneW";
            h = "2 * pixelH";
            colorBackground[] = {0.90, 0.90, 0.88, 1};
        };

        // ------------------------------------------------------------- the rail --
        // THE RAIL RUNS TO THE LINE (user, 2026-09-03). It was 0.260 wide, and
        // widening it to 0.280 was not what was asked - the line is at 0.410.
        // 0.020 + 0.390 = 0.410, and the ROLE column starts at 0.430, so the
        // squad list gets the left two fifths of the screen instead of a
        // quarter and five tabs fit across the top of it.
        class RailKicker: RscGhostStructuredText {
            idc = 9714;
            text = "";
            x = "0.020 * safezoneW + safezoneX";
            y = "0.080 * safezoneH + safezoneY";
            w = "0.390 * safezoneW";
            h = "0.026 * safezoneH";
        };

        // THE PLATOON TABS. Ten of them, FIVE to a row (user, 2026-09-03),
        // always present - the mission decides how many carry a platoon and
        // fn_initGroupMenu hides the rest.
        //
        // 0.0760 x 5 plus four 0.0025 gaps is the rail's own 0.390 exactly.
        //
        // SHORTER THAN THEY WERE. The double-height tab was 0.052 and read as a
        // slab; 0.042 holds the same two lines with the air taken out.
        //
        // EACH TAB IS TWO CONTROLS, A LABEL WITH A BUTTON ON TOP OF IT. The
        // label is structured text because a tab carries two lines - the type
        // over the callsign - and an Arma button draws exactly one, with no
        // ST_MULTI and no newline in text. The button has no text and no fill
        // in any state; it catches the click and reports the pointer, and the
        // lift under it is painted onto the LABEL by fn_selectPlatoon and
        // fn_hoverTab. See script_component.hpp.
        //
        // WHY CONFIG AND NOT SQF. fn_styleGroupMenu scales every control on the
        // display about the screen centre for the player's UI scale; a control
        // positioned afterwards in script would be the one thing on the screen
        // that ignored the setting.
        class PltTabLabel1: RscGhostStructuredText {
            idc = 9720;
            text = "";
            x = "0.0200 * safezoneW + safezoneX";
            y = "0.112 * safezoneH + safezoneY";
            w = "0.0760 * safezoneW";
            h = "0.036 * safezoneH";
        };
        class PltTabLabel2: PltTabLabel1 {
            idc = 9721;
            x = "0.0985 * safezoneW + safezoneX";
        };
        class PltTabLabel3: PltTabLabel1 {
            idc = 9722;
            x = "0.1770 * safezoneW + safezoneX";
        };
        class PltTabLabel4: PltTabLabel1 {
            idc = 9723;
            x = "0.2555 * safezoneW + safezoneX";
        };
        class PltTabLabel5: PltTabLabel1 {
            idc = 9724;
            x = "0.3340 * safezoneW + safezoneX";
        };
        class PltTabLabel6: PltTabLabel1 {
            idc = 9725;
            y = "0.157 * safezoneH + safezoneY";
        };
        class PltTabLabel7: PltTabLabel6 {
            idc = 9726;
            x = "0.0985 * safezoneW + safezoneX";
        };
        class PltTabLabel8: PltTabLabel6 {
            idc = 9727;
            x = "0.1770 * safezoneW + safezoneX";
        };
        class PltTabLabel9: PltTabLabel6 {
            idc = 9728;
            x = "0.2555 * safezoneW + safezoneX";
        };
        class PltTabLabel10: PltTabLabel6 {
            idc = 9729;
            x = "0.3340 * safezoneW + safezoneX";
        };

        // The catchers. Declared after the labels so they draw on top of them.
        class PltTab1: RscGhostButton {
            idc = 9730;
            text = "";
            x = "0.0200 * safezoneW + safezoneX";
            y = "0.108 * safezoneH + safezoneY";
            w = "0.0760 * safezoneW";
            h = "0.042 * safezoneH";
            colorBackground[] = {0, 0, 0, 0};
            colorBackgroundActive[] = {0, 0, 0, 0};
            colorBackgroundDisabled[] = {0, 0, 0, 0};
            colorFocused[] = {0, 0, 0, 0};
            onButtonClick = "[0] call ghost_groups_fnc_selectPlatoon;";
            onMouseEnter = "[0, true] call ghost_groups_fnc_hoverTab;";
            onMouseExit = "[0, false] call ghost_groups_fnc_hoverTab;";
        };
        class PltTab2: PltTab1 {
            idc = 9731;
            x = "0.0985 * safezoneW + safezoneX";
            onButtonClick = "[1] call ghost_groups_fnc_selectPlatoon;";
            onMouseEnter = "[1, true] call ghost_groups_fnc_hoverTab;";
            onMouseExit = "[1, false] call ghost_groups_fnc_hoverTab;";
        };
        class PltTab3: PltTab1 {
            idc = 9732;
            x = "0.1770 * safezoneW + safezoneX";
            onButtonClick = "[2] call ghost_groups_fnc_selectPlatoon;";
            onMouseEnter = "[2, true] call ghost_groups_fnc_hoverTab;";
            onMouseExit = "[2, false] call ghost_groups_fnc_hoverTab;";
        };
        class PltTab4: PltTab1 {
            idc = 9733;
            x = "0.2555 * safezoneW + safezoneX";
            onButtonClick = "[3] call ghost_groups_fnc_selectPlatoon;";
            onMouseEnter = "[3, true] call ghost_groups_fnc_hoverTab;";
            onMouseExit = "[3, false] call ghost_groups_fnc_hoverTab;";
        };
        class PltTab5: PltTab1 {
            idc = 9734;
            x = "0.3340 * safezoneW + safezoneX";
            onButtonClick = "[4] call ghost_groups_fnc_selectPlatoon;";
            onMouseEnter = "[4, true] call ghost_groups_fnc_hoverTab;";
            onMouseExit = "[4, false] call ghost_groups_fnc_hoverTab;";
        };
        class PltTab6: PltTab1 {
            idc = 9735;
            y = "0.153 * safezoneH + safezoneY";
            onButtonClick = "[5] call ghost_groups_fnc_selectPlatoon;";
            onMouseEnter = "[5, true] call ghost_groups_fnc_hoverTab;";
            onMouseExit = "[5, false] call ghost_groups_fnc_hoverTab;";
        };
        class PltTab7: PltTab6 {
            idc = 9736;
            x = "0.0985 * safezoneW + safezoneX";
            onButtonClick = "[6] call ghost_groups_fnc_selectPlatoon;";
            onMouseEnter = "[6, true] call ghost_groups_fnc_hoverTab;";
            onMouseExit = "[6, false] call ghost_groups_fnc_hoverTab;";
        };
        class PltTab8: PltTab6 {
            idc = 9737;
            x = "0.1770 * safezoneW + safezoneX";
            onButtonClick = "[7] call ghost_groups_fnc_selectPlatoon;";
            onMouseEnter = "[7, true] call ghost_groups_fnc_hoverTab;";
            onMouseExit = "[7, false] call ghost_groups_fnc_hoverTab;";
        };
        class PltTab9: PltTab6 {
            idc = 9738;
            x = "0.2555 * safezoneW + safezoneX";
            onButtonClick = "[8] call ghost_groups_fnc_selectPlatoon;";
            onMouseEnter = "[8, true] call ghost_groups_fnc_hoverTab;";
            onMouseExit = "[8, false] call ghost_groups_fnc_hoverTab;";
        };
        class PltTab10: PltTab6 {
            idc = 9739;
            x = "0.3340 * safezoneW + safezoneX";
            onButtonClick = "[9] call ghost_groups_fnc_selectPlatoon;";
            onMouseEnter = "[9, true] call ghost_groups_fnc_hoverTab;";
            onMouseExit = "[9, false] call ghost_groups_fnc_hoverTab;";
        };

        // THE TREE IS WRITTEN FOR ONE ROW OF TABS and ends at 0.878, ten
        // thousandths above the footer rule. fn_initGroupMenu pushes the top
        // down by exactly one tab row when the mission declares more than five
        // platoons, and puts it back up to the tab row's own y when it declares
        // none, so a screen with no tabs loses nothing.
        class RoleList: RscGhostTree {
            idc = 1500;
            x = "0.020 * safezoneW + safezoneX";
            y = "0.158 * safezoneH + safezoneY";
            w = "0.390 * safezoneW";
            h = "0.720 * safezoneH";
            onTreeSelChanged = "call ghost_groups_fnc_onGroupMenuTvSelectChange;";
            onTreeDblClick = "[] call ghost_groups_fnc_selectPosition;";
        };

        // ------------------------------------------------------------ the card --
        class CardKicker: RscGhostStructuredText {
            idc = 9715;
            text = "";
            x = "0.430 * safezoneW + safezoneX";
            y = "0.080 * safezoneH + safezoneY";
            w = "0.550 * safezoneW";
            h = "0.026 * safezoneH";
        };

        class RoleInformationControlGroup: RscGhostGroup {
            delete HScrollBar;

            idc = 1205;
            x = "0.430 * safezoneW + safezoneX";
            y = "0.110 * safezoneH + safezoneY";
            w = "0.550 * safezoneW";
            h = "0.760 * safezoneH";

            class Controls {
                class RoleInformation: RscGhostStructuredText {
                    idc = 1100;
                    text = "";
                    x = 0;
                    y = 0;
                    w = "0.530 * safezoneW";
                    h = "0.760 * safezoneH";
                };
            };
        };

        // ----------------------------------------------------------- the bar --
        class FooterRule: RscGhostText {
            idc = 9716;
            text = "";
            x = "0.020 * safezoneW + safezoneX";
            y = "0.888 * safezoneH + safezoneY";
            w = "0.960 * safezoneW";
            h = "1 * pixelH";
            colorBackground[] = {0.55, 0.55, 0.53, 1};
        };

        class Hint: RscGhostStructuredText {
            idc = 9717;
            text = "";
            x = "0.190 * safezoneW + safezoneX";
            y = "0.906 * safezoneH + safezoneY";
            w = "0.600 * safezoneW";
            h = "0.040 * safezoneH";
        };

        // idc 2 is the engine's cancel, so ESC still closes the screen.
        class CancelBtn: RscGhostButton {
            idc = 2;
            text = "CANCEL";
            x = "0.020 * safezoneW + safezoneX";
            y = "0.906 * safezoneH + safezoneY";
            w = "0.160 * safezoneW";
            h = "0.040 * safezoneH";
            colorBackground[] = {0, 0, 0, 0};
            onButtonClick = "closeDialog 0;";
        };

        // The one filled control on the screen, because it is the only one that
        // does anything. Disabled by fn_onGroupMenuTvSelectChange when the slot
        // under the cursor is taken.
        class SelectRoleBtn: RscGhostButton {
            idc = 2400;
            text = "TAKE ROLE";
            x = "0.820 * safezoneW + safezoneX";
            y = "0.906 * safezoneH + safezoneY";
            w = "0.160 * safezoneW";
            h = "0.040 * safezoneH";
            colorBackground[] = {0.85, 0.28, 0.20, 1};
            colorText[] = {0.05, 0.05, 0.05, 1};
            onButtonClick = "[] call ghost_groups_fnc_selectPosition;";
        };
    };
};
