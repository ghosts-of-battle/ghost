#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "po_vehicles",
            "po_main",
            "po_factions_afr"
        };
        authorUrl = "https://www.ghostsofbattle.com/";
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "rhs_msv.hpp"
#include "rhs_rfgf.hpp"
#include "rhs_vdv.hpp"
#include "rhs_vmf.hpp"
#include "rhs_tv.hpp"
#include "rhs_taliban.hpp"