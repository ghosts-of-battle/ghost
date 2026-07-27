#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // infantry — regulars
            QGVAR(soldier_F),
            QGVAR(soldier_A_F),
            QGVAR(soldier_AR_F),
            QGVAR(soldier_GL_F),
            QGVAR(soldier_M_F),
            QGVAR(soldier_AA_F),
            QGVAR(soldier_AT_F),
            QGVAR(soldier_LAT_F),
            QGVAR(soldier_SL_F),
            QGVAR(soldier_TL_F),
            QGVAR(medic_F),
            QGVAR(RadioOperator_F),
            QGVAR(soldier_UAV_F),
            QGVAR(engineer_F),
            QGVAR(crew_F),
            QGVAR(officer_F),
            QGVAR(helipilot_F),
            QGVAR(helicrew_F),
            QGVAR(Fighter_Pilot_F),
            // infantry — conscripts
            QGVAR(soldier_1_conscript_F),
            QGVAR(soldier_2_conscript_F),
            QGVAR(soldier_SL_conscript_F),
            QGVAR(soldier_TL_conscript_F),
            QGVAR(soldier_M_conscript_F),
            QGVAR(soldier_AR_conscript_F),
            QGVAR(soldier_LAT_conscript_F),
            QGVAR(medic_conscript_F),
            QGVAR(RadioOperator_conscript_F),
            QGVAR(Soldier_GL_Conscript_F),
            // cars / soft
            QGVAR(Quadbike_01_F),
            QGVAR(LSV_02_armed_F),
            QGVAR(LSV_02_unarmed_F),
            QGVAR(LSV_02_AT_F),
            QGVAR(Truck_02_F),
            QGVAR(Truck_02_transport_F),
            QGVAR(Truck_02_box_F),
            QGVAR(Truck_02_medical_F),
            QGVAR(Truck_02_Ammo_F),
            QGVAR(Truck_02_fuel_F),
            QGVAR(Truck_02_cargo_F),
            QGVAR(Truck_02_flatbed_F),
            QGVAR(Truck_02_aa_lxWS),
            QGVAR(Truck_02_MRL_F),
            // armor
            QGVAR(APC_Wheeled_02_rcws_v2_F),
            QGVAR(APC_Wheeled_02_hmg_lxWS),
            QGVAR(APC_Wheeled_02_unarmed_lxWS),
            QGVAR(APC_Tracked_02_cannon_F),
            QGVAR(MBT_02_cannon_F),
            // air
            QGVAR(Heli_Light_02_dynamicLoadout_F),
            QGVAR(Heli_Light_02_unarmed_F),
            QGVAR(Heli_Attack_02_dynamicLoadout_F),
            QGVAR(Heli_Attack_04_F),
            QGVAR(Plane_Fighter_03_dynamicLoadout_F),
            // statics
            QGVAR(Mortar_01_F),
            QGVAR(HMG_01_F),
            QGVAR(HMG_01_high_F),
            QGVAR(HMG_02_F),
            QGVAR(HMG_02_high_F),
            QGVAR(GMG_01_F),
            QGVAR(GMG_01_high_F),
            QGVAR(Static_AT_F),
            QGVAR(Static_AA_F),
            // supplies
            QGVAR(supplyCrate_F),
            // drones
            QGVAR(Crocus_AP), QGVAR(Crocus_AP_TI), QGVAR(Crocus_AT), QGVAR(Crocus_AT_TI),
            QGVAR(KVN_AP), QGVAR(KVN_AP_TI), QGVAR(KVN_AT), QGVAR(KVN_AT_TI),
            QGVAR(orion_F), QGVAR(orion_F_KAB20), QGVAR(orion_F_KAB50), QGVAR(orion_F_KORNET),
            QGVAR(orlan_F), QGVAR(RQ11B_UAV), QGVAR(HUNTER_SP_UAV),
            QGVAR(UAV_02_lxWS), QGVAR(G_UAV_02_IED_lxWS), QGVAR(UAV_RC40_HE_RF),
            QGVAR(DRONE40_UAV_HE), QGVAR(Rev_Darter), QGVAR(UAV_01_F),
            QGVAR(HONEYBADGER_UGV_AT), QGVAR(Rev_Bustard)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            // --- Aegis / Atlas source classes we inherit from ---
            "A3_Atlas_Characters_F_Atlas",
            "A3_Atlas_Soft_F_Atlas_Quadbike_01",
            "A3_Atlas_Soft_F_Atlas_LSV_02",
            "A3_Atlas_Soft_F_Atlas_Truck_02",
            "A3_Atlas_Armor_F_Atlas_APC_Wheeled_02",
            "A3_Atlas_Armor_F_Atlas_APC_Tracked_02",
            "A3_Atlas_Armor_F_Atlas_MBT_02",
            "A3_Atlas_Air_F_Atlas_Heli_Light_02",
            "A3_Atlas_Air_F_Atlas_Heli_Attack_02",
            "A3_Atlas_Air_F_Atlas_Heli_Attack_04",
            "A3_Atlas_Air_F_Atlas_Plane_Fighter_03",
            "A3_Atlas_Static_F_Atlas_Mortar_01",
            "A3_Atlas_Static_F_Atlas_HMG_01",
            "A3_Atlas_Static_F_Atlas_HMG_02",
            "A3_Atlas_Static_F_Atlas_GMG_01",
            "A3_Atlas_Static_F_Atlas_AT_01",
            "A3_Atlas_Static_F_Atlas_AA_01",
            "A3_Atlas_Supplies_F_Atlas_Ammoboxes",
            // --- AK-12/RPK-12 are vanilla A3 weapons (no addon dep); SLR marksman = WS CDLC (below) ---
            // --- external drone mods (Drones groups reference their East UAV classes) ---
            "ArmaFPV_Data",         // O_Crocus_AP/AT (+_TI)
            "vnd_Data",             // O_KVN_AP/AT (+_TI)
            "orion",                // orion_F_OPF + KAB20/KAB50/KORNET_OPF
            "orlan_main",           // orlan_F_OPF
            "gx_drones_core",
            "Rev_deployable_darter",  // O_Rev_Darter
            "Rev_deployable_bustard",  // O_Rev_Bustard
            "RF_Data_Loadorder",  // Reaction Forces CDLC: O_UAV_RC40_HE_RF
            "gx_drones_uav_rq11b",  // GX_O_RQ11B_UAV
            "gx_drones_uav_hunter", // GX_O_HUNTER_SP_UAV
            "gx_drones_uav_drone40",
            "gx_drones_ugv_honeybadger",
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
