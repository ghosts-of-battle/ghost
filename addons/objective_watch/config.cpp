#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"ghost_moduleObjectiveWatch"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        // No ambient_arty dependency on purpose: the barrage is its own feature
        // and works on a mission with no ambient artillery placed at all (D37).
        requiredAddons[] = {
            "ghost_main",
            "ghost_common",
            "ghost_notify"
        };
        author = QAUTHOR;
        authors[] = {"Ghost"};
        authorUrl = URL;
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
