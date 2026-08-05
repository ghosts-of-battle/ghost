#define COMPONENT antiship
#define COMPONENT_BEAUTIFIED AntiShip
#include "\z\ghost\addons\main\script_mod.hpp"

#ifdef DEBUG_ENABLED_ANTISHIP
    #define DEBUG_MODE_FULL
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

#define AS_TICK             10      // sec between scheduler checks
#define AS_INTERVAL_DEF     1200    // sec between launches - 20 minutes
#define AS_TARGETS_DEF      "Land_Carrier_01_base_F,Land_Destroyer_01_base_F,Ship"
#define AS_SEARCH_DEF       12000   // m the battery looks for a hull

// Faster than anything trying to stop it. Vanilla AA tops out well under this
// and the CIWS interceptor defaults to 600, so a tail chase is hopeless - it has
// to be engaged head-on, early, which is the whole tactical problem of a
// sea-skimmer.
#define AS_SPEED_DEF        900

#define AS_CRUISE_ALT_DEF   45      // m above sea on the run in
#define AS_TERMINAL_DEF     1200    // m from the hull where it stops cruising and dives
#define AS_PN_GAIN          4
#define AS_TICK_FLY         0.045   // s between guidance corrections
#define AS_BOOST_TIME       2       // s of climb before it noses over
#define AS_FUZE             15      // m
#define AS_TIMEOUT          180     // s before a lost missile gives up
