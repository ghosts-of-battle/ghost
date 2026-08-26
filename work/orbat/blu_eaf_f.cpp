//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class BLU_EAF_F {
        displayName = "LDF";
        side = 1;
        priority = 3;
        icon = "\a3\Data_F_Enoch\FactionIcons\icon_EAF_CA.paa";
        flag = "\a3\Data_F_Enoch\Flags\flag_EAF_co.paa";
    };
};

class CfgVehicles {

    class Aegis_I_EAF_Heli_Attack_04_F;
    class Aegis_I_EAF_Heli_Attack_04_F_OCimport_01 : Aegis_I_EAF_Heli_Attack_04_F { scope = 0; class EventHandlers; };
    class Aegis_I_EAF_Heli_Attack_04_F_OCimport_02 : Aegis_I_EAF_Heli_Attack_04_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_APC_Wheeled_01_atgm_v2;
    class Aegis_I_E_APC_Wheeled_01_atgm_v2_OCimport_01 : Aegis_I_E_APC_Wheeled_01_atgm_v2 { scope = 0; class EventHandlers; };
    class Aegis_I_E_APC_Wheeled_01_atgm_v2_OCimport_02 : Aegis_I_E_APC_Wheeled_01_atgm_v2_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_APC_Wheeled_01_cannon_v2_F;
    class Aegis_I_E_APC_Wheeled_01_cannon_v2_F_OCimport_01 : Aegis_I_E_APC_Wheeled_01_cannon_v2_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_APC_Wheeled_01_cannon_v2_F_OCimport_02 : Aegis_I_E_APC_Wheeled_01_cannon_v2_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_APC_Wheeled_01_medical_F;
    class Aegis_I_E_APC_Wheeled_01_medical_F_OCimport_01 : Aegis_I_E_APC_Wheeled_01_medical_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_APC_Wheeled_01_medical_F_OCimport_02 : Aegis_I_E_APC_Wheeled_01_medical_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_APC_Wheeled_01_mortar_lxWS;
    class Aegis_I_E_APC_Wheeled_01_mortar_lxWS_OCimport_01 : Aegis_I_E_APC_Wheeled_01_mortar_lxWS { scope = 0; class EventHandlers; };
    class Aegis_I_E_APC_Wheeled_01_mortar_lxWS_OCimport_02 : Aegis_I_E_APC_Wheeled_01_mortar_lxWS_OCimport_01 { class EventHandlers; };

    class I_E_APC_tracked_03_cannon_v2_F;
    class I_E_APC_tracked_03_cannon_v2_F_OCimport_01 : I_E_APC_tracked_03_cannon_v2_F { scope = 0; class EventHandlers; };
    class I_E_APC_tracked_03_cannon_v2_F_OCimport_02 : I_E_APC_tracked_03_cannon_v2_F_OCimport_01 { class EventHandlers; };

    class I_E_CommandoMortar_RF;
    class I_E_CommandoMortar_RF_OCimport_01 : I_E_CommandoMortar_RF { scope = 0; class EventHandlers; };
    class I_E_CommandoMortar_RF_OCimport_02 : I_E_CommandoMortar_RF_OCimport_01 { class EventHandlers; };

    class I_E_Crew_F;
    class I_E_Crew_F_OCimport_01 : I_E_Crew_F { scope = 0; class EventHandlers; };
    class I_E_Crew_F_OCimport_02 : I_E_Crew_F_OCimport_01 { class EventHandlers; };

    class I_E_Engineer_F;
    class I_E_Engineer_F_OCimport_01 : I_E_Engineer_F { scope = 0; class EventHandlers; };
    class I_E_Engineer_F_OCimport_02 : I_E_Engineer_F_OCimport_01 { class EventHandlers; };

    class I_E_Fighter_Pilot_F;
    class I_E_Fighter_Pilot_F_OCimport_01 : I_E_Fighter_Pilot_F { scope = 0; class EventHandlers; };
    class I_E_Fighter_Pilot_F_OCimport_02 : I_E_Fighter_Pilot_F_OCimport_01 { class EventHandlers; };

    class I_E_GMG_01_A_F;
    class I_E_GMG_01_A_F_OCimport_01 : I_E_GMG_01_A_F { scope = 0; class EventHandlers; };
    class I_E_GMG_01_A_F_OCimport_02 : I_E_GMG_01_A_F_OCimport_01 { class EventHandlers; };

    class I_E_GMG_01_F;
    class I_E_GMG_01_F_OCimport_01 : I_E_GMG_01_F { scope = 0; class EventHandlers; };
    class I_E_GMG_01_F_OCimport_02 : I_E_GMG_01_F_OCimport_01 { class EventHandlers; };

    class I_E_GMG_01_high_F;
    class I_E_GMG_01_high_F_OCimport_01 : I_E_GMG_01_high_F { scope = 0; class EventHandlers; };
    class I_E_GMG_01_high_F_OCimport_02 : I_E_GMG_01_high_F_OCimport_01 { class EventHandlers; };

    class I_E_HMG_01_A_F;
    class I_E_HMG_01_A_F_OCimport_01 : I_E_HMG_01_A_F { scope = 0; class EventHandlers; };
    class I_E_HMG_01_A_F_OCimport_02 : I_E_HMG_01_A_F_OCimport_01 { class EventHandlers; };

    class I_E_HMG_01_F;
    class I_E_HMG_01_F_OCimport_01 : I_E_HMG_01_F { scope = 0; class EventHandlers; };
    class I_E_HMG_01_F_OCimport_02 : I_E_HMG_01_F_OCimport_01 { class EventHandlers; };

    class I_E_HMG_01_high_F;
    class I_E_HMG_01_high_F_OCimport_01 : I_E_HMG_01_high_F { scope = 0; class EventHandlers; };
    class I_E_HMG_01_high_F_OCimport_02 : I_E_HMG_01_high_F_OCimport_01 { class EventHandlers; };

    class I_E_HMG_02_F;
    class I_E_HMG_02_F_OCimport_01 : I_E_HMG_02_F { scope = 0; class EventHandlers; };
    class I_E_HMG_02_F_OCimport_02 : I_E_HMG_02_F_OCimport_01 { class EventHandlers; };

    class I_E_HMG_02_high_F;
    class I_E_HMG_02_high_F_OCimport_01 : I_E_HMG_02_high_F { scope = 0; class EventHandlers; };
    class I_E_HMG_02_high_F_OCimport_02 : I_E_HMG_02_high_F_OCimport_01 { class EventHandlers; };

    class I_E_Heli_EC_01A_military_RF;
    class I_E_Heli_EC_01A_military_RF_OCimport_01 : I_E_Heli_EC_01A_military_RF { scope = 0; class EventHandlers; };
    class I_E_Heli_EC_01A_military_RF_OCimport_02 : I_E_Heli_EC_01A_military_RF_OCimport_01 { class EventHandlers; };

    class I_E_Heli_light_03_dynamicLoadout_F;
    class I_E_Heli_light_03_dynamicLoadout_F_OCimport_01 : I_E_Heli_light_03_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class I_E_Heli_light_03_dynamicLoadout_F_OCimport_02 : I_E_Heli_light_03_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class I_E_Heli_light_03_dynamicLoadout_RF;
    class I_E_Heli_light_03_dynamicLoadout_RF_OCimport_01 : I_E_Heli_light_03_dynamicLoadout_RF { scope = 0; class EventHandlers; };
    class I_E_Heli_light_03_dynamicLoadout_RF_OCimport_02 : I_E_Heli_light_03_dynamicLoadout_RF_OCimport_01 { class EventHandlers; };

    class I_E_Heli_light_03_unarmed_F;
    class I_E_Heli_light_03_unarmed_F_OCimport_01 : I_E_Heli_light_03_unarmed_F { scope = 0; class EventHandlers; };
    class I_E_Heli_light_03_unarmed_F_OCimport_02 : I_E_Heli_light_03_unarmed_F_OCimport_01 { class EventHandlers; };

    class I_E_Heli_light_03_unarmed_RF;
    class I_E_Heli_light_03_unarmed_RF_OCimport_01 : I_E_Heli_light_03_unarmed_RF { scope = 0; class EventHandlers; };
    class I_E_Heli_light_03_unarmed_RF_OCimport_02 : I_E_Heli_light_03_unarmed_RF_OCimport_01 { class EventHandlers; };

    class I_E_Helicrew_F;
    class I_E_Helicrew_F_OCimport_01 : I_E_Helicrew_F { scope = 0; class EventHandlers; };
    class I_E_Helicrew_F_OCimport_02 : I_E_Helicrew_F_OCimport_01 { class EventHandlers; };

    class I_E_Helipilot_F;
    class I_E_Helipilot_F_OCimport_01 : I_E_Helipilot_F { scope = 0; class EventHandlers; };
    class I_E_Helipilot_F_OCimport_02 : I_E_Helipilot_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_MBT_03_cannon_F;
    class Aegis_I_E_MBT_03_cannon_F_OCimport_01 : Aegis_I_E_MBT_03_cannon_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_MBT_03_cannon_F_OCimport_02 : Aegis_I_E_MBT_03_cannon_F_OCimport_01 { class EventHandlers; };

    class I_E_Medic_F;
    class I_E_Medic_F_OCimport_01 : I_E_Medic_F { scope = 0; class EventHandlers; };
    class I_E_Medic_F_OCimport_02 : I_E_Medic_F_OCimport_01 { class EventHandlers; };

    class I_E_Mortar_01_F;
    class I_E_Mortar_01_F_OCimport_01 : I_E_Mortar_01_F { scope = 0; class EventHandlers; };
    class I_E_Mortar_01_F_OCimport_02 : I_E_Mortar_01_F_OCimport_01 { class EventHandlers; };

    class I_E_Officer_F;
    class I_E_Officer_F_OCimport_01 : I_E_Officer_F { scope = 0; class EventHandlers; };
    class I_E_Officer_F_OCimport_02 : I_E_Officer_F_OCimport_01 { class EventHandlers; };

    class I_E_Offroad_01_F;
    class I_E_Offroad_01_F_OCimport_01 : I_E_Offroad_01_F { scope = 0; class EventHandlers; };
    class I_E_Offroad_01_F_OCimport_02 : I_E_Offroad_01_F_OCimport_01 { class EventHandlers; };

    class I_E_Offroad_01_armed_F;
    class I_E_Offroad_01_armed_F_OCimport_01 : I_E_Offroad_01_armed_F { scope = 0; class EventHandlers; };
    class I_E_Offroad_01_armed_F_OCimport_02 : I_E_Offroad_01_armed_F_OCimport_01 { class EventHandlers; };

    class I_E_Offroad_01_comms_F;
    class I_E_Offroad_01_comms_F_OCimport_01 : I_E_Offroad_01_comms_F { scope = 0; class EventHandlers; };
    class I_E_Offroad_01_comms_F_OCimport_02 : I_E_Offroad_01_comms_F_OCimport_01 { class EventHandlers; };

    class I_E_Offroad_01_covered_F;
    class I_E_Offroad_01_covered_F_OCimport_01 : I_E_Offroad_01_covered_F { scope = 0; class EventHandlers; };
    class I_E_Offroad_01_covered_F_OCimport_02 : I_E_Offroad_01_covered_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Pickup_AAT_RF;
    class Aegis_I_E_Pickup_AAT_RF_OCimport_01 : Aegis_I_E_Pickup_AAT_RF { scope = 0; class EventHandlers; };
    class Aegis_I_E_Pickup_AAT_RF_OCimport_02 : Aegis_I_E_Pickup_AAT_RF_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Pickup_AT_RF;
    class Aegis_I_E_Pickup_AT_RF_OCimport_01 : Aegis_I_E_Pickup_AT_RF { scope = 0; class EventHandlers; };
    class Aegis_I_E_Pickup_AT_RF_OCimport_02 : Aegis_I_E_Pickup_AT_RF_OCimport_01 { class EventHandlers; };

    class I_E_Pickup_Comms_rf;
    class I_E_Pickup_Comms_rf_OCimport_01 : I_E_Pickup_Comms_rf { scope = 0; class EventHandlers; };
    class I_E_Pickup_Comms_rf_OCimport_02 : I_E_Pickup_Comms_rf_OCimport_01 { class EventHandlers; };

    class I_E_Pickup_Covered_rf;
    class I_E_Pickup_Covered_rf_OCimport_01 : I_E_Pickup_Covered_rf { scope = 0; class EventHandlers; };
    class I_E_Pickup_Covered_rf_OCimport_02 : I_E_Pickup_Covered_rf_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Pickup_HMG_RF;
    class Aegis_I_E_Pickup_HMG_RF_OCimport_01 : Aegis_I_E_Pickup_HMG_RF { scope = 0; class EventHandlers; };
    class Aegis_I_E_Pickup_HMG_RF_OCimport_02 : Aegis_I_E_Pickup_HMG_RF_OCimport_01 { class EventHandlers; };

    class I_E_Pickup_rf;
    class I_E_Pickup_rf_OCimport_01 : I_E_Pickup_rf { scope = 0; class EventHandlers; };
    class I_E_Pickup_rf_OCimport_02 : I_E_Pickup_rf_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Pilot_F;
    class Aegis_I_E_Pilot_F_OCimport_01 : Aegis_I_E_Pilot_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Pilot_F_OCimport_02 : Aegis_I_E_Pilot_F_OCimport_01 { class EventHandlers; };

    class I_E_Plane_Fighter_04_F;
    class I_E_Plane_Fighter_04_F_OCimport_01 : I_E_Plane_Fighter_04_F { scope = 0; class EventHandlers; };
    class I_E_Plane_Fighter_04_F_OCimport_02 : I_E_Plane_Fighter_04_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Plane_Transport_01_infantry_F;
    class Aegis_I_E_Plane_Transport_01_infantry_F_OCimport_01 : Aegis_I_E_Plane_Transport_01_infantry_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Plane_Transport_01_infantry_F_OCimport_02 : Aegis_I_E_Plane_Transport_01_infantry_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Plane_Transport_01_vehicle_F;
    class Aegis_I_E_Plane_Transport_01_vehicle_F_OCimport_01 : Aegis_I_E_Plane_Transport_01_vehicle_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Plane_Transport_01_vehicle_F_OCimport_02 : Aegis_I_E_Plane_Transport_01_vehicle_F_OCimport_01 { class EventHandlers; };

    class I_E_Quadbike_01_F;
    class I_E_Quadbike_01_F_OCimport_01 : I_E_Quadbike_01_F { scope = 0; class EventHandlers; };
    class I_E_Quadbike_01_F_OCimport_02 : I_E_Quadbike_01_F_OCimport_01 { class EventHandlers; };

    class I_E_Radar_System_01_F;
    class I_E_Radar_System_01_F_OCimport_01 : I_E_Radar_System_01_F { scope = 0; class EventHandlers; };
    class I_E_Radar_System_01_F_OCimport_02 : I_E_Radar_System_01_F_OCimport_01 { class EventHandlers; };

    class I_E_RadioOperator_F;
    class I_E_RadioOperator_F_OCimport_01 : I_E_RadioOperator_F { scope = 0; class EventHandlers; };
    class I_E_RadioOperator_F_OCimport_02 : I_E_RadioOperator_F_OCimport_01 { class EventHandlers; };

    class I_E_recon_AR_F;
    class I_E_recon_AR_F_OCimport_01 : I_E_recon_AR_F { scope = 0; class EventHandlers; };
    class I_E_recon_AR_F_OCimport_02 : I_E_recon_AR_F_OCimport_01 { class EventHandlers; };

    class I_E_recon_exp_F;
    class I_E_recon_exp_F_OCimport_01 : I_E_recon_exp_F { scope = 0; class EventHandlers; };
    class I_E_recon_exp_F_OCimport_02 : I_E_recon_exp_F_OCimport_01 { class EventHandlers; };

    class I_E_recon_F;
    class I_E_recon_F_OCimport_01 : I_E_recon_F { scope = 0; class EventHandlers; };
    class I_E_recon_F_OCimport_02 : I_E_recon_F_OCimport_01 { class EventHandlers; };

    class I_E_recon_GL_F;
    class I_E_recon_GL_F_OCimport_01 : I_E_recon_GL_F { scope = 0; class EventHandlers; };
    class I_E_recon_GL_F_OCimport_02 : I_E_recon_GL_F_OCimport_01 { class EventHandlers; };

    class I_E_recon_JTAC_F;
    class I_E_recon_JTAC_F_OCimport_01 : I_E_recon_JTAC_F { scope = 0; class EventHandlers; };
    class I_E_recon_JTAC_F_OCimport_02 : I_E_recon_JTAC_F_OCimport_01 { class EventHandlers; };

    class I_E_recon_LAT_F;
    class I_E_recon_LAT_F_OCimport_01 : I_E_recon_LAT_F { scope = 0; class EventHandlers; };
    class I_E_recon_LAT_F_OCimport_02 : I_E_recon_LAT_F_OCimport_01 { class EventHandlers; };

    class I_E_recon_M_F;
    class I_E_recon_M_F_OCimport_01 : I_E_recon_M_F { scope = 0; class EventHandlers; };
    class I_E_recon_M_F_OCimport_02 : I_E_recon_M_F_OCimport_01 { class EventHandlers; };

    class I_E_recon_medic_F;
    class I_E_recon_medic_F_OCimport_01 : I_E_recon_medic_F { scope = 0; class EventHandlers; };
    class I_E_recon_medic_F_OCimport_02 : I_E_recon_medic_F_OCimport_01 { class EventHandlers; };

    class I_E_recon_TL_F;
    class I_E_recon_TL_F_OCimport_01 : I_E_recon_TL_F { scope = 0; class EventHandlers; };
    class I_E_recon_TL_F_OCimport_02 : I_E_recon_TL_F_OCimport_01 { class EventHandlers; };

    class I_E_SAM_System_03_F;
    class I_E_SAM_System_03_F_OCimport_01 : I_E_SAM_System_03_F { scope = 0; class EventHandlers; };
    class I_E_SAM_System_03_F_OCimport_02 : I_E_SAM_System_03_F_OCimport_01 { class EventHandlers; };

    class I_E_Scientist_F;
    class I_E_Scientist_F_OCimport_01 : I_E_Scientist_F { scope = 0; class EventHandlers; };
    class I_E_Scientist_F_OCimport_02 : I_E_Scientist_F_OCimport_01 { class EventHandlers; };

    class I_E_Scientist_Unarmed_F;
    class I_E_Scientist_Unarmed_F_OCimport_01 : I_E_Scientist_Unarmed_F { scope = 0; class EventHandlers; };
    class I_E_Scientist_Unarmed_F_OCimport_02 : I_E_Scientist_Unarmed_F_OCimport_01 { class EventHandlers; };

    class I_E_ghillie_wdl_F;
    class I_E_ghillie_wdl_F_OCimport_01 : I_E_ghillie_wdl_F { scope = 0; class EventHandlers; };
    class I_E_ghillie_wdl_F_OCimport_02 : I_E_ghillie_wdl_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_AAA_F;
    class I_E_Soldier_AAA_F_OCimport_01 : I_E_Soldier_AAA_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_AAA_F_OCimport_02 : I_E_Soldier_AAA_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_AAR_F;
    class I_E_Soldier_AAR_F_OCimport_01 : I_E_Soldier_AAR_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_AAR_F_OCimport_02 : I_E_Soldier_AAR_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_AAT_F;
    class I_E_Soldier_AAT_F_OCimport_01 : I_E_Soldier_AAT_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_AAT_F_OCimport_02 : I_E_Soldier_AAT_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_AA_F;
    class I_E_Soldier_AA_F_OCimport_01 : I_E_Soldier_AA_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_AA_F_OCimport_02 : I_E_Soldier_AA_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_AR_F;
    class I_E_Soldier_AR_F_OCimport_01 : I_E_Soldier_AR_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_AR_F_OCimport_02 : I_E_Soldier_AR_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_AT_F;
    class I_E_Soldier_AT_F_OCimport_01 : I_E_Soldier_AT_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_AT_F_OCimport_02 : I_E_Soldier_AT_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_A_F;
    class I_E_Soldier_A_F_OCimport_01 : I_E_Soldier_A_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_A_F_OCimport_02 : I_E_Soldier_A_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_CBRN_F;
    class I_E_Soldier_CBRN_F_OCimport_01 : I_E_Soldier_CBRN_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_CBRN_F_OCimport_02 : I_E_Soldier_CBRN_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_CQ_F;
    class I_E_Soldier_CQ_F_OCimport_01 : I_E_Soldier_CQ_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_CQ_F_OCimport_02 : I_E_Soldier_CQ_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_Exp_F;
    class I_E_Soldier_Exp_F_OCimport_01 : I_E_Soldier_Exp_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_Exp_F_OCimport_02 : I_E_Soldier_Exp_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_F;
    class I_E_Soldier_F_OCimport_01 : I_E_Soldier_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_F_OCimport_02 : I_E_Soldier_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_GL_F;
    class I_E_Soldier_GL_F_OCimport_01 : I_E_Soldier_GL_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_GL_F_OCimport_02 : I_E_Soldier_GL_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_LAT2_F;
    class I_E_Soldier_LAT2_F_OCimport_01 : I_E_Soldier_LAT2_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_LAT2_F_OCimport_02 : I_E_Soldier_LAT2_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_LAT_F;
    class I_E_Soldier_LAT_F_OCimport_01 : I_E_Soldier_LAT_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_LAT_F_OCimport_02 : I_E_Soldier_LAT_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_MP_F;
    class I_E_Soldier_MP_F_OCimport_01 : I_E_Soldier_MP_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_MP_F_OCimport_02 : I_E_Soldier_MP_F_OCimport_01 { class EventHandlers; };

    class I_E_soldier_M_F;
    class I_E_soldier_M_F_OCimport_01 : I_E_soldier_M_F { scope = 0; class EventHandlers; };
    class I_E_soldier_M_F_OCimport_02 : I_E_soldier_M_F_OCimport_01 { class EventHandlers; };

    class I_E_soldier_Mine_F;
    class I_E_soldier_Mine_F_OCimport_01 : I_E_soldier_Mine_F { scope = 0; class EventHandlers; };
    class I_E_soldier_Mine_F_OCimport_02 : I_E_soldier_Mine_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_Repair_F;
    class I_E_Soldier_Repair_F_OCimport_01 : I_E_Soldier_Repair_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_Repair_F_OCimport_02 : I_E_Soldier_Repair_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_SL_F;
    class I_E_Soldier_SL_F_OCimport_01 : I_E_Soldier_SL_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_SL_F_OCimport_02 : I_E_Soldier_SL_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_TL_F;
    class I_E_Soldier_TL_F_OCimport_01 : I_E_Soldier_TL_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_TL_F_OCimport_02 : I_E_Soldier_TL_F_OCimport_01 { class EventHandlers; };

    class Aegis_B_E_Soldier_UAV_06_medical_F;
    class Aegis_B_E_Soldier_UAV_06_medical_F_OCimport_01 : Aegis_B_E_Soldier_UAV_06_medical_F { scope = 0; class EventHandlers; };
    class Aegis_B_E_Soldier_UAV_06_medical_F_OCimport_02 : Aegis_B_E_Soldier_UAV_06_medical_F_OCimport_01 { class EventHandlers; };

    class I_E_soldier_UAV_06_F;
    class I_E_soldier_UAV_06_F_OCimport_01 : I_E_soldier_UAV_06_F { scope = 0; class EventHandlers; };
    class I_E_soldier_UAV_06_F_OCimport_02 : I_E_soldier_UAV_06_F_OCimport_01 { class EventHandlers; };

    class I_E_soldier_UAV_06_medical_F;
    class I_E_soldier_UAV_06_medical_F_OCimport_01 : I_E_soldier_UAV_06_medical_F { scope = 0; class EventHandlers; };
    class I_E_soldier_UAV_06_medical_F_OCimport_02 : I_E_soldier_UAV_06_medical_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_UAV_F;
    class I_E_Soldier_UAV_F_OCimport_01 : I_E_Soldier_UAV_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_UAV_F_OCimport_02 : I_E_Soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class I_E_soldier_UGV_02_Demining_F;
    class I_E_soldier_UGV_02_Demining_F_OCimport_01 : I_E_soldier_UGV_02_Demining_F { scope = 0; class EventHandlers; };
    class I_E_soldier_UGV_02_Demining_F_OCimport_02 : I_E_soldier_UGV_02_Demining_F_OCimport_01 { class EventHandlers; };

    class I_E_soldier_UGV_02_Science_F;
    class I_E_soldier_UGV_02_Science_F_OCimport_01 : I_E_soldier_UGV_02_Science_F { scope = 0; class EventHandlers; };
    class I_E_soldier_UGV_02_Science_F_OCimport_02 : I_E_soldier_UGV_02_Science_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_lite_F;
    class I_E_Soldier_lite_F_OCimport_01 : I_E_Soldier_lite_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_lite_F_OCimport_02 : I_E_Soldier_lite_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_unarmed_F;
    class I_E_Soldier_unarmed_F_OCimport_01 : I_E_Soldier_unarmed_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_unarmed_F_OCimport_02 : I_E_Soldier_unarmed_F_OCimport_01 { class EventHandlers; };

    class I_E_ghillie_spotter_wdl_F;
    class I_E_ghillie_spotter_wdl_F_OCimport_01 : I_E_ghillie_spotter_wdl_F { scope = 0; class EventHandlers; };
    class I_E_ghillie_spotter_wdl_F_OCimport_02 : I_E_ghillie_spotter_wdl_F_OCimport_01 { class EventHandlers; };

    class I_E_Static_AA_F;
    class I_E_Static_AA_F_OCimport_01 : I_E_Static_AA_F { scope = 0; class EventHandlers; };
    class I_E_Static_AA_F_OCimport_02 : I_E_Static_AA_F_OCimport_01 { class EventHandlers; };

    class I_E_Static_AT_F;
    class I_E_Static_AT_F_OCimport_01 : I_E_Static_AT_F { scope = 0; class EventHandlers; };
    class I_E_Static_AT_F_OCimport_02 : I_E_Static_AT_F_OCimport_01 { class EventHandlers; };

    class Static_Designator_01_base_F;
    class Static_Designator_01_base_F_OCimport_01 : Static_Designator_01_base_F { scope = 0; class EventHandlers; };
    class Static_Designator_01_base_F_OCimport_02 : Static_Designator_01_base_F_OCimport_01 { class EventHandlers; };

    class I_E_Support_AMG_F;
    class I_E_Support_AMG_F_OCimport_01 : I_E_Support_AMG_F { scope = 0; class EventHandlers; };
    class I_E_Support_AMG_F_OCimport_02 : I_E_Support_AMG_F_OCimport_01 { class EventHandlers; };

    class I_E_Support_AMort_F;
    class I_E_Support_AMort_F_OCimport_01 : I_E_Support_AMort_F { scope = 0; class EventHandlers; };
    class I_E_Support_AMort_F_OCimport_02 : I_E_Support_AMort_F_OCimport_01 { class EventHandlers; };

    class I_E_support_CMort_RF;
    class I_E_support_CMort_RF_OCimport_01 : I_E_support_CMort_RF { scope = 0; class EventHandlers; };
    class I_E_support_CMort_RF_OCimport_02 : I_E_support_CMort_RF_OCimport_01 { class EventHandlers; };

    class I_E_Support_GMG_F;
    class I_E_Support_GMG_F_OCimport_01 : I_E_Support_GMG_F { scope = 0; class EventHandlers; };
    class I_E_Support_GMG_F_OCimport_02 : I_E_Support_GMG_F_OCimport_01 { class EventHandlers; };

    class I_E_Support_MG_F;
    class I_E_Support_MG_F_OCimport_01 : I_E_Support_MG_F { scope = 0; class EventHandlers; };
    class I_E_Support_MG_F_OCimport_02 : I_E_Support_MG_F_OCimport_01 { class EventHandlers; };

    class I_E_Support_Mort_F;
    class I_E_Support_Mort_F_OCimport_01 : I_E_Support_Mort_F { scope = 0; class EventHandlers; };
    class I_E_Support_Mort_F_OCimport_02 : I_E_Support_Mort_F_OCimport_01 { class EventHandlers; };

    class I_E_Truck_02_F;
    class I_E_Truck_02_F_OCimport_01 : I_E_Truck_02_F { scope = 0; class EventHandlers; };
    class I_E_Truck_02_F_OCimport_02 : I_E_Truck_02_F_OCimport_01 { class EventHandlers; };

    class I_E_Truck_02_MRL_F;
    class I_E_Truck_02_MRL_F_OCimport_01 : I_E_Truck_02_MRL_F { scope = 0; class EventHandlers; };
    class I_E_Truck_02_MRL_F_OCimport_02 : I_E_Truck_02_MRL_F_OCimport_01 { class EventHandlers; };

    class I_E_Truck_02_Ammo_F;
    class I_E_Truck_02_Ammo_F_OCimport_01 : I_E_Truck_02_Ammo_F { scope = 0; class EventHandlers; };
    class I_E_Truck_02_Ammo_F_OCimport_02 : I_E_Truck_02_Ammo_F_OCimport_01 { class EventHandlers; };

    class I_E_Truck_02_Box_F;
    class I_E_Truck_02_Box_F_OCimport_01 : I_E_Truck_02_Box_F { scope = 0; class EventHandlers; };
    class I_E_Truck_02_Box_F_OCimport_02 : I_E_Truck_02_Box_F_OCimport_01 { class EventHandlers; };

    class I_E_Truck_02_cargo_lxWS;
    class I_E_Truck_02_cargo_lxWS_OCimport_01 : I_E_Truck_02_cargo_lxWS { scope = 0; class EventHandlers; };
    class I_E_Truck_02_cargo_lxWS_OCimport_02 : I_E_Truck_02_cargo_lxWS_OCimport_01 { class EventHandlers; };

    class I_E_Truck_02_flatbed_lxWS;
    class I_E_Truck_02_flatbed_lxWS_OCimport_01 : I_E_Truck_02_flatbed_lxWS { scope = 0; class EventHandlers; };
    class I_E_Truck_02_flatbed_lxWS_OCimport_02 : I_E_Truck_02_flatbed_lxWS_OCimport_01 { class EventHandlers; };

    class I_E_Truck_02_fuel_F;
    class I_E_Truck_02_fuel_F_OCimport_01 : I_E_Truck_02_fuel_F { scope = 0; class EventHandlers; };
    class I_E_Truck_02_fuel_F_OCimport_02 : I_E_Truck_02_fuel_F_OCimport_01 { class EventHandlers; };

    class I_E_Truck_02_Medical_F;
    class I_E_Truck_02_Medical_F_OCimport_01 : I_E_Truck_02_Medical_F { scope = 0; class EventHandlers; };
    class I_E_Truck_02_Medical_F_OCimport_02 : I_E_Truck_02_Medical_F_OCimport_01 { class EventHandlers; };

    class I_E_Truck_02_transport_F;
    class I_E_Truck_02_transport_F_OCimport_01 : I_E_Truck_02_transport_F { scope = 0; class EventHandlers; };
    class I_E_Truck_02_transport_F_OCimport_02 : I_E_Truck_02_transport_F_OCimport_01 { class EventHandlers; };

    class B_T_TwinMortar_RF;
    class B_T_TwinMortar_RF_OCimport_01 : B_T_TwinMortar_RF { scope = 0; class EventHandlers; };
    class B_T_TwinMortar_RF_OCimport_02 : B_T_TwinMortar_RF_OCimport_01 { class EventHandlers; };

    class UAV_01_base_F;
    class UAV_01_base_F_OCimport_01 : UAV_01_base_F { scope = 0; class EventHandlers; };
    class UAV_01_base_F_OCimport_02 : UAV_01_base_F_OCimport_01 { class EventHandlers; };

    class UAV_02_Base_lxWS;
    class UAV_02_Base_lxWS_OCimport_01 : UAV_02_Base_lxWS { scope = 0; class EventHandlers; };
    class UAV_02_Base_lxWS_OCimport_02 : UAV_02_Base_lxWS_OCimport_01 { class EventHandlers; };

    class UAV_06_base_F;
    class UAV_06_base_F_OCimport_01 : UAV_06_base_F { scope = 0; class EventHandlers; };
    class UAV_06_base_F_OCimport_02 : UAV_06_base_F_OCimport_01 { class EventHandlers; };

    class UAV_06_medical_base_F;
    class UAV_06_medical_base_F_OCimport_01 : UAV_06_medical_base_F { scope = 0; class EventHandlers; };
    class UAV_06_medical_base_F_OCimport_02 : UAV_06_medical_base_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_UAV_07_F;
    class Aegis_I_E_UAV_07_F_OCimport_01 : Aegis_I_E_UAV_07_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_UAV_07_F_OCimport_02 : Aegis_I_E_UAV_07_F_OCimport_01 { class EventHandlers; };

    class I_E_UGV_01_F;
    class I_E_UGV_01_F_OCimport_01 : I_E_UGV_01_F { scope = 0; class EventHandlers; };
    class I_E_UGV_01_F_OCimport_02 : I_E_UGV_01_F_OCimport_01 { class EventHandlers; };

    class I_E_UGV_01_rcws_F;
    class I_E_UGV_01_rcws_F_OCimport_01 : I_E_UGV_01_rcws_F { scope = 0; class EventHandlers; };
    class I_E_UGV_01_rcws_F_OCimport_02 : I_E_UGV_01_rcws_F_OCimport_01 { class EventHandlers; };

    class I_E_UGV_01_medical_F;
    class I_E_UGV_01_medical_F_OCimport_01 : I_E_UGV_01_medical_F { scope = 0; class EventHandlers; };
    class I_E_UGV_01_medical_F_OCimport_02 : I_E_UGV_01_medical_F_OCimport_01 { class EventHandlers; };

    class UGV_02_Demining_Base_F;
    class UGV_02_Demining_Base_F_OCimport_01 : UGV_02_Demining_Base_F { scope = 0; class EventHandlers; };
    class UGV_02_Demining_Base_F_OCimport_02 : UGV_02_Demining_Base_F_OCimport_01 { class EventHandlers; };

    class UGV_02_Science_Base_F;
    class UGV_02_Science_Base_F_OCimport_01 : UGV_02_Science_Base_F { scope = 0; class EventHandlers; };
    class UGV_02_Science_Base_F_OCimport_02 : UGV_02_Science_Base_F_OCimport_01 { class EventHandlers; };

    class I_E_Van_02_transport_MP_F;
    class I_E_Van_02_transport_MP_F_OCimport_01 : I_E_Van_02_transport_MP_F { scope = 0; class EventHandlers; };
    class I_E_Van_02_transport_MP_F_OCimport_02 : I_E_Van_02_transport_MP_F_OCimport_01 { class EventHandlers; };

    class I_E_Van_02_vehicle_F;
    class I_E_Van_02_vehicle_F_OCimport_01 : I_E_Van_02_vehicle_F { scope = 0; class EventHandlers; };
    class I_E_Van_02_vehicle_F_OCimport_02 : I_E_Van_02_vehicle_F_OCimport_01 { class EventHandlers; };

    class I_E_Van_02_medevac_F;
    class I_E_Van_02_medevac_F_OCimport_01 : I_E_Van_02_medevac_F { scope = 0; class EventHandlers; };
    class I_E_Van_02_medevac_F_OCimport_02 : I_E_Van_02_medevac_F_OCimport_01 { class EventHandlers; };

    class I_E_Van_02_transport_F;
    class I_E_Van_02_transport_F_OCimport_01 : I_E_Van_02_transport_F { scope = 0; class EventHandlers; };
    class I_E_Van_02_transport_F_OCimport_02 : I_E_Van_02_transport_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_E_Reservist_AR_F;
    class Atlas_I_E_Reservist_AR_F_OCimport_01 : Atlas_I_E_Reservist_AR_F { scope = 0; class EventHandlers; };
    class Atlas_I_E_Reservist_AR_F_OCimport_02 : Atlas_I_E_Reservist_AR_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_E_Reservist_AT_F;
    class Atlas_I_E_Reservist_AT_F_OCimport_01 : Atlas_I_E_Reservist_AT_F { scope = 0; class EventHandlers; };
    class Atlas_I_E_Reservist_AT_F_OCimport_02 : Atlas_I_E_Reservist_AT_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_E_Reservist_A_F;
    class Atlas_I_E_Reservist_A_F_OCimport_01 : Atlas_I_E_Reservist_A_F { scope = 0; class EventHandlers; };
    class Atlas_I_E_Reservist_A_F_OCimport_02 : Atlas_I_E_Reservist_A_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_E_Reservist_F;
    class Atlas_I_E_Reservist_F_OCimport_01 : Atlas_I_E_Reservist_F { scope = 0; class EventHandlers; };
    class Atlas_I_E_Reservist_F_OCimport_02 : Atlas_I_E_Reservist_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_E_Reservist_GL_F;
    class Atlas_I_E_Reservist_GL_F_OCimport_01 : Atlas_I_E_Reservist_GL_F { scope = 0; class EventHandlers; };
    class Atlas_I_E_Reservist_GL_F_OCimport_02 : Atlas_I_E_Reservist_GL_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_E_Reservist_M_F;
    class Atlas_I_E_Reservist_M_F_OCimport_01 : Atlas_I_E_Reservist_M_F { scope = 0; class EventHandlers; };
    class Atlas_I_E_Reservist_M_F_OCimport_02 : Atlas_I_E_Reservist_M_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_E_Reservist_Medic_F;
    class Atlas_I_E_Reservist_Medic_F_OCimport_01 : Atlas_I_E_Reservist_Medic_F { scope = 0; class EventHandlers; };
    class Atlas_I_E_Reservist_Medic_F_OCimport_02 : Atlas_I_E_Reservist_Medic_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_E_Reservist_Repair_F;
    class Atlas_I_E_Reservist_Repair_F_OCimport_01 : Atlas_I_E_Reservist_Repair_F { scope = 0; class EventHandlers; };
    class Atlas_I_E_Reservist_Repair_F_OCimport_02 : Atlas_I_E_Reservist_Repair_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_E_Reservist_SL_F;
    class Atlas_I_E_Reservist_SL_F_OCimport_01 : Atlas_I_E_Reservist_SL_F { scope = 0; class EventHandlers; };
    class Atlas_I_E_Reservist_SL_F_OCimport_02 : Atlas_I_E_Reservist_SL_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_E_Reservist_TL_F;
    class Atlas_I_E_Reservist_TL_F_OCimport_01 : Atlas_I_E_Reservist_TL_F { scope = 0; class EventHandlers; };
    class Atlas_I_E_Reservist_TL_F_OCimport_02 : Atlas_I_E_Reservist_TL_F_OCimport_01 { class EventHandlers; };

    class Aegis_B_EAF_Heli_Attack_04_F : Aegis_I_EAF_Heli_Attack_04_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-35 Sokół";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_APC_Wheeled_01_atgm_v2 : Aegis_I_E_APC_Wheeled_01_atgm_v2_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KTO Borsuk (ATGM)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_APC_Wheeled_01_cannon_v2_F : Aegis_I_E_APC_Wheeled_01_cannon_v2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KTO Borsuk";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_APC_Wheeled_01_medical_F : Aegis_I_E_APC_Wheeled_01_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KTO Borsuk (Medical)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_APC_Wheeled_01_mortar_lxWS : Aegis_I_E_APC_Wheeled_01_mortar_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KTO Borsuk (Mortar)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_APC_tracked_03_cannon_v2_F : I_E_APC_tracked_03_cannon_v2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "FV-720 Odyniec";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_CommandoMortar_RF : I_E_CommandoMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RSG60";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Crew_F : I_E_Crew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_coveralls_F";

        linkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"SMG_03C_black","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"SMG_03C_black","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Engineer_F : I_E_Engineer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_F";

        backpack = "B_Carryall_eaf_eng_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Fighter_Pilot_F : I_E_Fighter_Pilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter Pilot";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Euro","Head_Enoch","G_NATO_pilot"};

        uniformClass = "U_I_E_Uniform_01_pilot_F";

        linkedItems[] = {"H_PilotHelmetFighter_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_PilotHelmetFighter_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_GMG_01_A_F : I_E_GMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307A";
        side = 1;
        faction = "blu_eaf_f";
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

    class Aegis_B_E_GMG_01_F : I_E_GMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_GMG_01_high_F : I_E_GMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307 (High)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_HMG_01_A_F : I_E_HMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312A";
        side = 1;
        faction = "blu_eaf_f";
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

    class Aegis_B_E_HMG_01_F : I_E_HMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_HMG_01_high_F : I_E_HMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312 (High)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_HMG_02_F : I_E_HMG_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_HMG_02_high_F : I_E_HMG_02_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Heli_EC_01A_military_RF : I_E_Heli_EC_01A_military_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "H215 Super Puma (Unarmed)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Heli_Light_03_dynamicLoadout_F : I_E_Heli_light_03_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AW159 Wildcat";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Heli_Light_03_dynamicLoadout_RF : I_E_Heli_light_03_dynamicLoadout_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AW159 Wildcat ASW";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Heli_Light_03_unarmed_F : I_E_Heli_light_03_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AW159 Wildcat (unarmed)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Heli_Light_03_unarmed_RF : I_E_Heli_light_03_unarmed_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AW159 Wildcat ASW (Unarmed)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Helicrew_F : I_E_Helicrew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Euro","Head_Enoch","G_NATO_pilot"};

        uniformClass = "U_I_E_Uniform_01_coveralls_F";

        linkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_CrewHelmetHeli_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_CrewHelmetHeli_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_aco_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_aco_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Helipilot_F : I_E_Helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Euro","Head_Enoch","G_NATO_pilot"};

        uniformClass = "U_I_E_Uniform_01_coveralls_F";

        linkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_PilotHelmetHeli_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_PilotHelmetHeli_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"SMG_03C_black","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"SMG_03C_black","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_MBT_03_cannon_F : Aegis_I_E_MBT_03_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MBT-52 Niedźwiedź";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Medic_F : I_E_Medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_shortsleeve_F";

        backpack = "B_Fieldpack_green_IEMedic_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Mortar_01_F : I_E_Mortar_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Aegis_B_E_Mortar_01_F";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Officer_F : I_E_Officer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Euro","Head_Enoch","G_NATO_casual"};

        uniformClass = "U_I_E_Uniform_01_officer_F";

        linkedItems[] = {"V_Rangemaster_belt_oli","H_Beret_EAF_01_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Rangemaster_belt_oli","H_Beret_EAF_01_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_MSBS65_F","hgun_Pistol_heavy_01_green_MRD_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MSBS65_F","hgun_Pistol_heavy_01_green_MRD_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Offroad_01_F : I_E_Offroad_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Offroad_01_armed_F : I_E_Offroad_01_armed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (HMG)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Offroad_01_comms_F : I_E_Offroad_01_comms_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Comms)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Offroad_01_covered_F : I_E_Offroad_01_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Covered)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Pickup_AAT_RF : Aegis_I_E_Pickup_AAT_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (AA)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Pickup_AT_RF : Aegis_I_E_Pickup_AT_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Aegis_B_E_Pickup_AT_RF";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Pickup_Comms_RF : I_E_Pickup_Comms_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Comms)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Pickup_Covered_RF : I_E_Pickup_Covered_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Covered)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Pickup_HMG_RF : Aegis_I_E_Pickup_HMG_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (HMG)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Pickup_RF : I_E_Pickup_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Pilot_F : Aegis_I_E_Pilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Euro","Head_Enoch","G_NATO_pilot"};

        uniformClass = "U_I_E_Uniform_01_pilot_F";

        backpack = "B_Parachute";

        linkedItems[] = {"H_PilotHelmetHeli_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_PilotHelmetHeli_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"SMG_03C_black","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"SMG_03C_black","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Plane_Fighter_04_F : I_E_Plane_Fighter_04_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "A-149 Orzeł";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Plane_Transport_01_infantry_F : Aegis_I_E_Plane_Transport_01_infantry_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "C-192 Samson (Infantry Transport)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Plane_Transport_01_vehicle_F : Aegis_I_E_Plane_Transport_01_vehicle_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "C-192 Samson (Vehicle Transport)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Quadbike_01_F : I_E_Quadbike_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Radar_System_01_F : I_E_Radar_System_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AN/MPQ-105 Radar";
        side = 1;
        faction = "blu_eaf_f";
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

    class Aegis_B_E_RadioOperator_F : I_E_RadioOperator_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_shortsleeve_F";

        backpack = "B_RadioBag_01_eaf_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Recon_AR_F : I_E_recon_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Autorifleman";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_headset_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_headset_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"LMG_Mk200_black_MRCO_LP_S_F","hgun_Pistol_heavy_01_green_snds_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Mk200_black_MRCO_LP_S_F","hgun_Pistol_heavy_01_green_snds_F","Throw","Put"};

        magazines[] = {"200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Recon_Exp_F : I_E_recon_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Demo Specialist";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";

        backpack = "B_Carryall_eaf_exp_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_Booniehat_eaf_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_Booniehat_eaf_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"arifle_SCAR_short_black_snds_holo_pointer_f","hgun_Pistol_heavy_01_green_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SCAR_short_black_snds_holo_pointer_f","hgun_Pistol_heavy_01_green_snds_F","Throw","Put"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Recon_F : I_E_recon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_01_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_headset_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_headset_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"arifle_SCAR_short_black_snds_mrco_pointer_f","hgun_Pistol_heavy_01_green_snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SCAR_short_black_snds_mrco_pointer_f","hgun_Pistol_heavy_01_green_snds_F","Throw","Put","Binocular"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Recon_GL_F : I_E_recon_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Grenadier";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_01_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_headset_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_headset_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"arifle_SCAR_GL_black_snds_mrco_pointer_f","hgun_Pistol_heavy_01_green_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SCAR_GL_black_snds_mrco_pointer_f","hgun_Pistol_heavy_01_green_snds_F","Throw","Put"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Recon_JTAC_F : I_E_recon_JTAC_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon JTAC";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_01_F";

        backpack = "B_RadioBag_01_eaf_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_Watchcap_camo_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_Watchcap_camo_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"arifle_SCAR_short_black_snds_holo_pointer_f","hgun_Pistol_heavy_01_green_snds_F","Throw","Put","Laserdesignator_01_khk_F"};
        respawnWeapons[] = {"arifle_SCAR_short_black_snds_holo_pointer_f","hgun_Pistol_heavy_01_green_snds_F","Throw","Put","Laserdesignator_01_khk_F"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Recon_LAT_F : I_E_recon_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (AT)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";

        backpack = "B_AssaultPack_eaf_IELAT2_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_ear_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_ear_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"arifle_SCAR_short_black_snds_holo_pointer_f","launch_MRAWS_green_F","hgun_Pistol_heavy_01_green_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SCAR_short_black_snds_holo_pointer_f","launch_MRAWS_green_F","hgun_Pistol_heavy_01_green_snds_F","Throw","Put"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Recon_M_F : I_E_recon_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Marksman";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_01_F";

        linkedItems[] = {"V_TacVest_camo","H_Booniehat_eaf_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"V_TacVest_camo","H_Booniehat_eaf_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"arifle_SCAR_black_DMS_LP_BI_S_F","hgun_Pistol_heavy_01_green_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_SCAR_black_DMS_LP_BI_S_F","hgun_Pistol_heavy_01_green_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Recon_Medic_F : I_E_recon_medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Paramedic";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_F";

        backpack = "B_AssaultPack_eaf_IEReconMedic_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_ear_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_ear_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"arifle_SCAR_short_black_snds_holo_pointer_f","hgun_Pistol_heavy_01_green_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SCAR_short_black_snds_holo_pointer_f","hgun_Pistol_heavy_01_green_snds_F","Throw","Put"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Recon_TL_F : I_E_recon_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Team Leader";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_01_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_chops_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_chops_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"arifle_SCAR_grip_black_snds_mrco_pointer_f","hgun_Pistol_heavy_01_green_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_SCAR_grip_black_snds_mrco_pointer_f","hgun_Pistol_heavy_01_green_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_SAM_System_03_F : I_E_SAM_System_03_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MIM-104 Patriot";
        side = 1;
        faction = "blu_eaf_f";
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

    class Aegis_B_E_Scientist_F : I_E_Scientist_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Military Scientist";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_C_CBRN_Suit_01_White_F";

        linkedItems[] = {"V_ChestrigF_blk","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_blk","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_03C_TR_black","Throw","Put"};
        respawnWeapons[] = {"SMG_03C_TR_black","Throw","Put"};

        magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03"};
        respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Scientist_Unarmed_F : I_E_Scientist_Unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Military Scientist (Unarmed)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_C_CBRN_Suit_01_White_F";

        linkedItems[] = {"V_ChestrigF_blk","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_blk","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class Aegis_B_E_Sniper_wdl_F : I_E_ghillie_wdl_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper (Woodland)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_FullGhillie_wdl_F";

        linkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"srifle_LRR_LRPS_F","hgun_Pistol_heavy_01_green_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_LRR_LRPS_F","hgun_Pistol_heavy_01_green_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_AAA_F : I_E_Soldier_AAA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_shortsleeve_F";

        backpack = "B_Carryall_eaf_IEAAA_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_AAR_F : I_E_Soldier_AAR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_shortsleeve_F";

        backpack = "B_Carryall_eaf_IEAAR_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_AAT_F : I_E_Soldier_AAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_shortsleeve_F";

        backpack = "B_Carryall_eaf_IEAAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_AA_F : I_E_Soldier_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_F";

        backpack = "B_Fieldpack_green_IEAA_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_f","launch_I_Titan_eaf_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_f","launch_I_Titan_eaf_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_AR_F : I_E_Soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_shortsleeve_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"LMG_Mk200_black_MRCO_LP_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Mk200_black_MRCO_LP_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_AT_F : I_E_Soldier_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_F";

        backpack = "B_Fieldpack_green_IEAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_f","launch_I_Titan_short_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_f","launch_I_Titan_short_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_A_F : I_E_Soldier_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_shortsleeve_F";

        backpack = "B_Carryall_eaf_IEAmmo_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_CBRN_F : I_E_Soldier_CBRN_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Specialist";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_CBRN_Suit_01_EAF_F";

        backpack = "B_CombinationUnitRespirator_01_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_aco_FL_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_aco_FL_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_CQ_F : I_E_Soldier_CQ_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_shortsleeve_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_EAF_F","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_EAF_F","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_UBS_ico_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_UBS_ico_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_Exp_F : I_E_Soldier_Exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_shortsleeve_F";

        backpack = "B_Carryall_eaf_Exp_F";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_F : I_E_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_GL_F : I_E_Soldier_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_F";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_GL_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_GL_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_LAT2_F : I_E_Soldier_LAT2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light AT)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_F";

        backpack = "B_AssaultPack_eaf_IELAT2_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_f","launch_MRAWS_green_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_f","launch_MRAWS_green_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MRAWS_HEAT_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MRAWS_HEAT_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_LAT_F : I_E_Soldier_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_F";

        backpack = "B_AssaultPack_eaf_IELAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_f","launch_NLAW_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_f","launch_NLAW_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","NLAW_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","NLAW_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_MP_F : I_E_Soldier_MP_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Military Police Officer";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Euro","Head_Enoch","G_NATO_casual"};

        uniformClass = "U_I_E_Uniform_01_sweater_F";

        linkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_MilCap_eaf","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_MilCap_eaf","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_MSBS65_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_M_F : I_E_soldier_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_Mark_SOS_LP_BI_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MSBS65_Mark_SOS_LP_BI_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_Mine_F : I_E_soldier_Mine_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mine Specialist";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_F";

        backpack = "B_Carryall_eaf_Mine_F";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_Repair_F : I_E_Soldier_Repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_F";

        backpack = "B_AssaultPack_eaf_Repair_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_SL_F : I_E_Soldier_SL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_shortsleeve_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_TL_F : I_E_Soldier_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_F";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_ear_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_ear_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_GL_ico_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MSBS65_GL_ico_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_UAV_02_lxWS_F : Aegis_B_E_Soldier_UAV_06_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AP-5)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_shortsleeve_F";

        backpack = "Aegis_B_E_UAV_02_backpack_lxWS";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_UAV_06_F : I_E_soldier_UAV_06_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_shortsleeve_F";

        backpack = "Aegis_B_E_UAV_06_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_UAV_06_medical_F : I_E_soldier_UAV_06_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_shortsleeve_F";

        backpack = "Aegis_B_E_UAV_06_medical_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_UAV_F : I_E_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_shortsleeve_F";

        backpack = "Aegis_B_E_UAV_01_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_UGV_02_Demining_F : I_E_soldier_UGV_02_Demining_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1D)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_shortsleeve_F";

        backpack = "Aegis_B_E_UGV_02_Demining_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_UGV_02_Science_F : I_E_soldier_UGV_02_Science_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1E)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_shortsleeve_F";

        backpack = "Aegis_B_E_UGV_02_Science_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_lite_F : I_E_Soldier_lite_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Euro","Head_Enoch","G_NATO_casual"};

        uniformClass = "U_I_E_Uniform_01_tanktop_F";

        linkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_MilCap_eaf","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_MilCap_eaf","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_MSBS65_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Soldier_unarmed_F : I_E_Soldier_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class Aegis_B_E_Spotter_wdl_F : I_E_ghillie_spotter_wdl_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter (Woodland)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_FullGhillie_wdl_F";

        linkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SCAR_black_snds_mrco_pointer_f","hgun_Pistol_heavy_01_green_snds_F","Throw","Put","Laserdesignator_01_khk_F"};
        respawnWeapons[] = {"arifle_SCAR_black_snds_mrco_pointer_f","hgun_Pistol_heavy_01_green_snds_F","Throw","Put","Laserdesignator_01_khk_F"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Static_AA_F : I_E_Static_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AA)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Static_AT_F : I_E_Static_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AT)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Static_Designator_01_F : Static_Designator_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Remote Designator";
        side = 1;
        faction = "blu_eaf_f";
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

    class Aegis_B_E_Support_AMG_F : I_E_Support_AMG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (HMG/GMG)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_shortsleeve_F";

        backpack = "I_E_HMG_01_support_F";

        linkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_aco_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_aco_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Support_AMort_F : I_E_Support_AMort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (Mk6)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_shortsleeve_F";

        backpack = "I_E_Mortar_01_support_F";

        linkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_aco_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_aco_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Support_CMort_RF : I_E_support_CMort_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_F";

        backpack = "I_E_CommandoMortar_weapon_RF";

        linkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_aco_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_aco_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Support_GMG_F : I_E_Support_GMG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (GMG)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_F";

        backpack = "I_E_GMG_01_Weapon_F";

        linkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_aco_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_aco_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Support_MG_F : I_E_Support_MG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (HMG)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_F";

        backpack = "I_E_HMG_01_Weapon_F";

        linkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_aco_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_aco_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Support_Mort_F : I_E_Support_Mort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mk6)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_F";

        backpack = "I_E_Mortar_01_Weapon_F";

        linkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_aco_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_aco_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Truck_02_F : I_E_Truck_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport (covered)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Truck_02_MRL_F : I_E_Truck_02_MRL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ MRL";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Truck_02_ammo_F : I_E_Truck_02_Ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Ammo";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Truck_02_box_F : I_E_Truck_02_Box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Repair";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Truck_02_cargo_lxWS : I_E_Truck_02_cargo_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Cargo";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Truck_02_flatbed_lxWS : I_E_Truck_02_flatbed_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Flatbed";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Truck_02_fuel_F : I_E_Truck_02_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Fuel";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Truck_02_medical_F : I_E_Truck_02_Medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Medical";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Medic_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Truck_02_transport_F : I_E_Truck_02_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_TwinMortar_RF : B_T_TwinMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMOS Container";
        side = 1;
        faction = "blu_eaf_f";
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

    class Aegis_B_E_UAV_01_F : UAV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR-2 Darter";
        side = 1;
        faction = "blu_eaf_f";
        crew = "B_UAV_AI_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_UAV_02_lxWS : UAV_02_Base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AP-5 Bustard";
        side = 1;
        faction = "blu_eaf_f";
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

    class Aegis_B_E_UAV_06_F : UAV_06_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican";
        side = 1;
        faction = "blu_eaf_f";
        crew = "B_UAV_AI_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_UAV_06_medical_F : UAV_06_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican (Medical)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "B_UAV_AI_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_UAV_07_F : Aegis_I_E_UAV_07_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MQ-9A Kruk";
        side = 1;
        faction = "blu_eaf_f";
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

    class Aegis_B_E_UGV_01_F : I_E_UGV_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper";
        side = 1;
        faction = "blu_eaf_f";
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

    class Aegis_B_E_UGV_01_RCWS_F : I_E_UGV_01_rcws_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper RCWS";
        side = 1;
        faction = "blu_eaf_f";
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

    class Aegis_B_E_UGV_01_medical_F : I_E_UGV_01_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper Medical";
        side = 1;
        faction = "blu_eaf_f";
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

    class Aegis_B_E_UGV_02_Demining_F : UGV_02_Demining_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ED-1D Pelter";
        side = 1;
        faction = "blu_eaf_f";
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

    class Aegis_B_E_UGV_02_Science_F : UGV_02_Science_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ED-1E Roller";
        side = 1;
        faction = "blu_eaf_f";
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

    class Aegis_B_E_Van_02_MP_F : I_E_Van_02_transport_MP_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van Transport (MP)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_MP_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Van_02_Vehicle_F : I_E_Van_02_vehicle_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van (Cargo)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Van_02_medevac_F : I_E_Van_02_medevac_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van (Ambulance)";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Medic_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Van_02_transport_F : I_E_Van_02_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van Transport";
        side = 1;
        faction = "blu_eaf_f";
        crew = "Aegis_B_E_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_E_Reservist_AR_F : Atlas_I_E_Reservist_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_04_reservist_F";

        linkedItems[] = {"V_ChestRigF_rgr","H_PASGT_basic_Olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestRigF_rgr","H_PASGT_basic_Olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_I_E_LMG_03_ACO_Flash_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_I_E_LMG_03_ACO_Flash_F","Throw","Put"};

        magazines[] = {"200rnd_556x45_box_f","200rnd_556x45_box_f","200rnd_556x45_box_f","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"200rnd_556x45_box_f","200rnd_556x45_box_f","200rnd_556x45_box_f","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_E_Reservist_AT_F : Atlas_I_E_Reservist_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_03_reservist_F";

        backpack = "Atlas_B_FieldPack_Green_ResLAT_F";

        linkedItems[] = {"V_TacVest_grn","H_PASGT_basic_Olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_PASGT_basic_Olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_AKM74_plum_ACO_FL_F","launch_MRAWS_green_rail_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_AKM74_plum_ACO_FL_F","launch_MRAWS_green_rail_F","Throw","Put"};

        magazines[] = {"30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","mraws_heat55_f","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","mraws_heat55_f","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_E_Reservist_A_F : Atlas_I_E_Reservist_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_03_reservist_F";

        backpack = "Atlas_B_Carryall_green_ResAmmo_F";

        linkedItems[] = {"V_ChestRigF_rgr","H_PASGT_basic_Olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestRigF_rgr","H_PASGT_basic_Olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_AKM74_plum_ACO_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_AKM74_plum_ACO_FL_F","Throw","Put"};

        magazines[] = {"30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_E_Reservist_F : Atlas_I_E_Reservist_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_03_reservist_F";

        linkedItems[] = {"V_TacVest_grn","H_PASGT_basic_Olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_PASGT_basic_Olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_AKM74_plum_ACO_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_AKM74_plum_ACO_FL_F","Throw","Put"};

        magazines[] = {"30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_E_Reservist_GL_F : Atlas_I_E_Reservist_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_03_reservist_F";

        linkedItems[] = {"V_TacVest_grn","H_PASGT_basic_Olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_PASGT_basic_Olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_AKM74_GL_plum_ACO_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_AKM74_GL_plum_ACO_FL_F","Throw","Put"};

        magazines[] = {"30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_E_Reservist_M_F : Atlas_I_E_Reservist_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_03_reservist_F";

        linkedItems[] = {"V_ChestRigF_rgr","H_WatchCap_camo_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestRigF_rgr","H_WatchCap_camo_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_srifle_SVD_plum_KHS_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_srifle_SVD_plum_KHS_F","Throw","Put","Binocular"};

        magazines[] = {"Aegis_10Rnd_762x54_SVD_Red_Mag_F","Aegis_10Rnd_762x54_SVD_Red_Mag_F","Aegis_10Rnd_762x54_SVD_Red_Mag_F","Aegis_10Rnd_762x54_SVD_Red_Mag_F","Aegis_10Rnd_762x54_SVD_Red_Mag_F","Aegis_10Rnd_762x54_SVD_Red_Mag_F","Aegis_10Rnd_762x54_SVD_Red_Mag_F","Aegis_10Rnd_762x54_SVD_Red_Mag_F","SmokeShell","SmokeShell","HandGrenade"};
        respawnMagazines[] = {"Aegis_10Rnd_762x54_SVD_Red_Mag_F","Aegis_10Rnd_762x54_SVD_Red_Mag_F","Aegis_10Rnd_762x54_SVD_Red_Mag_F","Aegis_10Rnd_762x54_SVD_Red_Mag_F","Aegis_10Rnd_762x54_SVD_Red_Mag_F","Aegis_10Rnd_762x54_SVD_Red_Mag_F","Aegis_10Rnd_762x54_SVD_Red_Mag_F","Aegis_10Rnd_762x54_SVD_Red_Mag_F","SmokeShell","SmokeShell","HandGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_E_Reservist_Medic_F : Atlas_I_E_Reservist_Medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_03_reservist_F";

        backpack = "Atlas_B_FieldPack_Green_ResMedic_F";

        linkedItems[] = {"V_TacVest_grn","H_PASGT_basic_Olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_PASGT_basic_Olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_AKM74_plum_ACO_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_AKM74_plum_ACO_FL_F","Throw","Put"};

        magazines[] = {"30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_E_Reservist_Repair_F : Atlas_I_E_Reservist_Repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pioneer";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_04_reservist_F";

        backpack = "Atlas_B_FieldPack_Green_ResEng_F";

        linkedItems[] = {"V_TacVest_grn","H_Booniehat_eaf","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_Booniehat_eaf","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_AKM74_plum_ACO_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_AKM74_plum_ACO_FL_F","Throw","Put"};

        magazines[] = {"30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_E_Reservist_SL_F : Atlas_I_E_Reservist_SL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_03_reservist_F";

        backpack = "B_RadioBag_01_eaf_F";

        linkedItems[] = {"V_TacVest_grn","H_Booniehat_eaf_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_Booniehat_eaf_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_AKM74_plum_MRCO_FL_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_arifle_AKM74_plum_MRCO_FL_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};

        magazines[] = {"30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Tracer_Mag_Red_F","30rnd_545x39_Steel_Tracer_Mag_Red_F","9Rnd_45acp_Mag","9Rnd_45acp_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Tracer_Mag_Red_F","30rnd_545x39_Steel_Tracer_Mag_Red_F","9Rnd_45acp_Mag","9Rnd_45acp_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_E_Reservist_TL_F : Atlas_I_E_Reservist_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "blu_eaf_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_04_reservist_F";

        linkedItems[] = {"V_TacVest_grn","H_PASGT_basic_Olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_PASGT_basic_Olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_AKM74_GL_plum_MRCO_FL_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_arifle_AKM74_GL_plum_MRCO_FL_F","Throw","Put","Binocular"};

        magazines[] = {"30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Tracer_Mag_Red_F","30rnd_545x39_Steel_Tracer_Mag_Red_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Mag_Red_F","30rnd_545x39_Steel_Tracer_Mag_Red_F","30rnd_545x39_Steel_Tracer_Mag_Red_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


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
    class West {
        class BLU_EAF_F {
            class Armored {
                class Aegis_B_E_TankPlatoon {
                    name = "Tank Platoon";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_MBT_03_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_MBT_03_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_MBT_03_cannon_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_MBT_03_cannon_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class Aegis_B_E_TankPlatoon_AA {
                    name = "Tank Platoon (Combined)";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_MBT_03_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Pickup_AAT_RF";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_MBT_03_cannon_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Pickup_AAT_RF";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class Aegis_B_E_TankSection {
                    name = "Tank Section";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_MBT_03_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_MBT_03_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class Aegis_B_E_InfSentry {
                    name = "Sentry";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Aegis_B_E_InfSquad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_E_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_B_E_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_B_E_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Aegis_B_E_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_E_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_B_E_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_B_E_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Aegis_B_E_InfTeam {
                    name = "Fire Team";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_InfTeam_AA {
                    name = "Air-defense Team";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_InfTeam_Light {
                    name = "Fire Team (Light)";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Soldier_LAT2_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class Aegis_B_E_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_APC_tracked_03_cannon_v2_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_E_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_B_E_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_B_E_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Aegis_B_E_medic_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class Aegis_B_E_MechInf_AA {
                    name = "Mechanized Air-defense Squad";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_APC_tracked_03_cannon_v2_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_Soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_E_Soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_B_E_Soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_B_E_Soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Aegis_B_E_MechInf_AT {
                    name = "Mechanized Anti-armor Squad";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_APC_tracked_03_cannon_v2_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_Soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_E_Soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_B_E_Soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_B_E_Soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Aegis_B_E_MechInf_Support {
                    name = "Mechanized Support Squad";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_APC_tracked_03_cannon_v2_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Soldier_repair_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_engineer_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_medic_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_E_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_B_E_Soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_B_E_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
            };
            class Motorized {
                class Aegis_B_E_MotInf_AA {
                    name = "Motorized Air-defense Team";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Offroad_01_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_Soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                };
                class Aegis_B_E_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Offroad_01_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_Soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                };
                class Aegis_B_E_MotInf_GMGTeam {
                    name = "Motorized GMG Team";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Offroad_01_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Support_GMG_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_MotInf_MGTeam {
                    name = "Motorized HMG Team";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Offroad_01_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Support_MG_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_MotInf_MortTeam {
                    name = "Motorized Mortar Team";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Offroad_01_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Support_Mort_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Support_AMort_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_MotInf_Reinforcements {
                    name = "Motorized Reinforcements";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Truck_02_transport_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_E_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_B_E_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_B_E_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "Aegis_B_E_medic_F";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "Aegis_B_E_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "Aegis_B_E_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "Aegis_B_E_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "Aegis_B_E_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit13 {
                        vehicle = "Aegis_B_E_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit14 {
                        vehicle = "Aegis_B_E_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit15 {
                        vehicle = "Aegis_B_E_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit16 {
                        vehicle = "Aegis_B_E_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };
                };
                class Aegis_B_E_MotInf_Squad {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Truck_02_transport_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_E_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_B_E_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_B_E_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "Aegis_B_E_medic_F";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };
                };
                class Aegis_B_E_MotInf_Team {
                    name = "Motorized Team";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Offroad_01_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };
                };
            };
            class ReserveInfantry {
                class Atlas_B_E_ReservistSentry {
                    name = "Sentry";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_E_Reservist_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_E_Reservist_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Atlas_B_E_ReservistSquad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_E_Reservist_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_E_Reservist_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_E_Reservist_AT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_E_Reservist_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_E_Reservist_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_E_Reservist_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_E_Reservist_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_E_Reservist_Medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Atlas_B_E_ReservistTeam {
                    name = "Fire Team";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_E_Reservist_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_E_Reservist_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_E_Reservist_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_E_Reservist_AT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class SpecOps {
                class Aegis_B_E_ReconPatrol {
                    name = "Recon Patrol";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_recon_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_ReconSentry {
                    name = "Recon Sentry";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_recon_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Aegis_B_E_ReconTeam {
                    name = "Recon Team";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_recon_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_recon_JTAC_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_E_recon_exp_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
            };
            class Support {
                class Aegis_B_E_Support_CLS {
                    name = "Support Team (CLS)";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_medic_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_Support_ENG {
                    name = "Support Team (Engineer)";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Soldier_repair_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_Support_EOD {
                    name = "Support Team (EOD)";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_Support_GMG {
                    name = "GMG Team";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Support_GMG_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class Aegis_B_E_Support_MG {
                    name = "HMG Team";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Support_MG_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class Aegis_B_E_Support_Mort {
                    name = "Mortar Team";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mortar.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Support_Mort_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Support_AMort_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class Aegis_B_E_Support_Mort_RF {
                    name = "Light Mortar Team";
                    side = 1;
                    faction = "BLU_EAF_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Support_CMort_RF";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Support_CMort_RF";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
        };
    };
};
