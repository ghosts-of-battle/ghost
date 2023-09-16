class CfgPatches {
    class A3_Aegis_Weapons_F_Aegis_Shotguns_KSG {
        addonRootClass = "A3_Aegis_Weapons_F_Aegis";
        requiredAddons[] = {"ghost_Weapons"};
        requiredVersion = 0.1;
        units[]={"Weapon_sgun_KSG_F"};
        weapons[]={"sgun_KSG_F", "sgun_KSG_ACO_F"};
    };
};

/* Definitions & Inheritance */
#include "\z\ghost\addons\main\basicDefines_A3.hpp"
#include "\z\ghost\addons\weapons\modes.hpp"
#include "\z\ghost\addons\weapons\slots.hpp"

/* Configuration */
#include "cfgWeapons.hpp"
#include "cfgVehicles.hpp"