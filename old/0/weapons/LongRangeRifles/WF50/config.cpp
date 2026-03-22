#include "\z\ghost\addons\weapons\script_component.hpp"
class CfgPatches {
    class A3_Aegis_Weapons_F_Aegis_LongRangeRifles_WF50 {
        addonRootClass = "A3_Aegis_Weapons_F_Aegis";
        requiredAddons[] = {"ghost_Weapons"};
        requiredVersion = 0.1;
        units[]={"Weapon_srifle_WF50_F", "Weapon_srifle_WF50_camo_F", "Weapon_srifle_WF50_tna_F"};
        weapons[]={};
    };
};



/* Configuration */
#include "cfgWeapons.hpp"
#include "cfgVehicles.hpp"

