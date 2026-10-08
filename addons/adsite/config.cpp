#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"ghost_moduleADSite"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "ghost_common",
            "ghost_iads",
            "ghost_notify",
            "ghost_tacpad",
            "cba_xeh"
        };
        authorUrl = "https://www.ghostsofbattle.com/";
        author = QAUTHOR;
        authors[] = {"Ghost"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
