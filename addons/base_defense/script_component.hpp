#define COMPONENT base_defense
#define COMPONENT_BEAUTIFIED Base Defense
#include "\z\ghost\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_BASE_DEFENSE
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_BASE_DEFENSE
    #define DEBUG_SETTINGS DEBUG_SETTINGS_BASE_DEFENSE
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

// --- tuning constants ---
#define ARTY_INTERVAL           5       // sec between recon-arty evaluation passes
#define BASE_PATROL_MIN         300     // m; inner radius of the base defensive patrol ring
#define BASE_PATROL_MAX         800     // m; outer radius of the base defensive patrol ring
#define BASE_WP_COMPLETION      200     // m; waypoint completion radius (don't fixate)
#define KNOWSABOUT_SPOTTED      1.5     // recon knowsAbout threshold that counts as "spotted"
