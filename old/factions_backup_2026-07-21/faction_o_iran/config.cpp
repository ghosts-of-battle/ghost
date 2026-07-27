#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // infantry — main line
            QGVAR(Soldier_F), QGVAR(Soldier_lite_F), QGVAR(Soldier_GL_F), QGVAR(Soldier_AR_F),
            QGVAR(Soldier_SL_F), QGVAR(Soldier_TL_F), QGVAR(soldier_M_F), QGVAR(Soldier_LAT_F),
            QGVAR(Soldier_AT_F), QGVAR(Soldier_AA_F), QGVAR(medic_F), QGVAR(soldier_repair_F),
            QGVAR(soldier_exp_F), QGVAR(Soldier_A_F), QGVAR(engineer_F), QGVAR(officer_F),
            QGVAR(crew_F), QGVAR(soldier_PG_F), QGVAR(soldier_UAV_F), QGVAR(RadioOperator_F),
            QGVAR(Soldier_CBRN_F), QGVAR(Soldier_CQ_F), QGVAR(Soldier_HAT_F),
            QGVAR(Sharpshooter_F), QGVAR(HeavyGunner_F),
            // pilots
            QGVAR(helipilot_F), QGVAR(Pilot_F), QGVAR(helicrew_F), QGVAR(Fighter_Pilot_F),
            // support
            QGVAR(Soldier_AAR_F), QGVAR(Soldier_AAT_F), QGVAR(Soldier_AAA_F), QGVAR(Soldier_AHAT_F),
            QGVAR(support_MG_F), QGVAR(support_GMG_F), QGVAR(support_Mort_F),
            QGVAR(support_AMG_F), QGVAR(support_AMort_F),
            // divers
            QGVAR(diver_F), QGVAR(diver_TL_F), QGVAR(diver_exp_F),
            // recon / snipers
            QGVAR(spotter_F), QGVAR(sniper_F), QGVAR(Pathfinder_F),
            QGVAR(recon_F), QGVAR(recon_M_F), QGVAR(recon_LAT_F), QGVAR(recon_medic_F),
            QGVAR(recon_exp_F), QGVAR(recon_JTAC_F), QGVAR(recon_TL_F), QGVAR(recon_CQ_F),
            QGVAR(recon_AR_F), QGVAR(recon_GL_F),
            // urban line
            QGVAR(soldierU_AR_F), QGVAR(soldierU_AAR_F), QGVAR(soldierU_LAT_F), QGVAR(soldierU_AT_F),
            QGVAR(soldierU_AAT_F), QGVAR(soldierU_AA_F), QGVAR(soldierU_AAA_F), QGVAR(soldierU_TL_F),
            QGVAR(soldierU_SL_F), QGVAR(soldierU_medic_F), QGVAR(soldierU_repair_F), QGVAR(soldierU_exp_F),
            QGVAR(engineer_U_F), QGVAR(soldierU_M_F), QGVAR(soldierU_A_F), QGVAR(soldierU_GL_F),
            QGVAR(soldierU_CQ_F), QGVAR(soldierU_CBRN_F),
            QGVAR(Urban_Sharpshooter_F), QGVAR(Urban_HeavyGunner_F), QGVAR(Urban_RadioOperator_F),
            // armor
            QGVAR(MBT_02_cannon_F), QGVAR(MBT_04_cannon_F), QGVAR(MBT_04_command_F),
            QGVAR(APC_Tracked_02_cannon_F), QGVAR(APC_Tracked_02_AA_F), QGVAR(APC_Tracked_02_30mm_lxWS),
            QGVAR(APC_Wheeled_02_rcws_v2_F),
            // soft
            QGVAR(MRAP_02_F), QGVAR(MRAP_02_hmg_F), QGVAR(MRAP_02_gmg_F),
            QGVAR(Truck_02_covered_F), QGVAR(Truck_02_transport_F), QGVAR(Truck_02_box_F),
            QGVAR(Truck_02_medical_F), QGVAR(Truck_02_Ammo_F), QGVAR(Truck_02_fuel_F),
            QGVAR(Truck_02_MRL_F), QGVAR(Truck_02_cargo_F), QGVAR(Truck_02_flatbed_F),
            QGVAR(UGV_01_rcws_F), QGVAR(UGV_01_medical_F),
            // air
            QGVAR(Plane_Fighter_03_dynamicLoadout_F), QGVAR(Plane_Fighter_03_Cluster_F),
            QGVAR(VTOL_02_infantry_dynamicLoadout_F), QGVAR(VTOL_02_vehicle_dynamicLoadout_F),
            QGVAR(Plane_Transport_01_infantry_F), QGVAR(Plane_Transport_01_vehicle_F),
            QGVAR(Heli_Attack_02_dynamicLoadout_F), QGVAR(Heli_Light_02_dynamicLoadout_F),
            QGVAR(Heli_Light_02_unarmed_F),
            // statics
            QGVAR(HMG_01_F), QGVAR(HMG_01_high_F), QGVAR(GMG_01_F), QGVAR(GMG_01_high_F),
            QGVAR(Mortar_01_F), QGVAR(Static_AT_F), QGVAR(Static_AA_F),
            QGVAR(HMG_02_F), QGVAR(HMG_02_high_F), QGVAR(Static_Designator_02_F),
            // boats
            QGVAR(Boat_Transport_02_F), QGVAR(Boat_Armed_01_hmg_F), QGVAR(SDV_01_F),
            // supplies
            QGVAR(supplyCrate_F),
            // drones
            QGVAR(Rev_Darter), QGVAR(Rev_Bustard),
            QGVAR(DRONE40_UAV_HE), QGVAR(DRONE40_UAV_RECON),
            QGVAR(UAV_RC40_HE_RF), QGVAR(UAV_RC40_SENSOR_RF),
            QGVAR(HONEYBADGER_UGV_AT), QGVAR(HUNTER_SP_UAV),
            QGVAR(orion_F), QGVAR(orion_F_KAB20), QGVAR(orion_F_KAB50), QGVAR(orion_F_KORNET),
            QGVAR(orlan_F), QGVAR(RQ11B_UAV),
            QGVAR(Crocus_AP), QGVAR(Crocus_AP_TI), QGVAR(Crocus_AT), QGVAR(Crocus_AT_TI),
            QGVAR(KVN_AP), QGVAR(KVN_AP_TI), QGVAR(KVN_AT), QGVAR(KVN_AT_TI),
            QGVAR(Sting_F), QGVAR(Sting_TI_F),
            QGVAR(UAV_02_lxWS), QGVAR(G_UAV_02_IED_lxWS),
            QGVAR(UAV_02_dynamicLoadout_F), QGVAR(T_UAV_04_CAS_F)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            // --- Aegis (patched CSAT/OPF_F source classes) ---
            "A3_Aegis_Data_F_Aegis",
            "A3_Aegis_Characters_F_Aegis",
            "A3_Aegis_Armor_F_Aegis",
            "A3_Aegis_Air_F_Aegis",
            "A3_Aegis_Soft_F_Aegis",
            "A3_Aegis_Static_F_Aegis",
            "A3_Aegis_Boat_F_Aegis",
            "A3_Aegis_Supplies_F_Aegis",
            // --- ax_alternateiran: re-gears the CSAT (OPF_F) source classes in-place
            //     (PCU hex uniforms + AX helmets); loads after Aegis so its look wins.
            //     Units inherit this gear; only faction + FA magazines are overridden. ---
            "A3_AddGis_Characters_F_AddGis",
            "ax_characters_f_iran_grfu",
            "ax_weapons_f_iran_grfu",
            "ax_faction_iran_grfu",
            // --- futureAmmo: units spawn with FA green-tracer magazines ---
            "ghostfa_ammo",
            "ghostfa_aegis",
            "ghostfa_maincaliber",
            "ghostfa_mediumcaliber",
            "ghostfa_grenade_40mm",
            "ghostfa_rpg",
            "ghostfa_missiles",
            "ghostfa_vehicles",
            // --- external drone mods (Drones groups reference their East UAV classes) ---
            "ArmaFPV_Data",         // O_Crocus_AP/AT (+_TI)
            "vnd_Data",             // O_KVN_AP/AT (+_TI)
            "orion",                // orion_F_OPF + KAB20/KAB50/KORNET_OPF
            "orlan_main",           // orlan_F_OPF
            "gx_drones_core",
            "Rev_deployable_darter",  // O_Rev_Darter
            "Rev_deployable_bustard",  // O_Rev_Bustard
            "RF_Data_Loadorder",  // Reaction Forces CDLC: O_UAV_RC40_HE/SENSOR_RF
            "gx_drones_uav_rq11b",  // GX_O_RQ11B_UAV
            "gx_drones_uav_hunter", // GX_O_HUNTER_SP_UAV
            "gx_drones_uav_drone40",
            "gx_drones_ugv_honeybadger",
            "sting_data",
            "data_f_lxWS_Loadorder" // Western Sahara CDLC: O_UAV_02_lxWS, O_G_UAV_02_IED_lxWS
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
