#include "script_component.hpp"

if (isNil QEGVAR(main,ghost_enabled) || !(EGVAR(main,ghost_enabled))) exitWith {};

if (!hasInterface) exitWith {};

uiNamespace setVariable [QGVAR(live), []];
uiNamespace setVariable [QGVAR(tool), ""];
