#define COMPONENT counter_battery
#define COMPONENT_BEAUTIFIED Counter-Battery
#include "\z\ghost\addons\main\script_mod.hpp"

#ifdef DEBUG_ENABLED_COUNTER_BATTERY
    #define DEBUG_MODE_FULL
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

// How often the server looks for artillery it has not hooked yet. Guns are
// hooked once each and then remembered, so this only has to be often enough to
// catch something Zeus just dropped - not often enough to track anything.
#define CB_SWEEP_INTERVAL   15

// Rounds fired before the radar has a firing solution. Artillery radar works by
// tracking a shell's arc, and one round is a track, not a fix.
#define CB_SHOTS_DEF        3
#define CB_CHANCE_DEF       70      // % chance the fix is good
#define CB_DELAY_DEF        45      // sec from detection to first impact
#define CB_ACCURACY_DEF     100     // m the returned fix is off by
#define CB_ROUNDS_DEF       8
#define CB_SPREAD_DEF       60
#define CB_WINDOW_DEF       20      // sec the return barrage is spread over
#define CB_COOLDOWN_DEF     300     // sec before the same gun is hunted again
#define CB_SHELL_DEF        "Sh_155mm_AMOS"
#define CB_SAFE_DEF         200     // m: hold fire if our own people are this close to the fix
#define CB_DEDUPE_DEF       300     // m: a grid already under a mission is not booked twice
#define CB_DISPLACE_DEF     400     // m: how far a fixed AI gun relocates
