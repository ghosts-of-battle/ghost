#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {QGVAR(h450)};
        weapons[] = {};
        ammo[] = {QGVAR(warhead)};
        requiredVersion = REQUIRED_VERSION;
        // The RKSL mod that provides rksla3_uav_h450_2 is NOT listed here, and
        // that is deliberate rather than an oversight: with
        // skipWhenMissingDependencies set, a wrong CfgPatches name would make
        // this addon silently never load, which is a far worse failure than a
        // loud "cannot find base class" if the mod is genuinely absent.
        // Add it here once the exact patch name is confirmed.
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
#include "CfgAmmo.hpp"
#include "CfgVehicles.hpp"
