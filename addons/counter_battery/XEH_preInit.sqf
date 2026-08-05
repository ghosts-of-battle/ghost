#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

// Registered radars, and the pooled extra classnames the sweep should recognise.
// Declared here so a Fired handler can never arrive before the list it reads.
GVAR(batteries) = [];
GVAR(extraClasses) = [];
GVAR(sweepHandle) = -1;

// Grids with a reply already inbound, as [pos, expiresAt]. Stops two guns
// near each other drawing two missions onto the same piece of ground.
GVAR(booked) = [];

ADDON = true;
