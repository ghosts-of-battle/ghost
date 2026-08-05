#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = QAUTHOR;
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_xeh",
            "ghost_main",
            "ctab_messaging"
        };
        // hard messaging dep for the config-level send-button patch; ALiVE and
        // the hacking scanner stay runtime soft-checks
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
        authors[] = {"YonV"};
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
#include "ui_patches.hpp"
