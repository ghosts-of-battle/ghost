#define COMPONENT ctab_tools
#define COMPONENT_BEAUTIFIED Map Tools

#ifdef DEBUG_ENABLED_CTAB_TOOLS
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_CTAB_TOOLS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_CTAB_TOOLS
#endif

#include "\z\ghost\addons\main\script_mod.hpp"
#include "\z\ghost\addons\main\script_macros.hpp"

// The tool picker on the main map. One column down the left edge, clear of
// the diary and the marker controls.
#define IDC_TOOLS_GROUP 467900
#define IDC_TOOLS_FIRST 467901
// seven tools and the off switch
#define TOOLS_BUTTON_COUNT 8

// The height tool's profile graph, created on demand.
#define IDC_TOOLS_GRAPH 73453

// The colours the tool marker setting offers, in its own order.
#define MARKER_COLOURS ["ColorYellow", "ColorRed", "ColorGreen", "ColorBlue", "ColorOrange", "ColorPink", "ColorWhite", "ColorBlack"]
