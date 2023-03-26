#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ghost_core"};
        author = "Ghost";
        authors[] = {"PabstMirror"};
        authorUrl = "https://github.com/BourbonWarfare/GHOST";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
