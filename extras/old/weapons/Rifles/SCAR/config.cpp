#include "\z\ghost\addons\weapons\script_component.hpp"
class CfgPatches {
    class A3_Aegis_Weapons_F_Aegis_Rifles_SCAR {
        addonRootClass = "A3_Aegis_Weapons_F_Aegis";
        requiredAddons[] = {"ghost_Weapons"};
        requiredVersion = 0.1;
        units[]={"Weapon_arifle_SCAR_F", "Weapon_arifle_SCAR_GL_F", "Weapon_arifle_SCAR_short_F", "Weapon_arifle_SCAR_grip_F", "Weapon_arifle_SCAR_black_F", "Weapon_arifle_SCAR_GL_black_F", "Weapon_arifle_SCAR_short_black_F", "Weapon_arifle_SCAR_grip_black_F", "Weapon_arifle_SCAR_khaki_F", "Weapon_arifle_SCAR_GL_khaki_F", "Weapon_arifle_SCAR_short_khaki_F", "Weapon_arifle_SCAR_grip_khaki_F"};
        weapons[]={"arifle_SCAR_F", "arifle_SCAR_GL_F", "arifle_SCAR_short_F", "arifle_SCAR_grip_F", "arifle_SCAR_black_F", "arifle_SCAR_GL_black_F", "arifle_SCAR_short_black_F", "arifle_SCAR_grip_black_F", "arifle_SCAR_khaki_F", "arifle_SCAR_GL_khaki_F", "arifle_SCAR_short_khaki_F", "arifle_SCAR_grip_khaki_F", "arifle_SCAR_black_snds_mrco_pointer_f", "arifle_SCAR_black_DMS_LP_BI_S_F", "arifle_SCAR_GL_black_snds_mrco_pointer_f", "arifle_SCAR_short_black_snds_mrco_pointer_f", "arifle_SCAR_short_black_snds_holo_pointer_f", "arifle_SCAR_grip_black_snds_mrco_pointer_f", "arifle_SCAR_short_snds_holo_pointer_f", "arifle_SCAR_GL_snds_mrco_pointer_f", "arifle_SCAR_DMS_LP_BI_S_F", "arifle_SCAR_short_snds_mrco_pointer_f", "arifle_SCAR_grip_snds_mrco_pointer_f"};
    };
};

/* Definitions & Inheritance */
#include "\z\ghost\addons\main\basicDefines_A3.hpp"
#include "\z\ghost\addons\weapons\modes.hpp"
#include "\z\ghost\addons\weapons\slots.hpp"


/* Configuration */
#include "cfgWeapons.hpp"
#include "cfgVehicles.hpp"