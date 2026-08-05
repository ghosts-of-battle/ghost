#define COMPONENT ciws
#define COMPONENT_BEAUTIFIED CIWS
#include "\z\ghost\addons\main\script_mod.hpp"

#ifdef DEBUG_ENABLED_CIWS
    #define DEBUG_MODE_FULL
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

// How often a tracked round is re-examined. Fast, because a shell crosses the
// engagement envelope in a couple of seconds and the whole intercept has to
// happen inside that.
#define CIWS_TICK           0.15

// The decoy rides ABOVE the round rather than on it. Sitting it on the round
// means the intercepting burst detonates the round itself - the shell goes off
// early instead of being shot down, which looks identical from the ground and is
// not the same thing at all. Technique credit: Drongo.
#define CIWS_DECOY_OFFSET   2

// Damage on the decoy that counts as a kill. Deliberately low: the decoy exists
// to be hit, not to survive, and waiting for it to be destroyed just delays the
// effect by however long the gun needs for a second burst.
#define CIWS_KILL_DAMAGE    0.1

// Sampling gap used to tell an incoming round from one of your own going out.
#define CIWS_VECTOR_SAMPLE  0.4

#define CIWS_AD_RANGE_DEF   2500
#define CIWS_MIN_RANGE_DEF  150
#define CIWS_TYPES_DEF      "shotShell,shotRocket,shotMissile,shotSubmunitions"

// Give up on a round that has been tracked this long without resolving - it
// missed, or it is one of the very slow loitering munitions.
#define CIWS_TRACK_TIMEOUT  90

// --- guided interceptor mode ------------------------------------------------
// Proportional navigation: steer to null the rotation of the line of sight. The
// gain N is how hard it corrects - 3 is lazy, 5 is twitchy, 4 is the textbook
// answer and works.
#define CIWS_PN_GAIN_DEF    4
#define CIWS_INT_SPEED_DEF  600     // m/s top speed
#define CIWS_INT_LIMIT_DEF  8       // simultaneous interceptors per site
#define CIWS_INT_AMMO_DEF   "M_Titan_AA"

#define CIWS_GUIDE_TICK     0.045   // s between guidance corrections
#define CIWS_BOOST_TIME     1.5     // s of unguided climb before guidance takes over
#define CIWS_BOOST_FRAC     0.4     // launch speed, as a fraction of top speed
#define CIWS_FUZE_RADIUS    20      // m proximity fuze
#define CIWS_MISS_NEAR      150     // m: having been this close...
#define CIWS_MISS_FAR       350     // m: ...and now this far means it missed
#define CIWS_INT_TIMEOUT    30      // s before an interceptor gives up and self-destructs

// Threat scoring. Time to impact dominates - a round landing in four seconds
// matters more than one landing in twenty, however close the twenty-second one
// happens to be right now - and distance breaks the ties.
#define CIWS_THREAT_TIME_W  8
