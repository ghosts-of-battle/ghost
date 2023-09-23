#include "\z\ghost\addons\weapons\script_component.hpp"
class CfgPatches {
    class A3_Aegis_Weapons_F_Aegis_Pistols_Mk26 {
        addonRootClass = "A3_Aegis_Weapons_F_Aegis";
        requiredAddons[] = {"ghost_Weapons"};
        requiredVersion = 0.1;
        units[]={"Weapon_hgun_Mk26_F"};
        weapons[]={"hgun_Mk26_F"};
    };
};



/* Configuration */
#include "cfgWeapons.hpp"
#include "cfgVehicles.hpp"