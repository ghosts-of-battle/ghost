#include "script_component.hpp"

#ifdef GHOST_LEAN_RHS_CUP_HLC
#define PATCH_SKIP GHOST_LEAN_RHS_CUP_HLC
#endif
#if __has_include("\CUP\Vehicles\CUP_Vehicles_Core\config.bin")
#else
#define PATCH_SKIP "CUP Vehicles"
#endif

#ifdef PATCH_SKIP
GHOST_PATCH_NOT_LOADED(ADDON,PATCH_SKIP)
#else
class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "ghost_core", "ghost_aiCfgFixes", "A3_Data_F_Enoch_Loadorder", "CUP_Weapons_LoadOrder", "cwr3_weapon_config" };
        author = "Ghost";
        authors[] = {"PabstMirror", "AACO", "Dani (TCVM)"};
        authorUrl = "https://github.com/BourbonWarfare/GHOST";
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"

#endif
