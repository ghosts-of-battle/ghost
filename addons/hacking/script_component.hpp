#define COMPONENT hacking
#define COMPONENT_BEAUTIFIED Hacking
#include "\z\ghost\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_HACKING
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_HACKING
    #define DEBUG_SETTINGS DEBUG_SETTINGS_HACKING
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

// The required-items list (carry any ONE to unlock the Hack menu) is a CBA
// setting, GVAR(requiredItems) - a pure inventory check, no items-mod dependency.

// --- tuning ---
#define HACK_TOWER_RANGE   50      // metres: how close to a tower to hack it
#define HACK_DRONE_RANGE   400     // metres: how close to a drone to hack it down
#define HACK_DURATION      8       // seconds: progress-bar time for a hack
#define TARGET_WATCH_INTERVAL 5   // sec between destroyed-target checks
