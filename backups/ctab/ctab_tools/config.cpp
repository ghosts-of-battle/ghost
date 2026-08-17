#include "script_component.hpp"
// The same grid the height tool measures its bars in.
#include "\a3\ui_f\hpp\defineCommonGrids.inc"

// Kept in step with the XPOS/WIDTH/YPOS/HEIGHT the tool defines for itself.
#define GRAPH_X (0.05/2)
#define GRAPH_W (0.95)
#define GRAPH_Y (GUI_GRID_H*1.5)
#define GRAPH_H (GUI_GRID_H*6.5)

class CfgPatches {
    class ADDON {
        author = QAUTHOR;
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_xeh",
            "ghost_main"
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
        authors[] = {"YonV", "Aaren"};
    };
};

#include "CfgEventHandlers.hpp"

// ---------------------------------------------------------------------------
// The map tools are adapted from Better CAS Environment's Compat_MapTools
// (Aaren, Arma Public License Share Alike), itself a rewrite of POLPOX's Map
// Tools Remastered. BCE's version needs both mods present; this one needs
// neither, so the two controls POLPOX supplied are declared here instead.
// ---------------------------------------------------------------------------

class RscText;
class RscBackground;
class RscPicture;
class RscButton;
class RscControlsGroupNoScrollbars;

// The height tool's terrain profile.
//
// Read the tool before changing any of this. It creates the group with
// ctrlCreate, then creates one thin RscBackground per terrain sample as a
// CHILD of the group, positioning each at absolute screen coordinates -
// x from 0.025 across 0.95, y from GUI_GRID_H*1.5 down GUI_GRID_H*6.5. A
// controls group positions its children relative to its own origin, so the
// group has to sit at 0,0 and span the screen or every bar lands offset by
// wherever the group was put. That is why this is a full-screen transparent
// group and not a neat little panel.
//
// The three controls the tool addresses by index, and what it does to each:
//   1  sea level - only ctrlSetPositionY, and only when the profile crosses 0
//   2  the cursor's vertical - ctrlSetPositionX, shown and hidden
//   3  its readout - ctrlSetPositionX/Y and ctrlSetText, shown and hidden
// All three start hidden; the tool shows them when it has something to say.
class GVAR(heightGraph): RscControlsGroupNoScrollbars {
    idc = IDC_TOOLS_GRAPH;
    x = 0;
    y = 0;
    w = 1;
    h = 1;
    class controls {
        class GVAR(graphBack): RscBackground {
            idc = 10;
            x = GRAPH_X;
            y = GRAPH_Y;
            w = GRAPH_W;
            h = GRAPH_H;
            colorBackground[] = {0.04, 0.05, 0.06, 0.75};
        };
        class GVAR(graphSea): RscBackground {
            idc = 1;
            x = GRAPH_X;
            y = GRAPH_Y;
            w = GRAPH_W;
            h = "pixelH * 2";
            colorBackground[] = {0.30, 0.50, 0.90, 0.9};
            show = 0;
        };
        class GVAR(graphLine): RscBackground {
            idc = 2;
            x = GRAPH_X;
            y = GRAPH_Y;
            w = "pixelW * 2";
            h = GRAPH_H;
            colorBackground[] = {0.85, 0.20, 0.15, 1};
            show = 0;
        };
        class GVAR(graphRead): RscText {
            idc = 3;
            x = GRAPH_X;
            y = GRAPH_Y;
            w = "GUI_GRID_W * 6";
            h = "GUI_GRID_H";
            text = "";
            colorText[] = {0.95, 0.35, 0.30, 1};
            colorBackground[] = {0, 0, 0, 0};
            sizeEx = "GUI_GRID_H * 0.8";
            font = "RobotoCondensed";
            shadow = 2;
            show = 0;
        };
    };
};

// ---------------------------------------------------------------------------
// The picker on the main map. This is a vanilla display, not one of cTab's, so
// config dispatch works here and the buttons carry their own action - the
// runtime click-catcher machinery is only needed inside the device dialogs.
// ---------------------------------------------------------------------------
class GVAR(mapBtn): RscButton {
    idc = -1;
    style = 2;
    x = "safezoneX + safezoneW * 0.012";
    w = "safezoneW * 0.075";
    h = "safezoneH * 0.030";
    sizeEx = "safezoneH * 0.018";
    font = "RobotoCondensed";
    colorText[] = {0.9, 0.9, 0.9, 1};
    colorBackground[] = {0.08, 0.09, 0.10, 0.75};
    colorBackgroundActive[] = {0.25, 0.27, 0.29, 0.9};
    colorFocused[] = {0.25, 0.27, 0.29, 0.9};
    shadow = 0;
};

class RscDisplayMainMap {
    class controls {
        class GVAR(mapCompass): GVAR(mapBtn) {
            idc = IDC_TOOLS_FIRST;
            y = "safezoneY + safezoneH * 0.30";
            text = "COMPASS";
            tooltip = "Drop an origin, then read bearing and range to the cursor. Hold right mouse for mils.";
            onButtonClick = QUOTE(['compass'] call FUNC(setTool););
        };
        class GVAR(mapDistance): GVAR(mapCompass) {
            idc = 467902;
            y = "safezoneY + safezoneH * 0.335";
            text = "DISTANCE";
            tooltip = "Lay a chain of points; the legs and the running total are drawn as you go.";
            onButtonClick = QUOTE(['distance'] call FUNC(setTool););
        };
        class GVAR(mapHeight): GVAR(mapCompass) {
            idc = 467903;
            y = "safezoneY + safezoneH * 0.370";
            text = "PROFILE";
            tooltip = "Two points draw a terrain profile between them.";
            onButtonClick = QUOTE(['height'] call FUNC(setTool););
        };
        class GVAR(mapSight): GVAR(mapCompass) {
            idc = 467904;
            y = "safezoneY + safezoneH * 0.405";
            text = "SIGHT";
            tooltip = "Traces what an observer at the base point can and cannot see.";
            onButtonClick = QUOTE(['sight'] call FUNC(setTool););
        };
        class GVAR(mapHouses): GVAR(mapCompass) {
            idc = 467905;
            y = "safezoneY + safezoneH * 0.440";
            text = "BUILDINGS";
            tooltip = "Numbers the buildings under the cursor, so a callsign can name one.";
            onButtonClick = QUOTE(['houses'] call FUNC(setTool););
        };
        class GVAR(mapGrid): GVAR(mapCompass) {
            idc = 467906;
            y = "safezoneY + safezoneH * 0.475";
            text = "GRID";
            tooltip = "Lays a numbered reference grid over an area.";
            onButtonClick = QUOTE(['grid'] call FUNC(setTool););
        };
        class GVAR(mapFlat): GVAR(mapCompass) {
            idc = 467907;
            y = "safezoneY + safezoneH * 0.510";
            text = "FIND FLAT";
            tooltip = "Finds ground flat enough to land on inside the circle.";
            onButtonClick = QUOTE(['flat'] call FUNC(setTool););
        };
        class GVAR(mapOff): GVAR(mapCompass) {
            idc = 467908;
            y = "safezoneY + safezoneH * 0.545";
            text = "OFF";
            tooltip = "Puts the tools away and clears what they drew.";
            colorBackground[] = {0.18, 0.06, 0.05, 0.75};
            onButtonClick = QUOTE([''] call FUNC(setTool););
        };
    };
};
