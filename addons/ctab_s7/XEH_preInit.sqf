#include "script_component.hpp"

ADDON = false;

if (isNil QEGVAR(main,ghost_enabled) || !(EGVAR(main,ghost_enabled))) exitWith {};

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#include "initSettings.inc.sqf"

GVAR(camIndex) = 0;
GVAR(infoPFH) = -1;

// Which feed the handset camera page is showing.
GVAR(camIsUav) = true;
GVAR(camIndex) = 0;

ADDON = true;
