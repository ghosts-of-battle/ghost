#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        // THE ROUNDS WHOSE SOURCE CAN VANISH. Its one source addon drops
        // itself when its mod or DLC is absent, so this one drops with
        // it, and takes only the tiers for rounds that are not there either.
        requiredAddons[] = {"cba_xeh", "ghost_fa_antidrone_ef", "ghost_fa_main", "ghost_fa_tiers", "ghost_main"};
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
