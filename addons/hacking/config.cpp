#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "ghost_moduleHackTargets",
            "ghost_moduleHackTargetSpot",
            "ghost_moduleHacking",
            "ghost_moduleRemoteHack"
        };
        weapons[] = {
            QGVAR(tabletItem),
            QGVAR(scannerItem)
        };
        requiredVersion = REQUIRED_VERSION;
        // ace_interact_menu + ace_common for the self-interaction + progress bar.
        // ALiVE (ALIVE_fnc_getNearProfiles, to fold despawned garrisons into the
        // Local Picture) and cTab (ItemcTab etc.) are soft dependencies checked
        // at runtime, so this loads without them.
        requiredAddons[] = {
            "ghost_main",
            "ace_interact_menu",
            "ace_common",
            "ghost_notify",
            "ghost_common",
            "cba_xeh"
        };
        author = QAUTHOR;
        authors[] = {"Ghost"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "tablet.hpp"
