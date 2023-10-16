#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "ghost_boc_moduleadd",
            "ghost_boc_moduleonchest",
            "ghost_boc_weaponholder"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "a3_ui_f",
            "A3_Modules_F",
            "ace_main",
            "ace_common",
            "ace_movement"
        };
        author = "NemesisRE";
        authors[] = {"DerZade"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"
