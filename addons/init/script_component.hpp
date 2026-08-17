#define COMPONENT init
#include "\z\ghost\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#include "\z\ghost\addons\main\script_macros.hpp"

// The two-argument INFO/WARNING/ERROR/LOG the Roomba scripts were written
// against, plus the notification colours and the logistics shorthand. Included
// AFTER ghost's macros so the #undef in there lands on the right definitions.
#include "\z\ghost\addons\diag\roomba_macros.hpp"
