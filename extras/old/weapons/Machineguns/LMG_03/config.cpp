#include "\z\ghost\addons\weapons\script_component.hpp"
class CfgPatches {
    class A3_Aegis_Weapons_F_Aegis_Machineguns_LMG_03 {
        addonRootClass = "A3_Aegis_Weapons_F_Aegis";
        requiredAddons[] = {
            "ghost_weapons",
            "A3_Weapons_F_Exp_Machineguns_LMG_03"
        };
        requiredVersion = 0.1;
        units[]={"Weapon_LMG_03_khk_F", "Weapon_LMG_03_snd_F"};
        weapons[]={"LMG_03_khk_F", "LMG_03_snd_F"};
    };
};

/* Definitions & Inheritance */
#include "\z\ghost\addons\main\basicDefines_A3.hpp"
#include "\z\ghost\addons\weapons\modes.hpp"
#include "\z\ghost\addons\weapons\slots.hpp"

/* Configuration */
#include "cfgWeapons.hpp"
#include "cfgVehicles.hpp"