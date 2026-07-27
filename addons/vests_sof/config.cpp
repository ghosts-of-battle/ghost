#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(Item_SOF_V_AVSCarrier_Lite_rgr),
            QGVAR(Item_SOF_V_AVSCarrier_Lite_rgr_noflag),
            QGVAR(Item_SOF_V_AVSCarrier_Lite_mcam),
            QGVAR(Item_SOF_V_AVSCarrier_Lite_tna),
            QGVAR(Item_SOF_V_AVSCarrier_Lite_wdl),
            QGVAR(Item_SOF_V_AVSCarrier_Lite_ocp)
        };
        weapons[] = {
            QGVAR(SOF_V_AVSCarrier_Lite_rgr),
            QGVAR(SOF_V_AVSCarrier_Lite_rgr_noflag),
            QGVAR(SOF_V_AVSCarrier_Lite_mcam),
            QGVAR(SOF_V_AVSCarrier_Lite_tna),
            QGVAR(SOF_V_AVSCarrier_Lite_wdl),
            QGVAR(SOF_V_AVSCarrier_Lite_ocp)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "SOF_Characters",
            "A3_Characters_F"
        };
        skipWhenMissingDependencies = 1;
        authorUrl = "https://www.ghostsofbattle.com/";
        author = QAUTHOR;
        authors[] = {"OokamiJamie"};
        VERSION_CONFIG;
    };
};

class CfgEditorSubcategories {
    class EdSubcat_SOF_Vests {
        displayName = "[Ghost] SOF - Vests";
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "XtdGear.hpp"
