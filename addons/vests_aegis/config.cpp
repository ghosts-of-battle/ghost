#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QGVAR(V_CF_CarrierRig_F),
            QGVAR(V_CF_CarrierRig_Lite_F),
            QGVAR(V_CF_CarrierRig_MG_F)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "A3_Aegis_Characters_F_Aegis_Vests",
            "A3_Aegis_Characters_F_Aegis_RF_Vests",
            "data_f_lxWS_Loadorder" // Aegis alt plate carriers inherit V_PlateCarrier_CTRG_lxWS
        };
        skipWhenMissingDependencies = 1;
        authorUrl = "https://www.ghostsofbattle.com/";
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "XtdGear.hpp"
