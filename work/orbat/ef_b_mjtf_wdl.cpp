//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class EF_B_MJTF_Wdl {
        displayName = "MJTF (Woodland)";
        side = 1;
        priority = 1;
        icon = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
        flag = "\a3\Data_f\Flags\flag_nato_co.paa";
    };
};

class CfgVehicles {

    class B_T_APC_Wheeled_01_atgm_lxWS_v2;
    class B_T_APC_Wheeled_01_atgm_lxWS_v2_OCimport_01 : B_T_APC_Wheeled_01_atgm_lxWS_v2 { scope = 0; class EventHandlers; };
    class B_T_APC_Wheeled_01_atgm_lxWS_v2_OCimport_02 : B_T_APC_Wheeled_01_atgm_lxWS_v2_OCimport_01 { class EventHandlers; };

    class B_T_APC_Wheeled_01_cannon_v2_F;
    class B_T_APC_Wheeled_01_cannon_v2_F_OCimport_01 : B_T_APC_Wheeled_01_cannon_v2_F { scope = 0; class EventHandlers; };
    class B_T_APC_Wheeled_01_cannon_v2_F_OCimport_02 : B_T_APC_Wheeled_01_cannon_v2_F_OCimport_01 { class EventHandlers; };

    class B_T_APC_Wheeled_01_command_lxWS;
    class B_T_APC_Wheeled_01_command_lxWS_OCimport_01 : B_T_APC_Wheeled_01_command_lxWS { scope = 0; class EventHandlers; };
    class B_T_APC_Wheeled_01_command_lxWS_OCimport_02 : B_T_APC_Wheeled_01_command_lxWS_OCimport_01 { class EventHandlers; };

    class B_T_APC_Wheeled_01_medical_F;
    class B_T_APC_Wheeled_01_medical_F_OCimport_01 : B_T_APC_Wheeled_01_medical_F { scope = 0; class EventHandlers; };
    class B_T_APC_Wheeled_01_medical_F_OCimport_02 : B_T_APC_Wheeled_01_medical_F_OCimport_01 { class EventHandlers; };

    class B_T_APC_Wheeled_01_mortar_lxWS;
    class B_T_APC_Wheeled_01_mortar_lxWS_OCimport_01 : B_T_APC_Wheeled_01_mortar_lxWS { scope = 0; class EventHandlers; };
    class B_T_APC_Wheeled_01_mortar_lxWS_OCimport_02 : B_T_APC_Wheeled_01_mortar_lxWS_OCimport_01 { class EventHandlers; };

    class EF_AAV9_50mm_Base;
    class EF_AAV9_50mm_Base_OCimport_01 : EF_AAV9_50mm_Base { scope = 0; class EventHandlers; };
    class EF_AAV9_50mm_Base_OCimport_02 : EF_AAV9_50mm_Base_OCimport_01 { class EventHandlers; };

    class EF_AAV9_Base;
    class EF_AAV9_Base_OCimport_01 : EF_AAV9_Base { scope = 0; class EventHandlers; };
    class EF_AAV9_Base_OCimport_02 : EF_AAV9_Base_OCimport_01 { class EventHandlers; };

    class EF_AH99J_dynamicLoadout_base;
    class EF_AH99J_dynamicLoadout_base_OCimport_01 : EF_AH99J_dynamicLoadout_base { scope = 0; class EventHandlers; };
    class EF_AH99J_dynamicLoadout_base_OCimport_02 : EF_AH99J_dynamicLoadout_base_OCimport_01 { class EventHandlers; };

    class B_Boat_Armed_01_minigun_F;
    class B_Boat_Armed_01_minigun_F_OCimport_01 : B_Boat_Armed_01_minigun_F { scope = 0; class EventHandlers; };
    class B_Boat_Armed_01_minigun_F_OCimport_02 : B_Boat_Armed_01_minigun_F_OCimport_01 { class EventHandlers; };

    class B_Boat_Transport_01_F;
    class B_Boat_Transport_01_F_OCimport_01 : B_Boat_Transport_01_F { scope = 0; class EventHandlers; };
    class B_Boat_Transport_01_F_OCimport_02 : B_Boat_Transport_01_F_OCimport_01 { class EventHandlers; };

    class EF_CombatBoat_AT_West_Base;
    class EF_CombatBoat_AT_West_Base_OCimport_01 : EF_CombatBoat_AT_West_Base { scope = 0; class EventHandlers; };
    class EF_CombatBoat_AT_West_Base_OCimport_02 : EF_CombatBoat_AT_West_Base_OCimport_01 { class EventHandlers; };

    class EF_CombatBoat_HMG_West_Base;
    class EF_CombatBoat_HMG_West_Base_OCimport_01 : EF_CombatBoat_HMG_West_Base { scope = 0; class EventHandlers; };
    class EF_CombatBoat_HMG_West_Base_OCimport_02 : EF_CombatBoat_HMG_West_Base_OCimport_01 { class EventHandlers; };

    class EF_CombatBoat_Unarmed_Base;
    class EF_CombatBoat_Unarmed_Base_OCimport_01 : EF_CombatBoat_Unarmed_Base { scope = 0; class EventHandlers; };
    class EF_CombatBoat_Unarmed_Base_OCimport_02 : EF_CombatBoat_Unarmed_Base_OCimport_01 { class EventHandlers; };

    class B_CommandoMortar_RF;
    class B_CommandoMortar_RF_OCimport_01 : B_CommandoMortar_RF { scope = 0; class EventHandlers; };
    class B_CommandoMortar_RF_OCimport_02 : B_CommandoMortar_RF_OCimport_01 { class EventHandlers; };

    class B_GMG_01_A_F;
    class B_GMG_01_A_F_OCimport_01 : B_GMG_01_A_F { scope = 0; class EventHandlers; };
    class B_GMG_01_A_F_OCimport_02 : B_GMG_01_A_F_OCimport_01 { class EventHandlers; };

    class B_GMG_01_F;
    class B_GMG_01_F_OCimport_01 : B_GMG_01_F { scope = 0; class EventHandlers; };
    class B_GMG_01_F_OCimport_02 : B_GMG_01_F_OCimport_01 { class EventHandlers; };

    class B_GMG_01_high_F;
    class B_GMG_01_high_F_OCimport_01 : B_GMG_01_high_F { scope = 0; class EventHandlers; };
    class B_GMG_01_high_F_OCimport_02 : B_GMG_01_high_F_OCimport_01 { class EventHandlers; };

    class B_HMG_01_A_F;
    class B_HMG_01_A_F_OCimport_01 : B_HMG_01_A_F { scope = 0; class EventHandlers; };
    class B_HMG_01_A_F_OCimport_02 : B_HMG_01_A_F_OCimport_01 { class EventHandlers; };

    class B_HMG_01_F;
    class B_HMG_01_F_OCimport_01 : B_HMG_01_F { scope = 0; class EventHandlers; };
    class B_HMG_01_F_OCimport_02 : B_HMG_01_F_OCimport_01 { class EventHandlers; };

    class B_HMG_01_high_F;
    class B_HMG_01_high_F_OCimport_01 : B_HMG_01_high_F { scope = 0; class EventHandlers; };
    class B_HMG_01_high_F_OCimport_02 : B_HMG_01_high_F_OCimport_01 { class EventHandlers; };

    class B_Heli_Attack_01_dynamicLoadout_F;
    class B_Heli_Attack_01_dynamicLoadout_F_OCimport_01 : B_Heli_Attack_01_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class B_Heli_Attack_01_dynamicLoadout_F_OCimport_02 : B_Heli_Attack_01_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class EF_B_Heli_Transport_01_MJTF_Des;
    class EF_B_Heli_Transport_01_MJTF_Des_OCimport_01 : EF_B_Heli_Transport_01_MJTF_Des { scope = 0; class EventHandlers; };
    class EF_B_Heli_Transport_01_MJTF_Des_OCimport_02 : EF_B_Heli_Transport_01_MJTF_Des_OCimport_01 { class EventHandlers; };

    class EF_B_Heli_Transport_01_pylons_MJTF_Des;
    class EF_B_Heli_Transport_01_pylons_MJTF_Des_OCimport_01 : EF_B_Heli_Transport_01_pylons_MJTF_Des { scope = 0; class EventHandlers; };
    class EF_B_Heli_Transport_01_pylons_MJTF_Des_OCimport_02 : EF_B_Heli_Transport_01_pylons_MJTF_Des_OCimport_01 { class EventHandlers; };

    class EF_LCC_Base;
    class EF_LCC_Base_OCimport_01 : EF_LCC_Base { scope = 0; class EventHandlers; };
    class EF_LCC_Base_OCimport_02 : EF_LCC_Base_OCimport_01 { class EventHandlers; };

    class EF_LCC_SideLoad_Base;
    class EF_LCC_SideLoad_Base_OCimport_01 : EF_LCC_SideLoad_Base { scope = 0; class EventHandlers; };
    class EF_LCC_SideLoad_Base_OCimport_02 : EF_LCC_SideLoad_Base_OCimport_01 { class EventHandlers; };

    class B_Lifeboat;
    class B_Lifeboat_OCimport_01 : B_Lifeboat { scope = 0; class EventHandlers; };
    class B_Lifeboat_OCimport_02 : B_Lifeboat_OCimport_01 { class EventHandlers; };

    class B_MBT_01_TUSK_F;
    class B_MBT_01_TUSK_F_OCimport_01 : B_MBT_01_TUSK_F { scope = 0; class EventHandlers; };
    class B_MBT_01_TUSK_F_OCimport_02 : B_MBT_01_TUSK_F_OCimport_01 { class EventHandlers; };

    class B_MBT_01_cannon_F;
    class B_MBT_01_cannon_F_OCimport_01 : B_MBT_01_cannon_F { scope = 0; class EventHandlers; };
    class B_MBT_01_cannon_F_OCimport_02 : B_MBT_01_cannon_F_OCimport_01 { class EventHandlers; };

    class B_MBT_01_mlrs_F;
    class B_MBT_01_mlrs_F_OCimport_01 : B_MBT_01_mlrs_F { scope = 0; class EventHandlers; };
    class B_MBT_01_mlrs_F_OCimport_02 : B_MBT_01_mlrs_F_OCimport_01 { class EventHandlers; };

    class EF_MRAP_01_AT_base;
    class EF_MRAP_01_AT_base_OCimport_01 : EF_MRAP_01_AT_base { scope = 0; class EventHandlers; };
    class EF_MRAP_01_AT_base_OCimport_02 : EF_MRAP_01_AT_base_OCimport_01 { class EventHandlers; };

    class EF_MRAP_01_FSV_base;
    class EF_MRAP_01_FSV_base_OCimport_01 : EF_MRAP_01_FSV_base { scope = 0; class EventHandlers; };
    class EF_MRAP_01_FSV_base_OCimport_02 : EF_MRAP_01_FSV_base_OCimport_01 { class EventHandlers; };

    class EF_MRAP_01_LAAD_base;
    class EF_MRAP_01_LAAD_base_OCimport_01 : EF_MRAP_01_LAAD_base { scope = 0; class EventHandlers; };
    class EF_MRAP_01_LAAD_base_OCimport_02 : EF_MRAP_01_LAAD_base_OCimport_01 { class EventHandlers; };

    class B_MRAP_01_F;
    class B_MRAP_01_F_OCimport_01 : B_MRAP_01_F { scope = 0; class EventHandlers; };
    class B_MRAP_01_F_OCimport_02 : B_MRAP_01_F_OCimport_01 { class EventHandlers; };

    class B_MRAP_01_gmg_F;
    class B_MRAP_01_gmg_F_OCimport_01 : B_MRAP_01_gmg_F { scope = 0; class EventHandlers; };
    class B_MRAP_01_gmg_F_OCimport_02 : B_MRAP_01_gmg_F_OCimport_01 { class EventHandlers; };

    class B_MRAP_01_hmg_F;
    class B_MRAP_01_hmg_F_OCimport_01 : B_MRAP_01_hmg_F { scope = 0; class EventHandlers; };
    class B_MRAP_01_hmg_F_OCimport_02 : B_MRAP_01_hmg_F_OCimport_01 { class EventHandlers; };

    class EF_B_Marine_AAT_Wdl;
    class EF_B_Marine_AAT_Wdl_OCimport_01 : EF_B_Marine_AAT_Wdl { scope = 0; class EventHandlers; };
    class EF_B_Marine_AAT_Wdl_OCimport_02 : EF_B_Marine_AAT_Wdl_OCimport_01 { class EventHandlers; };

    class EF_B_Marine_Support_Base_Wdl;
    class EF_B_Marine_Support_Base_Wdl_OCimport_01 : EF_B_Marine_Support_Base_Wdl { scope = 0; class EventHandlers; };
    class EF_B_Marine_Support_Base_Wdl_OCimport_02 : EF_B_Marine_Support_Base_Wdl_OCimport_01 { class EventHandlers; };

    class EF_B_Marine_Wdl_Base_1;
    class EF_B_Marine_Wdl_Base_1_OCimport_01 : EF_B_Marine_Wdl_Base_1 { scope = 0; class EventHandlers; };
    class EF_B_Marine_Wdl_Base_1_OCimport_02 : EF_B_Marine_Wdl_Base_1_OCimport_01 { class EventHandlers; };

    class EF_B_Marine_Wdl_Base_5;
    class EF_B_Marine_Wdl_Base_5_OCimport_01 : EF_B_Marine_Wdl_Base_5 { scope = 0; class EventHandlers; };
    class EF_B_Marine_Wdl_Base_5_OCimport_02 : EF_B_Marine_Wdl_Base_5_OCimport_01 { class EventHandlers; };

    class EF_B_Marine_Wdl_Base_3;
    class EF_B_Marine_Wdl_Base_3_OCimport_01 : EF_B_Marine_Wdl_Base_3 { scope = 0; class EventHandlers; };
    class EF_B_Marine_Wdl_Base_3_OCimport_02 : EF_B_Marine_Wdl_Base_3_OCimport_01 { class EventHandlers; };

    class EF_B_Marine_R_Wdl;
    class EF_B_Marine_R_Wdl_OCimport_01 : EF_B_Marine_R_Wdl { scope = 0; class EventHandlers; };
    class EF_B_Marine_R_Wdl_OCimport_02 : EF_B_Marine_R_Wdl_OCimport_01 { class EventHandlers; };

    class EF_B_Marine_Diver_Wdl_Base;
    class EF_B_Marine_Diver_Wdl_Base_OCimport_01 : EF_B_Marine_Diver_Wdl_Base { scope = 0; class EventHandlers; };
    class EF_B_Marine_Diver_Wdl_Base_OCimport_02 : EF_B_Marine_Diver_Wdl_Base_OCimport_01 { class EventHandlers; };

    class EF_B_Marine_Wdl_Base_4;
    class EF_B_Marine_Wdl_Base_4_OCimport_01 : EF_B_Marine_Wdl_Base_4 { scope = 0; class EventHandlers; };
    class EF_B_Marine_Wdl_Base_4_OCimport_02 : EF_B_Marine_Wdl_Base_4_OCimport_01 { class EventHandlers; };

    class EF_B_Marine_Wdl_Base_2;
    class EF_B_Marine_Wdl_Base_2_OCimport_01 : EF_B_Marine_Wdl_Base_2 { scope = 0; class EventHandlers; };
    class EF_B_Marine_Wdl_Base_2_OCimport_02 : EF_B_Marine_Wdl_Base_2_OCimport_01 { class EventHandlers; };

    class EF_B_Marine_Wdl_Base_6;
    class EF_B_Marine_Wdl_Base_6_OCimport_01 : EF_B_Marine_Wdl_Base_6 { scope = 0; class EventHandlers; };
    class EF_B_Marine_Wdl_Base_6_OCimport_02 : EF_B_Marine_Wdl_Base_6_OCimport_01 { class EventHandlers; };

    class EF_B_Marine_Recon_Wdl_base;
    class EF_B_Marine_Recon_Wdl_base_OCimport_01 : EF_B_Marine_Recon_Wdl_base { scope = 0; class EventHandlers; };
    class EF_B_Marine_Recon_Wdl_base_OCimport_02 : EF_B_Marine_Recon_Wdl_base_OCimport_01 { class EventHandlers; };

    class B_Mortar_01_F;
    class B_Mortar_01_F_OCimport_01 : B_Mortar_01_F { scope = 0; class EventHandlers; };
    class B_Mortar_01_F_OCimport_02 : B_Mortar_01_F_OCimport_01 { class EventHandlers; };

    class Pickup_comms_base_rf;
    class Pickup_comms_base_rf_OCimport_01 : Pickup_comms_base_rf { scope = 0; class EventHandlers; };
    class Pickup_comms_base_rf_OCimport_02 : Pickup_comms_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_base_rf;
    class Pickup_01_base_rf_OCimport_01 : Pickup_01_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_base_rf_OCimport_02 : Pickup_01_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_mmg_base_rf;
    class Pickup_01_mmg_base_rf_OCimport_01 : Pickup_01_mmg_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_mmg_base_rf_OCimport_02 : Pickup_01_mmg_base_rf_OCimport_01 { class EventHandlers; };

    class B_Quadbike_01_F;
    class B_Quadbike_01_F_OCimport_01 : B_Quadbike_01_F { scope = 0; class EventHandlers; };
    class B_Quadbike_01_F_OCimport_02 : B_Quadbike_01_F_OCimport_01 { class EventHandlers; };

    class B_SDV_01_F;
    class B_SDV_01_F_OCimport_01 : B_SDV_01_F { scope = 0; class EventHandlers; };
    class B_SDV_01_F_OCimport_02 : B_SDV_01_F_OCimport_01 { class EventHandlers; };

    class B_static_AA_F;
    class B_static_AA_F_OCimport_01 : B_static_AA_F { scope = 0; class EventHandlers; };
    class B_static_AA_F_OCimport_02 : B_static_AA_F_OCimport_01 { class EventHandlers; };

    class B_static_AT_F;
    class B_static_AT_F_OCimport_01 : B_static_AT_F { scope = 0; class EventHandlers; };
    class B_static_AT_F_OCimport_02 : B_static_AT_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_Repair_F;
    class B_Truck_01_Repair_F_OCimport_01 : B_Truck_01_Repair_F { scope = 0; class EventHandlers; };
    class B_Truck_01_Repair_F_OCimport_02 : B_Truck_01_Repair_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_ammo_F;
    class B_Truck_01_ammo_F_OCimport_01 : B_Truck_01_ammo_F { scope = 0; class EventHandlers; };
    class B_Truck_01_ammo_F_OCimport_02 : B_Truck_01_ammo_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_box_F;
    class B_Truck_01_box_F_OCimport_01 : B_Truck_01_box_F { scope = 0; class EventHandlers; };
    class B_Truck_01_box_F_OCimport_02 : B_Truck_01_box_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_covered_F;
    class B_Truck_01_covered_F_OCimport_01 : B_Truck_01_covered_F { scope = 0; class EventHandlers; };
    class B_Truck_01_covered_F_OCimport_02 : B_Truck_01_covered_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_fuel_F;
    class B_Truck_01_fuel_F_OCimport_01 : B_Truck_01_fuel_F { scope = 0; class EventHandlers; };
    class B_Truck_01_fuel_F_OCimport_02 : B_Truck_01_fuel_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_medical_F;
    class B_Truck_01_medical_F_OCimport_01 : B_Truck_01_medical_F { scope = 0; class EventHandlers; };
    class B_Truck_01_medical_F_OCimport_02 : B_Truck_01_medical_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_mover_F;
    class B_Truck_01_mover_F_OCimport_01 : B_Truck_01_mover_F { scope = 0; class EventHandlers; };
    class B_Truck_01_mover_F_OCimport_02 : B_Truck_01_mover_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_transport_F;
    class B_Truck_01_transport_F_OCimport_01 : B_Truck_01_transport_F { scope = 0; class EventHandlers; };
    class B_Truck_01_transport_F_OCimport_02 : B_Truck_01_transport_F_OCimport_01 { class EventHandlers; };

    class B_UAV_01_F;
    class B_UAV_01_F_OCimport_01 : B_UAV_01_F { scope = 0; class EventHandlers; };
    class B_UAV_01_F_OCimport_02 : B_UAV_01_F_OCimport_01 { class EventHandlers; };

    class B_UAV_02_dynamicLoadout_F;
    class B_UAV_02_dynamicLoadout_F_OCimport_01 : B_UAV_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class B_UAV_02_dynamicLoadout_F_OCimport_02 : B_UAV_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class B_UGV_01_F;
    class B_UGV_01_F_OCimport_01 : B_UGV_01_F { scope = 0; class EventHandlers; };
    class B_UGV_01_F_OCimport_02 : B_UGV_01_F_OCimport_01 { class EventHandlers; };

    class B_UGV_01_rcws_F;
    class B_UGV_01_rcws_F_OCimport_01 : B_UGV_01_rcws_F { scope = 0; class EventHandlers; };
    class B_UGV_01_rcws_F_OCimport_02 : B_UGV_01_rcws_F_OCimport_01 { class EventHandlers; };

    class EF_LPD_Turret_1_Base;
    class EF_LPD_Turret_1_Base_OCimport_01 : EF_LPD_Turret_1_Base { scope = 0; class EventHandlers; };
    class EF_LPD_Turret_1_Base_OCimport_02 : EF_LPD_Turret_1_Base_OCimport_01 { class EventHandlers; };

    class EF_QAV80_Base;
    class EF_QAV80_Base_OCimport_01 : EF_QAV80_Base { scope = 0; class EventHandlers; };
    class EF_QAV80_Base_OCimport_02 : EF_QAV80_Base_OCimport_01 { class EventHandlers; };

    class EF_QAV80_Stealth_Base;
    class EF_QAV80_Stealth_Base_OCimport_01 : EF_QAV80_Stealth_Base { scope = 0; class EventHandlers; };
    class EF_QAV80_Stealth_Base_OCimport_02 : EF_QAV80_Stealth_Base_OCimport_01 { class EventHandlers; };

    class Aegis_B_MJTF_W_APC_Wheeled_01_atgm_v2 : B_T_APC_Wheeled_01_atgm_lxWS_v2_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMV-7 Marshall (ATGM)";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_Crew_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_MJTF_W_APC_Wheeled_01_cannon_v2_F : B_T_APC_Wheeled_01_cannon_v2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMV-7 Marshall";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_Crew_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_MJTF_W_APC_Wheeled_01_command_lxWS : B_T_APC_Wheeled_01_command_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Badger IFV (Command)";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_Crew_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_MJTF_W_APC_Wheeled_01_medical_F : B_T_APC_Wheeled_01_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Badger IFV (Medical)";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_Crew_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_MJTF_W_APC_Wheeled_01_mortar_lxWS : B_T_APC_Wheeled_01_mortar_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Badger IFV (Mortar)";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_Crew_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_AAV9_50mm_MJTF_Wdl : EF_AAV9_50mm_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AAV-9A1 Mack";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_Crew_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_AAV9_MJTF_Wdl : EF_AAV9_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AAV-9 Mack";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_Crew_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_AH99J_MJTF_Wdl : EF_AH99J_dynamicLoadout_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RAH-66J Comanche";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "B_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Boat_Armed_01_minigun_MJTF_Wdl : B_Boat_Armed_01_minigun_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Speedboat Minigun";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_BoatCrew_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Boat_Transport_01_MJTF_Wdl : B_Boat_Transport_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Boat";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_CombatBoat_AT_MJTF_Wdl : EF_CombatBoat_AT_West_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (AT)";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_BoatCrew_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_CombatBoat_HMG_MJTF_Wdl : EF_CombatBoat_HMG_West_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (HMG)";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_BoatCrew_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_CombatBoat_Unarmed_MJTF_Wdl : EF_CombatBoat_Unarmed_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (Unarmed)";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_BoatCrew_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_CommandoMortar_MJTF_Wdl : B_CommandoMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RSG60";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_GMG_01_A_MJTF_Wdl : B_GMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307A";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "B_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_GMG_01_MJTF_Wdl : B_GMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_GMG_01_high_MJTF_Wdl : B_GMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307 (High)";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_HMG_01_A_MJTF_Wdl : B_HMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312A";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "B_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_HMG_01_MJTF_Wdl : B_HMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_HMG_01_high_MJTF_Wdl : B_HMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312 (High)";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Heli_Attack_01_dynamicLoadout_MJTF_Wdl : B_Heli_Attack_01_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RAH-66 Comanche";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "B_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Heli_Transport_01_MJTF_Wdl : EF_B_Heli_Transport_01_MJTF_Des_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-80 Ghost Hawk";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "B_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Heli_Transport_01_pylons_MJTF_Wdl : EF_B_Heli_Transport_01_pylons_MJTF_Des_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-80 Ghost Hawk (Stub Wings)";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "B_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_LCC_MJTF_Wdl : EF_LCC_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LCC-1";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_BoatCrew_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_LCC_SideLoad_MJTF_Wdl : EF_LCC_SideLoad_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LCC-1 (Side Load)";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_BoatCrew_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Lifeboat_MJTF_Wdl : B_Lifeboat_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rescue Boat";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_MBT_01_TUSK_MJTF_Wdl : B_MBT_01_TUSK_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Merkava Mk IV LIC";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_Crew_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_MBT_01_cannon_MJTF_Wdl : B_MBT_01_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Merkava Mk IV M";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_Crew_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_MBT_01_mlrs_MJTF_Wdl : B_MBT_01_mlrs_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Seara";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_Crew_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_MRAP_01_AT_MJTF_Wdl : EF_MRAP_01_AT_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV AT";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_Crew_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_MRAP_01_FSV_MJTF_Wdl : EF_MRAP_01_FSV_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV FSV";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_Crew_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_MRAP_01_LAAD_MJTF_Wdl : EF_MRAP_01_LAAD_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV LAAD";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_Crew_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_MRAP_01_MJTF_Wdl : B_MRAP_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_MRAP_01_gmg_MJTF_Wdl : B_MRAP_01_gmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV (GMG)";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_MRAP_01_hmg_MJTF_Wdl : B_MRAP_01_hmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV (HMG)";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_AAA_Wdl : EF_B_Marine_AAT_Wdl_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_4";

        backpack = "EF_B_Carryall_coy_AAA";

        linkedItems[] = {"EF_V_AAV_Scout_Coy","EF_H_MCH","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Scout_Coy","EF_H_MCH","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put","Rangefinder"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_AAT_Wdl : EF_B_Marine_Support_Base_Wdl_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_4";

        backpack = "EF_B_Carryall_coy_AAT";

        linkedItems[] = {"EF_V_AAV_Support_Coy","EF_H_MCH","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Support_Coy","EF_H_MCH","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put","Rangefinder"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_AA_Wdl : EF_B_Marine_Wdl_Base_1_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_1";

        backpack = "EF_B_Kitbag_coy_AA";

        linkedItems[] = {"EF_V_AAV_Scout_Coy","EF_H_MCH_Full","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Scout_Coy","EF_H_MCH_Full","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_Holo_pointer","EF_launch_B_Titan_Coy","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_Holo_pointer","EF_launch_B_Titan_Coy","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_AB_Wdl : EF_B_Marine_Wdl_Base_5_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","Head_EF_Camo_Arid","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_5";

        backpack = "EF_B_Carryall_coy_AmmoBearer";

        linkedItems[] = {"EF_V_AAV_Scout_Coy","EF_H_MCH_Full","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Scout_Coy","EF_H_MCH_Full","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_Holo_pointer_snds","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_Holo_pointer_snds","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_AMG_Wdl : EF_B_Marine_Support_Base_Wdl_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (HMG/GMG)";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_4";

        backpack = "EF_B_HMG_01_support_MJTF_Wdl";

        linkedItems[] = {"EF_V_AAV_Scout_Coy","EF_H_MCH","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Scout_Coy","EF_H_MCH","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_AMort_Wdl : EF_B_Marine_Support_Base_Wdl_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (Mk6)";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_4";

        backpack = "EF_B_Mortar_01_support_MJTF_Wdl";

        linkedItems[] = {"EF_V_AAV_TL_Coy","EF_H_MCH","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_TL_Coy","EF_H_MCH","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_AR_Wdl : EF_B_Marine_Wdl_Base_3_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_3";

        linkedItems[] = {"EF_V_AAV_Support_Coy","EF_H_MCH_BasicNet_Wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Support_Coy","EF_H_MCH_BasicNet_Wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_MBS_pointer_BI_snds","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_MBS_pointer_BI_snds","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","EF_100Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_AT_Wdl : EF_B_Marine_Wdl_Base_1_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_1";

        backpack = "EF_B_Kitbag_coy_AT";

        linkedItems[] = {"EF_V_AAV_Rifleman_Coy","EF_H_MCH_FullCamo_Wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Rifleman_Coy","EF_H_MCH_FullCamo_Wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_Hamr_pointer","launch_O_Titan_short_F","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_Hamr_pointer","launch_O_Titan_short_F","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_BoatCrew_Wdl : EF_B_Marine_Wdl_Base_3_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Boat Crewman";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_3";

        linkedItems[] = {"EF_V_AAV_Sailor_Coy","EF_H_HelmetCrew_Coy","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Sailor_Coy","EF_H_HelmetCrew_Coy","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxc_coy_Holo","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxc_coy_Holo","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_CMort_Wdl : EF_B_Marine_R_Wdl_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_3";

        backpack = "EF_B_CommandoMortar_weapon_MJTF_Wdl";

        linkedItems[] = {"EF_V_AAV_Rifleman_Coy","EF_H_MCH_BasicNet_Wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Rifleman_Coy","EF_H_MCH_BasicNet_Wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_RCO_pointer_snds","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_RCO_pointer_snds","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Crew_Wdl : EF_B_Marine_Wdl_Base_3_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_3";

        linkedItems[] = {"EF_V_AAV_Coy","EF_H_HelmetCrew_Coy","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Coy","EF_H_HelmetCrew_Coy","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxc_coy_Holo","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxc_coy_Holo","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Diver_Eng_Wdl : EF_B_Marine_Diver_Wdl_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Diver Engineer";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_EF_Camo_Lush","G_NATO_diver"};

        uniformClass = "EF_U_B_MarineCombatUniform_Diver_Wdl";

        backpack = "EF_B_RaiderPack_coy_Diver_Eng";

        linkedItems[] = {"EF_V_AAV_Diver_Coy","EF_H_HelmetB_light_snakeskin_slick","EF_LPNVG_T_Tan","G_B_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"EF_V_AAV_Diver_Coy","EF_H_HelmetB_light_snakeskin_slick","EF_LPNVG_T_Tan","G_B_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"ef_arifle_MXC_coy_ACO_pointer_snds","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_MXC_coy_ACO_pointer_snds","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Diver_Pointman_Wdl : EF_B_Marine_Diver_Wdl_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Diver Pointman";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_EF_Camo_Lush","G_NATO_diver"};

        uniformClass = "EF_U_B_MarineCombatUniform_Diver_Wdl";

        backpack = "EF_B_RaiderPack_coy_Diver_Pointman";

        linkedItems[] = {"EF_V_AAV_Diver_Coy","EF_H_HelmetB_light_grass_slick","EF_LPNVG_T_Tan","G_B_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"EF_V_AAV_Diver_Coy","EF_H_HelmetB_light_grass_slick","EF_LPNVG_T_Tan","G_B_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_01_Holo_pointer_snds_F","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put"};
        respawnWeapons[] = {"SMG_01_Holo_pointer_snds_F","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put"};

        magazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Diver_Scout_Wdl : EF_B_Marine_Diver_Wdl_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Diver Scout";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_EF_Camo_Lush","G_NATO_diver"};

        uniformClass = "EF_U_B_MarineCombatUniform_Diver_Wdl";

        backpack = "EF_B_RaiderPack_coy_Diver_TL";

        linkedItems[] = {"EF_V_AAV_Diver_Coy","EF_H_HelmetB_light_snakeskin_slick","EF_LPNVG_T_Tan","G_B_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"EF_V_AAV_Diver_Coy","EF_H_HelmetB_light_snakeskin_slick","EF_LPNVG_T_Tan","G_B_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"ef_arifle_MX_coy_MBS_pointer_snds","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put","Laserdesignator"};
        respawnWeapons[] = {"ef_arifle_MX_coy_MBS_pointer_snds","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put","Laserdesignator"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Diver_TL_Wdl : EF_B_Marine_Diver_Wdl_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Diver Team Leader";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_EF_Camo_Lush","G_NATO_diver"};

        uniformClass = "EF_U_B_MarineCombatUniform_Diver_Wdl";

        backpack = "EF_B_RaiderPack_coy_Diver_TL";

        linkedItems[] = {"EF_V_AAV_Diver_Coy","EF_H_HelmetB_light_slick","EF_LPNVG_T_Tan","G_B_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"EF_V_AAV_Diver_Coy","EF_H_HelmetB_light_slick","EF_LPNVG_T_Tan","G_B_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"ef_arifle_MX_coy_Holo_pointer_snds","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"ef_arifle_MX_coy_Holo_pointer_snds","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put","Rangefinder"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Diver_Wdl : EF_B_Marine_Diver_Wdl_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Diver";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_EF_Camo_Lush","G_NATO_diver"};

        uniformClass = "EF_U_B_MarineCombatUniform_Diver_Wdl";

        backpack = "EF_B_RaiderPack_black_Diver";

        linkedItems[] = {"EF_V_AAV_Diver_Coy","EF_H_HelmetB_light_black_slick","EF_LPNVG_T_Tan","G_B_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"EF_V_AAV_Diver_Coy","EF_H_HelmetB_light_black_slick","EF_LPNVG_T_Tan","G_B_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SDAR_F","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put"};
        respawnWeapons[] = {"arifle_SDAR_F","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellBlue","SmokeShellBlue","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellBlue","SmokeShellBlue","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Eng_Wdl : EF_B_Marine_Wdl_Base_3_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_3";

        backpack = "EF_B_Kitbag_coy_Eng";

        linkedItems[] = {"EF_V_AAV_TL_Coy","EF_H_MCH_FullCamo_Wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_TL_Coy","EF_H_MCH_FullCamo_Wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Exp_Wdl : EF_B_Marine_Wdl_Base_1_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_1";

        backpack = "EF_B_Kitbag_coy_Exp";

        linkedItems[] = {"EF_V_AAV_Support_Coy","EF_H_MCH_FullCamo_Olive","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Support_Coy","EF_H_MCH_FullCamo_Olive","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_GL_Wdl : EF_B_Marine_Wdl_Base_4_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_4";

        linkedItems[] = {"EF_V_AAV_TL_Coy","EF_H_MCH_FullCamo_Olive","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_TL_Coy","EF_H_MCH_FullCamo_Olive","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_GL_coy_Hamr_pointer","ef_hgun_P07_coy","Throw","Put","Binocular"};
        respawnWeapons[] = {"ef_arifle_mxar_GL_coy_Hamr_pointer","ef_hgun_P07_coy","Throw","Put","Binocular"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag_Tracer","EF_30Rnd_65x39_caseless_coy_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag_Tracer","EF_30Rnd_65x39_caseless_coy_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_GMG_Wdl : EF_B_Marine_Support_Base_Wdl_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (GMG)";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_4";

        backpack = "EF_B_GMG_01_weapon_MJTF_Wdl";

        linkedItems[] = {"EF_V_AAV_Rifleman_Coy","EF_H_MCH","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Rifleman_Coy","EF_H_MCH","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_HMG_Wdl : EF_B_Marine_Support_Base_Wdl_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (HMG)";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_4";

        backpack = "EF_B_HMG_01_weapon_MJTF_Wdl";

        linkedItems[] = {"EF_V_AAV_Support_Coy","EF_H_MCH","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Support_Coy","EF_H_MCH","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_JTAC_Wdl : EF_B_Marine_Wdl_Base_4_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "JTAC";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_4";

        linkedItems[] = {"EF_V_AAV_TL_Coy","EF_H_MCH_FullCamo_Wdl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_TL_Coy","EF_H_MCH_FullCamo_Wdl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_MX_coy_MBS_pointer_snds","ef_hgun_P07_coy","Throw","Put","Laserdesignator"};
        respawnWeapons[] = {"ef_arifle_MX_coy_MBS_pointer_snds","ef_hgun_P07_coy","Throw","Put","Laserdesignator"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag_Tracer","EF_30Rnd_65x39_caseless_coy_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","Laserbatteries"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag_Tracer","EF_30Rnd_65x39_caseless_coy_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","Laserbatteries"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_LAT2_Wdl : EF_B_Marine_Wdl_Base_2_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light AT)";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_2";

        backpack = "EF_B_RaiderPack_coy_LAT2";

        linkedItems[] = {"EF_V_AAV_Support_Coy","EF_H_MCH_Basic","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Support_Coy","EF_H_MCH_Basic","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_RCO_pointer_snds","launch_MRAWS_green_F","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_RCO_pointer_snds","launch_MRAWS_green_F","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_LAT_Wdl : EF_B_Marine_Wdl_Base_2_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_2";

        backpack = "EF_B_RaiderPack_coy_LAT";

        linkedItems[] = {"EF_V_AAV_Support_Coy","EF_H_MCH_Basic","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Support_Coy","EF_H_MCH_Basic","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_RCO_pointer_snds","launch_NLAW_F","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_RCO_pointer_snds","launch_NLAW_F","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Light_Wdl : EF_B_Marine_Wdl_Base_1_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_1";

        linkedItems[] = {"EF_V_AAV_Coy","EF_H_UtilityCap_Wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Coy","EF_H_UtilityCap_Wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_Holo","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_Holo","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Mark_Wdl : EF_B_Marine_Wdl_Base_1_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_1";

        linkedItems[] = {"EF_V_AAV_Scout_Coy","EF_H_MCH_BasicNet_Coy","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Scout_Coy","EF_H_MCH_BasicNet_Coy","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxm_MBS_LP_BI","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxm_MBS_LP_BI","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Medic_Wdl : EF_B_Marine_Wdl_Base_4_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_4";

        backpack = "EF_B_RaiderPack_coy_Medic";

        linkedItems[] = {"EF_V_AAV_Support_Coy","EF_H_MCH_FullCamo_Wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Support_Coy","EF_H_MCH_FullCamo_Wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Mort_Wdl : EF_B_Marine_Support_Base_Wdl_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mk6)";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_4";

        backpack = "EF_B_Mortar_01_weapon_MJTF_Wdl";

        linkedItems[] = {"EF_V_AAV_Rifleman_Coy","EF_H_MCH","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Rifleman_Coy","EF_H_MCH","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Officer_Wdl : EF_B_Marine_Wdl_Base_6_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","G_NATO_casual"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_6";

        linkedItems[] = {"EF_V_AAV_Coy","EF_H_UtilityCap_Wdl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"EF_V_AAV_Coy","EF_H_UtilityCap_Wdl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_Pistol_heavy_01_coy_rds","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_Pistol_heavy_01_coy_rds","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_R_Wdl : EF_B_Marine_Wdl_Base_3_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_3";

        linkedItems[] = {"EF_V_AAV_Rifleman_Coy","EF_H_MCH_BasicNet_Wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Rifleman_Coy","EF_H_MCH_BasicNet_Wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_RCO_pointer_snds","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_RCO_pointer_snds","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Recon_Exp_Wdl : EF_B_Marine_Recon_Wdl_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Demo Specialist";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_2";

        backpack = "EF_B_RaiderPack_coy_ReconExp";

        linkedItems[] = {"EF_V_CCR_Rifleman_Coy","EF_H_Booniehat_Wdl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_T_Tan"};
        respawnlinkedItems[] = {"EF_V_CCR_Rifleman_Coy","EF_H_Booniehat_Wdl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_T_Tan"};

        weapons[] = {"ef_arifle_MX_coy_ACO_pointer_snds","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_MX_coy_ACO_pointer_snds","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Recon_JTAC_Wdl : EF_B_Marine_Recon_Wdl_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon JTAC";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_6";

        linkedItems[] = {"EF_V_CCR_TL_Coy","EF_H_HelmetB_light_grass_slick","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_T_Tan"};
        respawnlinkedItems[] = {"EF_V_CCR_TL_Coy","EF_H_HelmetB_light_grass_slick","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_T_Tan"};

        weapons[] = {"ef_arifle_MX_GL_coy_Holo_pointer_snds","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put","Laserdesignator"};
        respawnWeapons[] = {"ef_arifle_MX_GL_coy_Holo_pointer_snds","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put","Laserdesignator"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Recon_LAT_Wdl : EF_B_Marine_Recon_Wdl_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (AT)";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_3";

        backpack = "EF_B_RaiderPack_coy_ReconLAT";

        linkedItems[] = {"EF_V_CCR_Support_Coy","EF_H_HelmetB_light_grass_slick","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_T_Tan"};
        respawnlinkedItems[] = {"EF_V_CCR_Support_Coy","EF_H_HelmetB_light_grass_slick","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_T_Tan"};

        weapons[] = {"ef_arifle_MX_coy_ACO_pointer_snds","launch_NLAW_F","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_MX_coy_ACO_pointer_snds","launch_NLAW_F","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Recon_M_Wdl : EF_B_Marine_Recon_Wdl_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Marksman";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_5";

        linkedItems[] = {"EF_V_CCR_Rifleman_Coy","EF_H_Booniehat_Wdl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_T_Tan"};
        respawnlinkedItems[] = {"EF_V_CCR_Rifleman_Coy","EF_H_Booniehat_Wdl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_T_Tan"};

        weapons[] = {"ef_arifle_mxm_MBS_LP_BI_snds","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"ef_arifle_mxm_MBS_LP_BI_snds","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put","Rangefinder"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Recon_Medic_Wdl : EF_B_Marine_Recon_Wdl_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Paramedic";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_4";

        backpack = "EF_B_RaiderPack_coy_ReconMedic";

        linkedItems[] = {"EF_V_CCR_Scout_Coy","EF_H_HelmetB_light_slick","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_T_Tan"};
        respawnlinkedItems[] = {"EF_V_CCR_Scout_Coy","EF_H_HelmetB_light_slick","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_T_Tan"};

        weapons[] = {"ef_arifle_MXC_coy_ACO_pointer_snds","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_MXC_coy_ACO_pointer_snds","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Recon_TL_Wdl : EF_B_Marine_Recon_Wdl_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Team Leader";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_6";

        linkedItems[] = {"EF_V_CCR_TL_Coy","EF_H_Booniehat_Wdl","G_Shades_Black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_T_Tan"};
        respawnlinkedItems[] = {"EF_V_CCR_TL_Coy","EF_H_Booniehat_Wdl","G_Shades_Black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_T_Tan"};

        weapons[] = {"ef_arifle_MX_coy_RCO_pointer_snds","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"ef_arifle_MX_coy_RCO_pointer_snds","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put","Rangefinder"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag_Tracer","EF_30Rnd_65x39_caseless_coy_mag_Tracer","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag_Tracer","EF_30Rnd_65x39_caseless_coy_mag_Tracer","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Recon_Wdl : EF_B_Marine_Recon_Wdl_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_4";

        linkedItems[] = {"EF_V_CCR_Scout_Coy","EF_H_HelmetB_light_slick","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_T_Tan"};
        respawnlinkedItems[] = {"EF_V_CCR_Scout_Coy","EF_H_HelmetB_light_slick","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_T_Tan"};

        weapons[] = {"ef_arifle_MX_coy_ACO_pointer_snds","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put","Binocular"};
        respawnWeapons[] = {"ef_arifle_MX_coy_ACO_pointer_snds","ef_hgun_Pistol_heavy_01_coy_rds_snds","Throw","Put","Binocular"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Repair_Wdl : EF_B_Marine_Wdl_Base_1_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_1";

        backpack = "EF_B_RaiderPack_coy_Repair";

        linkedItems[] = {"EF_V_AAV_Rifleman_Coy","EF_H_MCH_Full","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_Rifleman_Coy","EF_H_MCH_Full","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_Holo_pointer","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_SL_Wdl : EF_B_Marine_Wdl_Base_4_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_4";

        linkedItems[] = {"EF_V_AAV_TL_Coy","EF_H_MCH_FullCamo_Wdl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_TL_Coy","EF_H_MCH_FullCamo_Wdl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_MBS_pointer_snds","ef_hgun_P07_coy","Throw","Put","Binocular"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_MBS_pointer_snds","ef_hgun_P07_coy","Throw","Put","Binocular"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag_Tracer","EF_30Rnd_65x39_caseless_coy_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag_Tracer","EF_30Rnd_65x39_caseless_coy_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_TL_Wdl : EF_B_Marine_Wdl_Base_4_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_4";

        linkedItems[] = {"EF_V_AAV_TL_Coy","EF_H_MCH_FullCamo_Coy","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_TL_Coy","EF_H_MCH_FullCamo_Coy","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_gl_coy_Hamr_pointer_snds","ef_hgun_P07_coy","Throw","Put","Binocular"};
        respawnWeapons[] = {"ef_arifle_mxar_gl_coy_Hamr_pointer_snds","ef_hgun_P07_coy","Throw","Put","Binocular"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag_Tracer","EF_30Rnd_65x39_caseless_coy_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag_Tracer","EF_30Rnd_65x39_caseless_coy_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_UAV_Wdl : EF_B_Marine_Wdl_Base_5_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_5";

        backpack = "EF_B_UAV_01_backpack_coy";

        linkedItems[] = {"EF_V_AAV_TL_Coy","EF_H_MCH_BasicNet_Wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","EF_LPNVG_Tan"};
        respawnlinkedItems[] = {"EF_V_AAV_TL_Coy","EF_H_MCH_BasicNet_Wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","EF_LPNVG_Tan"};

        weapons[] = {"ef_arifle_mxar_coy_RCO_pointer_snds","ef_hgun_P07_coy","Throw","Put"};
        respawnWeapons[] = {"ef_arifle_mxar_coy_RCO_pointer_snds","ef_hgun_P07_coy","Throw","Put"};

        magazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","EF_30Rnd_65x39_caseless_coy_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Marine_Unarmed_Wdl : EF_B_Marine_R_Wdl_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 1;
        faction = "ef_b_mjtf_wdl";

        identityTypes[] = {"LanguageENG_F","Head_NATO","Head_EF","Head_EF_Camo_Lush","G_NATO_default"};

        uniformClass = "EF_U_B_MarineCombatUniform_Wdl_3";

        linkedItems[] = {"EF_V_AAV_Coy","EF_H_MCH_BasicNet_Wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"EF_V_AAV_Coy","EF_H_MCH_BasicNet_Wdl","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Mortar_01_MJTF_Wdl : B_Mortar_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "EF_B_Mortar_01_MJTF_Wdl";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Pickup_Comms_MJTF_Wdl : Pickup_comms_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Comms)";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_Recon_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Pickup_MJTF_Wdl : Pickup_01_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_Recon_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Pickup_mmg_MJTF_Wdl : Pickup_01_mmg_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (MMG)";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_Recon_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Quadbike_01_MJTF_Wdl : B_Quadbike_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_SDV_01_MJTF_Wdl : B_SDV_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "SDV";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_Diver_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Static_AA_MJTF_Wdl : B_static_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AA)";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Static_AT_MJTF_Wdl : B_static_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AT)";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Truck_01_Repair_MJTF_Wdl : B_Truck_01_Repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Repair";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Truck_01_ammo_MJTF_Wdl : B_Truck_01_ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Ammo";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Truck_01_box_MJTF_Wdl : B_Truck_01_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Container";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Truck_01_covered_MJTF_Wdl : B_Truck_01_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport (covered)";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Truck_01_fuel_MJTF_Wdl : B_Truck_01_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Fuel";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Truck_01_medical_MJTF_Wdl : B_Truck_01_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Medical";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Truck_01_mover_MJTF_Wdl : B_Truck_01_mover_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Truck_01_transport_MJTF_Wdl : B_Truck_01_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "EF_B_Marine_R_Wdl";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_UAV_01_MJTF_Wdl : B_UAV_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR-2 Darter";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "B_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_UAV_02_dynamicLoadout_MJTF_Wdl : B_UAV_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "YABHON-R3";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "B_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_UGV_01_MJTF_Wdl : B_UGV_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "B_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_UGV_01_rcws_MJTF_Wdl : B_UGV_01_rcws_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper RCWS";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "B_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_LPD_Turret_1_MJTF_Wdl : EF_LPD_Turret_1_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mk66 50 mm Cannon";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "B_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_QAV80_MJTF_Wdl : EF_QAV80_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "QAV-80 Harpy";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "B_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_QAV80_Stealth_MJTF_Wdl : EF_QAV80_Stealth_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "QAV-80 Harpy (Stealth)";
        side = 1;
        faction = "ef_b_mjtf_wdl";
        crew = "B_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};

class CfgGroups {
    class West {
        class EF_B_MJTF_Wdl {
            class Armored {
                class EF_B_MJTF_Wdl_ATPlatoon {
                    name = "Anti-armor Platoon";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";

                    class Unit0 {
                        vehicle = "EF_B_MRAP_01_AT_MJTF_Wdl";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_MRAP_01_AT_MJTF_Wdl";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_MRAP_01_AT_MJTF_Wdl";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_MRAP_01_AT_MJTF_Wdl";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class EF_B_MJTF_Wdl_ATSection {
                    name = "Anti-armor Section";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";

                    class Unit0 {
                        vehicle = "EF_B_MRAP_01_AT_MJTF_Wdl";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_MRAP_01_AT_MJTF_Wdl";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_SPGSection_MLRS {
                    name = "MLRS Section";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";

                    class Unit0 {
                        vehicle = "EF_B_MBT_01_mlrs_MJTF_Wdl";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_MBT_01_mlrs_MJTF_Wdl";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_TankPlatoon {
                    name = "Tank Platoon";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

                    class Unit0 {
                        vehicle = "EF_B_MBT_01_cannon_MJTF_Wdl";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_MBT_01_cannon_MJTF_Wdl";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_MBT_01_cannon_MJTF_Wdl";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_MBT_01_cannon_MJTF_Wdl";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class EF_B_MJTF_Wdl_TankPlatoon_AA {
                    name = "Tank Platoon (Combined)";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

                    class Unit0 {
                        vehicle = "EF_B_MBT_01_cannon_MJTF_Wdl";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_MRAP_01_LAAD_MJTF_Wdl";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_MBT_01_cannon_MJTF_Wdl";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_MRAP_01_LAAD_MJTF_Wdl";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class EF_B_MJTF_Wdl_TankSection {
                    name = "Tank Section";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

                    class Unit0 {
                        vehicle = "EF_B_MBT_01_cannon_MJTF_Wdl";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_MBT_01_cannon_MJTF_Wdl";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class EF_B_MJTF_Wdl_ComTeam {
                    name = "Command Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_SL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_Medic_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_JTAC_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_R_Wdl";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_InfSentry {
                    name = "Sentry";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_GL_Wdl";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_R_Wdl";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class EF_B_MJTF_Wdl_InfSquad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_SL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_Medic_Wdl";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_UAV_Wdl";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "EF_B_Marine_AR_Wdl";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "EF_B_Marine_R_Wdl";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "EF_B_Marine_LAT_Wdl";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "EF_B_Marine_AR_Wdl";
                        rank = "SERGEANT";
                        position[] = {-20,-20,0};
                    };

                    class Unit9 {
                        vehicle = "EF_B_Marine_R_Wdl";
                        rank = "CORPORAL";
                        position[] = {25,-25,0};
                    };

                    class Unit10 {
                        vehicle = "EF_B_Marine_LAT_Wdl";
                        rank = "PRIVATE";
                        position[] = {-25,-25,0};
                    };

                    class Unit11 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "PRIVATE";
                        position[] = {30,-30,0};
                    };

                    class Unit12 {
                        vehicle = "EF_B_Marine_AR_Wdl";
                        rank = "SERGEANT";
                        position[] = {-30,-30,0};
                    };

                    class Unit13 {
                        vehicle = "EF_B_Marine_R_Wdl";
                        rank = "CORPORAL";
                        position[] = {35,-35,0};
                    };

                    class Unit14 {
                        vehicle = "EF_B_Marine_LAT_Wdl";
                        rank = "PRIVATE";
                        position[] = {-35,-35,0};
                    };
                };
                class EF_B_MJTF_Wdl_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_SL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_Medic_Wdl";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_UAV_Wdl";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "EF_B_Marine_AR_Wdl";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "EF_B_Marine_AT_Wdl";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "EF_B_Marine_AAT_Wdl";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "EF_B_Marine_Mark_Wdl";
                        rank = "SERGEANT";
                        position[] = {-20,-20,0};
                    };

                    class Unit9 {
                        vehicle = "EF_B_Marine_Mark_Wdl";
                        rank = "CORPORAL";
                        position[] = {25,-25,0};
                    };

                    class Unit10 {
                        vehicle = "EF_B_Marine_LAT_Wdl";
                        rank = "PRIVATE";
                        position[] = {-25,-25,0};
                    };

                    class Unit11 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "PRIVATE";
                        position[] = {30,-30,0};
                    };

                    class Unit12 {
                        vehicle = "EF_B_Marine_AR_Wdl";
                        rank = "SERGEANT";
                        position[] = {-30,-30,0};
                    };

                    class Unit13 {
                        vehicle = "EF_B_Marine_AT_Wdl";
                        rank = "CORPORAL";
                        position[] = {35,-35,0};
                    };

                    class Unit14 {
                        vehicle = "EF_B_Marine_AAT_Wdl";
                        rank = "PRIVATE";
                        position[] = {-35,-35,0};
                    };
                };
                class EF_B_MJTF_Wdl_InfTeam {
                    name = "Fire Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_AR_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_GL_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_LAT_Wdl";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_InfTeam_AA {
                    name = "Air-defense Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_AA_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_AA_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_AAA_Wdl";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_AT_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_AT_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_AAT_Wdl";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_ReconPatrol {
                    name = "Recon Patrol";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_Recon_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_Recon_M_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_Recon_Medic_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_Recon_Wdl";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_ReconSentry {
                    name = "Recon Sentry";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_Recon_M_Wdl";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_Recon_Wdl";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class EF_B_MJTF_Wdl_ReconTeam {
                    name = "Recon Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_Recon_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_Recon_M_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_Recon_Medic_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_Recon_LAT_Wdl";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "EF_B_Marine_Recon_JTAC_Wdl";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "EF_B_Marine_Recon_Exp_Wdl";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
            };
            class Mechanized {
                class EF_B_MJTF_Wdl_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_AAV9_50mm_MJTF_Wdl";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_SL_Wdl";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_Medic_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_UAV_Wdl";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "EF_B_Marine_AR_Wdl";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "EF_B_Marine_R_Wdl";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "EF_B_Marine_LAT_Wdl";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };

                    class Unit9 {
                        vehicle = "EF_B_Marine_AR_Wdl";
                        rank = "CORPORAL";
                        position[] = {25,-25,0};
                    };

                    class Unit10 {
                        vehicle = "EF_B_Marine_R_Wdl";
                        rank = "PRIVATE";
                        position[] = {-25,-25,0};
                    };

                    class Unit11 {
                        vehicle = "EF_B_Marine_LAT_Wdl";
                        rank = "PRIVATE";
                        position[] = {30,-30,0};
                    };

                    class Unit12 {
                        vehicle = "EF_B_Marine_Mark_Wdl";
                        rank = "SERGEANT";
                        position[] = {-30,-30,0};
                    };

                    class Unit13 {
                        vehicle = "EF_B_Marine_AT_Wdl";
                        rank = "CORPORAL";
                        position[] = {35,-35,0};
                    };
                };
                class EF_B_MJTF_Wdl_MechInf_AA {
                    name = "Mechanized Air-defense Squad";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_AAV9_50mm_MJTF_Wdl";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_SL_Wdl";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_AR_Wdl";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_AA_Wdl";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "EF_B_Marine_AA_Wdl";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "EF_B_Marine_AA_Wdl";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "EF_B_Marine_AAA_Wdl";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "EF_B_Marine_AAA_Wdl";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "EF_B_Marine_AAA_Wdl";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class EF_B_MJTF_Wdl_MechInf_AT {
                    name = "Mechanized Anti-armor Squad";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_AAV9_50mm_MJTF_Wdl";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_SL_Wdl";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_AR_Wdl";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_AT_Wdl";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "EF_B_Marine_AT_Wdl";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "EF_B_Marine_AT_Wdl";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "EF_B_Marine_AAT_Wdl";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "EF_B_Marine_AAT_Wdl";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "EF_B_Marine_AAT_Wdl";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class EF_B_MJTF_Wdl_MechInf_Support {
                    name = "Mechanized Support Squad";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_AAV9_50mm_MJTF_Wdl";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_SL_Wdl";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_Repair_Wdl";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "EF_B_Marine_Eng_Wdl";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "EF_B_Marine_Medic_Wdl";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "EF_B_Marine_AR_Wdl";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "EF_B_Marine_Exp_Wdl";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "EF_B_Marine_AR_Wdl";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized {
                class EF_B_MJTF_Wdl_MotInf_AA {
                    name = "Motorized Air-defense Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_MRAP_01_MJTF_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_AA_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_AA_Wdl";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_AAA_Wdl";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_MRAP_01_MJTF_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_AT_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_AT_Wdl";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_AAT_Wdl";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_MotInf_GMGTeam {
                    name = "Motorized GMG Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_MRAP_01_MJTF_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_GMG_Wdl";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_AMG_Wdl";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_MotInf_MGTeam {
                    name = "Motorized HMG Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_MRAP_01_MJTF_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_HMG_Wdl";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_AMG_Wdl";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_MotInf_MortTeam {
                    name = "Motorized Mortar Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_MRAP_01_MJTF_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_Mort_Wdl";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_AMort_Wdl";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_MotInf_Reinforce {
                    name = "Motorized Reinforcements";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Truck_01_transport_MJTF_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_SL_Wdl";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_R_Wdl";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_LAT_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "EF_B_Marine_Mark_Wdl";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "EF_B_Marine_AR_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "EF_B_Marine_AR_Wdl";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "EF_B_Marine_Medic_Wdl";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "EF_B_Marine_SL_Wdl";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "EF_B_Marine_R_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "EF_B_Marine_LAT_Wdl";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "EF_B_Marine_Mark_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit13 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit14 {
                        vehicle = "EF_B_Marine_AR_Wdl";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit15 {
                        vehicle = "EF_B_Marine_AR_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit16 {
                        vehicle = "EF_B_Marine_Medic_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };
                };
                class EF_B_MJTF_Wdl_MotInf_Team {
                    name = "Motorized Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_MRAP_01_gmg_MJTF_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_AR_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_LAT_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
            class SpecOps {
                class EF_B_MJTF_Wdl_AttackTeam_UAV {
                    name = "Attack UAV Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_UAV_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_UAV_02_CAS_MJTF_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class EF_B_MJTF_Wdl_AttackTeam_UGV {
                    name = "Attack UGV Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_UAV_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_UGV_01_rcws_MJTF_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class EF_B_MJTF_Wdl_CombatDiverTeam {
                    name = "Combat Diver Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_Diver_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_Diver_Pointman_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_Diver_Scout_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_Diver_Eng_Wdl";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_CombatDiverTeam_Boat {
                    name = "Combat Diver Team (Boat)";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_Diver_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_Diver_Pointman_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_Diver_Scout_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_Diver_Eng_Wdl";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "EF_B_Boat_Transport_01_MJTF_Wdl";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_CombatDiverTeam_SDV {
                    name = "Combat Diver Team (SDV)";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_Diver_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_Diver_Pointman_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_Diver_Scout_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_Diver_Eng_Wdl";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "EF_B_SDV_01_MJTF_Wdl";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "EF_B_SDV_01_MJTF_Wdl";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_DiverTeam {
                    name = "Diver Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_Diver_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_Diver_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_Diver_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_Diver_Wdl";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_DiverTeam_Boat {
                    name = "Diver Team (Boat)";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_Diver_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_Diver_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_Diver_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_Diver_Wdl";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "EF_B_Boat_Transport_01_MJTF_Wdl";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_DiverTeam_SDV {
                    name = "Diver Team (SDV)";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_Diver_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_Diver_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_Diver_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_Diver_Wdl";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "EF_B_SDV_01_MJTF_Wdl";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "EF_B_SDV_01_MJTF_Wdl";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_ReconTeam_UAV {
                    name = "Recon UAV Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_UAV_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_UAV_02_MJTF_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class EF_B_MJTF_Wdl_ReconTeam_UGV {
                    name = "Recon UGV Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_UAV_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_UGV_01_MJTF_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class EF_B_MJTF_Wdl_SmallTeam_UAV {
                    name = "Small UAV Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_UAV_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_UAV_01_MJTF_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
            class Support {
                class EF_B_MJTF_Wdl_Recon_EOD {
                    name = "Recon Support Team (EOD)";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_Recon_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_Recon_Exp_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_Recon_Exp_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_Recon_Wdl";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_Support_CLS {
                    name = "Support Team (CLS)";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_AR_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_Medic_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_Medic_Wdl";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_Support_ENG {
                    name = "Support Team (Engineer)";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_Eng_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_Eng_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_Repair_Wdl";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_Support_EOD {
                    name = "Support Team (EOD)";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_Eng_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_Exp_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "EF_B_Marine_Exp_Wdl";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class EF_B_MJTF_Wdl_Support_GMG {
                    name = "GMG Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_GMG_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_AMG_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class EF_B_MJTF_Wdl_Support_MG {
                    name = "HMG Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_HMG_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_AMG_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class EF_B_MJTF_Wdl_Support_Mort {
                    name = "Mortar Team";
                    side = 1;
                    faction = "EF_B_MJTF_Wdl";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";

                    class Unit0 {
                        vehicle = "EF_B_Marine_TL_Wdl";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "EF_B_Marine_Mort_Wdl";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "EF_B_Marine_AMort_Wdl";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
        };
    };
};
