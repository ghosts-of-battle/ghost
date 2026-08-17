#include "script_component.hpp"

ADDON = false;

if (isNil QEGVAR(main,ghost_enabled) || !(EGVAR(main,ghost_enabled))) exitWith {};

ADDON = true;
