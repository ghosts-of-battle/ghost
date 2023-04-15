#include "script_component.hpp"

#ifdef GHOST_LEAN_ACRE
#define PATCH_SKIP GHOST_LEAN_ACRE
#endif
#if __has_include("\idi\acre\addons\main\script_component.hpp")
#else
#define PATCH_SKIP "ACRE"
#endif

#ifdef PATCH_SKIP
GHOST_PATCH_NOT_LOADED(ADDON,PATCH_SKIP)
#else
class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ghost_main","ghost_assignGear", "acre_sys_core", "acre_api", "acre_sys_signal", "acre_sys_prc117f", "acre_sys_prc148", "acre_sys_prc343"};
        author[] = {"AACO"};
        authorUrl = "https://ghostsofbattle.com";
        VERSION_CONFIG;
    };
};

#include "CfgEden.hpp"
#include "CfgEventHandlers.hpp"

#endif
