#define COMPONENT ambient_arty
#define COMPONENT_BEAUTIFIED Ambient Artillery
#include "\z\ghost\addons\main\script_mod.hpp"

#ifdef DEBUG_ENABLED_AMBIENT_ARTY
    #define DEBUG_MODE_FULL
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

#define TICK_INTERVAL   5       // sec between scheduler checks
#define ROUND_GAP       0.7     // sec between rounds of a mission
#define SHELL_ALT       260     // m the shell is spawned above the impact point
#define SHELL_SPEED     130     // m/s downward
#define DEBUG_INTERVAL  60      // sec between debug heartbeats
