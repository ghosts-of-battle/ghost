#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"ghost_moduleAirDefence"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        // No hardware of its own: every launcher, radar and MANPAD is a class
        // the mission's own mods already field, picked per faction at runtime.
        requiredAddons[] = {
            "ghost_main",
            "ghost_common",
            "cba_xeh"
        };
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
