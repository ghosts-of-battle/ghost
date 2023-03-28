#include "script_component.hpp"

ADDON = false;

if (isNil QEGVAR(core,GHOST_enabled) || !(EGVAR(core,GHOST_enabled))) exitWith {};


ADDON = true;
