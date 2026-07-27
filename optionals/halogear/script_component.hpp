#define COMPONENT halogear
#define COMPONENT_BEAUTIFIED HALO Gear
#include "\z\ghost\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_HALOGEAR
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_HALOGEAR
    #define DEBUG_SETTINGS DEBUG_SETTINGS_HALOGEAR
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

// Ported from Mr H.'s MRHHaloGear (MRHMilsimTools), ADPL-SA. See README.md.
//
// Any goggles, headgear or vehicle that sets GVAR(rebreather) = 1 in its config
// counts as a supplied-oxygen source; those classes are scanned into
// GVAR(protectiveGear) at mission start by FUNC(parseProtectiveGear).

// --- tuning ---
#define AAD_DIALOG_IDD   211218   // AAD altitude dialog, id kept from the original
#define AAD_ALT_IDC      1400     // altitude edit box in that dialog
#define AAD_WARN_MARGIN  200      // metres above trigger altitude the warning starts

#define BREAK_FRAMES     11       // mask-breaking animation frames
#define BREAK_FRAMETIME  0.63     // seconds per frame
