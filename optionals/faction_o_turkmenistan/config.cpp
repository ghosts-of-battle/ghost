#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "ghost_o_turkmenistan_CSPC_BTRT_U",
            "ghost_o_turkmenistan_SL",
            "ghost_o_turkmenistan_TL",
            "ghost_o_turkmenistan_RFM",
            "ghost_o_turkmenistan_BRFM",
            "ghost_o_turkmenistan_GL",
            "ghost_o_turkmenistan_LAT",
            "ghost_o_turkmenistan_RPG",
            "ghost_o_turkmenistan_CLS",
            "ghost_o_turkmenistan_DMR",
            "ghost_o_turkmenistan_AR",
            "ghost_o_turkmenistan_MG",
            "ghost_o_turkmenistan_RFM_U",
            "ghost_o_turkmenistan_Officer",
            "ghost_o_turkmenistan_Crew",
            "ghost_o_turkmenistan_Helipilot",
            "ghost_o_turkmenistan_JetPilot",
            "ghost_o_turkmenistan_ST_RFM",
            "ghost_o_turkmenistan_ST_BRFM",
            "ghost_o_turkmenistan_ST_DMR",
            "ghost_o_turkmenistan_ST_GL",
            "ghost_o_turkmenistan_ST_SL",
            "ghost_o_turkmenistan_ST_TL",
            "ghost_o_turkmenistan_ST_RFM_RPG",
            "ghost_o_turkmenistan_ST_RFM_LAT",
            "ghost_o_turkmenistan_T100",
            "ghost_o_turkmenistan_Hunter",
            "ghost_o_turkmenistan_Hunter_GMG",
            "ghost_o_turkmenistan_Hunter_HMG",
            "ghost_o_turkmenistan_Offroad_UP_F",
            "ghost_o_turkmenistan_Offroad_UP_HMG_F",
            "ghost_o_turkmenistan_Offroad_UP_AT_F",
            "ghost_o_turkmenistan_LSVO_F",
            "ghost_o_turkmenistan_LSVO_MG_F",
            "ghost_o_turkmenistan_LSVO_AT_F",
            "ghost_o_turkmenistan_Offroad_F",
            "ghost_o_turkmenistan_Offroad_M2_F",
            "ghost_o_turkmenistan_Offroad_AT_F",
            "ghost_o_turkmenistan_ZU23_F",
            "ghost_o_turkmenistan_M2_Low",
            "ghost_o_turkmenistan_M2_High",
            "ghost_o_turkmenistan_MH9",
            "ghost_o_turkmenistan_AH9",
            "ghost_o_turkmenistan_Zamak_ZU23",
            "ghost_o_turkmenistan_Zamak_C",
            "ghost_o_turkmenistan_Zamak_T",
            "ghost_o_turkmenistan_BTRT",
            "ghost_o_turkmenistan_BTRT_U",
            "ghost_o_turkmenistan_CH67_U_F",
            "ghost_o_turkmenistan_KA60_U",
            "ghost_o_turkmenistan_KA60_U_UP",
            "ghost_o_turkmenistan_KA60_A",
            "ghost_o_turkmenistan_KA60_A_UP",
            "ghost_o_turkmenistan_Mi48",
            "ghost_o_turkmenistan_To199",
            "ghost_o_turkmenistan_MSE3_RCWS",
            "ghost_o_turkmenistan_MSE3_HMG",
            "ghost_o_turkmenistan_MSE3_U",
            "ghost_o_turkmenistan_Moose",
            "ghost_o_turkmenistan_Moose_C",
            "ghost_o_turkmenistan_Moose_MRL",
            "ghost_o_turkmenistan_Moose_M2"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "data_f_lxWS_Loadorder",
            "RF_Data_Loadorder",
            "A3_Characters_F_Enoch"
        };
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        authors[] = {"Ghost"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
