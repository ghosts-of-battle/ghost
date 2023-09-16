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

/* Definitions & Inheritance */
#include "\z\ghost\addons\main\basicDefines_A3.hpp"
#include "\z\ghost\addons\weapons\modes.hpp"
#include "\z\ghost\addons\weapons\slots.hpp"

/* Configuration */
#include "cfgWeapons.hpp"
#include "cfgVehicles.hpp"