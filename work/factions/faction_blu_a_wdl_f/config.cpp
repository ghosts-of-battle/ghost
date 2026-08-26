#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        // NOTHING FROM THE FACTION'S OWN MOD IS REQUIRED, DELIBERATELY.
        // This patches classes that belong to somebody else, and must not
        // break a load order that does not have them - see faction.hpp.
        requiredAddons[] = {"ghost_main"};
        author = QAUTHOR;
        VERSION_CONFIG;
    };
};

#include "faction.hpp"
#include "units.hpp"
