#define COMPONENT fiberscope
#define COMPONENT_BEAUTIFIED Fiberscope
#include "\z\ghost\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_FIBERSCOPE
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_FIBERSCOPE
    #define DEBUG_SETTINGS DEBUG_SETTINGS_FIBERSCOPE
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

// Ported from Mr H.'s MRHFiberScope (MRHMilsimTools), ADPL-SA. See README.md.

#define FS_IDD          11042018   // RscTitles layer/display id, kept from the original
#define FS_TURN_STEP    4          // degrees per left/right keypress
#define FS_FOV          5          // camera field of view
