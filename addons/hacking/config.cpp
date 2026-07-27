#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"ghost_moduleHackTargets"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        // ace_interact_menu + ace_common for the self-interaction + progress bar.
        // ALiVE (ALIVE_fnc_markUnits) and cTab (ItemcTab etc.) are soft
        // dependencies checked at runtime, so this loads without them.
        requiredAddons[] = {
            "ghost_main",
            "ace_interact_menu",
            "ace_common"
        };
        author = QAUTHOR;
        authors[] = {"Ghost"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
