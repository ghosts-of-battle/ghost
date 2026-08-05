#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "ghost_moduleAircraftStrike"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ghost_main", "ghost_drones"};
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        authors[] = {"Ghost"};
        VERSION_CONFIG;
    };

    // See the drones addon: keeps pre-rename mission.sqm addons[] lists valid.
    class ghost_alive_aircraft {
        name = "Ghost - Aircraft (legacy name)";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        // MUST stay empty. This class ships inside ghost_aircraft.pbo, so requiring
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
