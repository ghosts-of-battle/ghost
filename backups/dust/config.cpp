#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};   // patches existing DUST helmets in place; adds no new classes
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "DUST_Characters_Config",
            "ace_hearing"
        };
        skipWhenMissingDependencies = 1;
        authorUrl = "https://www.ghostsofbattle.com/";
        author = QAUTHOR;
        authors[] = {"Ghost"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "XtdGear.hpp"
