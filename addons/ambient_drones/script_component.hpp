#define COMPONENT ambient_drones
#define COMPONENT_BEAUTIFIED Ambient Drones
#include "\z\ghost\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_AMBIENT_DRONES
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_AMBIENT_DRONES
    #define DEBUG_SETTINGS DEBUG_SETTINGS_AMBIENT_DRONES
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

// --- tuning constants ---
#define AMB_CHECK_INTERVAL      2       // sec between random-timer checks
#define AMB_HUNT_COMPLETION     200     // m; waypoint completion radius (don't fixate)
#define AMB_BLACKLIST_TRIES     6       // spawn-pos re-rolls to dodge blacklist zones
#define DEBUG_INTERVAL          60      // sec between debug heartbeats
