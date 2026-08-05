#define COMPONENT common
#include "\z\ghost\addons\main\script_mod.hpp"

#include "\a3\ui_f\hpp\defineCommonGrids.inc"
#include "\a3\ui_f\hpp\defineResincl.inc"
#include "\a3\ui_f\hpp\defineResinclDesign.inc"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_COMMON
    #define DEBUG_MODE_FULL
#endif
    #ifdef DEBUG_SETTINGS_COMMON
    #define DEBUG_SETTINGS DEBUG_SETTINGS_COMMON
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

#define POS_X(N) ((N) * GUI_GRID_W + GUI_GRID_CENTER_X)
#define POS_Y(N) ((N) * GUI_GRID_H + GUI_GRID_CENTER_Y)
#define POS_W(N) ((N) * GUI_GRID_W)
#define POS_H(N) ((N) * GUI_GRID_H)

#define COLOR_BCG { \
    "(profileNamespace getVariable ['GUI_BCG_RGB_R',0.13])", \
    "(profileNamespace getVariable ['GUI_BCG_RGB_G',0.54])", \
    "(profileNamespace getVariable ['GUI_BCG_RGB_B',0.21])", \
    "(profileNamespace getVariable ['GUI_BCG_RGB_A',0.8])" \
}

#define IDC_MODAL_TITLE_L       1000
#define IDC_MODAL_TITLE_R       1001
#define IDC_MODAL_GROUP_CONTENT 2000
#define IDC_MODAL_CONTENT_TEXT  2001

// Admin chat-command prefix. Seven characters - fnc_debugCommand slices on it.
#define DEBUG_PREFIX "#ghost "

// Intel markers fade in this many scheduled steps - never a per-frame handler.
#define INTEL_FADE_STEPS 5

// Shared HUD reposition dialog
#define IDD_HUDMOVE          8400
#define IDC_HUDMOVE_CATCH    8401
#define IDC_HUDMOVE_BOX      8402
#define IDC_HUDMOVE_SAVE     8403
#define IDC_HUDMOVE_RESET    8404
#define IDC_HUDMOVE_CANCEL   8405

// Shared artillery. Values carried over from ambient_arty so its behaviour is
// unchanged by the extraction.
#define BARRAGE_ROUND_GAP    0.7    // sec between rounds when no window is given
#define BARRAGE_SHELL_ALT    260    // m the shell spawns above the impact point
#define BARRAGE_SHELL_SPEED  130    // m/s downward
