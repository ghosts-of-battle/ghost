#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "gm_weapons_ammo"
        };
        skipWhenMissingDependencies = 1;
        author = "Ghosts of Battle";
        authors[] = {"veteran29"};
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"
