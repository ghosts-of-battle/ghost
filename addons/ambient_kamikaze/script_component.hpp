#define COMPONENT ambient_kamikaze
#define COMPONENT_BEAUTIFIED Ambient Kamikaze Drones
#include "\z\ghost\addons\main\script_mod.hpp"

#ifdef DEBUG_ENABLED_AMBIENT_KAMIKAZE
    #define DEBUG_MODE_FULL
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

#define TICK_INTERVAL   5       // sec between scheduler checks
#define DRONE_SPEED     240     // m/s dive-in speed
#define IMPACT_DIST     12      // m from target where the drone detonates
#define DEBUG_INTERVAL  60      // sec between debug heartbeats
