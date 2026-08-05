#define COMPONENT objective_watch
#define COMPONENT_BEAUTIFIED Objective Watch
#include "\z\ghost\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#include "\z\ghost\addons\main\script_macros.hpp"

#define CHECK_INTERVAL      5       // sec between capture-condition checks
#define OW_DEBUG_INTERVAL   60      // sec between debug heartbeats
#define OW_DEFAULT_DISP     150     // m dispersion when nothing else defines it

// Objective discovery without ALiVE: markers whose name starts with one of
// these are watched automatically, the way the staging system treats
// zone_staging* markers.
#define OW_MARKER_PREFIX  "obj_"
#define OW_DEDUPE_DIST    100    // m; two sources naming the same place are one objective
#define OW_SEEN_CAP       200    // ALiVE event ids remembered per module
