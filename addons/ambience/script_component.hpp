#define COMPONENT ambience
#define COMPONENT_BEAUTIFIED Ambience
#include "\z\ghost\addons\main\script_mod.hpp"

#ifdef DEBUG_ENABLED_AMBIENCE
    #define DEBUG_MODE_FULL
#endif

#include "\z\ghost\addons\main\script_macros.hpp"

// Scheduler cadence - both modules wake this often and check their clocks.
#define AMB_TICK            15

// How long a kamikaze run may chase before it gives up and goes away.
#define AMB_KAM_TIMEOUT     180

// The kamikaze steering tick and the arm/impact fuse distance.
#define AMB_KAM_STEP        0.1
#define AMB_KAM_FUSE        10
