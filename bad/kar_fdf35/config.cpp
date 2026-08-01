#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};   // patches existing KAR FDF 2035 vehicles in place; adds no new classes
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "KAR_FDF35_V"
        };
        skipWhenMissingDependencies = 1;
        authorUrl = "https://www.ghostsofbattle.com/";
        author = QAUTHOR;
        authors[] = {"Ghost"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
