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
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ghost_core","CUP_Vehicles_LoadOrder"};
        author = "Ghost";
        authors[] = {"Dani (TCVM)"};
        authorUrl = "https://github.com/BourbonWarfare/GHOST";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"

#endif
