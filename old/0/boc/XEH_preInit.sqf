#include "script_component.hpp"

ADDON = false;

#include "initCBASettings.sqf"

if (isNil QEGVAR(common,GHOST_enabled) || !(EGVAR(common,GHOST_enabled))) exitWith {};

#include "XEH_PREP.hpp"

ADDON = true;
