#define COMPONENT kamikaze
#define COMPONENT_BEAUTIFIED Kamikaze
#include "\z\ghost\addons\main\script_mod.hpp"

#ifdef DEBUG_ENABLED_KAMIKAZE
    #define DEBUG_MODE_FULL
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

// The warhead is created just ABOVE the point and driven down, rather than
// detonated where it stands. Ammo in Arma goes off on contact; conjuring it
// stationary in mid-air gives you a bomb that falls, which is not the same thing
// as an explosion here and now.
#define KAM_BOOM_UP     3       // m above the impact point the charge appears
#define KAM_BOOM_SPEED  60      // m/s downward, so it contacts within a frame

#define KAM_DIVE_SPEED  240     // m/s terminal dive
#define KAM_IMPACT_DIST 12      // m from the aimpoint where it goes off
