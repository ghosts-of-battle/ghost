#define COMPONENT jamming
#define COMPONENT_BEAUTIFIED Jamming
#include "\z\ghost\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_JAMMING
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_JAMMING
    #define DEBUG_SETTINGS DEBUG_SETTINGS_JAMMING
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

// --- zone registry ---------------------------------------------------------
// One entry per zone. Indices 0-2 are FROZEN: pre-registry consumers (the jam
// loop, fnc_hasDetector, hacking's fnc_nearestTower) read them positionally.
// Everything new is appended, so nothing had to be rewritten to add it.
//   0 object          emitter, objNull for temp/abstract zones
//   1 rEff            full-strength radius
//   2 rFall           outer radius, jamming reaches zero here
//   3 id              STRING, unique, stable for the zone's life
//   4 type            "jam" | "detect"
//   5 isTemp          BOOL, spawned by a hack failure rather than the module
//   6 pos             position, authoritative when object is null
//   7 model           HASHMAP of the Part 3 propagation fields
#define ZONE_OBJ    0
#define ZONE_REFF   1
#define ZONE_RFALL  2
#define ZONE_ID     3
#define ZONE_TYPE   4
#define ZONE_TEMP   5
#define ZONE_POS    6
#define ZONE_MODEL  7

// The whole detection net is one synthetic zone (D35); this is its fixed id.
#define DETECT_NET_ID "detect_net"

// --- jamming meter (Part 3 Â§3) ---------------------------------------------
#define IDC_JAM_PANEL   8600
#define IDC_JAM_LABEL   8601
#define IDC_JAM_BAR     8602

#define JAM_HUD_ID      "jamMeter"
#define JAM_HUD_W       0.16
#define JAM_HUD_H       0.035
#define JAM_HUD_DEF_X   0.42
#define JAM_HUD_DEF_Y   0.80
#define JAM_HUD_INTERVAL 0.5

// --- RDF scanner (Part 3 section 2) ----------------------------------------

// --- UAV jamming (Part 3 section 4) ----------------------------------------
#define UAV_SWEEP_INTERVAL  5       // sec between server drone sweeps
#define UAV_FREEZE_FACTOR   0.5     // jam factor at which a drone is frozen

// --- AI ambient emitters (Part 1 section 8) --------------------------------
#define AI_CHATTER_RANGE    3000    // m from a player for AI traffic to be worth simulating
#define AI_CHATTER_MIN      3       // sec a transmission lasts, lower bound
#define AI_CHATTER_MAX      6       // upper bound

// The two props the design names for objective jammers (new.md section 1.3).
// Resolved at runtime against what is actually loaded - the doc spells them
// without the Land_ prefix, the engine convention is with it.
#define JAM_PROP_HUB_A      "Land_RuggedTerminal_01_communications_hub_F"
#define JAM_PROP_HUB_B      "RuggedTerminal_01_communications_hub_F"
#define JAM_PROP_TERM_A     "Land_RuggedTerminal_01_communications_F"
#define JAM_PROP_TERM_B     "RuggedTerminal_01_communications_F"

// How often dead or hacked emitters are pruned from the registry.
#define JAM_PRUNE_TICK      10
