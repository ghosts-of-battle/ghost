#include "script_component.hpp"

if (isNil QEGVAR(main,ghost_enabled) || !(EGVAR(main,ghost_enabled))) exitWith {};

// Shared file boxes live on the server, before the interface gate.
// [[key, entries], ...] - a plain array, because this is broadcast with
// publicVariable and an array is beyond argument as network data.
if (isServer) then {
    GVAR(fileStore) = [];
    GVAR(fileNextId) = 0;
    publicVariable QGVAR(fileStore);
    [QGVAR(fileReport), {_this call FUNC(fileReport)}] call CBA_fnc_addEventHandler;
};

if (!hasInterface) exitWith {};

// The quick-TIC keybind stands on its own (it needs no cTab UI, only the
// transport), so it is registered before the cTab check
#include "initKeybinds.inc.sqf"

// cTab messaging is a soft dependency - skip silently when the mod is absent
if (isNil "ctab_messaging_fnc_generateTemplateText") exitWith {};

[QGVAR(ticAlert), {_this call FUNC(onTicAlert)}] call CBA_fnc_addEventHandler;

// The Report Archive ACE self-menu is GONE: the devices' LOG app reads the
// shared file boxes directly, and a radial menu next to a screen that shows
// the same thing was clutter. FUNC(readFileBox) stays - the messaging page's
// [FILE] boxes still pull an archive into the inbox.
