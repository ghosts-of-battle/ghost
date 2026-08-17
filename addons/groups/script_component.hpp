#define COMPONENT groups
#include "\z\ghost\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#include "\z\ghost\addons\main\script_macros.hpp"

// The two-argument INFO/WARNING/ERROR/LOG the Roomba scripts were written
// against, plus the notification colours and the logistics shorthand. Included
// AFTER ghost's macros so the #undef in there lands on the right definitions.
#include "\z\ghost\addons\diag\roomba_macros.hpp"

// ST_CENTER, ST_LEFT and the pixel-grid defines the dialog geometry is written
// in. The mission got these from its own defines.hpp; a mod takes them from
// the game's own headers.
#include "\a3\ui_f\hpp\defineCommonGrids.inc"
#include "\a3\ui_f\hpp\defineResincl.inc"
