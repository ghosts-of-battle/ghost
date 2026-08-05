#define COMPONENT intel_hunt
#define COMPONENT_BEAUTIFIED Intel Hunt
#include "\z\ghost\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#include "\z\ghost\addons\main\script_macros.hpp"

// Defaults mirror the module attributes.
#define IH_REQUIRED_DEF     10
#define IH_RADII_DEF        "3000,2000,1000"
#define IH_MARKER_DUR_DEF   60
#define IH_MARKER_ALPHA_DEF 0.7
#define IH_DROP_CHANCE_DEF  30

#define IH_OFFSET_FRAC      0.6     // hint circle centre offset, fraction of radius
#define IH_DEBUG_INTERVAL   60      // sec between debug heartbeats
