#define COMPONENT reaction
#define COMPONENT_BEAUTIFIED Reaction
#include "\z\ghost\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_REACTION
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_REACTION
    #define DEBUG_SETTINGS DEBUG_SETTINGS_REACTION
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

// A SMALL flag trebles the next roll, and forgets after this long. Long
// enough that a retry straight away is a real gamble, short enough that a
// section which broke contact and waited is genuinely clean again.
#define REACT_FLAG_MULT     3
#define REACT_FLAG_DECAY    300

// MAJOR: who learns where you are.
#define REACT_REVEAL_MIN    300
#define REACT_REVEAL_MAX    1000

// One MAJOR per player per this long. Five failed retries are one discovery,
// not five fire missions.
#define REACT_MAJOR_COOLDOWN 120

// The shells, when the commander's own guns cannot be reached.
#define REACT_FALLBACK_AMMO "Sh_82mm_AMOS"
#define REACT_FALLBACK_DISP 60
#define REACT_FALLBACK_GAP  4

// ACRE reports transmit power in milliwatts.
#define REACT_MW_PER_WATT   1000
