#define COMPONENT drones
#define COMPONENT_BEAUTIFIED Drones
#include "\z\ghost\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_ALIVE_DRONES
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_ALIVE_DRONES
    #define DEBUG_SETTINGS DEBUG_SETTINGS_ALIVE_DRONES
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

// --- fleet-management tuning constants (not exposed as module fields) ---
#define REAP_INTERVAL           5       // sec between reaper passes (watchdog + lifetime + cleanup)
#define STUCK_DIST              25      // m; movement under this between reaps = "not moving"
#define STUCK_TIMEOUT           90      // sec motionless before a stuck airframe is despawned
#define STUCK_ALT               15      // m ATL; only treat a motionless airframe as stuck if this low (grounded/crashed) - airborne loiterers are never "stuck"
#define ARRIVAL_DIST            1000    // m; a patrol group has "reached its objective" when within this of its anchor (starts the lifetime clock)
#define PATROL_MIN              300     // m; inner radius of local patrol ring around anchor
#define PATROL_MAX              800     // m; outer radius of local patrol ring around anchor
#define CAP_LOITER_RADIUS       1000    // m; orbit radius for loiter-type CAP drones
#define WP_COMPLETION_RADIUS    200     // m; loosely "reach" a waypoint so aircraft don't fixate/circle
#define SPAWN_MIN_PLAYER_DIST   600     // m; re-roll a spawn point if a player is closer than this
#define SPAWN_MAX_TRIES         5       // re-roll attempts before spawning anyway
#define PATROL_WP_COUNT         4       // SAD waypoints per patrol loop
#define LIFETIME_JITTER         120     // sec of random spread added to each drone's lifetime
#define LIFETIME_COMBAT_GRACE   180     // sec a mid-fight drone may overrun its lifetime before forced RTB
#define EDGE_TIMEOUT            180     // sec after RTB order before the airframe is force-despawned
