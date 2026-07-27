#define COMPONENT electronic_war_zones
#define COMPONENT_BEAUTIFIED Electronic War Zones
#include "\z\ghost\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_ELECTRONIC_WAR_ZONES
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_ELECTRONIC_WAR_ZONES
    #define DEBUG_SETTINGS DEBUG_SETTINGS_ELECTRONIC_WAR_ZONES
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

// --- tuning constants ---
#define JAM_CHECK_INTERVAL      2       // sec between client-local jam re-evaluations
#define JAMMER_PRUNE_INTERVAL   10      // sec between server jammer-liveness re-broadcasts
#define JAMMER_EFFECTIVE_FRAC   0.4     // inner fraction of a jammer radius that is full-strength

// TFAR interference levers (Crows-Electronic-Warfare, APL-SA)
#define TFAR_RX_FULL            100     // receiving distance mult at full jam
#define TFAR_TX_FULL            0.05    // sending distance mult at full jam (1/20)
#define TFAR_RX_FALLOFF_NEAR    20      // rx mult at inner edge of falloff band
#define TFAR_RX_FALLOFF_FAR     1       // rx mult at outer edge (no jam)

// ACRE2 jamming levers - fraction of received signal STRENGTH removed, applied
// through acre_api_fnc_setCustomSignalFunc (strengthPct *= 1 - frac).
#define ACRE_JAM_FULL           0.98    // fraction removed inside a jammer's core
#define ACRE_JAM_NEAR           0.6     // at the inner edge of the falloff band
#define ACRE_JAM_FAR            0       // at the outer edge (no jam)
