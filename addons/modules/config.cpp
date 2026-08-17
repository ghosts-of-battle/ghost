#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"ghost_moduleSafeStart", "ghost_moduleHealArea", "ghost_moduleAiSpawner", "ghost_moduleAiHunter"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        // ghost_common: the spawn-scale trim and the groupSpawned bus
        requiredAddons[] = {"ghost_main", "ghost_common"};
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"
