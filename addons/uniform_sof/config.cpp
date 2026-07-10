#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(SOF_B_SFFatigues_rgr),
            QGVAR(SOF_B_SFFatigues_Shortsleeve_rgr),
            QGVAR(SOF_B_SFFatigues_mcam),
            QGVAR(SOF_B_SFFatigues_Shortsleeve_mcam),
            QGVAR(SOF_B_SFFatigues_tna),
            QGVAR(SOF_B_SFFatigues_Shortsleeve_tna),
            QGVAR(SOF_B_SFFatigues_wdl),
            QGVAR(SOF_B_SFFatigues_Shortsleeve_wdl),
            QGVAR(SOF_B_SFFatigues_mrpt),
            QGVAR(SOF_B_SFFatigues_Shortsleeve_mrpt),
            QGVAR(SOF_B_SFFatigues_mrpt_des),
            QGVAR(SOF_B_SFFatigues_Shortsleeve_mrpt_des),
            QGVAR(SOF_B_SFFatigues_nwu),
            QGVAR(SOF_B_SFFatigues_Shortsleeve_nwu),
            QGVAR(SOF_B_SFFatigues_ocp),
            QGVAR(SOF_B_SFFatigues_Shortsleeve_ocp),
            QGVAR(Item_SOF_H_Opscore_rgr),
            QGVAR(Item_SOF_H_Opscore_snd),
            QGVAR(Item_SOF_H_Opscore_blk),
            QGVAR(Item_SOF_H_Opscore_oli),
            QGVAR(Item_SOF_H_OpscoreSpec_rgr),
            QGVAR(Item_SOF_H_OpscoreSpec_snd),
            QGVAR(Item_SOF_H_OpscoreSpec_blk),
            QGVAR(Item_SOF_H_OpscoreSpec_oli),
            QGVAR(Item_SOF_H_Opscore_Cover_rgr),
            QGVAR(Item_SOF_H_Opscore_CoverSpec_rgr),
            QGVAR(Item_SOF_H_Opscore_CoverCamo_rgr),
            QGVAR(Item_SOF_H_Opscore_Cover_mcam),
            QGVAR(Item_SOF_H_Opscore_CoverSpec_mcam),
            QGVAR(Item_SOF_H_Opscore_CoverCamo_mcam),
            QGVAR(Item_SOF_H_Opscore_Cover_tna),
            QGVAR(Item_SOF_H_Opscore_CoverSpec_tna),
            QGVAR(Item_SOF_H_Opscore_Cover_wdl),
            QGVAR(Item_SOF_H_Opscore_CoverSpec_wdl),
            QGVAR(Item_SOF_H_Opscore_Cover_mrpt_wdl),
            QGVAR(Item_SOF_H_Opscore_CoverSpec_mrpt_wdl),
            QGVAR(Item_SOF_H_Opscore_Cover_mrpt_des),
            QGVAR(Item_SOF_H_Opscore_CoverSpec_mrpt_des),
            QGVAR(Item_SOF_H_Opscore_Cover_nwu),
            QGVAR(Item_SOF_H_Opscore_CoverSpec_nwu),
            QGVAR(Item_SOF_H_BaseballCap_rgr),
            QGVAR(Item_SOF_H_BaseballCapSpec_rgr),
            QGVAR(Item_SOF_H_BaseballCap_khk),
            QGVAR(Item_SOF_H_BaseballCapSpec_khk),
            QGVAR(Item_SOF_H_BaseballCap_mcam),
            QGVAR(Item_SOF_H_BaseballCapSpec_mcam),
            QGVAR(Item_SOF_H_BaseballCapSpec_tna),
            QGVAR(Item_SOF_H_BaseballCapSpec_wdl),
            QGVAR(Item_SOF_V_AVSCarrier_Lite_rgr),
            QGVAR(Item_SOF_V_AVSCarrier_Lite_rgr_noflag),
            QGVAR(Item_SOF_V_AVSCarrier_Lite_mcam),
            QGVAR(Item_SOF_V_AVSCarrier_Lite_tna),
            QGVAR(Item_SOF_V_AVSCarrier_Lite_wdl),
            QGVAR(Item_SOF_U_B_SFFatigues_rgr),
            QGVAR(Item_SOF_U_B_SFFatigues_Shortsleeve_rgr),
            QGVAR(Item_SOF_U_B_SFFatigues_mcam),
            QGVAR(Item_SOF_U_B_SFFatigues_Shortsleeve_mcam),
            QGVAR(Item_SOF_U_B_SFFatigues_tna),
            QGVAR(Item_SOF_U_B_SFFatigues_Shortsleeve_tna),
            QGVAR(Item_SOF_U_B_SFFatigues_wdl),
            QGVAR(Item_SOF_U_B_SFFatigues_Shortsleeve_wdl),
            QGVAR(Item_SOF_U_B_SFFatigues_mrpt),
            QGVAR(Item_SOF_U_B_SFFatigues_Shortsleeve_mrpt),
            QGVAR(Item_SOF_U_B_SFFatigues_mrpt_des),
            QGVAR(Item_SOF_U_B_SFFatigues_Shortsleeve_mrpt_des),
            QGVAR(Item_SOF_U_B_SFFatigues_nwu),
            QGVAR(Item_SOF_U_B_SFFatigues_Shortsleeve_nwu),
            QGVAR(Item_SOF_H_Opscore_Cover_ocp),
            QGVAR(Item_SOF_H_Opscore_CoverSpec_ocp),
            QGVAR(Item_SOF_H_Opscore_CoverCamo_ocp),
            QGVAR(Item_SOF_U_B_SFFatigues_ocp),
            QGVAR(Item_SOF_U_B_SFFatigues_Shortsleeve_ocp),
            QGVAR(Item_SOF_V_AVSCarrier_Lite_ocp)
        };
        weapons[] = {
            QGVAR(SOF_H_Opscore_rgr),
            QGVAR(SOF_H_Opscore_snd),
            QGVAR(SOF_H_Opscore_blk),
            QGVAR(SOF_H_Opscore_oli),
            QGVAR(SOF_H_OpscoreSpec_rgr),
            QGVAR(SOF_H_OpscoreSpec_snd),
            QGVAR(SOF_H_OpscoreSpec_blk),
            QGVAR(SOF_H_OpscoreSpec_oli),
            QGVAR(SOF_H_Opscore_Cover_rgr),
            QGVAR(SOF_H_Opscore_CoverSpec_rgr),
            QGVAR(SOF_H_Opscore_CoverCamo_rgr),
            QGVAR(SOF_H_Opscore_Cover_mcam),
            QGVAR(SOF_H_Opscore_CoverSpec_mcam),
            QGVAR(SOF_H_Opscore_CoverCamo_mcam),
            QGVAR(SOF_H_Opscore_Cover_tna),
            QGVAR(SOF_H_Opscore_CoverSpec_tna),
            QGVAR(SOF_H_Opscore_Cover_wdl),
            QGVAR(SOF_H_Opscore_CoverSpec_wdl),
            QGVAR(SOF_H_Opscore_Cover_mrpt_wdl),
            QGVAR(SOF_H_Opscore_CoverSpec_mrpt_wdl),
            QGVAR(SOF_H_Opscore_Cover_mrpt_des),
            QGVAR(SOF_H_Opscore_CoverSpec_mrpt_des),
            QGVAR(SOF_H_Opscore_Cover_nwu),
            QGVAR(SOF_H_Opscore_CoverSpec_nwu),
            QGVAR(SOF_H_BaseballCap_rgr),
            QGVAR(SOF_H_BaseballCapSpec_rgr),
            QGVAR(SOF_H_BaseballCap_khk),
            QGVAR(SOF_H_BaseballCapSpec_khk),
            QGVAR(SOF_H_BaseballCap_mcam),
            QGVAR(SOF_H_BaseballCapSpec_mcam),
            QGVAR(SOF_H_BaseballCapSpec_tna),
            QGVAR(SOF_H_BaseballCapSpec_wdl),
            QGVAR(SOF_V_AVSCarrier_Lite_rgr),
            QGVAR(SOF_V_AVSCarrier_Lite_rgr_noflag),
            QGVAR(SOF_V_AVSCarrier_Lite_mcam),
            QGVAR(SOF_V_AVSCarrier_Lite_tna),
            QGVAR(SOF_V_AVSCarrier_Lite_wdl),
            QGVAR(SOF_U_B_SFFatigues_rgr),
            QGVAR(SOF_U_B_SFFatigues_Shortsleeve_rgr),
            QGVAR(SOF_U_B_SFFatigues_mcam),
            QGVAR(SOF_U_B_SFFatigues_Shortsleeve_mcam),
            QGVAR(SOF_U_B_SFFatigues_tna),
            QGVAR(SOF_U_B_SFFatigues_Shortsleeve_tna),
            QGVAR(SOF_U_B_SFFatigues_wdl),
            QGVAR(SOF_U_B_SFFatigues_Shortsleeve_wdl),
            QGVAR(SOF_U_B_SFFatigues_mrpt),
            QGVAR(SOF_U_B_SFFatigues_Shortsleeve_mrpt),
            QGVAR(SOF_U_B_SFFatigues_mrpt_des),
            QGVAR(SOF_U_B_SFFatigues_Shortsleeve_mrpt_des),
            QGVAR(SOF_U_B_SFFatigues_nwu),
            QGVAR(SOF_U_B_SFFatigues_Shortsleeve_nwu),
            QGVAR(SOF_H_Opscore_Cover_ocp),
            QGVAR(SOF_H_Opscore_CoverSpec_ocp),
            QGVAR(SOF_H_Opscore_CoverCamo_ocp),
            QGVAR(SOF_U_B_SFFatigues_ocp),
            QGVAR(SOF_U_B_SFFatigues_Shortsleeve_ocp),
            QGVAR(SOF_V_AVSCarrier_Lite_ocp)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "SOF_Characters",
            "A3_Characters_F",
            "ax_2035_ocp_army_replace_jamsof",
            "ace_hearing"
        };
        skipWhenMissingDependencies = 1;
        authorUrl = "https://www.ghostsofbattle.com/";
        author = QAUTHOR;
        authors[] = {""};
        VERSION_CONFIG;
    };
};

class CfgEditorSubcategories {
    class EdSubcat_SOF_Headgear {
        displayName = "[Ghost] SOF - Headgear";
    };
    class EdSubcat_SOF_Vests {
        displayName = "[Ghost] SOF - Vests";
    };
    class EdSubcat_SOF_Uniforms {
        displayName = "[Ghost] SOF - Uniforms";
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "XtdGear.hpp"
