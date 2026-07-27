#define COMPONENT insertion
#define COMPONENT_BEAUTIFIED Insertion Handler
#include "\z\ghost\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INSERTION
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_INSERTION
    #define DEBUG_SETTINGS DEBUG_SETTINGS_INSERTION
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

// Ported from Mr H.'s MRHInsertionHandler (MRHMilsimTools), ADPL-SA. See README.md.

// --- dialog ids, kept from the original ---
#define INSERTION_IDD  15082018   // the insertion planning interface
#define CARGO_IDD      17082018   // the cargo preparation interface
#define SPLASH_IDD     17082019   // submarine transfer cover, title layer
