#include "..\script_component.hpp"
if (isDedicated) exitwith {};

if (hasinterface) then {
    player setUnitTrait ["Pilot", false, true];
    player setVariable ["canUseSSScas", false, true];
    player setVariable ["canUseSSstrans", false, true];
    player setVariable ["canUseSSSarty", false, true];
    player setUnitTrait ["UAVHacker", false];
    player setVariable ["ace_medical_medicclass", 0, true];

    player setVariable ["ACE_isEOD", true, true];
    player setVariable ["ace_isEngineer", 2, true];

    player setVariable["draWhitelisted", false, true];
    daoWhitelisted=false;
};

[ format [hint_ghost_default, "Engineer"] ] call ghost_fnc_hint;


// Ace-Medic: this setVariable ["ace_medical_medicClass",1,true];
// Ace-Doctor: this setVariable ["ace_medical_medicClass",2,true];

// Ace-EODler: this setVariable ["ACE_isEOD",1,true];
// Ace-Repairman: this setVariable ["ACE_IsEngineer",1,true];

// Ace-Repairpoint: this setVariable ["ACE_isRepairVehicle",1,true];
// Ace-Repairfacility: this setVariable ["ACE_isRepairFacility",1,true];