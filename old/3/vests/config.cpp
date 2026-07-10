#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QGVAR(V_CarrierSpec_Multicam),
            QGVAR(V_CarrierGL_Multicam),
            QGVAR(V_CarrierLite_Multicam),
            QGVAR(V_CarrierRig_Multicam),
            QGVAR(V_CarrierLiteNoBelt_Multicam),
            QGVAR(V_Rangemaster_Multicam),
            QGVAR(V_ChestRig_Multicam),
            QGVAR(V_JCACompact_Multicam),
            QGVAR(V_JCACQB_Multicam),
            QGVAR(V_JCACrew_Multicam),
            QGVAR(V_JCACommand_Multicam),
            QGVAR(V_JCAHolster_Multicam),
            QGVAR(V_JCARecon_Multicam),
            QGVAR(V_JCATactical_Multicam),
            QGVAR(V_CarrierSpec_Multicam_Snow),
            QGVAR(V_CarrierGL_Multicam_Snow),
            QGVAR(V_CarrierLite_Multicam_Snow),
            QGVAR(V_CarrierRig_Multicam_Snow),
            QGVAR(V_CarrierLiteNoBelt_Multicam_Snow),
            QGVAR(V_Rangemaster_Multicam_Snow),
            QGVAR(V_ChestRig_Multicam_Snow),
            QGVAR(V_JCACompact_Multicam_Snow),
            QGVAR(V_JCACQB_Multicam_Snow),
            QGVAR(V_JCACrew_Multicam_Snow),
            QGVAR(V_JCACommand_Multicam_Snow),
            QGVAR(V_JCAHolster_Multicam_Snow),
            QGVAR(V_JCARecon_Multicam_Snow),
            QGVAR(V_JCATactical_Multicam_Snow),
            QGVAR(V_CarrierSpec_Multicam_Woodland),
            QGVAR(V_CarrierGL_Multicam_Woodland),
            QGVAR(V_CarrierLite_Multicam_Woodland),
            QGVAR(V_CarrierRig_Multicam_Woodland),
            QGVAR(V_CarrierLiteNoBelt_Multicam_Woodland),
            QGVAR(V_Rangemaster_Multicam_Woodland),
            QGVAR(V_ChestRig_Multicam_Woodland),
            QGVAR(V_JCACompact_Multicam_Woodland),
            QGVAR(V_JCACQB_Multicam_Woodland),
            QGVAR(V_JCACrew_Multicam_Woodland),
            QGVAR(V_JCACommand_Multicam_Woodland),
            QGVAR(V_JCAHolster_Multicam_Woodland),
            QGVAR(V_JCARecon_Multicam_Woodland),
            QGVAR(V_JCATactical_Multicam_Woodland),
            QGVAR(V_JCACompact_GB_MTP),
            QGVAR(V_JCACQB_GB_MTP),
            QGVAR(V_JCACrew_GB_MTP),
            QGVAR(V_JCACommand_GB_MTP),
            QGVAR(V_JCAHolster_GB_MTP),
            QGVAR(V_JCARecon_GB_MTP),
            QGVAR(V_JCATactical_GB_MTP),
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "A3_Characters_F",
            "vests_f_JCA_IE"
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
