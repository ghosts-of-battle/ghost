#include "script_component.hpp"

if (isNil QEGVAR(main,ghost_enabled) || !(EGVAR(main,ghost_enabled))) exitWith {};

// Shared file boxes live on the server, before the interface gate
if (isServer) then {
    GVAR(fileStore) = createHashMap;
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

// ACE self-interaction: pull a shared file box into your own cTab inbox
if (!isNil "ace_interact_menu_fnc_createAction") then {
    private _main = [
        QGVAR(archiveMenu), "Report Archive", "",
        {},
        {(call FUNC(listFileBoxes)) isNotEqualTo []},
        {
            private _children = [];
            {
                _children pushBack [
                    [
                        format [QGVAR(archive_%1), _x], _x, "",
                        {[_this select 2] call FUNC(readFileBox)},
                        {true}, {}, _x
                    ] call ace_interact_menu_fnc_createAction,
                    [],
                    ACE_player
                ];
            } forEach (call FUNC(listFileBoxes));
            _children
        }
    ] call ace_interact_menu_fnc_createAction;
    // Under cTab's own ACE entry ("Blue Force Tracking"), not loose in the
    // self-interaction root - the archive is a cTab thing.
    [player, 1, ["ACE_SelfActions", "cTab_Interact"], _main] call ace_interact_menu_fnc_addActionToObject;
};
