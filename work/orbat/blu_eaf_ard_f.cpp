//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class BLU_EAF_ard_F {
        displayName = "LDF (Arid)";
        side = 1;
        priority = 3;
        icon = "\A3\Data_F_Enoch\FactionIcons\icon_EAF_CA.paa";
        flag = "\A3\Data_F_Enoch\Flags\flag_EAF_CO.paa";
    };
};

class CfgVehicles {

    class Aegis_I_EAF_Heli_Attack_04_ard_F;
    class Aegis_I_EAF_Heli_Attack_04_ard_F_OCimport_01 : Aegis_I_EAF_Heli_Attack_04_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_EAF_Heli_Attack_04_ard_F_OCimport_02 : Aegis_I_EAF_Heli_Attack_04_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_APC_Wheeled_01_atgm_v2_ard;
    class Aegis_I_E_APC_Wheeled_01_atgm_v2_ard_OCimport_01 : Aegis_I_E_APC_Wheeled_01_atgm_v2_ard { scope = 0; class EventHandlers; };
    class Aegis_I_E_APC_Wheeled_01_atgm_v2_ard_OCimport_02 : Aegis_I_E_APC_Wheeled_01_atgm_v2_ard_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_APC_Wheeled_01_cannon_v2_ard_F;
    class Aegis_I_E_APC_Wheeled_01_cannon_v2_ard_F_OCimport_01 : Aegis_I_E_APC_Wheeled_01_cannon_v2_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_APC_Wheeled_01_cannon_v2_ard_F_OCimport_02 : Aegis_I_E_APC_Wheeled_01_cannon_v2_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_APC_Wheeled_01_medical_ard_F;
    class Aegis_I_E_APC_Wheeled_01_medical_ard_F_OCimport_01 : Aegis_I_E_APC_Wheeled_01_medical_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_APC_Wheeled_01_medical_ard_F_OCimport_02 : Aegis_I_E_APC_Wheeled_01_medical_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_APC_Wheeled_01_mortar_ard_lxWS;
    class Aegis_I_E_APC_Wheeled_01_mortar_ard_lxWS_OCimport_01 : Aegis_I_E_APC_Wheeled_01_mortar_ard_lxWS { scope = 0; class EventHandlers; };
    class Aegis_I_E_APC_Wheeled_01_mortar_ard_lxWS_OCimport_02 : Aegis_I_E_APC_Wheeled_01_mortar_ard_lxWS_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_APC_tracked_03_cannon_v2_ard_F;
    class Aegis_I_E_APC_tracked_03_cannon_v2_ard_F_OCimport_01 : Aegis_I_E_APC_tracked_03_cannon_v2_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_APC_tracked_03_cannon_v2_ard_F_OCimport_02 : Aegis_I_E_APC_tracked_03_cannon_v2_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_CommandoMortar_ard_RF;
    class Aegis_I_E_CommandoMortar_ard_RF_OCimport_01 : Aegis_I_E_CommandoMortar_ard_RF { scope = 0; class EventHandlers; };
    class Aegis_I_E_CommandoMortar_ard_RF_OCimport_02 : Aegis_I_E_CommandoMortar_ard_RF_OCimport_01 { class EventHandlers; };

    class I_E_Crew_ard_F;
    class I_E_Crew_ard_F_OCimport_01 : I_E_Crew_ard_F { scope = 0; class EventHandlers; };
    class I_E_Crew_ard_F_OCimport_02 : I_E_Crew_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Engineer_ard_F;
    class I_E_Engineer_ard_F_OCimport_01 : I_E_Engineer_ard_F { scope = 0; class EventHandlers; };
    class I_E_Engineer_ard_F_OCimport_02 : I_E_Engineer_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Fighter_Pilot_ard_F;
    class I_E_Fighter_Pilot_ard_F_OCimport_01 : I_E_Fighter_Pilot_ard_F { scope = 0; class EventHandlers; };
    class I_E_Fighter_Pilot_ard_F_OCimport_02 : I_E_Fighter_Pilot_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Heli_EC_01A_military_RF_ard;
    class Aegis_I_E_Heli_EC_01A_military_RF_ard_OCimport_01 : Aegis_I_E_Heli_EC_01A_military_RF_ard { scope = 0; class EventHandlers; };
    class Aegis_I_E_Heli_EC_01A_military_RF_ard_OCimport_02 : Aegis_I_E_Heli_EC_01A_military_RF_ard_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_F;
    class Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_F_OCimport_01 : Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_F_OCimport_02 : Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_RF;
    class Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_RF_OCimport_01 : Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_RF { scope = 0; class EventHandlers; };
    class Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_RF_OCimport_02 : Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_RF_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Heli_Light_03_unarmed_ard_F;
    class Aegis_I_E_Heli_Light_03_unarmed_ard_F_OCimport_01 : Aegis_I_E_Heli_Light_03_unarmed_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Heli_Light_03_unarmed_ard_F_OCimport_02 : Aegis_I_E_Heli_Light_03_unarmed_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Heli_Light_03_unarmed_ard_RF;
    class Aegis_I_E_Heli_Light_03_unarmed_ard_RF_OCimport_01 : Aegis_I_E_Heli_Light_03_unarmed_ard_RF { scope = 0; class EventHandlers; };
    class Aegis_I_E_Heli_Light_03_unarmed_ard_RF_OCimport_02 : Aegis_I_E_Heli_Light_03_unarmed_ard_RF_OCimport_01 { class EventHandlers; };

    class I_E_Helicrew_ard_F;
    class I_E_Helicrew_ard_F_OCimport_01 : I_E_Helicrew_ard_F { scope = 0; class EventHandlers; };
    class I_E_Helicrew_ard_F_OCimport_02 : I_E_Helicrew_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Helipilot_ard_F;
    class I_E_Helipilot_ard_F_OCimport_01 : I_E_Helipilot_ard_F { scope = 0; class EventHandlers; };
    class I_E_Helipilot_ard_F_OCimport_02 : I_E_Helipilot_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_MBT_03_cannon_ard_F;
    class Aegis_I_E_MBT_03_cannon_ard_F_OCimport_01 : Aegis_I_E_MBT_03_cannon_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_MBT_03_cannon_ard_F_OCimport_02 : Aegis_I_E_MBT_03_cannon_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Medic_ard_F;
    class I_E_Medic_ard_F_OCimport_01 : I_E_Medic_ard_F { scope = 0; class EventHandlers; };
    class I_E_Medic_ard_F_OCimport_02 : I_E_Medic_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Officer_ard_F;
    class I_E_Officer_ard_F_OCimport_01 : I_E_Officer_ard_F { scope = 0; class EventHandlers; };
    class I_E_Officer_ard_F_OCimport_02 : I_E_Officer_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Offroad_01_ard_F;
    class Aegis_I_E_Offroad_01_ard_F_OCimport_01 : Aegis_I_E_Offroad_01_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Offroad_01_ard_F_OCimport_02 : Aegis_I_E_Offroad_01_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Offroad_01_armed_ard_F;
    class Aegis_I_E_Offroad_01_armed_ard_F_OCimport_01 : Aegis_I_E_Offroad_01_armed_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Offroad_01_armed_ard_F_OCimport_02 : Aegis_I_E_Offroad_01_armed_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Offroad_01_comms_ard_F;
    class Aegis_I_E_Offroad_01_comms_ard_F_OCimport_01 : Aegis_I_E_Offroad_01_comms_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Offroad_01_comms_ard_F_OCimport_02 : Aegis_I_E_Offroad_01_comms_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Offroad_01_covered_ard_F;
    class Aegis_I_E_Offroad_01_covered_ard_F_OCimport_01 : Aegis_I_E_Offroad_01_covered_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Offroad_01_covered_ard_F_OCimport_02 : Aegis_I_E_Offroad_01_covered_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Pickup_AAT_ard_RF;
    class Aegis_I_E_Pickup_AAT_ard_RF_OCimport_01 : Aegis_I_E_Pickup_AAT_ard_RF { scope = 0; class EventHandlers; };
    class Aegis_I_E_Pickup_AAT_ard_RF_OCimport_02 : Aegis_I_E_Pickup_AAT_ard_RF_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Pickup_AT_ard_RF;
    class Aegis_I_E_Pickup_AT_ard_RF_OCimport_01 : Aegis_I_E_Pickup_AT_ard_RF { scope = 0; class EventHandlers; };
    class Aegis_I_E_Pickup_AT_ard_RF_OCimport_02 : Aegis_I_E_Pickup_AT_ard_RF_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Pickup_Comms_ard_RF;
    class Aegis_I_E_Pickup_Comms_ard_RF_OCimport_01 : Aegis_I_E_Pickup_Comms_ard_RF { scope = 0; class EventHandlers; };
    class Aegis_I_E_Pickup_Comms_ard_RF_OCimport_02 : Aegis_I_E_Pickup_Comms_ard_RF_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Pickup_Covered_ard_RF;
    class Aegis_I_E_Pickup_Covered_ard_RF_OCimport_01 : Aegis_I_E_Pickup_Covered_ard_RF { scope = 0; class EventHandlers; };
    class Aegis_I_E_Pickup_Covered_ard_RF_OCimport_02 : Aegis_I_E_Pickup_Covered_ard_RF_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Pickup_HMG_ard_RF;
    class Aegis_I_E_Pickup_HMG_ard_RF_OCimport_01 : Aegis_I_E_Pickup_HMG_ard_RF { scope = 0; class EventHandlers; };
    class Aegis_I_E_Pickup_HMG_ard_RF_OCimport_02 : Aegis_I_E_Pickup_HMG_ard_RF_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Pickup_ard_RF;
    class Aegis_I_E_Pickup_ard_RF_OCimport_01 : Aegis_I_E_Pickup_ard_RF { scope = 0; class EventHandlers; };
    class Aegis_I_E_Pickup_ard_RF_OCimport_02 : Aegis_I_E_Pickup_ard_RF_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Pilot_ard_F;
    class Aegis_I_E_Pilot_ard_F_OCimport_01 : Aegis_I_E_Pilot_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Pilot_ard_F_OCimport_02 : Aegis_I_E_Pilot_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Plane_Fighter_04_F;
    class I_E_Plane_Fighter_04_F_OCimport_01 : I_E_Plane_Fighter_04_F { scope = 0; class EventHandlers; };
    class I_E_Plane_Fighter_04_F_OCimport_02 : I_E_Plane_Fighter_04_F_OCimport_01 { class EventHandlers; };

    class I_E_RadioOperator_ard_F;
    class I_E_RadioOperator_ard_F_OCimport_01 : I_E_RadioOperator_ard_F { scope = 0; class EventHandlers; };
    class I_E_RadioOperator_ard_F_OCimport_02 : I_E_RadioOperator_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_recon_AR_ard_F;
    class I_E_recon_AR_ard_F_OCimport_01 : I_E_recon_AR_ard_F { scope = 0; class EventHandlers; };
    class I_E_recon_AR_ard_F_OCimport_02 : I_E_recon_AR_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_recon_GL_ard_F;
    class I_E_recon_GL_ard_F_OCimport_01 : I_E_recon_GL_ard_F { scope = 0; class EventHandlers; };
    class I_E_recon_GL_ard_F_OCimport_02 : I_E_recon_GL_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_recon_JTAC_ard_F;
    class I_E_recon_JTAC_ard_F_OCimport_01 : I_E_recon_JTAC_ard_F { scope = 0; class EventHandlers; };
    class I_E_recon_JTAC_ard_F_OCimport_02 : I_E_recon_JTAC_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_recon_LAT_ard_F;
    class I_E_recon_LAT_ard_F_OCimport_01 : I_E_recon_LAT_ard_F { scope = 0; class EventHandlers; };
    class I_E_recon_LAT_ard_F_OCimport_02 : I_E_recon_LAT_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_recon_M_ard_F;
    class I_E_recon_M_ard_F_OCimport_01 : I_E_recon_M_ard_F { scope = 0; class EventHandlers; };
    class I_E_recon_M_ard_F_OCimport_02 : I_E_recon_M_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_recon_medic_ard_F;
    class I_E_recon_medic_ard_F_OCimport_01 : I_E_recon_medic_ard_F { scope = 0; class EventHandlers; };
    class I_E_recon_medic_ard_F_OCimport_02 : I_E_recon_medic_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_recon_TL_ard_F;
    class I_E_recon_TL_ard_F_OCimport_01 : I_E_recon_TL_ard_F { scope = 0; class EventHandlers; };
    class I_E_recon_TL_ard_F_OCimport_02 : I_E_recon_TL_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_recon_ard_F;
    class I_E_recon_ard_F_OCimport_01 : I_E_recon_ard_F { scope = 0; class EventHandlers; };
    class I_E_recon_ard_F_OCimport_02 : I_E_recon_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_recon_exp_ard_F;
    class I_E_recon_exp_ard_F_OCimport_01 : I_E_recon_exp_ard_F { scope = 0; class EventHandlers; };
    class I_E_recon_exp_ard_F_OCimport_02 : I_E_recon_exp_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_AAA_ard_F;
    class I_E_Soldier_AAA_ard_F_OCimport_01 : I_E_Soldier_AAA_ard_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_AAA_ard_F_OCimport_02 : I_E_Soldier_AAA_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_AAR_ard_F;
    class I_E_Soldier_AAR_ard_F_OCimport_01 : I_E_Soldier_AAR_ard_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_AAR_ard_F_OCimport_02 : I_E_Soldier_AAR_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_AAT_ard_F;
    class I_E_Soldier_AAT_ard_F_OCimport_01 : I_E_Soldier_AAT_ard_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_AAT_ard_F_OCimport_02 : I_E_Soldier_AAT_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_AA_ard_F;
    class I_E_Soldier_AA_ard_F_OCimport_01 : I_E_Soldier_AA_ard_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_AA_ard_F_OCimport_02 : I_E_Soldier_AA_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_AR_ard_F;
    class I_E_Soldier_AR_ard_F_OCimport_01 : I_E_Soldier_AR_ard_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_AR_ard_F_OCimport_02 : I_E_Soldier_AR_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_AT_ard_F;
    class I_E_Soldier_AT_ard_F_OCimport_01 : I_E_Soldier_AT_ard_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_AT_ard_F_OCimport_02 : I_E_Soldier_AT_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_A_ard_F;
    class I_E_Soldier_A_ard_F_OCimport_01 : I_E_Soldier_A_ard_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_A_ard_F_OCimport_02 : I_E_Soldier_A_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_CQ_ard_F;
    class I_E_Soldier_CQ_ard_F_OCimport_01 : I_E_Soldier_CQ_ard_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_CQ_ard_F_OCimport_02 : I_E_Soldier_CQ_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_Exp_ard_F;
    class I_E_Soldier_Exp_ard_F_OCimport_01 : I_E_Soldier_Exp_ard_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_Exp_ard_F_OCimport_02 : I_E_Soldier_Exp_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_GL_ard_F;
    class I_E_Soldier_GL_ard_F_OCimport_01 : I_E_Soldier_GL_ard_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_GL_ard_F_OCimport_02 : I_E_Soldier_GL_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_LAT2_ard_F;
    class I_E_Soldier_LAT2_ard_F_OCimport_01 : I_E_Soldier_LAT2_ard_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_LAT2_ard_F_OCimport_02 : I_E_Soldier_LAT2_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_LAT_ard_F;
    class I_E_Soldier_LAT_ard_F_OCimport_01 : I_E_Soldier_LAT_ard_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_LAT_ard_F_OCimport_02 : I_E_Soldier_LAT_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_soldier_M_ard_F;
    class I_E_soldier_M_ard_F_OCimport_01 : I_E_soldier_M_ard_F { scope = 0; class EventHandlers; };
    class I_E_soldier_M_ard_F_OCimport_02 : I_E_soldier_M_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_soldier_Mine_ard_F;
    class I_E_soldier_Mine_ard_F_OCimport_01 : I_E_soldier_Mine_ard_F { scope = 0; class EventHandlers; };
    class I_E_soldier_Mine_ard_F_OCimport_02 : I_E_soldier_Mine_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_Repair_ard_F;
    class I_E_Soldier_Repair_ard_F_OCimport_01 : I_E_Soldier_Repair_ard_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_Repair_ard_F_OCimport_02 : I_E_Soldier_Repair_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_SL_ard_F;
    class I_E_Soldier_SL_ard_F_OCimport_01 : I_E_Soldier_SL_ard_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_SL_ard_F_OCimport_02 : I_E_Soldier_SL_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_TL_ard_F;
    class I_E_Soldier_TL_ard_F_OCimport_01 : I_E_Soldier_TL_ard_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_TL_ard_F_OCimport_02 : I_E_Soldier_TL_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_B_E_Soldier_UAV_06_medical_ard_F;
    class Aegis_B_E_Soldier_UAV_06_medical_ard_F_OCimport_01 : Aegis_B_E_Soldier_UAV_06_medical_ard_F { scope = 0; class EventHandlers; };
    class Aegis_B_E_Soldier_UAV_06_medical_ard_F_OCimport_02 : Aegis_B_E_Soldier_UAV_06_medical_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_soldier_UAV_06_ard_F;
    class I_E_soldier_UAV_06_ard_F_OCimport_01 : I_E_soldier_UAV_06_ard_F { scope = 0; class EventHandlers; };
    class I_E_soldier_UAV_06_ard_F_OCimport_02 : I_E_soldier_UAV_06_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_soldier_UAV_06_medical_ard_F;
    class I_E_soldier_UAV_06_medical_ard_F_OCimport_01 : I_E_soldier_UAV_06_medical_ard_F { scope = 0; class EventHandlers; };
    class I_E_soldier_UAV_06_medical_ard_F_OCimport_02 : I_E_soldier_UAV_06_medical_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_UAV_ard_F;
    class I_E_Soldier_UAV_ard_F_OCimport_01 : I_E_Soldier_UAV_ard_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_UAV_ard_F_OCimport_02 : I_E_Soldier_UAV_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_soldier_UGV_02_Demining_ard_F;
    class I_E_soldier_UGV_02_Demining_ard_F_OCimport_01 : I_E_soldier_UGV_02_Demining_ard_F { scope = 0; class EventHandlers; };
    class I_E_soldier_UGV_02_Demining_ard_F_OCimport_02 : I_E_soldier_UGV_02_Demining_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_soldier_UGV_02_Science_ard_F;
    class I_E_soldier_UGV_02_Science_ard_F_OCimport_01 : I_E_soldier_UGV_02_Science_ard_F { scope = 0; class EventHandlers; };
    class I_E_soldier_UGV_02_Science_ard_F_OCimport_02 : I_E_soldier_UGV_02_Science_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_ard_F;
    class I_E_Soldier_ard_F_OCimport_01 : I_E_Soldier_ard_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_ard_F_OCimport_02 : I_E_Soldier_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_lite_ard_F;
    class I_E_Soldier_lite_ard_F_OCimport_01 : I_E_Soldier_lite_ard_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_lite_ard_F_OCimport_02 : I_E_Soldier_lite_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Soldier_unarmed_ard_F;
    class I_E_Soldier_unarmed_ard_F_OCimport_01 : I_E_Soldier_unarmed_ard_F { scope = 0; class EventHandlers; };
    class I_E_Soldier_unarmed_ard_F_OCimport_02 : I_E_Soldier_unarmed_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Support_AMG_ard_F;
    class I_E_Support_AMG_ard_F_OCimport_01 : I_E_Support_AMG_ard_F { scope = 0; class EventHandlers; };
    class I_E_Support_AMG_ard_F_OCimport_02 : I_E_Support_AMG_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Support_AMort_ard_F;
    class I_E_Support_AMort_ard_F_OCimport_01 : I_E_Support_AMort_ard_F { scope = 0; class EventHandlers; };
    class I_E_Support_AMort_ard_F_OCimport_02 : I_E_Support_AMort_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Support_CMort_ard_RF;
    class I_E_Support_CMort_ard_RF_OCimport_01 : I_E_Support_CMort_ard_RF { scope = 0; class EventHandlers; };
    class I_E_Support_CMort_ard_RF_OCimport_02 : I_E_Support_CMort_ard_RF_OCimport_01 { class EventHandlers; };

    class I_E_Support_GMG_ard_F;
    class I_E_Support_GMG_ard_F_OCimport_01 : I_E_Support_GMG_ard_F { scope = 0; class EventHandlers; };
    class I_E_Support_GMG_ard_F_OCimport_02 : I_E_Support_GMG_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Support_MG_ard_F;
    class I_E_Support_MG_ard_F_OCimport_01 : I_E_Support_MG_ard_F { scope = 0; class EventHandlers; };
    class I_E_Support_MG_ard_F_OCimport_02 : I_E_Support_MG_ard_F_OCimport_01 { class EventHandlers; };

    class I_E_Support_Mort_ard_F;
    class I_E_Support_Mort_ard_F_OCimport_01 : I_E_Support_Mort_ard_F { scope = 0; class EventHandlers; };
    class I_E_Support_Mort_ard_F_OCimport_02 : I_E_Support_Mort_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Truck_02_MRL_ard_F;
    class Aegis_I_E_Truck_02_MRL_ard_F_OCimport_01 : Aegis_I_E_Truck_02_MRL_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Truck_02_MRL_ard_F_OCimport_02 : Aegis_I_E_Truck_02_MRL_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Truck_02_ammo_ard_F;
    class Aegis_I_E_Truck_02_ammo_ard_F_OCimport_01 : Aegis_I_E_Truck_02_ammo_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Truck_02_ammo_ard_F_OCimport_02 : Aegis_I_E_Truck_02_ammo_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Truck_02_ard_F;
    class Aegis_I_E_Truck_02_ard_F_OCimport_01 : Aegis_I_E_Truck_02_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Truck_02_ard_F_OCimport_02 : Aegis_I_E_Truck_02_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Truck_02_box_ard_F;
    class Aegis_I_E_Truck_02_box_ard_F_OCimport_01 : Aegis_I_E_Truck_02_box_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Truck_02_box_ard_F_OCimport_02 : Aegis_I_E_Truck_02_box_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Truck_02_cargo_ard_F;
    class Aegis_I_E_Truck_02_cargo_ard_F_OCimport_01 : Aegis_I_E_Truck_02_cargo_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Truck_02_cargo_ard_F_OCimport_02 : Aegis_I_E_Truck_02_cargo_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Truck_02_flatbed_ard_F;
    class Aegis_I_E_Truck_02_flatbed_ard_F_OCimport_01 : Aegis_I_E_Truck_02_flatbed_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Truck_02_flatbed_ard_F_OCimport_02 : Aegis_I_E_Truck_02_flatbed_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Truck_02_fuel_ard_F;
    class Aegis_I_E_Truck_02_fuel_ard_F_OCimport_01 : Aegis_I_E_Truck_02_fuel_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Truck_02_fuel_ard_F_OCimport_02 : Aegis_I_E_Truck_02_fuel_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Truck_02_medical_ard_F;
    class Aegis_I_E_Truck_02_medical_ard_F_OCimport_01 : Aegis_I_E_Truck_02_medical_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Truck_02_medical_ard_F_OCimport_02 : Aegis_I_E_Truck_02_medical_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Truck_02_transport_ard_F;
    class Aegis_I_E_Truck_02_transport_ard_F_OCimport_01 : Aegis_I_E_Truck_02_transport_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Truck_02_transport_ard_F_OCimport_02 : Aegis_I_E_Truck_02_transport_ard_F_OCimport_01 { class EventHandlers; };

    class B_TwinMortar_RF;
    class B_TwinMortar_RF_OCimport_01 : B_TwinMortar_RF { scope = 0; class EventHandlers; };
    class B_TwinMortar_RF_OCimport_02 : B_TwinMortar_RF_OCimport_01 { class EventHandlers; };

    class Aegis_B_E_UAV_07_F;
    class Aegis_B_E_UAV_07_F_OCimport_01 : Aegis_B_E_UAV_07_F { scope = 0; class EventHandlers; };
    class Aegis_B_E_UAV_07_F_OCimport_02 : Aegis_B_E_UAV_07_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_UGV_01_rcws_ard_F;
    class Aegis_I_E_UGV_01_rcws_ard_F_OCimport_01 : Aegis_I_E_UGV_01_rcws_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_UGV_01_rcws_ard_F_OCimport_02 : Aegis_I_E_UGV_01_rcws_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_UGV_01_ard_F;
    class Aegis_I_E_UGV_01_ard_F_OCimport_01 : Aegis_I_E_UGV_01_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_UGV_01_ard_F_OCimport_02 : Aegis_I_E_UGV_01_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_UGV_01_medical_ard_F;
    class Aegis_I_E_UGV_01_medical_ard_F_OCimport_01 : Aegis_I_E_UGV_01_medical_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_UGV_01_medical_ard_F_OCimport_02 : Aegis_I_E_UGV_01_medical_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Van_02_vehicle_ard_F;
    class Aegis_I_E_Van_02_vehicle_ard_F_OCimport_01 : Aegis_I_E_Van_02_vehicle_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Van_02_vehicle_ard_F_OCimport_02 : Aegis_I_E_Van_02_vehicle_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Van_02_medevac_ard_F;
    class Aegis_I_E_Van_02_medevac_ard_F_OCimport_01 : Aegis_I_E_Van_02_medevac_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Van_02_medevac_ard_F_OCimport_02 : Aegis_I_E_Van_02_medevac_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_E_Van_02_transport_ard_F;
    class Aegis_I_E_Van_02_transport_ard_F_OCimport_01 : Aegis_I_E_Van_02_transport_ard_F { scope = 0; class EventHandlers; };
    class Aegis_I_E_Van_02_transport_ard_F_OCimport_02 : Aegis_I_E_Van_02_transport_ard_F_OCimport_01 { class EventHandlers; };

    class Aegis_B_EAF_Heli_Attack_04_ard_F : Aegis_I_EAF_Heli_Attack_04_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-35 Sokół";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "I_E_Helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_APC_Wheeled_01_atgm_v2_ard : Aegis_I_E_APC_Wheeled_01_atgm_v2_ard_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KTO Borsuk (ATGM)";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_APC_Wheeled_01_cannon_v2_ard_F : Aegis_I_E_APC_Wheeled_01_cannon_v2_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KTO Borsuk";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_APC_Wheeled_01_medical_ard_F : Aegis_I_E_APC_Wheeled_01_medical_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KTO Borsuk (Medical)";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_APC_Wheeled_01_mortar_ard_lxWS : Aegis_I_E_APC_Wheeled_01_mortar_ard_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KTO Borsuk (Mortar)";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_APC_tracked_03_cannon_v2_ard_F : Aegis_I_E_APC_tracked_03_cannon_v2_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "FV-720 Odyniec";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_CommandoMortar_ard_RF : Aegis_I_E_CommandoMortar_ard_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RSG60";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Crew_ard_F : I_E_Crew_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        linkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"SMG_03C_khaki","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"SMG_03C_khaki","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Engineer_ard_F : I_E_Engineer_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_F";

        backpack = "B_Carryall_eaf_eng_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Fighter_Pilot_ard_F : I_E_Fighter_Pilot_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter Pilot";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Euro","Head_Enoch","G_NATO_pilot"};

        uniformClass = "U_I_E_Uniform_01_pilot_F";

        linkedItems[] = {"H_PilotHelmetFighter_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_PilotHelmetFighter_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Heli_EC_01A_military_RF_ard : Aegis_I_E_Heli_EC_01A_military_RF_ard_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "H215 Super Puma (Unarmed)";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Heli_Light_03_dynamicLoadout_ard_F : Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AW159 Wildcat";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Heli_Light_03_dynamicloadout_ard_FR : Aegis_I_E_Heli_Light_03_dynamicLoadout_ard_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AW159 Wildcat ASW";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Heli_Light_03_unarmed_ard_F : Aegis_I_E_Heli_Light_03_unarmed_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AW159 Wildcat (unarmed)";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Heli_Light_03_unarmed_ard_RF : Aegis_I_E_Heli_Light_03_unarmed_ard_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AW159 Wildcat ASW (Unarmed)";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Helicrew_ard_F : I_E_Helicrew_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Euro","Head_Enoch","G_NATO_pilot"};

        uniformClass = "U_I_E_Uniform_01_coveralls_F";

        linkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_CrewHelmetHeli_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_CrewHelmetHeli_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_aco_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_aco_F","Throw","Put"};

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

    class Aegis_B_E_Helipilot_ard_F : I_E_Helipilot_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Euro","Head_Enoch","G_NATO_pilot"};

        uniformClass = "U_I_E_Uniform_01_coveralls_F";

        linkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_PilotHelmetHeli_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_PilotHelmetHeli_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"SMG_03C_khaki","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"SMG_03C_khaki","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_MBT_03_cannon_ard_F : Aegis_I_E_MBT_03_cannon_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MBT-52 Niedźwiedź";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Medic_ard_F : I_E_Medic_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        backpack = "B_Fieldpack_green_IEMedic_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Officer_ard_F : I_E_Officer_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Euro","Head_Enoch","G_NATO_casual"};

        uniformClass = "U_I_E_Uniform_01_arid_officer_F";

        linkedItems[] = {"V_Rangemaster_belt_oli","H_Beret_EAF_01_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Rangemaster_belt_oli","H_Beret_EAF_01_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_MSBS65_sand_F","hgun_Pistol_heavy_01_MRD_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MSBS65_sand_F","hgun_Pistol_heavy_01_MRD_F","Throw","Put","Binocular"};

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

    class Aegis_B_E_Offroad_01_ard_F : Aegis_I_E_Offroad_01_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Offroad_01_armed_ard_F : Aegis_I_E_Offroad_01_armed_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (HMG)";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Offroad_01_comms_ard_F : Aegis_I_E_Offroad_01_comms_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Comms)";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Offroad_01_covered_ard_F : Aegis_I_E_Offroad_01_covered_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Covered)";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Pickup_AAT_ard_RF : Aegis_I_E_Pickup_AAT_ard_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (AA)";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Pickup_AT_ard_RF : Aegis_I_E_Pickup_AT_ard_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Aegis_B_E_Pickup_AT_ard_RF";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Pickup_Comms_ard_RF : Aegis_I_E_Pickup_Comms_ard_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Comms)";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Pickup_Covered_ard_RF : Aegis_I_E_Pickup_Covered_ard_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Covered)";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Pickup_HMG_ard_RF : Aegis_I_E_Pickup_HMG_ard_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (HMG)";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Pickup_ard_RF : Aegis_I_E_Pickup_ard_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Pilot_ard_F : Aegis_I_E_Pilot_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 1;
        faction = "blu_eaf_ard_f";

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

    class Aegis_B_E_Plane_Fighter_04_ard_F : I_E_Plane_Fighter_04_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "A-149 Orzeł";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Fighter_Pilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_RadioOperator_ard_F : I_E_RadioOperator_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        backpack = "B_RadioBag_01_eaf_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Recon_AR_ard_F : I_E_recon_AR_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Autorifleman";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_ard_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_arid_headset_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_arid_headset_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"LMG_Mk200_plain_MRCO_LP_S_F","hgun_Pistol_heavy_01_snds_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Mk200_plain_MRCO_LP_S_F","hgun_Pistol_heavy_01_snds_F","Throw","Put"};

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

    class Aegis_B_E_Recon_GL_ard_F : I_E_recon_GL_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Grenadier";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_01_ard_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_arid_headset_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_arid_headset_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"arifle_SCAR_GL_snds_mrco_pointer_f","hgun_Pistol_heavy_01_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SCAR_GL_snds_mrco_pointer_f","hgun_Pistol_heavy_01_snds_F","Throw","Put"};

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

    class Aegis_B_E_Recon_JTAC_ard_F : I_E_recon_JTAC_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon JTAC";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_01_ard_F";

        backpack = "B_RadioBag_01_eaf_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_Watchcap_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_Watchcap_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"arifle_SCAR_short_snds_holo_pointer_f","hgun_Pistol_heavy_01_snds_F","Throw","Put","Laserdesignator_01_khk_F"};
        respawnWeapons[] = {"arifle_SCAR_short_snds_holo_pointer_f","hgun_Pistol_heavy_01_snds_F","Throw","Put","Laserdesignator_01_khk_F"};

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

    class Aegis_B_E_Recon_LAT_ard_F : I_E_recon_LAT_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (AT)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_ard_F";

        backpack = "B_AssaultPack_eaf_IELAT2_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_arid_ear_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_arid_ear_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"arifle_SCAR_short_snds_holo_pointer_f","launch_MRAWS_green_F","hgun_Pistol_heavy_01_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SCAR_short_snds_holo_pointer_f","launch_MRAWS_green_F","hgun_Pistol_heavy_01_snds_F","Throw","Put"};

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

    class Aegis_B_E_Recon_M_ard_F : I_E_recon_M_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Marksman";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_ard_F";

        linkedItems[] = {"V_TacVest_camo","H_Booniehat_eaf_arid_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"V_TacVest_camo","H_Booniehat_eaf_arid_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"arifle_SCAR_DMS_LP_BI_S_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_SCAR_DMS_LP_BI_S_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Rangefinder"};

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

    class Aegis_B_E_Recon_Medic_ard_F : I_E_recon_medic_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Paramedic";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_ard_F";

        backpack = "B_AssaultPack_eaf_IEReconMedic_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_arid_ear_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_arid_ear_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"arifle_SCAR_short_snds_holo_pointer_f","hgun_Pistol_heavy_01_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SCAR_short_snds_holo_pointer_f","hgun_Pistol_heavy_01_snds_F","Throw","Put"};

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

    class Aegis_B_E_Recon_TL_ard_F : I_E_recon_TL_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Team Leader";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_01_ard_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_arid_chops_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_arid_chops_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"arifle_SCAR_grip_snds_mrco_pointer_f","hgun_Pistol_heavy_01_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_SCAR_grip_snds_mrco_pointer_f","hgun_Pistol_heavy_01_snds_F","Throw","Put","Rangefinder"};

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

    class Aegis_B_E_Recon_ard_F : I_E_recon_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_01_ard_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_arid_headset_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_HelmetHBK_arid_headset_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"arifle_SCAR_short_snds_mrco_pointer_f","hgun_Pistol_heavy_01_snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SCAR_short_snds_mrco_pointer_f","hgun_Pistol_heavy_01_snds_F","Throw","Put","Binocular"};

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

    class Aegis_B_E_Recon_exp_ard_F : I_E_recon_exp_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Demo Specialist";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "Atlas_U_E_SF_CombatUniformNCU_02_ard_F";

        backpack = "B_Carryall_eaf_exp_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_Booniehat_eaf_arid_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_EAF_F","H_Booniehat_eaf_arid_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"arifle_SCAR_short_snds_holo_pointer_f","hgun_Pistol_heavy_01_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SCAR_short_snds_holo_pointer_f","hgun_Pistol_heavy_01_snds_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_AAA_ard_F : I_E_Soldier_AAA_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        backpack = "B_Carryall_eaf_IEAAA_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};

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

    class Aegis_B_E_Soldier_AAR_ard_F : I_E_Soldier_AAR_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        backpack = "B_Carryall_eaf_IEAAR_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};

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

    class Aegis_B_E_Soldier_AAT_ard_F : I_E_Soldier_AAT_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        backpack = "B_Carryall_eaf_IEAAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};

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

    class Aegis_B_E_Soldier_AA_ard_F : I_E_Soldier_AA_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_F";

        backpack = "B_Fieldpack_green_IEAA_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","launch_B_Titan_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","launch_B_Titan_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_AR_ard_F : I_E_Soldier_AR_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"LMG_Mk200_plain_MRCO_LP_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Mk200_plain_MRCO_LP_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_AT_ard_F : I_E_Soldier_AT_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_F";

        backpack = "B_Fieldpack_green_IEAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","launch_B_Titan_short_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","launch_B_Titan_short_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_A_ard_F : I_E_Soldier_A_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        backpack = "B_Carryall_eaf_IEAmmo_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_CQ_ard_F : I_E_Soldier_CQ_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_EAF_F","H_HelmetHBK_arid_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_EAF_F","H_HelmetHBK_arid_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_UBS_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_UBS_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_Exp_ard_F : I_E_Soldier_Exp_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        backpack = "B_Carryall_eaf_Exp_F";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_arid_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_arid_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_GL_ard_F : I_E_Soldier_GL_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_F";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_GL_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_GL_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_LAT2_ard_F : I_E_Soldier_LAT2_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light AT)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_F";

        backpack = "B_AssaultPack_eaf_IELAT2_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","launch_MRAWS_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","launch_MRAWS_sand_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_LAT_ard_F : I_E_Soldier_LAT_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_F";

        backpack = "B_AssaultPack_eaf_IELAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","launch_NLAW_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","launch_NLAW_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_M_ard_F : I_E_soldier_M_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_F";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_Mark_sand_SOS_LP_BI_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MSBS65_Mark_sand_SOS_LP_BI_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};

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

    class Aegis_B_E_Soldier_Mine_ard_F : I_E_soldier_Mine_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mine Specialist";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_F";

        backpack = "B_Carryall_eaf_Mine_F";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_arid_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_arid_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_Repair_ard_F : I_E_Soldier_Repair_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_F";

        backpack = "B_AssaultPack_eaf_Repair_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_SL_ard_F : I_E_Soldier_SL_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Binocular"};

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

    class Aegis_B_E_Soldier_TL_ard_F : I_E_Soldier_TL_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_F";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_arid_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_EAF_F","H_HelmetHBK_arid_ear_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_GL_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MSBS65_GL_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Binocular"};

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

    class Aegis_B_E_Soldier_UAV_02_lxWS_ard_F : Aegis_B_E_Soldier_UAV_06_medical_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AP-5)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        backpack = "Aegis_B_E_UAV_02_backpack_lxWS";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_UAV_06_ard_F : I_E_soldier_UAV_06_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        backpack = "Aegis_B_E_UAV_06_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_UAV_06_medical_ard_F : I_E_soldier_UAV_06_medical_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        backpack = "Aegis_B_E_UAV_06_medical_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_UAV_ard_F : I_E_Soldier_UAV_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        backpack = "Aegis_B_E_UAV_01_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_UGV_02_Demining_ard_F : I_E_soldier_UGV_02_Demining_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1D)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        backpack = "Aegis_B_E_UGV_02_Demining_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_UGV_02_Science_ard_F : I_E_soldier_UGV_02_Science_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1E)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        backpack = "Aegis_B_E_UGV_02_Science_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_F","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_ard_F : I_E_Soldier_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_lite_ard_F : I_E_Soldier_lite_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Euro","Head_Enoch","G_NATO_casual"};

        uniformClass = "U_I_E_Uniform_01_arid_tanktop_F";

        linkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_MilCap_eaf_arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_MilCap_eaf_arid","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_MSBS65_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_F","Throw","Put"};

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

    class Aegis_B_E_Soldier_unarmed_ard_F : I_E_Soldier_unarmed_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_EAF_F","H_HelmetHBK_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class Aegis_B_E_Support_AMG_ard_F : I_E_Support_AMG_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (HMG/GMG)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        backpack = "I_E_HMG_01_support_F";

        linkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_aco_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_aco_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Support_AMort_ard_F : I_E_Support_AMort_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (Mk6)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        backpack = "I_E_Mortar_01_support_F";

        linkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_aco_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_aco_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Support_CMort_ard_RF : I_E_Support_CMort_ard_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        backpack = "B_D_CTRG_CommandoMortar_weapon_RF";

        linkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_aco_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_aco_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Support_GMG_ard_F : I_E_Support_GMG_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (GMG)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        backpack = "I_E_GMG_01_Weapon_F";

        linkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_aco_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_aco_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Support_MG_ard_F : I_E_Support_MG_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (HMG)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_shortsleeve_F";

        backpack = "I_E_HMG_01_Weapon_F";

        linkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_aco_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_aco_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Support_Mort_ard_F : I_E_Support_Mort_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mk6)";
        side = 1;
        faction = "blu_eaf_ard_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_EAF_default"};

        uniformClass = "U_I_E_Uniform_01_arid_F";

        backpack = "I_E_Mortar_01_Weapon_F";

        linkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_ChestrigF_oli","H_HelmetHBK_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MSBS65_sand_aco_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_sand_aco_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};

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

    class Aegis_B_E_Truck_02_MRL_ard_F : Aegis_I_E_Truck_02_MRL_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ MRL";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Truck_02_ammo_ard_F : Aegis_I_E_Truck_02_ammo_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Ammo";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Truck_02_ard_F : Aegis_I_E_Truck_02_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport (covered)";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Truck_02_box_ard_F : Aegis_I_E_Truck_02_box_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Repair";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Truck_02_cargo_ard_F : Aegis_I_E_Truck_02_cargo_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Cargo";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Truck_02_flatbed_ard_F : Aegis_I_E_Truck_02_flatbed_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Flatbed";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Truck_02_fuel_ard_F : Aegis_I_E_Truck_02_fuel_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Fuel";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Truck_02_medical_ard_F : Aegis_I_E_Truck_02_medical_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Medical";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Truck_02_transport_ard_F : Aegis_I_E_Truck_02_transport_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_TwinMortar_ard_RF : B_TwinMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMOS Container";
        side = 1;
        faction = "blu_eaf_ard_f";
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

    class Aegis_B_E_UAV_07_ard_F : Aegis_B_E_UAV_07_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MQ-9A Kruk";
        side = 1;
        faction = "blu_eaf_ard_f";
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

    class Aegis_B_E_UGV_01_RCWS_ard_F : Aegis_I_E_UGV_01_rcws_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper RCWS";
        side = 1;
        faction = "blu_eaf_ard_f";
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

    class Aegis_B_E_UGV_01_ard_F : Aegis_I_E_UGV_01_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper";
        side = 1;
        faction = "blu_eaf_ard_f";
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

    class Aegis_B_E_UGV_01_medical_ard_F : Aegis_I_E_UGV_01_medical_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper Medical";
        side = 1;
        faction = "blu_eaf_ard_f";
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

    class Aegis_B_E_Van_02_Vehicle_ard_F : Aegis_I_E_Van_02_vehicle_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van (Cargo)";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Van_02_medevac_ard_F : Aegis_I_E_Van_02_medevac_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van (Ambulance)";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_E_Van_02_transport_ard_F : Aegis_I_E_Van_02_transport_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van Transport";
        side = 1;
        faction = "blu_eaf_ard_f";
        crew = "Aegis_B_E_Soldier_ard_F";

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
    class Indep {
        class BLU_EAF_ard_F {
            class Support {
                class Aegis_I_E_Support_Mort_ard_RF {
                    name = "Light Mortar Team";
                    side = 2;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";

                    class Unit0 {
                        vehicle = "I_E_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_E_Support_CMort_ard_RF";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_E_Support_CMort_ard_RF";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
        };
    };
    class West {
        class BLU_EAF_ard_F {
            class Armored {
                class Aegis_B_E_ard_TankPlatoon {
                    name = "Tank Platoon";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_MBT_03_cannon_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_MBT_03_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_MBT_03_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_MBT_03_cannon_ard_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class Aegis_B_E_ard_TankPlatoon_AA {
                    name = "Tank Platoon (Combined)";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_MBT_03_cannon_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Pickup_AAT_ard_RF";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_MBT_03_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Pickup_AAT_ard_RF";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class Aegis_B_E_ard_TankSection {
                    name = "Tank Section";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_MBT_03_cannon_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_MBT_03_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class Aegis_B_E_ard_InfSentry {
                    name = "Sentry";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_soldier_GL_ard_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_soldier_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Aegis_B_E_ard_InfSquad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_RadioOperator_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_soldier_LAT_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_soldier_M_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_E_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_B_E_soldier_A_ard_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_B_E_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Aegis_B_E_ard_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_soldier_AR_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_soldier_GL_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_soldier_M_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_soldier_AT_ard_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_E_soldier_AAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_B_E_soldier_A_ard_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_B_E_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Aegis_B_E_ard_InfTeam {
                    name = "Fire Team";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_soldier_GL_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_soldier_LAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_ard_InfTeam_AA {
                    name = "Air-defense Team";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_soldier_AA_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_soldier_AA_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_soldier_AAA_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_ard_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_soldier_AT_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_soldier_AT_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_soldier_AAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_ard_InfTeam_Light {
                    name = "Fire Team (Light)";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Soldier_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Soldier_LAT2_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class Aegis_B_E_ard_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_APC_tracked_03_cannon_v2_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_RadioOperator_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_soldier_AT_ard_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_soldier_M_ard_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_E_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_B_E_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_B_E_soldier_A_ard_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Aegis_B_E_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class Aegis_B_E_ard_MechInf_AA {
                    name = "Mechanized Air-defense Squad";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_APC_tracked_03_cannon_v2_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Soldier_AA_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Soldier_AA_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_Soldier_AA_ard_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_E_Soldier_AAA_ard_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_B_E_Soldier_AAA_ard_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_B_E_Soldier_AAA_ard_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Aegis_B_E_ard_MechInf_AT {
                    name = "Mechanized Anti-armor Squad";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_APC_tracked_03_cannon_v2_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Soldier_AT_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Soldier_AT_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_Soldier_AT_ard_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_E_Soldier_AAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_B_E_Soldier_AAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_B_E_Soldier_AAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Aegis_B_E_ard_MechInf_Support {
                    name = "Mechanized Support Squad";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_APC_tracked_03_cannon_v2_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Soldier_repair_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_engineer_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_E_Soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_B_E_Soldier_exp_ard_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_B_E_Soldier_A_ard_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
            };
            class Motorized {
                class Aegis_B_E_ard_MotInf_AA {
                    name = "Motorized Air-defense Team";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Offroad_01_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_AA_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Soldier_AA_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Soldier_AAA_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_Soldier_AAA_ard_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                };
                class Aegis_B_E_ard_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Offroad_01_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_AT_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Soldier_AT_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Soldier_AAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_Soldier_AAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                };
                class Aegis_B_E_ard_MotInf_GMGTeam {
                    name = "Motorized GMG Team";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Offroad_01_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Support_GMG_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Support_AMG_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_ard_MotInf_MGTeam {
                    name = "Motorized HMG Team";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Offroad_01_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Support_MG_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Support_AMG_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_ard_MotInf_MortTeam {
                    name = "Motorized Mortar Team";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Offroad_01_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Support_Mort_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Support_AMort_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_ard_MotInf_Reinforcements {
                    name = "Motorized Reinforcements";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Truck_02_transport_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_RadioOperator_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_soldier_AT_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_soldier_M_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_E_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_B_E_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_B_E_soldier_A_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "Aegis_B_E_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "Aegis_B_E_soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "Aegis_B_E_RadioOperator_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "Aegis_B_E_soldier_AT_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "Aegis_B_E_soldier_M_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit13 {
                        vehicle = "Aegis_B_E_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit14 {
                        vehicle = "Aegis_B_E_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit15 {
                        vehicle = "Aegis_B_E_soldier_A_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit16 {
                        vehicle = "Aegis_B_E_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };
                };
                class Aegis_B_E_ard_MotInf_Squad {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Truck_02_transport_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_RadioOperator_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_soldier_AT_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_soldier_M_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_E_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_B_E_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_B_E_soldier_A_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "Aegis_B_E_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };
                };
                class Aegis_B_E_ard_MotInf_Team {
                    name = "Motorized Team";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Offroad_01_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_soldier_AR_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_soldier_GL_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_soldier_LAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };
                };
            };
            class SpecOps {
                class Aegis_B_E_ard_ReconPatrol {
                    name = "Recon Patrol";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_recon_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_recon_M_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_recon_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_recon_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_ard_ReconSentry {
                    name = "Recon Sentry";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_recon_M_ard_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_recon_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Aegis_B_E_ard_ReconTeam {
                    name = "Recon Team";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_recon_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_recon_M_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_recon_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_recon_LAT_ard_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_E_recon_JTAC_ard_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_E_recon_exp_ard_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
            };
            class Support {
                class Aegis_B_E_Support_Mort_ard_RF {
                    name = "Light Mortar Team";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Support_CMort_ard_RF";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Support_CMort_ard_RF";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class Aegis_B_E_ard_Support_CLS {
                    name = "Support Team (CLS)";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_ard_Support_ENG {
                    name = "Support Team (Engineer)";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_engineer_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_engineer_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Soldier_repair_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_ard_Support_EOD {
                    name = "Support Team (EOD)";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_engineer_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Soldier_exp_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_E_Soldier_exp_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_B_E_ard_Support_GMG {
                    name = "GMG Team";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Support_GMG_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Support_AMG_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class Aegis_B_E_ard_Support_MG {
                    name = "HMG Team";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Support_MG_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Support_AMG_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class Aegis_B_E_ard_Support_Mort {
                    name = "Mortar Team";
                    side = 1;
                    faction = "BLU_EAF_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mortar.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_E_Soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_E_Support_Mort_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_E_Support_AMort_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
        };
    };
};
