#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "ghost_MFRC_mtp_ReconScout",
            "ghost_MFRC_ocp_ReconScout",
            "ghost_MFRC_tna_ReconScout",
            "ghost_MFRC_wdl_ReconScout"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        // ghost_uniform_sof CARRIES THE FATIGUES the scout wears, and it is
        // ours - so it is a real requirement rather than a soft one. The CTRG
        // base class this inherits from belongs to somebody else's mod and is
        // forward-declared instead; see CfgVehicles.hpp.
        requiredAddons[] = {"ghost_main", "ghost_uniform_sof", "ghost_headware"};
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
