#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {QGVAR(placeRespawnPoint), QGVAR(openRespawnMenu)};
        weapons[] = {};
        magazines[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ghost_core"};
        author = "Ghost";
        authors[] = {"AACO"};
        authorUrl = "https://github.com/BourbonWarfare/GHOST";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgRespawnFactions.hpp"
#include "CfgRespawnGroups.hpp"
#include "CfgVehicles.hpp"
#include "Displays.hpp"
