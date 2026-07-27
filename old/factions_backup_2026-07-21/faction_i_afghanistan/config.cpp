#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // infantry
            QGVAR(Soldier_SL_F),
            QGVAR(RadioOperator_F),
            QGVAR(soldier_UAV_F),
            QGVAR(Soldier_LAT_F),
            QGVAR(Soldier_M_F),
            QGVAR(Soldier_TL_F),
            QGVAR(Soldier_AR_F),
            QGVAR(Soldier_A_F),
            QGVAR(Medic_F),
            QGVAR(Soldier_GL_F),
            QGVAR(Soldier_F),
            QGVAR(soldier_AA_F),
            QGVAR(soldier_AAA_F),
            QGVAR(soldier_AAR_F),
            QGVAR(Engineer_F),
            QGVAR(Soldier_Exp_F),
            QGVAR(Crew_F),
            // vehicles
            QGVAR(MRAP_02_F),
            QGVAR(Truck_02_transport_F),
            QGVAR(Truck_02_MRL_F),
            QGVAR(Offroad_AA_lxWS), QGVAR(Truck_02_aa_lxWS), QGVAR(Pickup_aat_rf),
            QGVAR(Wheeled_04_export_F),
            QGVAR(APC_Tracked_02_30mm_lxWS),
            QGVAR(MBT_02_cannon_F),
            QGVAR(APC_Wheeled_04_cannon_v2_F),
            // drones
            QGVAR(Aegis_UAV_07_F),
            QGVAR(Crocus_AP), QGVAR(Crocus_AP_TI), QGVAR(Crocus_AT), QGVAR(Crocus_AT_TI),
            QGVAR(orion_F), QGVAR(orion_F_KAB20), QGVAR(orion_F_KAB50), QGVAR(orion_F_KORNET),
            QGVAR(orlan_F), QGVAR(RQ11B_UAV), QGVAR(HUNTER_SP_UAV),
            QGVAR(KVN_AP), QGVAR(KVN_AP_TI), QGVAR(KVN_AT), QGVAR(KVN_AT_TI),
            QGVAR(UAV_02_lxWS), QGVAR(G_UAV_02_IED_lxWS), QGVAR(UAV_01_F),
            QGVAR(AM_UAV_02_IED_F), QGVAR(Atlas_UAV_02_lxWS), QGVAR(DRONE40_UAV_HE)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            // --- Aegis / Atlas source classes we inherit from ---
            "A3_Atlas_Characters_F_Atlas",
            "A3_Atlas_Armor_F_Atlas_MBT_02",
            "A3_Atlas_Armor_F_Atlas_APC_Wheeled_04",
            "A3_Atlas_Armor_F_Atlas_APC_Tracked_02",
            "A3_Atlas_Soft_F_Atlas_Truck_02",
            "A3_Atlas_Soft_F_Atlas_MRAP_02",
            "A3_Aegis_Air_F_Aegis_UAV_07",
            // --- futureAmmo: units spawn with FA yellow-tracer magazines ---
            "ghostfa_ammo",
            "ghostfa_aegis",
            "ghostfa_maincaliber",
            "ghostfa_mediumcaliber",
            "ghostfa_grenade_40mm",
            "ghostfa_rpg",
            "ghostfa_missiles",
            // --- external drone mods (Drones groups reference their IND UAV classes) ---
            "ArmaFPV_Data",         // I_Crocus_AP/AT (+_TI)
            "vnd_Data",             // I_KVN_AP/AT (+_TI)
            "orion",                // orion_F_IND + KAB20/KAB50/KORNET
            "orlan_main",           // orlan_F_IND
            "gx_drones_core",
            "A3_Atlas_Air_F_Atlas_UAV_02_lxWS",  // Atlas_I_I_UAV_02_lxWS
            "A3_AddGis_Air_F_AddGis",  // AddGis_I_AM_UAV_02_IED_F
            "gx_drones_uav_rq11b",  // GX_I_RQ11B_UAV
            "gx_drones_uav_hunter", // GX_I_HUNTER_SP_UAV
            "gx_drones_uav_drone40",
            "data_f_lxWS_Loadorder", // Western Sahara CDLC: I_UAV_02_lxWS (Bustard), I_G_UAV_02_IED_lxWS, I_G_Offroad_AA_lxWS, I_A_Truck_02_aa_lxWS
            "RF_Data_Loadorder"  // Reaction Forces CDLC: I_Pickup_aat_rf
        };
        skipWhenMissingDependencies = 1;
        author = "Ghosts of Battle";
        authors[] = {QAUTHOR};
        authorUrl = URL;
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
