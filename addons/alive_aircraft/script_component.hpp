#define COMPONENT alive_aircraft
#define COMPONENT_BEAUTIFIED ALiVE Aircraft
#include "\z\ghost\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_ALIVE_AIRCRAFT
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_ALIVE_AIRCRAFT
    #define DEBUG_SETTINGS DEBUG_SETTINGS_ALIVE_AIRCRAFT
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

// --- strike tuning constants (not exposed as module fields) ---
#define ATTACK_RANGE        1400    // m; horizontal distance to target at which the ingressing aircraft begins its firing pass
#define ATTACK_SHOTS        5       // fireAtTarget attempts across the pass
#define ATTACK_SHOT_GAP     0.8     // sec between shots
#define EGRESS_TIMEOUT      200     // sec after the pass before the airframe is force-despawned
#define BUILDING_RADIUS     180     // m; search radius for target buildings around the random TAOR point
#define GB_SPEED            240     // m/s glide-bomb cruise speed toward target
#define GB_ARM_ALT          8       // m; glide bomb detonates/removes steering below this height above target
