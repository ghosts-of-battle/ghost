#include "script_component.hpp"

ADDON = false;

if (isNil QEGVAR(main,ghost_enabled) || !(EGVAR(main,ghost_enabled))) exitWith {};

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#include "initSettings.inc.sqf"

GVAR(reportIndex) = 0;
GVAR(quickTicNext) = 0;
GVAR(pulledIds) = [];

ADDON = true;
