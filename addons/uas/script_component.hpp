#define COMPONENT uas
#define COMPONENT_BEAUTIFIED UAS
#include "\z\ghost\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_UAS
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_UAS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_UAS
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

// How often patrols are topped back up to the ceiling, and how often live
// drones are checked for having seen somebody. Both slow: a drone that has
// noticed you stays noticed, and a fleet that is one short can wait.
#define UAS_PATROL_TICK     60

// Replacements per side per planning tick. Uncapped, a side that keeps
// losing drones - a DDT jammer pack downs every hostile UAV inside 100 m,
// crew deleted, no exemption flag - was refilled to the full ceiling every
// minute, which read as raining drones. Attrition now regenerates as a
// drip: the fleet still comes back, one airframe at a time.
#define UAS_REGEN_PER_TICK  1
#define UAS_SPOT_TICK       8

// A drone that has reported a player says nothing again for this long, so one
// pass over a position is one discovery rather than a stream of them.
#define UAS_SPOT_COOLDOWN   120

// How sure a drone must be that it is looking at somebody. knowsAbout runs
// 0-4; 1.5 is "identified something", not "glimpsed a heat blob".
#define UAS_SPOT_KNOWS      1.5

// How far from a drone a player is even considered for detection.
#define UAS_SPOT_RANGE      800

// Patrol altitude band.
#define UAS_ALT_MIN         250
#define UAS_ALT_MAX         600
