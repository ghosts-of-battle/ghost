#include "script_component.hpp"

if (isNil QEGVAR(main,ghost_enabled) || !(EGVAR(main,ghost_enabled))) exitWith {};

if (hasInterface) then {
    #include "initKeybinds.inc.sqf"

    [QGVAR(marker3D), {_this call FUNC(show3DMarker)}] call CBA_fnc_addEventHandler;
};

