#include "script_component.hpp"

if (isNil QEGVAR(main,ghost_enabled) || !(EGVAR(main,ghost_enabled))) exitWith {};

// Templates are local-only (not network synced), so only clients need them
if (!hasInterface) exitWith {};

// cTab messaging is a soft dependency - skip silently when the mod is absent
if (isNil "ctab_fnc_registerMessageTemplate") exitWith {};

#include "templates.inc.sqf"
