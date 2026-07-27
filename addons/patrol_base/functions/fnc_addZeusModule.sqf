#include "script_component.hpp"
/*
 * Author: Ghost
 * Registers a Zeus (ZEN) custom module that drops a set of Patrol Base Kit items
 * at the placement position, so a player can build a base there.
 * No-op if Zeus Enhanced isn't loaded.
 *
 * Arguments: None
 * Return Value: None
 *
 * Public: No
 */

if (isNil "zen_custom_modules_fnc_register") exitWith {};

private _icon = "\A3\ui_f\data\IGUI\Cfg\simpleTasks\types\meet_ca.paa";

[
    "Ghosts of Battle",
    "Drop Patrol Base Kits",
    {
        // ZEN passes [position, object-under-cursor]; take the position.
        private _pos = _this param [0, [], [[]]];
        if !(_pos isEqualType [] && {_pos isNotEqualTo []}) then {
            _pos = call zen_common_fnc_getMousePosition;
        };
        [_pos, missionNamespace getVariable [QGVAR(kitCount), 4]] remoteExec [QFUNC(spawnKits), 2];
        [format ["Dropped %1 Patrol Base Kits.", missionNamespace getVariable [QGVAR(kitCount), 4]]] call zen_common_fnc_showMessage;
    },
    _icon
] call zen_custom_modules_fnc_register;
