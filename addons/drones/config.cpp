#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "ghost_moduleDrones"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ghost_main", "ghost_common"};
        author = QAUTHOR;
        authors[] = {"Ghost"};
        VERSION_CONFIG;
    };

    // Backward compatibility, permanent. A mission.sqm saved before the rename
    // lists ghost_alive_drones in its addons[]; without this class it fails to
    // load. Empty on purpose - it only pulls in the real addon.
    class ghost_alive_drones {
        name = "Ghost - Drones (legacy name)";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        // MUST stay empty. This class ships inside ghost_drones.pbo, so requiring
        // that addon makes the pbo depend on itself and Arma refuses to load
        // with "Circular addon dependency detected". The class only has to
        // EXIST for an old mission.sqm addons[] entry to resolve.
        requiredAddons[] = {};
        author = QAUTHOR;
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
