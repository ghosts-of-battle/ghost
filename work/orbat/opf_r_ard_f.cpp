//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class OPF_R_ard_F {
        displayName = "Russia (Arid)";
        side = 0;
        priority = 3;
        icon = "\A3\Data_F_Enoch\FactionIcons\icon_RUS_CA.paa";
        flag = "\A3_Aegis\Data_F_Aegis\Flags\flag_RUS_CO.paa";
    };
};

class CfgVehicles {

    class I_Heli_EC_01A_military_RF;
    class I_Heli_EC_01A_military_RF_OCimport_01 : I_Heli_EC_01A_military_RF { scope = 0; class EventHandlers; };
    class I_Heli_EC_01A_military_RF_OCimport_02 : I_Heli_EC_01A_military_RF_OCimport_01 { class EventHandlers; };

    class I_Heli_EC_02_RF;
    class I_Heli_EC_02_RF_OCimport_01 : I_Heli_EC_02_RF { scope = 0; class EventHandlers; };
    class I_Heli_EC_02_RF_OCimport_02 : I_Heli_EC_02_RF_OCimport_01 { class EventHandlers; };

    class Addgis_O_R_VDV_Soldier_Ard_F;
    class Addgis_O_R_VDV_Soldier_Ard_F_OCimport_01 : Addgis_O_R_VDV_Soldier_Ard_F { scope = 0; class EventHandlers; };
    class Addgis_O_R_VDV_Soldier_Ard_F_OCimport_02 : Addgis_O_R_VDV_Soldier_Ard_F_OCimport_01 { class EventHandlers; };

    class Addgis_O_R_VDV_Soldier_Ard_M_F;
    class Addgis_O_R_VDV_Soldier_Ard_M_F_OCimport_01 : Addgis_O_R_VDV_Soldier_Ard_M_F { scope = 0; class EventHandlers; };
    class Addgis_O_R_VDV_Soldier_Ard_M_F_OCimport_02 : Addgis_O_R_VDV_Soldier_Ard_M_F_OCimport_01 { class EventHandlers; };

    class Addgis_O_R_VDV_Soldier_Ard_Base_F;
    class Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_01 : Addgis_O_R_VDV_Soldier_Ard_Base_F { scope = 0; class EventHandlers; };
    class Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_01 { class EventHandlers; };

    class O_soldier_PG_F;
    class O_soldier_PG_F_OCimport_01 : O_soldier_PG_F { scope = 0; class EventHandlers; };
    class O_soldier_PG_F_OCimport_02 : O_soldier_PG_F_OCimport_01 { class EventHandlers; };

    class Addgis_O_R_VDV_Soldier_Ard_UAV_F;
    class Addgis_O_R_VDV_Soldier_Ard_UAV_F_OCimport_01 : Addgis_O_R_VDV_Soldier_Ard_UAV_F { scope = 0; class EventHandlers; };
    class Addgis_O_R_VDV_Soldier_Ard_UAV_F_OCimport_02 : Addgis_O_R_VDV_Soldier_Ard_UAV_F_OCimport_01 { class EventHandlers; };

    class Addgis_O_R_VDV_Soldier_Ard_exp_F;
    class Addgis_O_R_VDV_Soldier_Ard_exp_F_OCimport_01 : Addgis_O_R_VDV_Soldier_Ard_exp_F { scope = 0; class EventHandlers; };
    class Addgis_O_R_VDV_Soldier_Ard_exp_F_OCimport_02 : Addgis_O_R_VDV_Soldier_Ard_exp_F_OCimport_01 { class EventHandlers; };

    class Aegis_O_R_APC_Tracked_02_30mm_lxWS;
    class Aegis_O_R_APC_Tracked_02_30mm_lxWS_OCimport_01 : Aegis_O_R_APC_Tracked_02_30mm_lxWS { scope = 0; class EventHandlers; };
    class Aegis_O_R_APC_Tracked_02_30mm_lxWS_OCimport_02 : Aegis_O_R_APC_Tracked_02_30mm_lxWS_OCimport_01 { class EventHandlers; };

    class Aegis_O_R_Conscript_AR_F;
    class Aegis_O_R_Conscript_AR_F_OCimport_01 : Aegis_O_R_Conscript_AR_F { scope = 0; class EventHandlers; };
    class Aegis_O_R_Conscript_AR_F_OCimport_02 : Aegis_O_R_Conscript_AR_F_OCimport_01 { class EventHandlers; };

    class Aegis_O_R_Conscript_AT_F;
    class Aegis_O_R_Conscript_AT_F_OCimport_01 : Aegis_O_R_Conscript_AT_F { scope = 0; class EventHandlers; };
    class Aegis_O_R_Conscript_AT_F_OCimport_02 : Aegis_O_R_Conscript_AT_F_OCimport_01 { class EventHandlers; };

    class Aegis_O_R_Conscript_GL_F;
    class Aegis_O_R_Conscript_GL_F_OCimport_01 : Aegis_O_R_Conscript_GL_F { scope = 0; class EventHandlers; };
    class Aegis_O_R_Conscript_GL_F_OCimport_02 : Aegis_O_R_Conscript_GL_F_OCimport_01 { class EventHandlers; };

    class Aegis_O_R_Conscript_M_F;
    class Aegis_O_R_Conscript_M_F_OCimport_01 : Aegis_O_R_Conscript_M_F { scope = 0; class EventHandlers; };
    class Aegis_O_R_Conscript_M_F_OCimport_02 : Aegis_O_R_Conscript_M_F_OCimport_01 { class EventHandlers; };

    class Aegis_O_R_Conscript_Medic_F;
    class Aegis_O_R_Conscript_Medic_F_OCimport_01 : Aegis_O_R_Conscript_Medic_F { scope = 0; class EventHandlers; };
    class Aegis_O_R_Conscript_Medic_F_OCimport_02 : Aegis_O_R_Conscript_Medic_F_OCimport_01 { class EventHandlers; };

    class Aegis_O_R_Conscript_Repair_F;
    class Aegis_O_R_Conscript_Repair_F_OCimport_01 : Aegis_O_R_Conscript_Repair_F { scope = 0; class EventHandlers; };
    class Aegis_O_R_Conscript_Repair_F_OCimport_02 : Aegis_O_R_Conscript_Repair_F_OCimport_01 { class EventHandlers; };

    class Aegis_O_R_Conscript_SL_F;
    class Aegis_O_R_Conscript_SL_F_OCimport_01 : Aegis_O_R_Conscript_SL_F { scope = 0; class EventHandlers; };
    class Aegis_O_R_Conscript_SL_F_OCimport_02 : Aegis_O_R_Conscript_SL_F_OCimport_01 { class EventHandlers; };

    class Aegis_O_R_Conscript_TL_F;
    class Aegis_O_R_Conscript_TL_F_OCimport_01 : Aegis_O_R_Conscript_TL_F { scope = 0; class EventHandlers; };
    class Aegis_O_R_Conscript_TL_F_OCimport_02 : Aegis_O_R_Conscript_TL_F_OCimport_01 { class EventHandlers; };

    class Aegis_O_R_Conscript_F;
    class Aegis_O_R_Conscript_F_OCimport_01 : Aegis_O_R_Conscript_F { scope = 0; class EventHandlers; };
    class Aegis_O_R_Conscript_F_OCimport_02 : Aegis_O_R_Conscript_F_OCimport_01 { class EventHandlers; };

    class Aegis_O_R_Heli_Attack_04_F;
    class Aegis_O_R_Heli_Attack_04_F_OCimport_01 : Aegis_O_R_Heli_Attack_04_F { scope = 0; class EventHandlers; };
    class Aegis_O_R_Heli_Attack_04_F_OCimport_02 : Aegis_O_R_Heli_Attack_04_F_OCimport_01 { class EventHandlers; };

    class Aegis_O_R_MBT_02_Railgun_F;
    class Aegis_O_R_MBT_02_Railgun_F_OCimport_01 : Aegis_O_R_MBT_02_Railgun_F { scope = 0; class EventHandlers; };
    class Aegis_O_R_MBT_02_Railgun_F_OCimport_02 : Aegis_O_R_MBT_02_Railgun_F_OCimport_01 { class EventHandlers; };

    class Aegis_O_R_Sharpshooter_F;
    class Aegis_O_R_Sharpshooter_F_OCimport_01 : Aegis_O_R_Sharpshooter_F { scope = 0; class EventHandlers; };
    class Aegis_O_R_Sharpshooter_F_OCimport_02 : Aegis_O_R_Sharpshooter_F_OCimport_01 { class EventHandlers; };

    class Aegis_O_R_Truck_02_aa_F;
    class Aegis_O_R_Truck_02_aa_F_OCimport_01 : Aegis_O_R_Truck_02_aa_F { scope = 0; class EventHandlers; };
    class Aegis_O_R_Truck_02_aa_F_OCimport_02 : Aegis_O_R_Truck_02_aa_F_OCimport_01 { class EventHandlers; };

    class UAV_02_Base_lxWS;
    class UAV_02_Base_lxWS_OCimport_01 : UAV_02_Base_lxWS { scope = 0; class EventHandlers; };
    class UAV_02_Base_lxWS_OCimport_02 : UAV_02_Base_lxWS_OCimport_01 { class EventHandlers; };

    class O_R_APC_Tracked_02_AA_F;
    class O_R_APC_Tracked_02_AA_F_OCimport_01 : O_R_APC_Tracked_02_AA_F { scope = 0; class EventHandlers; };
    class O_R_APC_Tracked_02_AA_F_OCimport_02 : O_R_APC_Tracked_02_AA_F_OCimport_01 { class EventHandlers; };

    class O_R_APC_Tracked_02_medical_F;
    class O_R_APC_Tracked_02_medical_F_OCimport_01 : O_R_APC_Tracked_02_medical_F { scope = 0; class EventHandlers; };
    class O_R_APC_Tracked_02_medical_F_OCimport_02 : O_R_APC_Tracked_02_medical_F_OCimport_01 { class EventHandlers; };

    class O_R_APC_Wheeled_04_cannon_F;
    class O_R_APC_Wheeled_04_cannon_F_OCimport_01 : O_R_APC_Wheeled_04_cannon_F { scope = 0; class EventHandlers; };
    class O_R_APC_Wheeled_04_cannon_F_OCimport_02 : O_R_APC_Wheeled_04_cannon_F_OCimport_01 { class EventHandlers; };

    class O_R_APC_Wheeled_04_cannon_v2_F;
    class O_R_APC_Wheeled_04_cannon_v2_F_OCimport_01 : O_R_APC_Wheeled_04_cannon_v2_F { scope = 0; class EventHandlers; };
    class O_R_APC_Wheeled_04_cannon_v2_F_OCimport_02 : O_R_APC_Wheeled_04_cannon_v2_F_OCimport_01 { class EventHandlers; };

    class O_R_Boat_Armed_01_hmg_F;
    class O_R_Boat_Armed_01_hmg_F_OCimport_01 : O_R_Boat_Armed_01_hmg_F { scope = 0; class EventHandlers; };
    class O_R_Boat_Armed_01_hmg_F_OCimport_02 : O_R_Boat_Armed_01_hmg_F_OCimport_01 { class EventHandlers; };

    class O_R_Boat_Transport_01_F;
    class O_R_Boat_Transport_01_F_OCimport_01 : O_R_Boat_Transport_01_F { scope = 0; class EventHandlers; };
    class O_R_Boat_Transport_01_F_OCimport_02 : O_R_Boat_Transport_01_F_OCimport_01 { class EventHandlers; };

    class O_R_Fighter_Pilot_F;
    class O_R_Fighter_Pilot_F_OCimport_01 : O_R_Fighter_Pilot_F { scope = 0; class EventHandlers; };
    class O_R_Fighter_Pilot_F_OCimport_02 : O_R_Fighter_Pilot_F_OCimport_01 { class EventHandlers; };

    class O_GMG_01_A_F;
    class O_GMG_01_A_F_OCimport_01 : O_GMG_01_A_F { scope = 0; class EventHandlers; };
    class O_GMG_01_A_F_OCimport_02 : O_GMG_01_A_F_OCimport_01 { class EventHandlers; };

    class O_GMG_01_F;
    class O_GMG_01_F_OCimport_01 : O_GMG_01_F { scope = 0; class EventHandlers; };
    class O_GMG_01_F_OCimport_02 : O_GMG_01_F_OCimport_01 { class EventHandlers; };

    class O_GMG_01_high_F;
    class O_GMG_01_high_F_OCimport_01 : O_GMG_01_high_F { scope = 0; class EventHandlers; };
    class O_GMG_01_high_F_OCimport_02 : O_GMG_01_high_F_OCimport_01 { class EventHandlers; };

    class O_HMG_01_A_F;
    class O_HMG_01_A_F_OCimport_01 : O_HMG_01_A_F { scope = 0; class EventHandlers; };
    class O_HMG_01_A_F_OCimport_02 : O_HMG_01_A_F_OCimport_01 { class EventHandlers; };

    class O_HMG_01_F;
    class O_HMG_01_F_OCimport_01 : O_HMG_01_F { scope = 0; class EventHandlers; };
    class O_HMG_01_F_OCimport_02 : O_HMG_01_F_OCimport_01 { class EventHandlers; };

    class O_HMG_01_high_F;
    class O_HMG_01_high_F_OCimport_01 : O_HMG_01_high_F { scope = 0; class EventHandlers; };
    class O_HMG_01_high_F_OCimport_02 : O_HMG_01_high_F_OCimport_01 { class EventHandlers; };

    class O_R_Heli_Attack_02_dynamicLoadout_F;
    class O_R_Heli_Attack_02_dynamicLoadout_F_OCimport_01 : O_R_Heli_Attack_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_R_Heli_Attack_02_dynamicLoadout_F_OCimport_02 : O_R_Heli_Attack_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class O_R_Heli_Light_02_dynamicLoadout_F;
    class O_R_Heli_Light_02_dynamicLoadout_F_OCimport_01 : O_R_Heli_Light_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_R_Heli_Light_02_dynamicLoadout_F_OCimport_02 : O_R_Heli_Light_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class O_R_Heli_Light_02_unarmed_F;
    class O_R_Heli_Light_02_unarmed_F_OCimport_01 : O_R_Heli_Light_02_unarmed_F { scope = 0; class EventHandlers; };
    class O_R_Heli_Light_02_unarmed_F_OCimport_02 : O_R_Heli_Light_02_unarmed_F_OCimport_01 { class EventHandlers; };

    class O_R_Heli_Transport_04_ammo_F;
    class O_R_Heli_Transport_04_ammo_F_OCimport_01 : O_R_Heli_Transport_04_ammo_F { scope = 0; class EventHandlers; };
    class O_R_Heli_Transport_04_ammo_F_OCimport_02 : O_R_Heli_Transport_04_ammo_F_OCimport_01 { class EventHandlers; };

    class O_R_Heli_Transport_04_F;
    class O_R_Heli_Transport_04_F_OCimport_01 : O_R_Heli_Transport_04_F { scope = 0; class EventHandlers; };
    class O_R_Heli_Transport_04_F_OCimport_02 : O_R_Heli_Transport_04_F_OCimport_01 { class EventHandlers; };

    class O_R_Heli_Transport_04_bench_F;
    class O_R_Heli_Transport_04_bench_F_OCimport_01 : O_R_Heli_Transport_04_bench_F { scope = 0; class EventHandlers; };
    class O_R_Heli_Transport_04_bench_F_OCimport_02 : O_R_Heli_Transport_04_bench_F_OCimport_01 { class EventHandlers; };

    class O_R_Heli_Transport_04_box_F;
    class O_R_Heli_Transport_04_box_F_OCimport_01 : O_R_Heli_Transport_04_box_F { scope = 0; class EventHandlers; };
    class O_R_Heli_Transport_04_box_F_OCimport_02 : O_R_Heli_Transport_04_box_F_OCimport_01 { class EventHandlers; };

    class O_R_Heli_Transport_04_covered_F;
    class O_R_Heli_Transport_04_covered_F_OCimport_01 : O_R_Heli_Transport_04_covered_F { scope = 0; class EventHandlers; };
    class O_R_Heli_Transport_04_covered_F_OCimport_02 : O_R_Heli_Transport_04_covered_F_OCimport_01 { class EventHandlers; };

    class O_R_Heli_Transport_04_fuel_F;
    class O_R_Heli_Transport_04_fuel_F_OCimport_01 : O_R_Heli_Transport_04_fuel_F { scope = 0; class EventHandlers; };
    class O_R_Heli_Transport_04_fuel_F_OCimport_02 : O_R_Heli_Transport_04_fuel_F_OCimport_01 { class EventHandlers; };

    class O_R_Heli_Transport_04_medevac_F;
    class O_R_Heli_Transport_04_medevac_F_OCimport_01 : O_R_Heli_Transport_04_medevac_F { scope = 0; class EventHandlers; };
    class O_R_Heli_Transport_04_medevac_F_OCimport_02 : O_R_Heli_Transport_04_medevac_F_OCimport_01 { class EventHandlers; };

    class O_R_Heli_Transport_04_repair_F;
    class O_R_Heli_Transport_04_repair_F_OCimport_01 : O_R_Heli_Transport_04_repair_F { scope = 0; class EventHandlers; };
    class O_R_Heli_Transport_04_repair_F_OCimport_02 : O_R_Heli_Transport_04_repair_F_OCimport_01 { class EventHandlers; };

    class O_R_LSV_02_AT_F;
    class O_R_LSV_02_AT_F_OCimport_01 : O_R_LSV_02_AT_F { scope = 0; class EventHandlers; };
    class O_R_LSV_02_AT_F_OCimport_02 : O_R_LSV_02_AT_F_OCimport_01 { class EventHandlers; };

    class O_R_LSV_02_armed_F;
    class O_R_LSV_02_armed_F_OCimport_01 : O_R_LSV_02_armed_F { scope = 0; class EventHandlers; };
    class O_R_LSV_02_armed_F_OCimport_02 : O_R_LSV_02_armed_F_OCimport_01 { class EventHandlers; };

    class O_R_LSV_02_unarmed_F;
    class O_R_LSV_02_unarmed_F_OCimport_01 : O_R_LSV_02_unarmed_F { scope = 0; class EventHandlers; };
    class O_R_LSV_02_unarmed_F_OCimport_02 : O_R_LSV_02_unarmed_F_OCimport_01 { class EventHandlers; };

    class O_R_Lifeboat;
    class O_R_Lifeboat_OCimport_01 : O_R_Lifeboat { scope = 0; class EventHandlers; };
    class O_R_Lifeboat_OCimport_02 : O_R_Lifeboat_OCimport_01 { class EventHandlers; };

    class O_R_MBT_02_arty_F;
    class O_R_MBT_02_arty_F_OCimport_01 : O_R_MBT_02_arty_F { scope = 0; class EventHandlers; };
    class O_R_MBT_02_arty_F_OCimport_02 : O_R_MBT_02_arty_F_OCimport_01 { class EventHandlers; };

    class O_R_MBT_02_cannon_F;
    class O_R_MBT_02_cannon_F_OCimport_01 : O_R_MBT_02_cannon_F { scope = 0; class EventHandlers; };
    class O_R_MBT_02_cannon_F_OCimport_02 : O_R_MBT_02_cannon_F_OCimport_01 { class EventHandlers; };

    class O_R_MBT_04_cannon_F;
    class O_R_MBT_04_cannon_F_OCimport_01 : O_R_MBT_04_cannon_F { scope = 0; class EventHandlers; };
    class O_R_MBT_04_cannon_F_OCimport_02 : O_R_MBT_04_cannon_F_OCimport_01 { class EventHandlers; };

    class O_R_MBT_04_command_F;
    class O_R_MBT_04_command_F_OCimport_01 : O_R_MBT_04_command_F { scope = 0; class EventHandlers; };
    class O_R_MBT_04_command_F_OCimport_02 : O_R_MBT_04_command_F_OCimport_01 { class EventHandlers; };

    class O_R_MRAP_02_F;
    class O_R_MRAP_02_F_OCimport_01 : O_R_MRAP_02_F { scope = 0; class EventHandlers; };
    class O_R_MRAP_02_F_OCimport_02 : O_R_MRAP_02_F_OCimport_01 { class EventHandlers; };

    class O_R_MRAP_02_gmg_F;
    class O_R_MRAP_02_gmg_F_OCimport_01 : O_R_MRAP_02_gmg_F { scope = 0; class EventHandlers; };
    class O_R_MRAP_02_gmg_F_OCimport_02 : O_R_MRAP_02_gmg_F_OCimport_01 { class EventHandlers; };

    class O_R_MRAP_02_hmg_F;
    class O_R_MRAP_02_hmg_F_OCimport_01 : O_R_MRAP_02_hmg_F { scope = 0; class EventHandlers; };
    class O_R_MRAP_02_hmg_F_OCimport_02 : O_R_MRAP_02_hmg_F_OCimport_01 { class EventHandlers; };

    class O_Mortar_01_F;
    class O_Mortar_01_F_OCimport_01 : O_Mortar_01_F { scope = 0; class EventHandlers; };
    class O_Mortar_01_F_OCimport_02 : O_Mortar_01_F_OCimport_01 { class EventHandlers; };

    class O_R_Plane_CAS_02_dynamicLoadout_F;
    class O_R_Plane_CAS_02_dynamicLoadout_F_OCimport_01 : O_R_Plane_CAS_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_R_Plane_CAS_02_dynamicLoadout_F_OCimport_02 : O_R_Plane_CAS_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class O_R_Plane_Fighter_02_Stealth_F;
    class O_R_Plane_Fighter_02_Stealth_F_OCimport_01 : O_R_Plane_Fighter_02_Stealth_F { scope = 0; class EventHandlers; };
    class O_R_Plane_Fighter_02_Stealth_F_OCimport_02 : O_R_Plane_Fighter_02_Stealth_F_OCimport_01 { class EventHandlers; };

    class O_R_Plane_Fighter_02_F;
    class O_R_Plane_Fighter_02_F_OCimport_01 : O_R_Plane_Fighter_02_F { scope = 0; class EventHandlers; };
    class O_R_Plane_Fighter_02_F_OCimport_02 : O_R_Plane_Fighter_02_F_OCimport_01 { class EventHandlers; };

    class O_R_Quadbike_01_F;
    class O_R_Quadbike_01_F_OCimport_01 : O_R_Quadbike_01_F { scope = 0; class EventHandlers; };
    class O_R_Quadbike_01_F_OCimport_02 : O_R_Quadbike_01_F_OCimport_01 { class EventHandlers; };

    class O_R_Radar_System_02_F;
    class O_R_Radar_System_02_F_OCimport_01 : O_R_Radar_System_02_F { scope = 0; class EventHandlers; };
    class O_R_Radar_System_02_F_OCimport_02 : O_R_Radar_System_02_F_OCimport_01 { class EventHandlers; };

    class O_R_Soldier_ard_F;
    class O_R_Soldier_ard_F_OCimport_01 : O_R_Soldier_ard_F { scope = 0; class EventHandlers; };
    class O_R_Soldier_ard_F_OCimport_02 : O_R_Soldier_ard_F_OCimport_01 { class EventHandlers; };

    class O_R_SAM_System_04_F;
    class O_R_SAM_System_04_F_OCimport_01 : O_R_SAM_System_04_F { scope = 0; class EventHandlers; };
    class O_R_SAM_System_04_F_OCimport_02 : O_R_SAM_System_04_F_OCimport_01 { class EventHandlers; };

    class O_R_SDV_01_F;
    class O_R_SDV_01_F_OCimport_01 : O_R_SDV_01_F { scope = 0; class EventHandlers; };
    class O_R_SDV_01_F_OCimport_02 : O_R_SDV_01_F_OCimport_01 { class EventHandlers; };

    class O_R_Soldier_AAA_F;
    class O_R_Soldier_AAA_F_OCimport_01 : O_R_Soldier_AAA_F { scope = 0; class EventHandlers; };
    class O_R_Soldier_AAA_F_OCimport_02 : O_R_Soldier_AAA_F_OCimport_01 { class EventHandlers; };

    class O_R_Soldier_AAR_F;
    class O_R_Soldier_AAR_F_OCimport_01 : O_R_Soldier_AAR_F { scope = 0; class EventHandlers; };
    class O_R_Soldier_AAR_F_OCimport_02 : O_R_Soldier_AAR_F_OCimport_01 { class EventHandlers; };

    class O_R_Soldier_AAT_F;
    class O_R_Soldier_AAT_F_OCimport_01 : O_R_Soldier_AAT_F { scope = 0; class EventHandlers; };
    class O_R_Soldier_AAT_F_OCimport_02 : O_R_Soldier_AAT_F_OCimport_01 { class EventHandlers; };

    class O_R_Soldier_AHAT_F;
    class O_R_Soldier_AHAT_F_OCimport_01 : O_R_Soldier_AHAT_F { scope = 0; class EventHandlers; };
    class O_R_Soldier_AHAT_F_OCimport_02 : O_R_Soldier_AHAT_F_OCimport_01 { class EventHandlers; };

    class O_R_Soldier_A_F;
    class O_R_Soldier_A_F_OCimport_01 : O_R_Soldier_A_F { scope = 0; class EventHandlers; };
    class O_R_Soldier_A_F_OCimport_02 : O_R_Soldier_A_F_OCimport_01 { class EventHandlers; };

    class O_R_Soldier_CQ_F;
    class O_R_Soldier_CQ_F_OCimport_01 : O_R_Soldier_CQ_F { scope = 0; class EventHandlers; };
    class O_R_Soldier_CQ_F_OCimport_02 : O_R_Soldier_CQ_F_OCimport_01 { class EventHandlers; };

    class O_R_Soldier_GL_F;
    class O_R_Soldier_GL_F_OCimport_01 : O_R_Soldier_GL_F { scope = 0; class EventHandlers; };
    class O_R_Soldier_GL_F_OCimport_02 : O_R_Soldier_GL_F_OCimport_01 { class EventHandlers; };

    class O_R_Soldier_HAT_F;
    class O_R_Soldier_HAT_F_OCimport_01 : O_R_Soldier_HAT_F { scope = 0; class EventHandlers; };
    class O_R_Soldier_HAT_F_OCimport_02 : O_R_Soldier_HAT_F_OCimport_01 { class EventHandlers; };

    class O_R_Soldier_LAT_F;
    class O_R_Soldier_LAT_F_OCimport_01 : O_R_Soldier_LAT_F { scope = 0; class EventHandlers; };
    class O_R_Soldier_LAT_F_OCimport_02 : O_R_Soldier_LAT_F_OCimport_01 { class EventHandlers; };

    class O_R_Soldier_PG_F;
    class O_R_Soldier_PG_F_OCimport_01 : O_R_Soldier_PG_F { scope = 0; class EventHandlers; };
    class O_R_Soldier_PG_F_OCimport_02 : O_R_Soldier_PG_F_OCimport_01 { class EventHandlers; };

    class O_R_Soldier_SL_F;
    class O_R_Soldier_SL_F_OCimport_01 : O_R_Soldier_SL_F { scope = 0; class EventHandlers; };
    class O_R_Soldier_SL_F_OCimport_02 : O_R_Soldier_SL_F_OCimport_01 { class EventHandlers; };

    class O_R_Soldier_TL_F;
    class O_R_Soldier_TL_F_OCimport_01 : O_R_Soldier_TL_F { scope = 0; class EventHandlers; };
    class O_R_Soldier_TL_F_OCimport_02 : O_R_Soldier_TL_F_OCimport_01 { class EventHandlers; };

    class O_R_Soldier_F;
    class O_R_Soldier_F_OCimport_01 : O_R_Soldier_F { scope = 0; class EventHandlers; };
    class O_R_Soldier_F_OCimport_02 : O_R_Soldier_F_OCimport_01 { class EventHandlers; };

    class O_R_Soldier_lite_F;
    class O_R_Soldier_lite_F_OCimport_01 : O_R_Soldier_lite_F { scope = 0; class EventHandlers; };
    class O_R_Soldier_lite_F_OCimport_02 : O_R_Soldier_lite_F_OCimport_01 { class EventHandlers; };

    class O_R_Static_AA_F;
    class O_R_Static_AA_F_OCimport_01 : O_R_Static_AA_F { scope = 0; class EventHandlers; };
    class O_R_Static_AA_F_OCimport_02 : O_R_Static_AA_F_OCimport_01 { class EventHandlers; };

    class O_R_Static_AT_F;
    class O_R_Static_AT_F_OCimport_01 : O_R_Static_AT_F { scope = 0; class EventHandlers; };
    class O_R_Static_AT_F_OCimport_02 : O_R_Static_AT_F_OCimport_01 { class EventHandlers; };

    class O_R_Static_Designator_02_F;
    class O_R_Static_Designator_02_F_OCimport_01 : O_R_Static_Designator_02_F { scope = 0; class EventHandlers; };
    class O_R_Static_Designator_02_F_OCimport_02 : O_R_Static_Designator_02_F_OCimport_01 { class EventHandlers; };

    class O_R_Truck_02_Ammo_F;
    class O_R_Truck_02_Ammo_F_OCimport_01 : O_R_Truck_02_Ammo_F { scope = 0; class EventHandlers; };
    class O_R_Truck_02_Ammo_F_OCimport_02 : O_R_Truck_02_Ammo_F_OCimport_01 { class EventHandlers; };

    class O_R_Truck_02_MRL_F;
    class O_R_Truck_02_MRL_F_OCimport_01 : O_R_Truck_02_MRL_F { scope = 0; class EventHandlers; };
    class O_R_Truck_02_MRL_F_OCimport_02 : O_R_Truck_02_MRL_F_OCimport_01 { class EventHandlers; };

    class O_R_Truck_02_F;
    class O_R_Truck_02_F_OCimport_01 : O_R_Truck_02_F { scope = 0; class EventHandlers; };
    class O_R_Truck_02_F_OCimport_02 : O_R_Truck_02_F_OCimport_01 { class EventHandlers; };

    class O_R_Truck_02_box_F;
    class O_R_Truck_02_box_F_OCimport_01 : O_R_Truck_02_box_F { scope = 0; class EventHandlers; };
    class O_R_Truck_02_box_F_OCimport_02 : O_R_Truck_02_box_F_OCimport_01 { class EventHandlers; };

    class O_R_Truck_02_cargo_F;
    class O_R_Truck_02_cargo_F_OCimport_01 : O_R_Truck_02_cargo_F { scope = 0; class EventHandlers; };
    class O_R_Truck_02_cargo_F_OCimport_02 : O_R_Truck_02_cargo_F_OCimport_01 { class EventHandlers; };

    class O_R_Truck_02_flatbed_F;
    class O_R_Truck_02_flatbed_F_OCimport_01 : O_R_Truck_02_flatbed_F { scope = 0; class EventHandlers; };
    class O_R_Truck_02_flatbed_F_OCimport_02 : O_R_Truck_02_flatbed_F_OCimport_01 { class EventHandlers; };

    class O_R_Truck_02_fuel_F;
    class O_R_Truck_02_fuel_F_OCimport_01 : O_R_Truck_02_fuel_F { scope = 0; class EventHandlers; };
    class O_R_Truck_02_fuel_F_OCimport_02 : O_R_Truck_02_fuel_F_OCimport_01 { class EventHandlers; };

    class O_R_Truck_02_medical_F;
    class O_R_Truck_02_medical_F_OCimport_01 : O_R_Truck_02_medical_F { scope = 0; class EventHandlers; };
    class O_R_Truck_02_medical_F_OCimport_02 : O_R_Truck_02_medical_F_OCimport_01 { class EventHandlers; };

    class O_R_Truck_02_transport_F;
    class O_R_Truck_02_transport_F_OCimport_01 : O_R_Truck_02_transport_F { scope = 0; class EventHandlers; };
    class O_R_Truck_02_transport_F_OCimport_02 : O_R_Truck_02_transport_F_OCimport_01 { class EventHandlers; };

    class O_R_Truck_03_ammo_F;
    class O_R_Truck_03_ammo_F_OCimport_01 : O_R_Truck_03_ammo_F { scope = 0; class EventHandlers; };
    class O_R_Truck_03_ammo_F_OCimport_02 : O_R_Truck_03_ammo_F_OCimport_01 { class EventHandlers; };

    class O_R_Truck_03_covered_F;
    class O_R_Truck_03_covered_F_OCimport_01 : O_R_Truck_03_covered_F { scope = 0; class EventHandlers; };
    class O_R_Truck_03_covered_F_OCimport_02 : O_R_Truck_03_covered_F_OCimport_01 { class EventHandlers; };

    class O_R_Truck_03_fuel_F;
    class O_R_Truck_03_fuel_F_OCimport_01 : O_R_Truck_03_fuel_F { scope = 0; class EventHandlers; };
    class O_R_Truck_03_fuel_F_OCimport_02 : O_R_Truck_03_fuel_F_OCimport_01 { class EventHandlers; };

    class O_R_Truck_03_medical_F;
    class O_R_Truck_03_medical_F_OCimport_01 : O_R_Truck_03_medical_F { scope = 0; class EventHandlers; };
    class O_R_Truck_03_medical_F_OCimport_02 : O_R_Truck_03_medical_F_OCimport_01 { class EventHandlers; };

    class O_R_Truck_03_repair_F;
    class O_R_Truck_03_repair_F_OCimport_01 : O_R_Truck_03_repair_F { scope = 0; class EventHandlers; };
    class O_R_Truck_03_repair_F_OCimport_02 : O_R_Truck_03_repair_F_OCimport_01 { class EventHandlers; };

    class O_R_Truck_03_transport_F;
    class O_R_Truck_03_transport_F_OCimport_01 : O_R_Truck_03_transport_F { scope = 0; class EventHandlers; };
    class O_R_Truck_03_transport_F_OCimport_02 : O_R_Truck_03_transport_F_OCimport_01 { class EventHandlers; };

    class O_R_UAV_01_F;
    class O_R_UAV_01_F_OCimport_01 : O_R_UAV_01_F { scope = 0; class EventHandlers; };
    class O_R_UAV_01_F_OCimport_02 : O_R_UAV_01_F_OCimport_01 { class EventHandlers; };

    class O_R_UAV_02_dynamicLoadout_F;
    class O_R_UAV_02_dynamicLoadout_F_OCimport_01 : O_R_UAV_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_R_UAV_02_dynamicLoadout_F_OCimport_02 : O_R_UAV_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class O_R_UAV_06_F;
    class O_R_UAV_06_F_OCimport_01 : O_R_UAV_06_F { scope = 0; class EventHandlers; };
    class O_R_UAV_06_F_OCimport_02 : O_R_UAV_06_F_OCimport_01 { class EventHandlers; };

    class O_R_UAV_06_medical_F;
    class O_R_UAV_06_medical_F_OCimport_01 : O_R_UAV_06_medical_F { scope = 0; class EventHandlers; };
    class O_R_UAV_06_medical_F_OCimport_02 : O_R_UAV_06_medical_F_OCimport_01 { class EventHandlers; };

    class O_R_UGV_01_F;
    class O_R_UGV_01_F_OCimport_01 : O_R_UGV_01_F { scope = 0; class EventHandlers; };
    class O_R_UGV_01_F_OCimport_02 : O_R_UGV_01_F_OCimport_01 { class EventHandlers; };

    class O_R_UGV_01_medical_F;
    class O_R_UGV_01_medical_F_OCimport_01 : O_R_UGV_01_medical_F { scope = 0; class EventHandlers; };
    class O_R_UGV_01_medical_F_OCimport_02 : O_R_UGV_01_medical_F_OCimport_01 { class EventHandlers; };

    class O_R_UGV_01_rcws_F;
    class O_R_UGV_01_rcws_F_OCimport_01 : O_R_UGV_01_rcws_F { scope = 0; class EventHandlers; };
    class O_R_UGV_01_rcws_F_OCimport_02 : O_R_UGV_01_rcws_F_OCimport_01 { class EventHandlers; };

    class O_R_UGV_02_Demining_F;
    class O_R_UGV_02_Demining_F_OCimport_01 : O_R_UGV_02_Demining_F { scope = 0; class EventHandlers; };
    class O_R_UGV_02_Demining_F_OCimport_02 : O_R_UGV_02_Demining_F_OCimport_01 { class EventHandlers; };

    class O_R_crew_F;
    class O_R_crew_F_OCimport_01 : O_R_crew_F { scope = 0; class EventHandlers; };
    class O_R_crew_F_OCimport_02 : O_R_crew_F_OCimport_01 { class EventHandlers; };

    class O_R_diver_TL_F;
    class O_R_diver_TL_F_OCimport_01 : O_R_diver_TL_F { scope = 0; class EventHandlers; };
    class O_R_diver_TL_F_OCimport_02 : O_R_diver_TL_F_OCimport_01 { class EventHandlers; };

    class O_R_diver_F;
    class O_R_diver_F_OCimport_01 : O_R_diver_F { scope = 0; class EventHandlers; };
    class O_R_diver_F_OCimport_02 : O_R_diver_F_OCimport_01 { class EventHandlers; };

    class O_R_diver_exp_F;
    class O_R_diver_exp_F_OCimport_01 : O_R_diver_exp_F { scope = 0; class EventHandlers; };
    class O_R_diver_exp_F_OCimport_02 : O_R_diver_exp_F_OCimport_01 { class EventHandlers; };

    class O_R_engineer_F;
    class O_R_engineer_F_OCimport_01 : O_R_engineer_F { scope = 0; class EventHandlers; };
    class O_R_engineer_F_OCimport_02 : O_R_engineer_F_OCimport_01 { class EventHandlers; };

    class O_R_ghillie_base_F;
    class O_R_ghillie_base_F_OCimport_01 : O_R_ghillie_base_F { scope = 0; class EventHandlers; };
    class O_R_ghillie_base_F_OCimport_02 : O_R_ghillie_base_F_OCimport_01 { class EventHandlers; };

    class O_R_ghillie_ard_F;
    class O_R_ghillie_ard_F_OCimport_01 : O_R_ghillie_ard_F { scope = 0; class EventHandlers; };
    class O_R_ghillie_ard_F_OCimport_02 : O_R_ghillie_ard_F_OCimport_01 { class EventHandlers; };

    class O_R_ghillie_lsh_F;
    class O_R_ghillie_lsh_F_OCimport_01 : O_R_ghillie_lsh_F { scope = 0; class EventHandlers; };
    class O_R_ghillie_lsh_F_OCimport_02 : O_R_ghillie_lsh_F_OCimport_01 { class EventHandlers; };

    class O_R_ghillie_sard_F;
    class O_R_ghillie_sard_F_OCimport_01 : O_R_ghillie_sard_F { scope = 0; class EventHandlers; };
    class O_R_ghillie_sard_F_OCimport_02 : O_R_ghillie_sard_F_OCimport_01 { class EventHandlers; };

    class O_R_helicrew_F;
    class O_R_helicrew_F_OCimport_01 : O_R_helicrew_F { scope = 0; class EventHandlers; };
    class O_R_helicrew_F_OCimport_02 : O_R_helicrew_F_OCimport_01 { class EventHandlers; };

    class O_R_helipilot_F;
    class O_R_helipilot_F_OCimport_01 : O_R_helipilot_F { scope = 0; class EventHandlers; };
    class O_R_helipilot_F_OCimport_02 : O_R_helipilot_F_OCimport_01 { class EventHandlers; };

    class O_R_medic_F;
    class O_R_medic_F_OCimport_01 : O_R_medic_F { scope = 0; class EventHandlers; };
    class O_R_medic_F_OCimport_02 : O_R_medic_F_OCimport_01 { class EventHandlers; };

    class O_R_officer_F;
    class O_R_officer_F_OCimport_01 : O_R_officer_F { scope = 0; class EventHandlers; };
    class O_R_officer_F_OCimport_02 : O_R_officer_F_OCimport_01 { class EventHandlers; };

    class O_R_recon_AR_F;
    class O_R_recon_AR_F_OCimport_01 : O_R_recon_AR_F { scope = 0; class EventHandlers; };
    class O_R_recon_AR_F_OCimport_02 : O_R_recon_AR_F_OCimport_01 { class EventHandlers; };

    class O_R_recon_CQ_F;
    class O_R_recon_CQ_F_OCimport_01 : O_R_recon_CQ_F { scope = 0; class EventHandlers; };
    class O_R_recon_CQ_F_OCimport_02 : O_R_recon_CQ_F_OCimport_01 { class EventHandlers; };

    class O_R_recon_GL_F;
    class O_R_recon_GL_F_OCimport_01 : O_R_recon_GL_F { scope = 0; class EventHandlers; };
    class O_R_recon_GL_F_OCimport_02 : O_R_recon_GL_F_OCimport_01 { class EventHandlers; };

    class O_R_recon_JTAC_F;
    class O_R_recon_JTAC_F_OCimport_01 : O_R_recon_JTAC_F { scope = 0; class EventHandlers; };
    class O_R_recon_JTAC_F_OCimport_02 : O_R_recon_JTAC_F_OCimport_01 { class EventHandlers; };

    class O_R_recon_LAT_F;
    class O_R_recon_LAT_F_OCimport_01 : O_R_recon_LAT_F { scope = 0; class EventHandlers; };
    class O_R_recon_LAT_F_OCimport_02 : O_R_recon_LAT_F_OCimport_01 { class EventHandlers; };

    class O_R_recon_M_F;
    class O_R_recon_M_F_OCimport_01 : O_R_recon_M_F { scope = 0; class EventHandlers; };
    class O_R_recon_M_F_OCimport_02 : O_R_recon_M_F_OCimport_01 { class EventHandlers; };

    class O_R_recon_TL_F;
    class O_R_recon_TL_F_OCimport_01 : O_R_recon_TL_F { scope = 0; class EventHandlers; };
    class O_R_recon_TL_F_OCimport_02 : O_R_recon_TL_F_OCimport_01 { class EventHandlers; };

    class O_R_recon_F;
    class O_R_recon_F_OCimport_01 : O_R_recon_F { scope = 0; class EventHandlers; };
    class O_R_recon_F_OCimport_02 : O_R_recon_F_OCimport_01 { class EventHandlers; };

    class O_R_recon_exp_F;
    class O_R_recon_exp_F_OCimport_01 : O_R_recon_exp_F { scope = 0; class EventHandlers; };
    class O_R_recon_exp_F_OCimport_02 : O_R_recon_exp_F_OCimport_01 { class EventHandlers; };

    class O_R_recon_medic_F;
    class O_R_recon_medic_F_OCimport_01 : O_R_recon_medic_F { scope = 0; class EventHandlers; };
    class O_R_recon_medic_F_OCimport_02 : O_R_recon_medic_F_OCimport_01 { class EventHandlers; };

    class O_R_sniper_F;
    class O_R_sniper_F_OCimport_01 : O_R_sniper_F { scope = 0; class EventHandlers; };
    class O_R_sniper_F_OCimport_02 : O_R_sniper_F_OCimport_01 { class EventHandlers; };

    class O_R_soldier_AA_F;
    class O_R_soldier_AA_F_OCimport_01 : O_R_soldier_AA_F { scope = 0; class EventHandlers; };
    class O_R_soldier_AA_F_OCimport_02 : O_R_soldier_AA_F_OCimport_01 { class EventHandlers; };

    class O_R_Soldier_AR_F;
    class O_R_Soldier_AR_F_OCimport_01 : O_R_Soldier_AR_F { scope = 0; class EventHandlers; };
    class O_R_Soldier_AR_F_OCimport_02 : O_R_Soldier_AR_F_OCimport_01 { class EventHandlers; };

    class O_R_soldier_AT_F;
    class O_R_soldier_AT_F_OCimport_01 : O_R_soldier_AT_F { scope = 0; class EventHandlers; };
    class O_R_soldier_AT_F_OCimport_02 : O_R_soldier_AT_F_OCimport_01 { class EventHandlers; };

    class O_R_soldier_M_F;
    class O_R_soldier_M_F_OCimport_01 : O_R_soldier_M_F { scope = 0; class EventHandlers; };
    class O_R_soldier_M_F_OCimport_02 : O_R_soldier_M_F_OCimport_01 { class EventHandlers; };

    class O_R_soldier_UAV_ard_F;
    class O_R_soldier_UAV_ard_F_OCimport_01 : O_R_soldier_UAV_ard_F { scope = 0; class EventHandlers; };
    class O_R_soldier_UAV_ard_F_OCimport_02 : O_R_soldier_UAV_ard_F_OCimport_01 { class EventHandlers; };

    class O_R_soldier_UAV_F;
    class O_R_soldier_UAV_F_OCimport_01 : O_R_soldier_UAV_F { scope = 0; class EventHandlers; };
    class O_R_soldier_UAV_F_OCimport_02 : O_R_soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class O_R_soldier_exp_F;
    class O_R_soldier_exp_F_OCimport_01 : O_R_soldier_exp_F { scope = 0; class EventHandlers; };
    class O_R_soldier_exp_F_OCimport_02 : O_R_soldier_exp_F_OCimport_01 { class EventHandlers; };

    class O_R_soldier_exp_ard_F;
    class O_R_soldier_exp_ard_F_OCimport_01 : O_R_soldier_exp_ard_F { scope = 0; class EventHandlers; };
    class O_R_soldier_exp_ard_F_OCimport_02 : O_R_soldier_exp_ard_F_OCimport_01 { class EventHandlers; };

    class O_R_soldier_repair_F;
    class O_R_soldier_repair_F_OCimport_01 : O_R_soldier_repair_F { scope = 0; class EventHandlers; };
    class O_R_soldier_repair_F_OCimport_02 : O_R_soldier_repair_F_OCimport_01 { class EventHandlers; };

    class O_R_spotter_F;
    class O_R_spotter_F_OCimport_01 : O_R_spotter_F { scope = 0; class EventHandlers; };
    class O_R_spotter_F_OCimport_02 : O_R_spotter_F_OCimport_01 { class EventHandlers; };

    class O_R_support_AMG_F;
    class O_R_support_AMG_F_OCimport_01 : O_R_support_AMG_F { scope = 0; class EventHandlers; };
    class O_R_support_AMG_F_OCimport_02 : O_R_support_AMG_F_OCimport_01 { class EventHandlers; };

    class O_R_support_AMort_F;
    class O_R_support_AMort_F_OCimport_01 : O_R_support_AMort_F { scope = 0; class EventHandlers; };
    class O_R_support_AMort_F_OCimport_02 : O_R_support_AMort_F_OCimport_01 { class EventHandlers; };

    class O_R_support_GMG_F;
    class O_R_support_GMG_F_OCimport_01 : O_R_support_GMG_F { scope = 0; class EventHandlers; };
    class O_R_support_GMG_F_OCimport_02 : O_R_support_GMG_F_OCimport_01 { class EventHandlers; };

    class O_R_support_MG_F;
    class O_R_support_MG_F_OCimport_01 : O_R_support_MG_F { scope = 0; class EventHandlers; };
    class O_R_support_MG_F_OCimport_02 : O_R_support_MG_F_OCimport_01 { class EventHandlers; };

    class O_R_support_Mort_F;
    class O_R_support_Mort_F_OCimport_01 : O_R_support_Mort_F { scope = 0; class EventHandlers; };
    class O_R_support_Mort_F_OCimport_02 : O_R_support_Mort_F_OCimport_01 { class EventHandlers; };

    class AddGis_O_R_ard_Heli_EC_01A_military_F : I_Heli_EC_01A_military_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-33 Sova (Unarmed)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_O_R_ard_Heli_EC_02_F : I_Heli_EC_02_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-33 Sova";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_RadioOperator_Ard_F : Addgis_O_R_VDV_Soldier_Ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "B_RadioBag_01_arid_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Sharpshooter_Ard_F : Addgis_O_R_VDV_Soldier_Ard_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"srifle_DMR_05_DMS_LP_BI_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_05_DMS_LP_BI_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_AAA_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "B_Carryall_green_AAA_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_AAR_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "B_FieldPack_green_AAR_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_AAT_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "B_Carryall_green_AAT_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_AA_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "B_FieldPack_taiga_AA_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_holo_pointer_F","launch_O_Titan_camo_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_holo_pointer_F","launch_O_Titan_camo_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_AHAT_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Heavy AT";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "B_Carryall_green_AHAT_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_AR_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"Aegis_arifle_RPK12_545_arco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_RPK12_545_arco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_AT_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "B_FieldPack_green_AT_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_holo_pointer_F","launch_O_Titan_short_camo_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_holo_pointer_F","launch_O_Titan_short_camo_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_A_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "B_Carryall_green_Ammo_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_arco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_545_arco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_GL_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_GL_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_GL_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_GL_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_GL_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_HAT_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Heavy AT)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "B_FieldPack_green_HAT_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_holo_pointer_F","launch_O_Vorona_green_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_545_holo_pointer_F","launch_O_Vorona_green_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Vorona_HEAT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Vorona_HEAT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_LAT_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "B_FieldPack_green_RPG_AT_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_holo_pointer_F","launch_RPG32_green_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_545_holo_pointer_F","launch_RPG32_green_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_M_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"srifle_DMR_01_black_DMS_LP_BI_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_01_black_DMS_LP_BI_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_PG_F : O_soldier_PG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Para Trooper";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "B_Parachute";

        linkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_arco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_545_arco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_SL_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_arco_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_AK12_545_arco_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_Tracer_F","30Rnd_545x39_AK12_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_Tracer_F","30Rnd_545x39_AK12_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_TL_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_GL_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_GL_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_GL_545_arco_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_AK12_GL_545_arco_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_Tracer_F","30Rnd_545x39_AK12_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_Tracer_F","30Rnd_545x39_AK12_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_UAV_02_lxWS_F : Addgis_O_R_VDV_Soldier_Ard_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AP-5)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "O_R_UAV_02_backpack_lxWS";

        linkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_UAV_06_F : Addgis_O_R_VDV_Soldier_Ard_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "O_R_UAV_06_backpack_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_UAV_06_medical_F : Addgis_O_R_VDV_Soldier_Ard_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "O_R_UAV_06_medical_backpack_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_UAV_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "O_R_UAV_01_backpack_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_UGV_02_Demining_F : Addgis_O_R_VDV_Soldier_Ard_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1D)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "O_R_UGV_02_Demining_backpack_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_exp_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_lite_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_casual"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        linkedItems[] = {"V_BandollierB_taiga_F","H_MilCap_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_taiga_F","H_MilCap_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12U_545_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_mine_F : Addgis_O_R_VDV_Soldier_Ard_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mine Specialist";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "B_Carryall_taiga_Mine";

        linkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_Lite_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_Soldier_Ard_repair_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "B_FieldPack_taiga_Repair_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_GL_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_GL_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_engineer_Ard_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "B_Carryall_green_eng_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_medic_Ard_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "B_FieldPack_green_Medic_F";

        linkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"AddGis_V_PantherCarrier_CQB_ruarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_officer_Ard_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_casual"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_officer_F";

        linkedItems[] = {"V_Rangemaster_belt_taiga_F","Addgis_H_Beret_RU_01_blue_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Rangemaster_belt_taiga_F","Addgis_H_Beret_RU_01_blue_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12U_545_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_AK12U_545_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_support_Ard_AMG_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (HMG/GMG)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "O_R_HMG_01_support_F";

        linkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_support_Ard_AMort_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (Mk6)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "O_R_Mortar_01_support_F";

        linkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_support_Ard_GMG_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (GMG)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "O_R_GMG_01_Weapon_F";

        linkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_support_Ard_MG_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (HMG)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "O_R_HMG_01_Weapon_F";

        linkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_O_R_VDV_support_Ard_Mort_F : Addgis_O_R_VDV_Soldier_Ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mk6)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "AddGis_U_O_Luchnik_Open_01_ruarid_F";

        backpack = "O_R_Mortar_01_Weapon_F";

        linkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetSpecter_cover_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_R_APC_Tracked_02_30mm_ard_lxWS : Aegis_O_R_APC_Tracked_02_30mm_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-T Okhotnik";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_R_Conscript_AR_ard_F : Aegis_O_R_Conscript_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "Aegis_U_O_Luchnik_arid_F";

        linkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetLuchnik_cover_ruarid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetLuchnik_cover_ruarid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_RPK12_545_aco_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_RPK12_545_aco_F","Throw","Put"};

        magazines[] = {"Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_R_Conscript_AT_ard_F : Aegis_O_R_Conscript_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "Aegis_U_O_Luchnik_arid_F";

        backpack = "Aegis_B_FieldPack_Green_ConLAT_F";

        linkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetLuchnik_cover_ruarid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetLuchnik_cover_ruarid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12U_545_F","Aegis_Launch_RPG7M_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_F","Aegis_Launch_RPG7M_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","RPG7_F","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","RPG7_F","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_R_Conscript_GL_ard_F : Aegis_O_R_Conscript_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "Aegis_U_O_Luchnik_arid_F";

        linkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetLuchnik_cover_ruarid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetLuchnik_cover_ruarid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12_GL_545_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_GL_545_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_R_Conscript_M_ard_F : Aegis_O_R_Conscript_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "Aegis_U_O_Luchnik_RolledUp_arid_F";

        linkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetLuchnik_cover_ruarid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetLuchnik_cover_ruarid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_DMR_01_black_ARCO_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"srifle_DMR_01_black_ARCO_F","Throw","Put","Binocular"};

        magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","SmokeShell","SmokeShell","HandGrenade_East"};
        respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","SmokeShell","SmokeShell","HandGrenade_East"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_R_Conscript_Medic_ard_F : Aegis_O_R_Conscript_Medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "Aegis_U_O_Luchnik_RolledUp_arid_F";

        backpack = "B_FieldPack_green_Medic_F";

        linkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetLuchnik_cover_ruarid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetLuchnik_cover_ruarid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12U_545_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","HandGrenade_East","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","HandGrenade_East","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_R_Conscript_Repair_ard_F : Aegis_O_R_Conscript_Repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pioneer";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "Aegis_U_O_Luchnik_RolledUp_arid_F";

        backpack = "B_FieldPack_green_Repair_F";

        linkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetLuchnik_cover_ruarid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetLuchnik_cover_ruarid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12U_545_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_R_Conscript_SL_ard_F : Aegis_O_R_Conscript_SL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "Aegis_U_O_Luchnik_arid_F";

        backpack = "B_RadioBag_01_arid_F";

        linkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetLuchnik_cover_ruarid_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetLuchnik_cover_ruarid_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12U_545_aco_flash_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_flash_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_Tracer_F","30Rnd_545x39_AK12_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_Tracer_F","30Rnd_545x39_AK12_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_R_Conscript_TL_ard_F : Aegis_O_R_Conscript_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "Aegis_U_O_Luchnik_RolledUp_arid_F";

        linkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetLuchnik_cover_ruarid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetLuchnik_cover_ruarid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AK12_GL_545_aco_flash_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Aegis_arifle_AK12_GL_545_aco_flash_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_Tracer_F","30Rnd_545x39_AK12_Mag_Tracer_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_Tracer_F","30Rnd_545x39_AK12_Mag_Tracer_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_R_Conscript_ard_F : Aegis_O_R_Conscript_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "Aegis_U_O_Luchnik_RolledUp_arid_F";

        linkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetLuchnik_cover_ruarid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_ChestrigEast_RUarid_F","H_HelmetLuchnik_cover_ruarid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12_545_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_545_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_R_Heli_Attack_04_ard_F : Aegis_O_R_Heli_Attack_04_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-35 Krokodil";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_R_MBT_02_Railgun_ard_F : Aegis_O_R_MBT_02_Railgun_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-100X Futura";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_R_Sharpshooter_ard_F : Aegis_O_R_Sharpshooter_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"srifle_DMR_05_DMS_LP_BI_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_05_DMS_LP_BI_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_R_Truck_02_aa_ard_F : Aegis_O_R_Truck_02_aa_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ (Zu-23-2)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_R_UAV_02_ard_lxWS : UAV_02_Base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drofa AP-5";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_APC_Tracked_02_AA_ard_F : O_R_APC_Tracked_02_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZSU-35 Tigris";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_APC_Tracked_02_medical_ard_F : O_R_APC_Tracked_02_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BM-2T Stalker (Medical)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_APC_Wheeled_04_cannon_ard_F : O_R_APC_Wheeled_04_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-100 Bogatyr";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_APC_Wheeled_04_cannon_v2_ard_F : O_R_APC_Wheeled_04_cannon_v2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "2S90M Nosorog";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Boat_Armed_01_hmg_ard_F : O_R_Boat_Armed_01_hmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Speedboat HMG";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Boat_Transport_01_ard_F : O_R_Boat_Transport_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Boat";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Fighter_Pilot_ard_F : O_R_Fighter_Pilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter Pilot";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","Head_Russian","Head_Asian","G_RUS_pilot"};

        uniformClass = "U_O_R_PilotCoveralls";

        linkedItems[] = {"H_PilotHelmetFighter_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_PilotHelmetFighter_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"hgun_Rook40_F","Throw","Put"};

        magazines[] = {"17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_GMG_01_A_ard_F : O_GMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307A";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_GMG_01_ard_F : O_GMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_GMG_01_high_ard_F : O_GMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307 (High)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_HMG_01_A_ard_F : O_HMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312A";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_HMG_01_ard_F : O_HMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_HMG_01_high_ard_F : O_HMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312 (High)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Heli_Attack_02_dynamicLoadout_ard_F : O_R_Heli_Attack_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-48 Kajman";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Heli_Light_02_dynamicLoadout_ard_F : O_R_Heli_Light_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Heli_Light_02_unarmed_ard_F : O_R_Heli_Light_02_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka (unarmed)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Heli_Transport_04_ammo_ard_F : O_R_Heli_Transport_04_ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Tuskar (Ammo)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Heli_Transport_04_ard_F : O_R_Heli_Transport_04_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Tuskar";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Heli_Transport_04_bench_ard_F : O_R_Heli_Transport_04_bench_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Tuskar (Bench)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Heli_Transport_04_box_ard_F : O_R_Heli_Transport_04_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Tuskar (Cargo)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Heli_Transport_04_covered_ard_F : O_R_Heli_Transport_04_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Tuskar (Transport)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Heli_Transport_04_fuel_ard_F : O_R_Heli_Transport_04_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Tuskar (Fuel)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Heli_Transport_04_medevac_ard_F : O_R_Heli_Transport_04_medevac_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Tuskar (Medical)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Heli_Transport_04_repair_ard_F : O_R_Heli_Transport_04_repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Tuskar (Repair)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_LSV_02_AT_ard_F : O_R_LSV_02_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Takhion (AT)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_LSV_02_armed_ard_F : O_R_LSV_02_armed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Takhion (Minigun)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_LSV_02_unarmed_ard_F : O_R_LSV_02_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Takhion (Unarmed)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Lifeboat_ard_F : O_R_Lifeboat_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rescue Boat";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_MBT_02_arty_ard_F : O_R_MBT_02_arty_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "2S9 Sochor";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_MBT_02_cannon_ard_F : O_R_MBT_02_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "T100 Black Eagle";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_MBT_04_cannon_ard_F : O_R_MBT_04_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-140 Angara";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_MBT_04_command_ard_F : O_R_MBT_04_command_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-140K Angara";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_MRAP_02_ard_F : O_R_MRAP_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Galkin";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_MRAP_02_gmg_ard_F : O_R_MRAP_02_gmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Galkin GMG";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_MRAP_02_hmg_ard_F : O_R_MRAP_02_hmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Galkin HMG";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Mortar_01_ard_F : O_Mortar_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "O_R_Mortar_01_ard_F";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Plane_CAS_02_dynamicLoadout_ard_F : O_R_Plane_CAS_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Yak-130";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Fighter_Pilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Plane_Fighter_02_Stealth_ard_F : O_R_Plane_Fighter_02_Stealth_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "To-201 Shikra (Stealth)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Fighter_Pilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Plane_Fighter_02_ard_F : O_R_Plane_Fighter_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "To-201 Shikra";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Fighter_Pilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Quadbike_01_ard_F : O_R_Quadbike_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Radar_System_02_ard_F : O_R_Radar_System_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "R-750 Cronus Radar";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_RadioOperator_ard_F : O_R_Soldier_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "B_RadioBag_01_arid_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_SAM_System_04_ard_F : O_R_SAM_System_04_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "S-400";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_SDV_01_ard_F : O_R_SDV_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "SDV";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_diver_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Soldier_AAA_ard_F : O_R_Soldier_AAA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "B_Carryall_green_AAA_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Soldier_AAR_ard_F : O_R_Soldier_AAR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "B_FieldPack_green_AAR_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Soldier_AAT_ard_F : O_R_Soldier_AAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "B_Carryall_green_AAT_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Soldier_AHAT_ard_F : O_R_Soldier_AHAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Heavy AT";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "B_Carryall_green_AHAT_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Soldier_A_ard_F : O_R_Soldier_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "B_Carryall_green_Ammo_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Soldier_CBRN_ard_F : O_R_Soldier_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Specialist";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        linkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","G_AirPurifyingRespirator_02_olive_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","G_AirPurifyingRespirator_02_olive_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_flash_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_flash_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Soldier_CQ_ard_F : O_R_Soldier_CQ_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        linkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"sgun_Mp153_black_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"sgun_Mp153_black_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Soldier_GL_ard_F : O_R_Soldier_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_GL_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_GL_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Soldier_HAT_ard_F : O_R_Soldier_HAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Heavy AT)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "B_FieldPack_green_HAT_F";

        linkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_holo_pointer_F","launch_O_Vorona_green_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_545_holo_pointer_F","launch_O_Vorona_green_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Vorona_HEAT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Vorona_HEAT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Soldier_LAT_ard_F : O_R_Soldier_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "B_FieldPack_green_RPG_AT_F";

        linkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_holo_pointer_F","launch_RPG32_green_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_545_holo_pointer_F","launch_RPG32_green_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Soldier_PG_ard_F : O_R_Soldier_PG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Para Trooper";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "B_Parachute";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_arco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_545_arco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Soldier_SL_ard_F : O_R_Soldier_SL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        linkedItems[] = {"V_SmershVest_01_radio_F","H_HelmetAggressor_cover_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_radio_F","H_HelmetAggressor_cover_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_arco_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_AK12_545_arco_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_Tracer_F","30Rnd_545x39_AK12_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_Tracer_F","30Rnd_545x39_AK12_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Soldier_TL_ard_F : O_R_Soldier_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        linkedItems[] = {"V_SmershVest_01_radio_F","H_HelmetAggressor_cover_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_radio_F","H_HelmetAggressor_cover_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_GL_545_arco_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_AK12_GL_545_arco_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_Tracer_F","30Rnd_545x39_AK12_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_Tracer_F","30Rnd_545x39_AK12_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Soldier_ard_F : O_R_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_arco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_545_arco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Soldier_lite_ard_F : O_R_Soldier_lite_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_casual"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        linkedItems[] = {"V_BandollierB_rgr","H_MilCap_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_rgr","H_MilCap_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12U_545_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Soldier_unarmed_ard_F : O_R_Soldier_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class O_R_Static_AA_ard_F : O_R_Static_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Static Titan Launcher (AA)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Static_AT_ard_F : O_R_Static_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Static Titan Launcher (AT)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Static_Designator_02_ard_F : O_R_Static_Designator_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Remote Designator";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Survivor_ard_F : O_R_Soldier_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

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

    class O_R_Truck_02_Ammo_ard_F : O_R_Truck_02_Ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Ammo";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Truck_02_MRL_ard_F : O_R_Truck_02_MRL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak MRL";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Truck_02_ard_F : O_R_Truck_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport (covered)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Truck_02_box_ard_F : O_R_Truck_02_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Repair";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Truck_02_cargo_ard_F : O_R_Truck_02_cargo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Cargo";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Truck_02_flatbed_ard_F : O_R_Truck_02_flatbed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Flatbed";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Truck_02_fuel_ard_F : O_R_Truck_02_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Fuel";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Truck_02_medical_ard_F : O_R_Truck_02_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Medical";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Truck_02_transport_ard_F : O_R_Truck_02_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Truck_03_ammo_ard_F : O_R_Truck_03_ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Ammo";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Truck_03_covered_ard_F : O_R_Truck_03_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Transport (covered)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Truck_03_fuel_ard_F : O_R_Truck_03_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Fuel";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Truck_03_medical_ard_F : O_R_Truck_03_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Medical";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Truck_03_repair_ard_F : O_R_Truck_03_repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Repair";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_Truck_03_transport_ard_F : O_R_Truck_03_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Transport";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_R_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_UAV_01_ard_F : O_R_UAV_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Shukhov AR-2";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_UAV_02_dynamicLoadout_ard_F : O_R_UAV_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sokol 3T";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_UAV_06_ard_F : O_R_UAV_06_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Katun AL-6";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_UAV_06_medical_ard_F : O_R_UAV_06_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Katun AL-6 (Medical)";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_UGV_01_ard_F : O_R_UGV_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Uran";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_UGV_01_medical_ard_F : O_R_UGV_01_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Uran Medical";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_UGV_01_rcws_ard_F : O_R_UGV_01_rcws_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Uran RCWS";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_UGV_02_Demining_ard_F : O_R_UGV_02_Demining_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gremlin ED-1D";
        side = 0;
        faction = "opf_r_ard_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_crew_ard_F : O_R_crew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        linkedItems[] = {"V_BandollierB_rgr","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_BandollierB_rgr","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_diver_TL_ard_F : O_R_diver_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Diver Team Leader";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_diver"};

        uniformClass = "U_O_R_Wetsuit";

        linkedItems[] = {"V_RebreatherRU","G_O_R_Diving","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_RebreatherRU","G_O_R_Diving","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};

        magazines[] = {"20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_diver_ard_F : O_R_diver_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Diver";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_diver"};

        uniformClass = "U_O_R_Wetsuit";

        linkedItems[] = {"V_RebreatherRU","G_O_R_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_RebreatherRU","G_O_R_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_diver_exp_ard_F : O_R_diver_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Diver Explosive Specialist";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_diver"};

        uniformClass = "U_O_R_Wetsuit";

        backpack = "B_FieldPack_blk_DiverExp";

        linkedItems[] = {"V_RebreatherRU","G_O_R_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_RebreatherRU","G_O_R_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_engineer_ard_F : O_R_engineer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "B_Carryall_green_eng_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_ghillie_ard_F : O_R_ghillie_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper (Arid)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_SF"};

        uniformClass = "U_O_R_FullGhillie_ard_F";

        linkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"srifle_GM6_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_ghillie_lsh_F : O_R_ghillie_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper (Lush)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_SF"};

        uniformClass = "U_O_R_FullGhillie_lsh_F";

        linkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"srifle_GM6_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_ghillie_sard_F : O_R_ghillie_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper (Semi-Arid)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_SF"};

        uniformClass = "U_O_R_FullGhillie_sard_F";

        linkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"srifle_GM6_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_ghillie_spotter_ard_F : O_R_ghillie_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter (Arid)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_SF"};

        uniformClass = "U_O_R_FullGhillie_ard_F";

        linkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_arid_arco_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_03"};
        respawnWeapons[] = {"arifle_AK12_arid_arco_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_03"};

        magazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_ghillie_spotter_lsh_F : O_R_ghillie_lsh_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter (Lush)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_SF"};

        uniformClass = "U_O_R_FullGhillie_lsh_F";

        linkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_arid_arco_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_03"};
        respawnWeapons[] = {"arifle_AK12_arid_arco_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_03"};

        magazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_ghillie_spotter_sard_F : O_R_ghillie_sard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter (Semi-Arid)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_SF"};

        uniformClass = "U_O_R_FullGhillie_sard_F";

        linkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_arid_arco_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_03"};
        respawnWeapons[] = {"arifle_AK12_arid_arco_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_03"};

        magazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_helicrew_ard_F : O_R_helicrew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_pilot"};

        uniformClass = "U_O_R_PilotCoveralls";

        linkedItems[] = {"H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_helipilot_ard_F : O_R_helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_pilot"};

        uniformClass = "U_O_R_PilotCoveralls";

        linkedItems[] = {"H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"Aegis_SMG_Gepard_blk_ACO_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_SMG_Gepard_blk_ACO_F","Throw","Put"};

        magazines[] = {"Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_medic_ard_F : O_R_medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "B_FieldPack_green_Medic_F";

        linkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_officer_ard_F : O_R_officer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_casual"};

        uniformClass = "Aegis_U_O_Luchnik_officer_arid_F";

        linkedItems[] = {"V_Rangemaster_belt","H_MilCap_grn","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Rangemaster_belt","H_MilCap_grn","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12U_545_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_AK12U_545_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_recon_AR_ard_F : O_R_recon_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Autorifleman";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_SF"};

        uniformClass = "U_O_R_Gorka_01_brown_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_RPK12_arid_arco_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_RPK12_arid_arco_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"75Rnd_762x39_AK12_Arid_Mag_F","75Rnd_762x39_AK12_Arid_Mag_F","75Rnd_762x39_AK12_Arid_Mag_F","75Rnd_762x39_AK12_Arid_Mag_F","75Rnd_762x39_AK12_Arid_Mag_F","75Rnd_762x39_AK12_Arid_Mag_F","75Rnd_762x39_AK12_Arid_Mag_F","75Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"75Rnd_762x39_AK12_Arid_Mag_F","75Rnd_762x39_AK12_Arid_Mag_F","75Rnd_762x39_AK12_Arid_Mag_F","75Rnd_762x39_AK12_Arid_Mag_F","75Rnd_762x39_AK12_Arid_Mag_F","75Rnd_762x39_AK12_Arid_Mag_F","75Rnd_762x39_AK12_Arid_Mag_F","75Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_recon_CQ_ard_F : O_R_recon_CQ_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (Shotgun)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_SF"};

        uniformClass = "U_O_R_Gorka_01_brown_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"sgun_Mp153_black_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"sgun_Mp153_black_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_recon_GL_ard_F : O_R_recon_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Grenadier";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_SF"};

        uniformClass = "U_O_R_Gorka_01_brown_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_GL_arid_arco_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_GL_arid_arco_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_recon_JTAC_ard_F : O_R_recon_JTAC_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon JTAC";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_SF"};

        uniformClass = "U_O_R_Gorka_01_brown_F";

        backpack = "B_RadioBag_01_arid_F";

        linkedItems[] = {"V_SmershVest_01_radio_F","H_Booniehat_mgrn_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_radio_F","H_Booniehat_mgrn_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_arid_holo_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_03"};
        respawnWeapons[] = {"arifle_AK12U_arid_holo_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_03"};

        magazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_recon_LAT_ard_F : O_R_recon_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (AT)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_SF"};

        uniformClass = "U_O_R_Gorka_01_brown_F";

        backpack = "B_FieldPack_green_RPG_AT_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_arid_holo_snds_pointer_F","launch_RPG32_green_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_arid_holo_snds_pointer_F","launch_RPG32_green_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_recon_M_ard_F : O_R_recon_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Marksman";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_SF"};

        uniformClass = "U_O_R_Gorka_01_brown_F";

        linkedItems[] = {"V_SmershVest_01_F","H_Booniehat_mgrn_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_Booniehat_mgrn_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"srifle_DMR_04_DMS_weathered_Kir_F_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_04_DMS_weathered_Kir_F_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_recon_TL_ard_F : O_R_recon_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Team Leader";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_SF"};

        uniformClass = "U_O_R_Gorka_01_brown_F";

        linkedItems[] = {"V_SmershVest_01_radio_F","H_HelmetAggressor_cover_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_radio_F","H_HelmetAggressor_cover_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_arid_arco_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_AK12_arid_arco_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_Tracer_F","30Rnd_762x39_AK12_Arid_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_Tracer_F","30Rnd_762x39_AK12_Arid_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_recon_ard_F : O_R_recon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_SF"};

        uniformClass = "U_O_R_Gorka_01_brown_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_arid_arco_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_AK12U_arid_arco_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_recon_exp_ard_F : O_R_recon_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Demo Specialist";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_SF"};

        uniformClass = "U_O_R_Gorka_01_brown_F";

        backpack = "B_Carryall_green_exp_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_arid_holo_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_arid_holo_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_recon_medic_ard_F : O_R_recon_medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Paramedic";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_SF"};

        uniformClass = "U_O_R_Gorka_01_brown_F";

        backpack = "B_FieldPack_green_ReconMedic_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_arid_holo_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_arid_holo_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_sniper_ard_F : O_R_sniper_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_GhillieSuit_arid_F";

        linkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"srifle_GM6_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_soldier_AA_ard_F : O_R_soldier_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "B_FieldPack_green_AA_F";

        linkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_holo_pointer_F","launch_O_Titan_camo_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_holo_pointer_F","launch_O_Titan_camo_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_soldier_AR_ard_F : O_R_Soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"Aegis_arifle_RPK12_545_arco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_RPK12_545_arco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_soldier_AT_ard_F : O_R_soldier_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "B_FieldPack_green_AT_F";

        linkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_holo_pointer_F","launch_O_Titan_short_camo_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_holo_pointer_F","launch_O_Titan_short_camo_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_soldier_M_ard_F : O_R_soldier_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"srifle_DMR_01_black_DMS_LP_BI_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_01_black_DMS_LP_BI_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_soldier_UAV_02_ard_lxWS_F : O_R_soldier_UAV_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AP-5)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "Aegis_O_R_UAV_02_backpack_lxWS";

        linkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_soldier_UAV_06_ard_F : O_R_soldier_UAV_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "O_R_UAV_06_backpack_F";

        linkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_soldier_UAV_06_medical_ard_F : O_R_soldier_UAV_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "O_R_UAV_06_medical_backpack_F";

        linkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_soldier_UAV_ard_F : O_R_soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "O_R_UAV_01_backpack_F";

        linkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_soldier_UGV_02_Demining_ard_F : O_R_soldier_UAV_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1D)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "O_R_UGV_02_Demining_backpack_F";

        linkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","O_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_soldier_exp_ard_F : O_R_soldier_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "B_Carryall_green_exp_F";

        linkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_soldier_mine_ard_F : O_R_soldier_exp_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mine Specialist";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "B_Carryall_green_Mine";

        linkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_HelmetAggressor_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_soldier_repair_ard_F : O_R_soldier_repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "B_FieldPack_green_Repair_F";

        linkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_SmershVest_01_F","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_holo_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_spotter_ard_F : O_R_spotter_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_GhillieSuit_arid_F";

        linkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12_arid_arco_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_03"};
        respawnWeapons[] = {"arifle_AK12_arid_arco_snds_pointer_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_03"};

        magazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","30Rnd_762x39_AK12_Arid_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_support_AMG_ard_F : O_R_support_AMG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (HMG/GMG)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "O_R_HMG_01_support_F";

        linkedItems[] = {"V_TacChestrig_grn_F","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_support_AMort_ard_F : O_R_support_AMort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (Mk6)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "O_R_Mortar_01_support_F";

        linkedItems[] = {"V_TacChestrig_grn_F","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_support_GMG_ard_F : O_R_support_GMG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (GMG)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "O_R_GMG_01_Weapon_F";

        linkedItems[] = {"V_TacChestrig_grn_F","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_support_MG_ard_F : O_R_support_MG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (HMG)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "O_R_HMG_01_Weapon_F";

        linkedItems[] = {"V_TacChestrig_grn_F","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_R_support_Mort_ard_F : O_R_support_Mort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mk6)";
        side = 0;
        faction = "opf_r_ard_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_RUS_default"};

        uniformClass = "U_O_R_CombatUniform_arid_F";

        backpack = "O_R_Mortar_01_Weapon_F";

        linkedItems[] = {"V_TacChestrig_grn_F","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","H_HelmetAggressor_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_grn_F"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};

class CfgGroups {
    class East {
        class OPF_R_ard_F {
            class Armored {
                class O_R_SPGPlatoon_Scorcher {
                    name = "Artillery SPG Platoon";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_art.paa";

                    class Unit0 {
                        vehicle = "O_R_MBT_02_arty_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_MBT_02_arty_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_MBT_02_arty_ard_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_MBT_02_arty_ard_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class O_R_SPGSection_Scorcher {
                    name = "Artillery SPG Section";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_art.paa";

                    class Unit0 {
                        vehicle = "O_R_MBT_02_arty_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_MBT_02_arty_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class O_R_TankDestrSection_Nosorog {
                    name = "Tank Destroyer Section";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_R_APC_Wheeled_04_cannon_v2_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_APC_Wheeled_04_cannon_v2_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class O_R_TankPlatoon {
                    name = "Tank Platoon";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_R_MBT_02_cannon_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_MBT_02_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_MBT_02_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_MBT_02_cannon_ard_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class O_R_TankPlatoon_AA {
                    name = "Tank Platoon (Combined)";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_R_MBT_02_cannon_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_APC_Tracked_02_AA_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_MBT_02_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_APC_Tracked_02_AA_ard_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class O_R_TankPlatoon_Heavy {
                    name = "Tank Platoon (Heavy)";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_R_MBT_04_command_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_MBT_04_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_MBT_04_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_MBT_04_cannon_ard_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class O_R_TankSection {
                    name = "Tank Section";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_R_MBT_02_cannon_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_MBT_02_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class O_R_TankSection_Heavy {
                    name = "Tank Section (Heavy)";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_R_MBT_04_command_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_MBT_04_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class O_R_ConscriptSquad_A {
                    name = "Conscript Squad";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_O_R_Conscript_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_O_R_Conscript_GL_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_O_R_Conscript_AT_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_O_R_Conscript_M_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_O_R_Conscript_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_O_R_Conscript_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_O_R_Conscript_ard_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_O_R_Conscript_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class O_R_ConscriptTeam_A {
                    name = "Conscript Team";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_O_R_Conscript_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_O_R_Conscript_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_O_R_Conscript_GL_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_O_R_Conscript_M_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_R_InfSentry_A {
                    name = "Sentry";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_soldier_GL_ard_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_soldier_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class O_R_InfSquad_A {
                    name = "Rifle Squad";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_RadioOperator_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_soldier_LAT_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_soldier_M_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_R_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_R_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_R_soldier_A_ard_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_R_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class O_R_InfSquad_Weapons_A {
                    name = "Weapons Squad";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_soldier_AR_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_soldier_GL_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_soldier_M_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_R_soldier_AT_ard_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_R_soldier_AAT_ard_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_R_soldier_A_ard_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_R_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class O_R_InfTeam_A {
                    name = "Fire Team";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_soldier_GL_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_RadioOperator_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_R_InfTeam_AA_A {
                    name = "Air-defense Team";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_soldier_AA_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_soldier_AA_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_soldier_AAA_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_R_InfTeam_AT_A {
                    name = "Anti-armor Team";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_soldier_AT_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_soldier_AT_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_soldier_AAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_R_InfTeam_AT_Heavy_A {
                    name = "Anti-Armor Team (Heavy)";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_soldier_HAT_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_soldier_HAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_soldier_AHAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class O_R_MechConSquad_A {
                    name = "Mechanized Conscript Squad";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_O_R_APC_Tracked_02_30mm_ard_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_O_R_Conscript_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_O_R_Conscript_AT_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_O_R_Conscript_M_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_O_R_Conscript_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_O_R_Conscript_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_O_R_Conscript_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                };
                class O_R_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_APC_Wheeled_04_cannon_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_soldier_LAT_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_soldier_M_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_R_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_R_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_R_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                };
                class O_R_MechInf_AA {
                    name = "Mechanized Air-defense Squad";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_O_R_APC_Tracked_02_30mm_ard_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_soldier_AA_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_R_soldier_AA_ard_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_R_soldier_AA_ard_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_R_soldier_AAA_ard_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_R_soldier_AAA_ard_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_R_soldier_AAA_ard_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class O_R_MechInf_AT {
                    name = "Mechanized Anti-armor Squad";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_O_R_APC_Tracked_02_30mm_ard_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_soldier_AT_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_R_soldier_AT_ard_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_R_soldier_AT_ard_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_R_soldier_AAT_ard_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_R_soldier_AAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_R_soldier_AAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class O_R_MechInf_Support {
                    name = "Mechanized Support Squad";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_APC_Wheeled_04_cannon_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_soldier_repair_ard_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_R_engineer_ard_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_R_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {15,15,0};
                    };

                    class Unit6 {
                        vehicle = "O_R_soldier_exp_ard_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                };
            };
            class Motorized_MTP {
                class O_R_MotInf_AA {
                    name = "Motorized Air-defense Team";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_MRAP_02_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_soldier_AA_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_soldier_AA_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_soldier_AAA_ard_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class O_R_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_MRAP_02_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_soldier_AT_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_soldier_AT_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_soldier_AAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class O_R_MotInf_GMGTeam {
                    name = "Motorized GMG Team";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_MRAP_02_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_support_GMG_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_support_AMG_ard_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class O_R_MotInf_MGTeam {
                    name = "Motorized HMG Team";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_MRAP_02_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_support_MG_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_support_AMG_ard_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class O_R_MotInf_MortTeam {
                    name = "Motorized Mortar Team";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_MRAP_02_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_support_Mort_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_support_AMort_ard_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class O_R_MotInf_Reinforcements {
                    name = "Motorized Reinforcements";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_Truck_03_transport_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_RadioOperator_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_soldier_LAT_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "O_R_soldier_M_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "O_R_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "O_R_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "O_R_soldier_A_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-8,0};
                    };

                    class Unit8 {
                        vehicle = "O_R_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-10,0};
                    };

                    class Unit9 {
                        vehicle = "O_R_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "O_R_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "O_R_soldier_GL_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "O_R_soldier_LAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };
                };
                class O_R_MotInf_Team {
                    name = "Motorized Team";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_MRAP_02_gmg_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_soldier_LAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
            class SpecOps {
                class O_R_diverTeam_A {
                    name = "Diver Team";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";

                    class Unit0 {
                        vehicle = "O_R_diver_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_diver_exp_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_diver_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_diver_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_R_reconPatrol_A {
                    name = "Recon Patrol";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";

                    class Unit0 {
                        vehicle = "O_R_recon_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_recon_M_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_recon_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_recon_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_R_reconSentry_A {
                    name = "Recon Sentry";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";

                    class Unit0 {
                        vehicle = "O_R_recon_M_ard_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_recon_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class O_R_reconSquad_A {
                    name = "Recon Squad";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "O_R_recon_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_recon_M_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_recon_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_recon_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_R_recon_LAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_R_recon_JTAC_ard_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_R_recon_exp_ard_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_R_recon_M_ard_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class O_R_reconTeam_A {
                    name = "Recon Team";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";

                    class Unit0 {
                        vehicle = "O_R_recon_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_recon_M_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_recon_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_recon_LAT_ard_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_R_recon_JTAC_ard_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_R_recon_exp_ard_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
            };
            class Support {
                class O_R_Recon_EOD {
                    name = "Recon Support Team (EOD)";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_recon_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_recon_exp_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_recon_exp_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_recon_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_R_Support_CLS {
                    name = "Support Team (CLS)";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_R_Support_ENG {
                    name = "Support Team (Engineer)";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_engineer_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_engineer_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_soldier_repair_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_R_Support_EOD {
                    name = "Support Team (EOD)";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_engineer_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_soldier_exp_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_R_soldier_exp_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_R_Support_GMG {
                    name = "GMG Team";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_support_GMG_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_support_AMG_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class O_R_Support_MG {
                    name = "HMG Team";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_R_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_support_MG_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_support_AMG_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class O_R_Support_Mort {
                    name = "Mortar Team";
                    side = 0;
                    faction = "OPF_R_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mortar.paa";

                    class Unit0 {
                        vehicle = "O_R_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_R_support_Mort_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_R_support_AMort_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
        };
    };
};
