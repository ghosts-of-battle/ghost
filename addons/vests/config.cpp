#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QGVAR(V_PlateCarrier1_ocp),
            QGVAR(V_PlateCarrier1_mtp),
            QGVAR(V_PlateCarrier1_mcam),
            QGVAR(V_PlateCarrier1_mcam_wdl),
            QGVAR(V_PlateCarrier1_mcam_snow),
            QGVAR(V_PlateCarrier2_ocp),
            QGVAR(V_PlateCarrier2_mtp),
            QGVAR(V_PlateCarrier2_mcam),
            QGVAR(V_PlateCarrier2_mcam_wdl),
            QGVAR(V_PlateCarrier2_mcam_snow),
            QGVAR(V_PlateCarrierGL_ocp),
            QGVAR(V_PlateCarrierGL_mtp),
            QGVAR(V_PlateCarrierGL_mcam),
            QGVAR(V_PlateCarrierGL_mcam_wdl),
            QGVAR(V_PlateCarrierGL_mcam_snow),
            QGVAR(V_PlateCarrierSpec_ocp),
            QGVAR(V_PlateCarrierSpec_mtp),
            QGVAR(V_PlateCarrierSpec_mcam),
            QGVAR(V_PlateCarrierSpec_mcam_wdl),
            QGVAR(V_PlateCarrierSpec_mcam_snow),
            QGVAR(V_PlateCarrierL_CTRG_ocp),
            QGVAR(V_PlateCarrierL_CTRG_mtp),
            QGVAR(V_PlateCarrierL_CTRG_mcam),
            QGVAR(V_PlateCarrierL_CTRG_mcam_wdl),
            QGVAR(V_PlateCarrierL_CTRG_mcam_snow),
            QGVAR(V_PlateCarrierL_CTRG_tna),
            QGVAR(V_PlateCarrierH_CTRG_ocp),
            QGVAR(V_PlateCarrierH_CTRG_mtp),
            QGVAR(V_PlateCarrierH_CTRG_mcam),
            QGVAR(V_PlateCarrierH_CTRG_mcam_wdl),
            QGVAR(V_PlateCarrierH_CTRG_mcam_snow),
            QGVAR(V_PlateCarrierH_CTRG_tna)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "A3_Characters_F",
            "A3_Characters_F_Exp_Vests",
            "A3_Characters_F_Enoch_Vests"
        };
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
