#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        // NOT QGVAR - these two carry no component in their names. QGVAR(moduleJamming)
        // is "ghost_jamming_moduleJamming", which is not the class in
        // CfgVehicles and left both of them unlisted.
        units[] = {"ghost_moduleJamming", "ghost_moduleJammerSite"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "ghost_common",
            "ghost_notify",
            "cba_xeh"
        };
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "gui.hpp"
