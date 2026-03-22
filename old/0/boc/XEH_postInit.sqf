#include "script_component.hpp"

if (isNil QEGVAR(common,GHOST_enabled) || !(EGVAR(common,GHOST_enabled))) exitWith {};

if !(hasInterface) exitWith {};

call FUNC(arsenal_postInit);

GHOST_unit setVariable [QGVAR(preventProne),false,true];

[{
    if (
        (stance GHOST_unit) == "PRONE" && {GHOST_unit getvariable [QGVAR(preventProne),false]} && {!(GHOST_unit getVariable ["ACE_isUnconscious", false]) || lifeState GHOST_unit != "INCAPACITATED"}
       ) then {
        GHOST_unit playAction "PlayerCrouch";
        hint localize "str_GHOST_boc_crouch";
    };
},1] call CBA_fnc_addPerFrameHandler;
