#include "\z\ghost\addons\weapons\script_component.hpp"
class CfgPatches {
    class A3_Aegis_Weapons_F_Aegis_Shotguns_M4_SSAS {
        addonRootClass = "A3_Aegis_Weapons_F_Aegis";
        requiredAddons[] = {"ghost_Weapons"};
        requiredVersion = 0.1;
        units[]={"Weapon_sgun_M4_F"};
        weapons[]={"sgun_M4_F", "sgun_M4_ACO_F"};
    };
};

/* Definitions & Inheritance */
#include "\z\ghost\addons\main\basicDefines_A3.hpp"
#include "\z\ghost\addons\weapons\modes.hpp"
#include "\z\ghost\addons\weapons\slots.hpp"

/* Configuration */
#include "cfgWeapons.hpp"
#include "cfgVehicles.hpp"