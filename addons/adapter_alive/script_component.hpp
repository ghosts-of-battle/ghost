#define COMPONENT adapter_alive
#define COMPONENT_BEAUTIFIED ALiVE Adapter
#include "\z\ghost\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_ADAPTER_ALIVE
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_ADAPTER_ALIVE
    #define DEBUG_SETTINGS DEBUG_SETTINGS_ADAPTER_ALIVE
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

// Eden class names of the ALiVE modules this reads (verified: mil_opcom and
// mil_placement script_component COMPONENT + the ALiVE PREFIX).
#define OPCOM_CLASS         "ALiVE_mil_OPCOM"

// fnc_ready poll cadence, and how often it says it is still waiting.
#define READY_POLL          5
#define READY_REPORT        60

// Probe 4's test objective: how big, and how long it must be held.
#define PROBE_RADIUS        100
#define PROBE_HOLD          10

// CBA hash layout, as ALiVE reads it itself (x_lib fnc_hashRem.sqf:46 and
// x/cba/addons/hashes/script_hashes.hpp:2-3). Named here so the two places
// that walk a hash directly do not repeat a bare index.
#define HASH_KEYS       1
#define HASH_VALUES     2

// How often the pool sizes are republished for the tablet's button gates.
#define POOL_TICK       30
