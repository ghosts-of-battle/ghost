#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "ghost_moduleAntiShip",
            QGVAR(launcher),
            QGVAR(decoy_west),
            QGVAR(decoy_east),
            QGVAR(decoy_guer)
        };
        weapons[] = {};
        ammo[] = {QGVAR(missile)};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "cba_xeh"
        };
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        authors[] = {"Ghost"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgAmmo.hpp"
#include "CfgVehicles.hpp"
