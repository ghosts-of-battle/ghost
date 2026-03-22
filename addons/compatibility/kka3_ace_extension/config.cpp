#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "KKA3_ACE_Extension_Anim"
        };
        skipWhenMissingDependencies = 1;
        author = "Ghosts of Battle";
        authors[] = {"veteran29"};
        VERSION_CONFIG;
    };
};

#include "CfgMoves.hpp"
