#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

// Defended sites. Declared before anything can fire, so the projectile handler
// can never arrive ahead of the list it reads.
GVAR(sites) = [];

ADDON = true;
