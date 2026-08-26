#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        // THE ROUNDS WHOSE SOURCE CAN VANISH. Every addon below drops
        // itself when its third-party mod is absent - fa_rhs without RHS,
        // fa_sps without SPS - so this one drops with them, and takes
        // only the tiers for rounds that are not there either.
        requiredAddons[] = {"cba_xeh", "ghost_fa_aegis", "ghost_fa_antidrone_ef", "ghost_fa_antidrone_jca", "ghost_fa_antidrone_rhs", "ghost_fa_e22raf", "ghost_fa_ef", "ghost_fa_jca", "ghost_fa_main", "ghost_fa_rf", "ghost_fa_rhs", "ghost_fa_sps", "ghost_fa_tiers", "ghost_main"};
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
