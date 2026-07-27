#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            QGVAR(V_OdinRig_ocp),
            QGVAR(V_OdinRig_mtp),
            QGVAR(V_OdinRig_mcam),
            QGVAR(V_OdinRig_mcam_wdl),
            QGVAR(V_OdinRig_mcam_snow),
            QGVAR(V_OdinRig_CQB_ocp),
            QGVAR(V_OdinRig_CQB_mtp),
            QGVAR(V_OdinRig_CQB_mcam),
            QGVAR(V_OdinRig_CQB_mcam_wdl),
            QGVAR(V_OdinRig_CQB_mcam_snow),
            QGVAR(V_OdinRig_GL_ocp),
            QGVAR(V_OdinRig_GL_mtp),
            QGVAR(V_OdinRig_GL_mcam),
            QGVAR(V_OdinRig_GL_mcam_wdl),
            QGVAR(V_OdinRig_GL_mcam_snow),
            QGVAR(V_OdinRig_Lite_ocp),
            QGVAR(V_OdinRig_Lite_mtp),
            QGVAR(V_OdinRig_Lite_mcam),
            QGVAR(V_OdinRig_Lite_mcam_wdl),
            QGVAR(V_OdinRig_Lite_mcam_snow)
        };
        requiredVersion = REQUIRED_VERSION;
        // Atlas owns the V_CarrierRigBW geometry and materials this points at, so
        // it has to load first; without it the vests skip rather than go invisible.
        requiredAddons[] = {
            "ghost_main",
            "A3_Characters_F",
            "A3_Atlas_Characters_F_Atlas",
            "acp_main"
        };
        skipWhenMissingDependencies = 1;
        authorUrl = "https://www.ghostsofbattle.com/";
        author = QAUTHOR;
        authors[] = {"Jamie (Aegis Team)"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "XtdGear.hpp"
