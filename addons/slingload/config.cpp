#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ghost_main"};
        author = QAUTHOR;
        authors[] = {"ARK", "Jonpas"};
        authorUrl = "https://ghostsofbattle.com";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
