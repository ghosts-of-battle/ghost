//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class BLU_T_F {
        displayName = "US (Pacific)";
        side = 1;
        priority = 3;
        icon = "\A3_Aegis\Data_F_Aegis\FactionIcons\CfgFactionClasses_BLU_CA.paa";
        flag = "\A3\Data_F\Flags\flag_US_CO.paa";
    };
};

class CfgVehicles {

    class ACE_SpottingScopeObject;
    class ACE_SpottingScopeObject_OCimport_01 : ACE_SpottingScopeObject { scope = 0; class EventHandlers; };
    class ACE_SpottingScopeObject_OCimport_02 : ACE_SpottingScopeObject_OCimport_01 { class EventHandlers; };

    class EF_B_AH99J_NATO;
    class EF_B_AH99J_NATO_OCimport_01 : EF_B_AH99J_NATO { scope = 0; class EventHandlers; };
    class EF_B_AH99J_NATO_OCimport_02 : EF_B_AH99J_NATO_OCimport_01 { class EventHandlers; };

    class B_CommandoMortar_RF;
    class B_CommandoMortar_RF_OCimport_01 : B_CommandoMortar_RF { scope = 0; class EventHandlers; };
    class B_CommandoMortar_RF_OCimport_02 : B_CommandoMortar_RF_OCimport_01 { class EventHandlers; };

    class Aegis_B_Heli_Attack_03_F;
    class Aegis_B_Heli_Attack_03_F_OCimport_01 : Aegis_B_Heli_Attack_03_F { scope = 0; class EventHandlers; };
    class Aegis_B_Heli_Attack_03_F_OCimport_02 : Aegis_B_Heli_Attack_03_F_OCimport_01 { class EventHandlers; };

    class B_Heli_EC_03_RF;
    class B_Heli_EC_03_RF_OCimport_01 : B_Heli_EC_03_RF { scope = 0; class EventHandlers; };
    class B_Heli_EC_03_RF_OCimport_02 : B_Heli_EC_03_RF_OCimport_01 { class EventHandlers; };

    class B_Heli_EC_04_military_RF;
    class B_Heli_EC_04_military_RF_OCimport_01 : B_Heli_EC_04_military_RF { scope = 0; class EventHandlers; };
    class B_Heli_EC_04_military_RF_OCimport_02 : B_Heli_EC_04_military_RF_OCimport_01 { class EventHandlers; };

    class Aegis_B_Pickup_AT_RF;
    class Aegis_B_Pickup_AT_RF_OCimport_01 : Aegis_B_Pickup_AT_RF { scope = 0; class EventHandlers; };
    class Aegis_B_Pickup_AT_RF_OCimport_02 : Aegis_B_Pickup_AT_RF_OCimport_01 { class EventHandlers; };

    class UAV_02_Base_lxWS;
    class UAV_02_Base_lxWS_OCimport_01 : UAV_02_Base_lxWS { scope = 0; class EventHandlers; };
    class UAV_02_Base_lxWS_OCimport_02 : UAV_02_Base_lxWS_OCimport_01 { class EventHandlers; };

    class B_T_Support_AMort_F;
    class B_T_Support_AMort_F_OCimport_01 : B_T_Support_AMort_F { scope = 0; class EventHandlers; };
    class B_T_Support_AMort_F_OCimport_02 : B_T_Support_AMort_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_T_Soldier_JSOC_base;
    class Atlas_B_T_Soldier_JSOC_base_OCimport_01 : Atlas_B_T_Soldier_JSOC_base { scope = 0; class EventHandlers; };
    class Atlas_B_T_Soldier_JSOC_base_OCimport_02 : Atlas_B_T_Soldier_JSOC_base_OCimport_01 { class EventHandlers; };

    class Atlas_B_T_JSOC_M_F;
    class Atlas_B_T_JSOC_M_F_OCimport_01 : Atlas_B_T_JSOC_M_F { scope = 0; class EventHandlers; };
    class Atlas_B_T_JSOC_M_F_OCimport_02 : Atlas_B_T_JSOC_M_F_OCimport_01 { class EventHandlers; };

    class AFV_Wheeled_01_base_F;
    class AFV_Wheeled_01_base_F_OCimport_01 : AFV_Wheeled_01_base_F { scope = 0; class EventHandlers; };
    class AFV_Wheeled_01_base_F_OCimport_02 : AFV_Wheeled_01_base_F_OCimport_01 { class EventHandlers; };

    class AFV_Wheeled_01_up_base_F;
    class AFV_Wheeled_01_up_base_F_OCimport_01 : AFV_Wheeled_01_up_base_F { scope = 0; class EventHandlers; };
    class AFV_Wheeled_01_up_base_F_OCimport_02 : AFV_Wheeled_01_up_base_F_OCimport_01 { class EventHandlers; };

    class B_APC_Tracked_01_AA_F;
    class B_APC_Tracked_01_AA_F_OCimport_01 : B_APC_Tracked_01_AA_F { scope = 0; class EventHandlers; };
    class B_APC_Tracked_01_AA_F_OCimport_02 : B_APC_Tracked_01_AA_F_OCimport_01 { class EventHandlers; };

    class B_APC_Tracked_01_CRV_F;
    class B_APC_Tracked_01_CRV_F_OCimport_01 : B_APC_Tracked_01_CRV_F { scope = 0; class EventHandlers; };
    class B_APC_Tracked_01_CRV_F_OCimport_02 : B_APC_Tracked_01_CRV_F_OCimport_01 { class EventHandlers; };

    class B_APC_Tracked_01_rcws_F;
    class B_APC_Tracked_01_rcws_F_OCimport_01 : B_APC_Tracked_01_rcws_F { scope = 0; class EventHandlers; };
    class B_APC_Tracked_01_rcws_F_OCimport_02 : B_APC_Tracked_01_rcws_F_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_01_apc_qav;
    class APC_Wheeled_01_apc_qav_OCimport_01 : APC_Wheeled_01_apc_qav { scope = 0; class EventHandlers; };
    class APC_Wheeled_01_apc_qav_OCimport_02 : APC_Wheeled_01_apc_qav_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_01_atgm_base_v2;
    class APC_Wheeled_01_atgm_base_v2_OCimport_01 : APC_Wheeled_01_atgm_base_v2 { scope = 0; class EventHandlers; };
    class APC_Wheeled_01_atgm_base_v2_OCimport_02 : APC_Wheeled_01_atgm_base_v2_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_01_base_v2_F;
    class APC_Wheeled_01_base_v2_F_OCimport_01 : APC_Wheeled_01_base_v2_F { scope = 0; class EventHandlers; };
    class APC_Wheeled_01_base_v2_F_OCimport_02 : APC_Wheeled_01_base_v2_F_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_01_command_base_lxWS;
    class APC_Wheeled_01_command_base_lxWS_OCimport_01 : APC_Wheeled_01_command_base_lxWS { scope = 0; class EventHandlers; };
    class APC_Wheeled_01_command_base_lxWS_OCimport_02 : APC_Wheeled_01_command_base_lxWS_OCimport_01 { class EventHandlers; };

    class B_APC_Wheeled_01_medical_F;
    class B_APC_Wheeled_01_medical_F_OCimport_01 : B_APC_Wheeled_01_medical_F { scope = 0; class EventHandlers; };
    class B_APC_Wheeled_01_medical_F_OCimport_02 : B_APC_Wheeled_01_medical_F_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_01_mgs_QAV;
    class APC_Wheeled_01_mgs_QAV_OCimport_01 : APC_Wheeled_01_mgs_QAV { scope = 0; class EventHandlers; };
    class APC_Wheeled_01_mgs_QAV_OCimport_02 : APC_Wheeled_01_mgs_QAV_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_01_mgs_up_QAV;
    class APC_Wheeled_01_mgs_up_QAV_OCimport_01 : APC_Wheeled_01_mgs_up_QAV { scope = 0; class EventHandlers; };
    class APC_Wheeled_01_mgs_up_QAV_OCimport_02 : APC_Wheeled_01_mgs_up_QAV_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_01_mortar_base_lxWS;
    class APC_Wheeled_01_mortar_base_lxWS_OCimport_01 : APC_Wheeled_01_mortar_base_lxWS { scope = 0; class EventHandlers; };
    class APC_Wheeled_01_mortar_base_lxWS_OCimport_02 : APC_Wheeled_01_mortar_base_lxWS_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_01_shorad_QAV;
    class APC_Wheeled_01_shorad_QAV_OCimport_01 : APC_Wheeled_01_shorad_QAV { scope = 0; class EventHandlers; };
    class APC_Wheeled_01_shorad_QAV_OCimport_02 : APC_Wheeled_01_shorad_QAV_OCimport_01 { class EventHandlers; };

    class B_Boat_Armed_01_minigun_F;
    class B_Boat_Armed_01_minigun_F_OCimport_01 : B_Boat_Armed_01_minigun_F { scope = 0; class EventHandlers; };
    class B_Boat_Armed_01_minigun_F_OCimport_02 : B_Boat_Armed_01_minigun_F_OCimport_01 { class EventHandlers; };

    class B_Boat_Transport_01_F;
    class B_Boat_Transport_01_F_OCimport_01 : B_Boat_Transport_01_F { scope = 0; class EventHandlers; };
    class B_Boat_Transport_01_F_OCimport_02 : B_Boat_Transport_01_F_OCimport_01 { class EventHandlers; };

    class B_crew_F;
    class B_crew_F_OCimport_01 : B_crew_F { scope = 0; class EventHandlers; };
    class B_crew_F_OCimport_02 : B_crew_F_OCimport_01 { class EventHandlers; };

    class B_diver_exp_F;
    class B_diver_exp_F_OCimport_01 : B_diver_exp_F { scope = 0; class EventHandlers; };
    class B_diver_exp_F_OCimport_02 : B_diver_exp_F_OCimport_01 { class EventHandlers; };

    class B_diver_F;
    class B_diver_F_OCimport_01 : B_diver_F { scope = 0; class EventHandlers; };
    class B_diver_F_OCimport_02 : B_diver_F_OCimport_01 { class EventHandlers; };

    class B_diver_TL_F;
    class B_diver_TL_F_OCimport_01 : B_diver_TL_F { scope = 0; class EventHandlers; };
    class B_diver_TL_F_OCimport_02 : B_diver_TL_F_OCimport_01 { class EventHandlers; };

    class B_engineer_F;
    class B_engineer_F_OCimport_01 : B_engineer_F { scope = 0; class EventHandlers; };
    class B_engineer_F_OCimport_02 : B_engineer_F_OCimport_01 { class EventHandlers; };

    class B_Fighter_Pilot_F;
    class B_Fighter_Pilot_F_OCimport_01 : B_Fighter_Pilot_F { scope = 0; class EventHandlers; };
    class B_Fighter_Pilot_F_OCimport_02 : B_Fighter_Pilot_F_OCimport_01 { class EventHandlers; };

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

    class HMG_02_base_F;
    class HMG_02_base_F_OCimport_01 : HMG_02_base_F { scope = 0; class EventHandlers; };
    class HMG_02_base_F_OCimport_02 : HMG_02_base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_high_base_F;
    class HMG_02_high_base_F_OCimport_01 : HMG_02_high_base_F { scope = 0; class EventHandlers; };
    class HMG_02_high_base_F_OCimport_02 : HMG_02_high_base_F_OCimport_01 { class EventHandlers; };

    class B_HeavyGunner_F;
    class B_HeavyGunner_F_OCimport_01 : B_HeavyGunner_F { scope = 0; class EventHandlers; };
    class B_HeavyGunner_F_OCimport_02 : B_HeavyGunner_F_OCimport_01 { class EventHandlers; };

    class B_Heli_Attack_01_dynamicLoadout_F;
    class B_Heli_Attack_01_dynamicLoadout_F_OCimport_01 : B_Heli_Attack_01_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class B_Heli_Attack_01_dynamicLoadout_F_OCimport_02 : B_Heli_Attack_01_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class B_Heli_Light_01_dynamicLoadout_F;
    class B_Heli_Light_01_dynamicLoadout_F_OCimport_01 : B_Heli_Light_01_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class B_Heli_Light_01_dynamicLoadout_F_OCimport_02 : B_Heli_Light_01_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class B_Heli_Transport_01_F;
    class B_Heli_Transport_01_F_OCimport_01 : B_Heli_Transport_01_F { scope = 0; class EventHandlers; };
    class B_Heli_Transport_01_F_OCimport_02 : B_Heli_Transport_01_F_OCimport_01 { class EventHandlers; };

    class B_Heli_Transport_01_medevac_F;
    class B_Heli_Transport_01_medevac_F_OCimport_01 : B_Heli_Transport_01_medevac_F { scope = 0; class EventHandlers; };
    class B_Heli_Transport_01_medevac_F_OCimport_02 : B_Heli_Transport_01_medevac_F_OCimport_01 { class EventHandlers; };

    class B_Heli_Transport_03_F;
    class B_Heli_Transport_03_F_OCimport_01 : B_Heli_Transport_03_F { scope = 0; class EventHandlers; };
    class B_Heli_Transport_03_F_OCimport_02 : B_Heli_Transport_03_F_OCimport_01 { class EventHandlers; };

    class B_Heli_Transport_03_unarmed_F;
    class B_Heli_Transport_03_unarmed_F_OCimport_01 : B_Heli_Transport_03_unarmed_F { scope = 0; class EventHandlers; };
    class B_Heli_Transport_03_unarmed_F_OCimport_02 : B_Heli_Transport_03_unarmed_F_OCimport_01 { class EventHandlers; };

    class B_Heli_Light_01_F;
    class B_Heli_Light_01_F_OCimport_01 : B_Heli_Light_01_F { scope = 0; class EventHandlers; };
    class B_Heli_Light_01_F_OCimport_02 : B_Heli_Light_01_F_OCimport_01 { class EventHandlers; };

    class B_helicrew_F;
    class B_helicrew_F_OCimport_01 : B_helicrew_F { scope = 0; class EventHandlers; };
    class B_helicrew_F_OCimport_02 : B_helicrew_F_OCimport_01 { class EventHandlers; };

    class B_Helipilot_F;
    class B_Helipilot_F_OCimport_01 : B_Helipilot_F { scope = 0; class EventHandlers; };
    class B_Helipilot_F_OCimport_02 : B_Helipilot_F_OCimport_01 { class EventHandlers; };

    class LSV_01_AT_base_F;
    class LSV_01_AT_base_F_OCimport_01 : LSV_01_AT_base_F { scope = 0; class EventHandlers; };
    class LSV_01_AT_base_F_OCimport_02 : LSV_01_AT_base_F_OCimport_01 { class EventHandlers; };

    class LSV_01_armed_base_F;
    class LSV_01_armed_base_F_OCimport_01 : LSV_01_armed_base_F { scope = 0; class EventHandlers; };
    class LSV_01_armed_base_F_OCimport_02 : LSV_01_armed_base_F_OCimport_01 { class EventHandlers; };

    class LSV_01_light_base_F;
    class LSV_01_light_base_F_OCimport_01 : LSV_01_light_base_F { scope = 0; class EventHandlers; };
    class LSV_01_light_base_F_OCimport_02 : LSV_01_light_base_F_OCimport_01 { class EventHandlers; };

    class LSV_01_unarmed_base_F;
    class LSV_01_unarmed_base_F_OCimport_01 : LSV_01_unarmed_base_F { scope = 0; class EventHandlers; };
    class LSV_01_unarmed_base_F_OCimport_02 : LSV_01_unarmed_base_F_OCimport_01 { class EventHandlers; };

    class B_Lifeboat;
    class B_Lifeboat_OCimport_01 : B_Lifeboat { scope = 0; class EventHandlers; };
    class B_Lifeboat_OCimport_02 : B_Lifeboat_OCimport_01 { class EventHandlers; };

    class B_MBT_01_TUSK_F;
    class B_MBT_01_TUSK_F_OCimport_01 : B_MBT_01_TUSK_F { scope = 0; class EventHandlers; };
    class B_MBT_01_TUSK_F_OCimport_02 : B_MBT_01_TUSK_F_OCimport_01 { class EventHandlers; };

    class B_MBT_01_arty_F;
    class B_MBT_01_arty_F_OCimport_01 : B_MBT_01_arty_F { scope = 0; class EventHandlers; };
    class B_MBT_01_arty_F_OCimport_02 : B_MBT_01_arty_F_OCimport_01 { class EventHandlers; };

    class B_MBT_01_cannon_F;
    class B_MBT_01_cannon_F_OCimport_01 : B_MBT_01_cannon_F { scope = 0; class EventHandlers; };
    class B_MBT_01_cannon_F_OCimport_02 : B_MBT_01_cannon_F_OCimport_01 { class EventHandlers; };

    class B_MBT_01_mlrs_F;
    class B_MBT_01_mlrs_F_OCimport_01 : B_MBT_01_mlrs_F { scope = 0; class EventHandlers; };
    class B_MBT_01_mlrs_F_OCimport_02 : B_MBT_01_mlrs_F_OCimport_01 { class EventHandlers; };

    class B_MRAP_01_F;
    class B_MRAP_01_F_OCimport_01 : B_MRAP_01_F { scope = 0; class EventHandlers; };
    class B_MRAP_01_F_OCimport_02 : B_MRAP_01_F_OCimport_01 { class EventHandlers; };

    class B_MRAP_01_gmg_F;
    class B_MRAP_01_gmg_F_OCimport_01 : B_MRAP_01_gmg_F { scope = 0; class EventHandlers; };
    class B_MRAP_01_gmg_F_OCimport_02 : B_MRAP_01_gmg_F_OCimport_01 { class EventHandlers; };

    class B_MRAP_01_hmg_F;
    class B_MRAP_01_hmg_F_OCimport_01 : B_MRAP_01_hmg_F { scope = 0; class EventHandlers; };
    class B_MRAP_01_hmg_F_OCimport_02 : B_MRAP_01_hmg_F_OCimport_01 { class EventHandlers; };

    class B_medic_F;
    class B_medic_F_OCimport_01 : B_medic_F { scope = 0; class EventHandlers; };
    class B_medic_F_OCimport_02 : B_medic_F_OCimport_01 { class EventHandlers; };

    class B_Mortar_01_F;
    class B_Mortar_01_F_OCimport_01 : B_Mortar_01_F { scope = 0; class EventHandlers; };
    class B_Mortar_01_F_OCimport_02 : B_Mortar_01_F_OCimport_01 { class EventHandlers; };

    class B_officer_F;
    class B_officer_F_OCimport_01 : B_officer_F { scope = 0; class EventHandlers; };
    class B_officer_F_OCimport_02 : B_officer_F_OCimport_01 { class EventHandlers; };

    class B_Pickup_Comms_rf;
    class B_Pickup_Comms_rf_OCimport_01 : B_Pickup_Comms_rf { scope = 0; class EventHandlers; };
    class B_Pickup_Comms_rf_OCimport_02 : B_Pickup_Comms_rf_OCimport_01 { class EventHandlers; };

    class B_Pickup_aat_rf;
    class B_Pickup_aat_rf_OCimport_01 : B_Pickup_aat_rf { scope = 0; class EventHandlers; };
    class B_Pickup_aat_rf_OCimport_02 : B_Pickup_aat_rf_OCimport_01 { class EventHandlers; };

    class B_Pickup_mmg_rf;
    class B_Pickup_mmg_rf_OCimport_01 : B_Pickup_mmg_rf { scope = 0; class EventHandlers; };
    class B_Pickup_mmg_rf_OCimport_02 : B_Pickup_mmg_rf_OCimport_01 { class EventHandlers; };

    class B_Pickup_rf;
    class B_Pickup_rf_OCimport_01 : B_Pickup_rf { scope = 0; class EventHandlers; };
    class B_Pickup_rf_OCimport_02 : B_Pickup_rf_OCimport_01 { class EventHandlers; };

    class B_Pilot_F;
    class B_Pilot_F_OCimport_01 : B_Pilot_F { scope = 0; class EventHandlers; };
    class B_Pilot_F_OCimport_02 : B_Pilot_F_OCimport_01 { class EventHandlers; };

    class B_Plane_CAS_01_dynamicLoadout_F;
    class B_Plane_CAS_01_dynamicLoadout_F_OCimport_01 : B_Plane_CAS_01_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class B_Plane_CAS_01_dynamicLoadout_F_OCimport_02 : B_Plane_CAS_01_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class B_Plane_Fighter_01_F;
    class B_Plane_Fighter_01_F_OCimport_01 : B_Plane_Fighter_01_F { scope = 0; class EventHandlers; };
    class B_Plane_Fighter_01_F_OCimport_02 : B_Plane_Fighter_01_F_OCimport_01 { class EventHandlers; };

    class B_Plane_Fighter_01_Stealth_F;
    class B_Plane_Fighter_01_Stealth_F_OCimport_01 : B_Plane_Fighter_01_Stealth_F { scope = 0; class EventHandlers; };
    class B_Plane_Fighter_01_Stealth_F_OCimport_02 : B_Plane_Fighter_01_Stealth_F_OCimport_01 { class EventHandlers; };

    class B_Plane_Fighter_05_F;
    class B_Plane_Fighter_05_F_OCimport_01 : B_Plane_Fighter_05_F { scope = 0; class EventHandlers; };
    class B_Plane_Fighter_05_F_OCimport_02 : B_Plane_Fighter_05_F_OCimport_01 { class EventHandlers; };

    class B_Plane_Fighter_05_Stealth_F;
    class B_Plane_Fighter_05_Stealth_F_OCimport_01 : B_Plane_Fighter_05_Stealth_F { scope = 0; class EventHandlers; };
    class B_Plane_Fighter_05_Stealth_F_OCimport_02 : B_Plane_Fighter_05_Stealth_F_OCimport_01 { class EventHandlers; };

    class Quadbike_01_base_F;
    class Quadbike_01_base_F_OCimport_01 : Quadbike_01_base_F { scope = 0; class EventHandlers; };
    class Quadbike_01_base_F_OCimport_02 : Quadbike_01_base_F_OCimport_01 { class EventHandlers; };

    class Radar_System_01_base_F;
    class Radar_System_01_base_F_OCimport_01 : Radar_System_01_base_F { scope = 0; class EventHandlers; };
    class Radar_System_01_base_F_OCimport_02 : Radar_System_01_base_F_OCimport_01 { class EventHandlers; };

    class B_T_Soldier_F;
    class B_T_Soldier_F_OCimport_01 : B_T_Soldier_F { scope = 0; class EventHandlers; };
    class B_T_Soldier_F_OCimport_02 : B_T_Soldier_F_OCimport_01 { class EventHandlers; };

    class B_recon_AR_F;
    class B_recon_AR_F_OCimport_01 : B_recon_AR_F { scope = 0; class EventHandlers; };
    class B_recon_AR_F_OCimport_02 : B_recon_AR_F_OCimport_01 { class EventHandlers; };

    class B_recon_CQ_F;
    class B_recon_CQ_F_OCimport_01 : B_recon_CQ_F { scope = 0; class EventHandlers; };
    class B_recon_CQ_F_OCimport_02 : B_recon_CQ_F_OCimport_01 { class EventHandlers; };

    class B_recon_exp_F;
    class B_recon_exp_F_OCimport_01 : B_recon_exp_F { scope = 0; class EventHandlers; };
    class B_recon_exp_F_OCimport_02 : B_recon_exp_F_OCimport_01 { class EventHandlers; };

    class B_recon_F;
    class B_recon_F_OCimport_01 : B_recon_F { scope = 0; class EventHandlers; };
    class B_recon_F_OCimport_02 : B_recon_F_OCimport_01 { class EventHandlers; };

    class B_recon_GL_F;
    class B_recon_GL_F_OCimport_01 : B_recon_GL_F { scope = 0; class EventHandlers; };
    class B_recon_GL_F_OCimport_02 : B_recon_GL_F_OCimport_01 { class EventHandlers; };

    class B_recon_JTAC_F;
    class B_recon_JTAC_F_OCimport_01 : B_recon_JTAC_F { scope = 0; class EventHandlers; };
    class B_recon_JTAC_F_OCimport_02 : B_recon_JTAC_F_OCimport_01 { class EventHandlers; };

    class B_recon_LAT_F;
    class B_recon_LAT_F_OCimport_01 : B_recon_LAT_F { scope = 0; class EventHandlers; };
    class B_recon_LAT_F_OCimport_02 : B_recon_LAT_F_OCimport_01 { class EventHandlers; };

    class B_recon_MG_F;
    class B_recon_MG_F_OCimport_01 : B_recon_MG_F { scope = 0; class EventHandlers; };
    class B_recon_MG_F_OCimport_02 : B_recon_MG_F_OCimport_01 { class EventHandlers; };

    class B_recon_M_F;
    class B_recon_M_F_OCimport_01 : B_recon_M_F { scope = 0; class EventHandlers; };
    class B_recon_M_F_OCimport_02 : B_recon_M_F_OCimport_01 { class EventHandlers; };

    class B_recon_medic_F;
    class B_recon_medic_F_OCimport_01 : B_recon_medic_F { scope = 0; class EventHandlers; };
    class B_recon_medic_F_OCimport_02 : B_recon_medic_F_OCimport_01 { class EventHandlers; };

    class B_Recon_Sharpshooter_F;
    class B_Recon_Sharpshooter_F_OCimport_01 : B_Recon_Sharpshooter_F { scope = 0; class EventHandlers; };
    class B_Recon_Sharpshooter_F_OCimport_02 : B_Recon_Sharpshooter_F_OCimport_01 { class EventHandlers; };

    class B_recon_TL_F;
    class B_recon_TL_F_OCimport_01 : B_recon_TL_F { scope = 0; class EventHandlers; };
    class B_recon_TL_F_OCimport_02 : B_recon_TL_F_OCimport_01 { class EventHandlers; };

    class SAM_System_03_base_F;
    class SAM_System_03_base_F_OCimport_01 : SAM_System_03_base_F { scope = 0; class EventHandlers; };
    class SAM_System_03_base_F_OCimport_02 : SAM_System_03_base_F_OCimport_01 { class EventHandlers; };

    class SDV_01_base_F;
    class SDV_01_base_F_OCimport_01 : SDV_01_base_F { scope = 0; class EventHandlers; };
    class SDV_01_base_F_OCimport_02 : SDV_01_base_F_OCimport_01 { class EventHandlers; };

    class B_Sharpshooter_F;
    class B_Sharpshooter_F_OCimport_01 : B_Sharpshooter_F { scope = 0; class EventHandlers; };
    class B_Sharpshooter_F_OCimport_02 : B_Sharpshooter_F_OCimport_01 { class EventHandlers; };

    class B_sniper_F;
    class B_sniper_F_OCimport_01 : B_sniper_F { scope = 0; class EventHandlers; };
    class B_sniper_F_OCimport_02 : B_sniper_F_OCimport_01 { class EventHandlers; };

    class B_soldier_AAA_F;
    class B_soldier_AAA_F_OCimport_01 : B_soldier_AAA_F { scope = 0; class EventHandlers; };
    class B_soldier_AAA_F_OCimport_02 : B_soldier_AAA_F_OCimport_01 { class EventHandlers; };

    class B_soldier_AAR_F;
    class B_soldier_AAR_F_OCimport_01 : B_soldier_AAR_F { scope = 0; class EventHandlers; };
    class B_soldier_AAR_F_OCimport_02 : B_soldier_AAR_F_OCimport_01 { class EventHandlers; };

    class B_soldier_AAT_F;
    class B_soldier_AAT_F_OCimport_01 : B_soldier_AAT_F { scope = 0; class EventHandlers; };
    class B_soldier_AAT_F_OCimport_02 : B_soldier_AAT_F_OCimport_01 { class EventHandlers; };

    class B_soldier_AA_F;
    class B_soldier_AA_F_OCimport_01 : B_soldier_AA_F { scope = 0; class EventHandlers; };
    class B_soldier_AA_F_OCimport_02 : B_soldier_AA_F_OCimport_01 { class EventHandlers; };

    class B_soldier_AR_F;
    class B_soldier_AR_F_OCimport_01 : B_soldier_AR_F { scope = 0; class EventHandlers; };
    class B_soldier_AR_F_OCimport_02 : B_soldier_AR_F_OCimport_01 { class EventHandlers; };

    class B_soldier_AT_F;
    class B_soldier_AT_F_OCimport_01 : B_soldier_AT_F { scope = 0; class EventHandlers; };
    class B_soldier_AT_F_OCimport_02 : B_soldier_AT_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_A_F;
    class B_Soldier_A_F_OCimport_01 : B_Soldier_A_F { scope = 0; class EventHandlers; };
    class B_Soldier_A_F_OCimport_02 : B_Soldier_A_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_CQ_F;
    class B_Soldier_CQ_F_OCimport_01 : B_Soldier_CQ_F { scope = 0; class EventHandlers; };
    class B_Soldier_CQ_F_OCimport_02 : B_Soldier_CQ_F_OCimport_01 { class EventHandlers; };

    class B_soldier_exp_F;
    class B_soldier_exp_F_OCimport_01 : B_soldier_exp_F { scope = 0; class EventHandlers; };
    class B_soldier_exp_F_OCimport_02 : B_soldier_exp_F_OCimport_01 { class EventHandlers; };

    class B_soldier_F;
    class B_soldier_F_OCimport_01 : B_soldier_F { scope = 0; class EventHandlers; };
    class B_soldier_F_OCimport_02 : B_soldier_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_GL_F;
    class B_Soldier_GL_F_OCimport_01 : B_Soldier_GL_F { scope = 0; class EventHandlers; };
    class B_Soldier_GL_F_OCimport_02 : B_Soldier_GL_F_OCimport_01 { class EventHandlers; };

    class B_soldier_LAT2_F;
    class B_soldier_LAT2_F_OCimport_01 : B_soldier_LAT2_F { scope = 0; class EventHandlers; };
    class B_soldier_LAT2_F_OCimport_02 : B_soldier_LAT2_F_OCimport_01 { class EventHandlers; };

    class B_soldier_LAT_F;
    class B_soldier_LAT_F_OCimport_01 : B_soldier_LAT_F { scope = 0; class EventHandlers; };
    class B_soldier_LAT_F_OCimport_02 : B_soldier_LAT_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_lite_F;
    class B_Soldier_lite_F_OCimport_01 : B_Soldier_lite_F { scope = 0; class EventHandlers; };
    class B_Soldier_lite_F_OCimport_02 : B_Soldier_lite_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_MG_F;
    class B_Soldier_MG_F_OCimport_01 : B_Soldier_MG_F { scope = 0; class EventHandlers; };
    class B_Soldier_MG_F_OCimport_02 : B_Soldier_MG_F_OCimport_01 { class EventHandlers; };

    class B_soldier_PG_F;
    class B_soldier_PG_F_OCimport_01 : B_soldier_PG_F { scope = 0; class EventHandlers; };
    class B_soldier_PG_F_OCimport_02 : B_soldier_PG_F_OCimport_01 { class EventHandlers; };

    class B_soldier_repair_F;
    class B_soldier_repair_F_OCimport_01 : B_soldier_repair_F { scope = 0; class EventHandlers; };
    class B_soldier_repair_F_OCimport_02 : B_soldier_repair_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_SL_F;
    class B_Soldier_SL_F_OCimport_01 : B_Soldier_SL_F { scope = 0; class EventHandlers; };
    class B_Soldier_SL_F_OCimport_02 : B_Soldier_SL_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_TL_F;
    class B_Soldier_TL_F_OCimport_01 : B_Soldier_TL_F { scope = 0; class EventHandlers; };
    class B_Soldier_TL_F_OCimport_02 : B_Soldier_TL_F_OCimport_01 { class EventHandlers; };

    class B_soldier_UAV_F;
    class B_soldier_UAV_F_OCimport_01 : B_soldier_UAV_F { scope = 0; class EventHandlers; };
    class B_soldier_UAV_F_OCimport_02 : B_soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class B_spotter_F;
    class B_spotter_F_OCimport_01 : B_spotter_F { scope = 0; class EventHandlers; };
    class B_spotter_F_OCimport_02 : B_spotter_F_OCimport_01 { class EventHandlers; };

    class B_static_AA_F;
    class B_static_AA_F_OCimport_01 : B_static_AA_F { scope = 0; class EventHandlers; };
    class B_static_AA_F_OCimport_02 : B_static_AA_F_OCimport_01 { class EventHandlers; };

    class B_static_AT_F;
    class B_static_AT_F_OCimport_01 : B_static_AT_F { scope = 0; class EventHandlers; };
    class B_static_AT_F_OCimport_02 : B_static_AT_F_OCimport_01 { class EventHandlers; };

    class B_Static_Designator_01_F;
    class B_Static_Designator_01_F_OCimport_01 : B_Static_Designator_01_F { scope = 0; class EventHandlers; };
    class B_Static_Designator_01_F_OCimport_02 : B_Static_Designator_01_F_OCimport_01 { class EventHandlers; };

    class B_support_AMG_F;
    class B_support_AMG_F_OCimport_01 : B_support_AMG_F { scope = 0; class EventHandlers; };
    class B_support_AMG_F_OCimport_02 : B_support_AMG_F_OCimport_01 { class EventHandlers; };

    class B_support_AMort_F;
    class B_support_AMort_F_OCimport_01 : B_support_AMort_F { scope = 0; class EventHandlers; };
    class B_support_AMort_F_OCimport_02 : B_support_AMort_F_OCimport_01 { class EventHandlers; };

    class B_support_GMG_F;
    class B_support_GMG_F_OCimport_01 : B_support_GMG_F { scope = 0; class EventHandlers; };
    class B_support_GMG_F_OCimport_02 : B_support_GMG_F_OCimport_01 { class EventHandlers; };

    class B_support_MG_F;
    class B_support_MG_F_OCimport_01 : B_support_MG_F { scope = 0; class EventHandlers; };
    class B_support_MG_F_OCimport_02 : B_support_MG_F_OCimport_01 { class EventHandlers; };

    class B_support_Mort_F;
    class B_support_Mort_F_OCimport_01 : B_support_Mort_F { scope = 0; class EventHandlers; };
    class B_support_Mort_F_OCimport_02 : B_support_Mort_F_OCimport_01 { class EventHandlers; };

    class C_Truck_01_FFT_rf;
    class C_Truck_01_FFT_rf_OCimport_01 : C_Truck_01_FFT_rf { scope = 0; class EventHandlers; };
    class C_Truck_01_FFT_rf_OCimport_02 : C_Truck_01_FFT_rf_OCimport_01 { class EventHandlers; };

    class B_Truck_01_Repair_F;
    class B_Truck_01_Repair_F_OCimport_01 : B_Truck_01_Repair_F { scope = 0; class EventHandlers; };
    class B_Truck_01_Repair_F_OCimport_02 : B_Truck_01_Repair_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_ammo_F;
    class B_Truck_01_ammo_F_OCimport_01 : B_Truck_01_ammo_F { scope = 0; class EventHandlers; };
    class B_Truck_01_ammo_F_OCimport_02 : B_Truck_01_ammo_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_box_F;
    class B_Truck_01_box_F_OCimport_01 : B_Truck_01_box_F { scope = 0; class EventHandlers; };
    class B_Truck_01_box_F_OCimport_02 : B_Truck_01_box_F_OCimport_01 { class EventHandlers; };

    class Truck_01_cargo_base_F;
    class Truck_01_cargo_base_F_OCimport_01 : Truck_01_cargo_base_F { scope = 0; class EventHandlers; };
    class Truck_01_cargo_base_F_OCimport_02 : Truck_01_cargo_base_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_covered_F;
    class B_Truck_01_covered_F_OCimport_01 : B_Truck_01_covered_F { scope = 0; class EventHandlers; };
    class B_Truck_01_covered_F_OCimport_02 : B_Truck_01_covered_F_OCimport_01 { class EventHandlers; };

    class Truck_01_flatbed_base_F;
    class Truck_01_flatbed_base_F_OCimport_01 : Truck_01_flatbed_base_F { scope = 0; class EventHandlers; };
    class Truck_01_flatbed_base_F_OCimport_02 : Truck_01_flatbed_base_F_OCimport_01 { class EventHandlers; };

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

    class B_TwinMortar_RF;
    class B_TwinMortar_RF_OCimport_01 : B_TwinMortar_RF { scope = 0; class EventHandlers; };
    class B_TwinMortar_RF_OCimport_02 : B_TwinMortar_RF_OCimport_01 { class EventHandlers; };

    class B_UAV_01_F;
    class B_UAV_01_F_OCimport_01 : B_UAV_01_F { scope = 0; class EventHandlers; };
    class B_UAV_01_F_OCimport_02 : B_UAV_01_F_OCimport_01 { class EventHandlers; };

    class B_UAV_02_dynamicLoadout_F;
    class B_UAV_02_dynamicLoadout_F_OCimport_01 : B_UAV_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class B_UAV_02_dynamicLoadout_F_OCimport_02 : B_UAV_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class UAV_03_dynamicLoadout_base_F;
    class UAV_03_dynamicLoadout_base_F_OCimport_01 : UAV_03_dynamicLoadout_base_F { scope = 0; class EventHandlers; };
    class UAV_03_dynamicLoadout_base_F_OCimport_02 : UAV_03_dynamicLoadout_base_F_OCimport_01 { class EventHandlers; };

    class B_UAV_05_F;
    class B_UAV_05_F_OCimport_01 : B_UAV_05_F { scope = 0; class EventHandlers; };
    class B_UAV_05_F_OCimport_02 : B_UAV_05_F_OCimport_01 { class EventHandlers; };

    class UAV_06_base_F;
    class UAV_06_base_F_OCimport_01 : UAV_06_base_F { scope = 0; class EventHandlers; };
    class UAV_06_base_F_OCimport_02 : UAV_06_base_F_OCimport_01 { class EventHandlers; };

    class UAV_06_medical_base_F;
    class UAV_06_medical_base_F_OCimport_01 : UAV_06_medical_base_F { scope = 0; class EventHandlers; };
    class UAV_06_medical_base_F_OCimport_02 : UAV_06_medical_base_F_OCimport_01 { class EventHandlers; };

    class UGV_01_medical_base_F;
    class UGV_01_medical_base_F_OCimport_01 : UGV_01_medical_base_F { scope = 0; class EventHandlers; };
    class UGV_01_medical_base_F_OCimport_02 : UGV_01_medical_base_F_OCimport_01 { class EventHandlers; };

    class UGV_01_base_F;
    class UGV_01_base_F_OCimport_01 : UGV_01_base_F { scope = 0; class EventHandlers; };
    class UGV_01_base_F_OCimport_02 : UGV_01_base_F_OCimport_01 { class EventHandlers; };

    class UGV_01_rcws_base_F;
    class UGV_01_rcws_base_F_OCimport_01 : UGV_01_rcws_base_F { scope = 0; class EventHandlers; };
    class UGV_01_rcws_base_F_OCimport_02 : UGV_01_rcws_base_F_OCimport_01 { class EventHandlers; };

    class UGV_02_Demining_Base_F;
    class UGV_02_Demining_Base_F_OCimport_01 : UGV_02_Demining_Base_F { scope = 0; class EventHandlers; };
    class UGV_02_Demining_Base_F_OCimport_02 : UGV_02_Demining_Base_F_OCimport_01 { class EventHandlers; };

    class VTOL_01_armed_base_F;
    class VTOL_01_armed_base_F_OCimport_01 : VTOL_01_armed_base_F { scope = 0; class EventHandlers; };
    class VTOL_01_armed_base_F_OCimport_02 : VTOL_01_armed_base_F_OCimport_01 { class EventHandlers; };

    class VTOL_01_infantry_base_F;
    class VTOL_01_infantry_base_F_OCimport_01 : VTOL_01_infantry_base_F { scope = 0; class EventHandlers; };
    class VTOL_01_infantry_base_F_OCimport_02 : VTOL_01_infantry_base_F_OCimport_01 { class EventHandlers; };

    class VTOL_01_vehicle_base_F;
    class VTOL_01_vehicle_base_F_OCimport_01 : VTOL_01_vehicle_base_F { scope = 0; class EventHandlers; };
    class VTOL_01_vehicle_base_F_OCimport_02 : VTOL_01_vehicle_base_F_OCimport_01 { class EventHandlers; };

    class B_T_ghillie_tna_F;
    class B_T_ghillie_tna_F_OCimport_01 : B_T_ghillie_tna_F { scope = 0; class EventHandlers; };
    class B_T_ghillie_tna_F_OCimport_02 : B_T_ghillie_tna_F_OCimport_01 { class EventHandlers; };

    class B_ghillie_base_F;
    class B_ghillie_base_F_OCimport_01 : B_ghillie_base_F { scope = 0; class EventHandlers; };
    class B_ghillie_base_F_OCimport_02 : B_ghillie_base_F_OCimport_01 { class EventHandlers; };

    class qav_abramsx_base;
    class qav_abramsx_base_OCimport_01 : qav_abramsx_base { scope = 0; class EventHandlers; };
    class qav_abramsx_base_OCimport_02 : qav_abramsx_base_OCimport_01 { class EventHandlers; };

    class B_soldier_M_F;
    class B_soldier_M_F_OCimport_01 : B_soldier_M_F { scope = 0; class EventHandlers; };
    class B_soldier_M_F_OCimport_02 : B_soldier_M_F_OCimport_01 { class EventHandlers; };

    class B_T_Soldier_UAV_F;
    class B_T_Soldier_UAV_F_OCimport_01 : B_T_Soldier_UAV_F { scope = 0; class EventHandlers; };
    class B_T_Soldier_UAV_F_OCimport_02 : B_T_Soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class B_T_Soldier_Exp_F;
    class B_T_Soldier_Exp_F_OCimport_01 : B_T_Soldier_Exp_F { scope = 0; class EventHandlers; };
    class B_T_Soldier_Exp_F_OCimport_02 : B_T_Soldier_Exp_F_OCimport_01 { class EventHandlers; };

    class EF_CombatBoat_AT_West_Base;
    class EF_CombatBoat_AT_West_Base_OCimport_01 : EF_CombatBoat_AT_West_Base { scope = 0; class EventHandlers; };
    class EF_CombatBoat_AT_West_Base_OCimport_02 : EF_CombatBoat_AT_West_Base_OCimport_01 { class EventHandlers; };

    class EF_CombatBoat_HMG_West_Base;
    class EF_CombatBoat_HMG_West_Base_OCimport_01 : EF_CombatBoat_HMG_West_Base { scope = 0; class EventHandlers; };
    class EF_CombatBoat_HMG_West_Base_OCimport_02 : EF_CombatBoat_HMG_West_Base_OCimport_01 { class EventHandlers; };

    class EF_CombatBoat_Unarmed_Base;
    class EF_CombatBoat_Unarmed_Base_OCimport_01 : EF_CombatBoat_Unarmed_Base { scope = 0; class EventHandlers; };
    class EF_CombatBoat_Unarmed_Base_OCimport_02 : EF_CombatBoat_Unarmed_Base_OCimport_01 { class EventHandlers; };

    class EF_MRAP_01_AT_base;
    class EF_MRAP_01_AT_base_OCimport_01 : EF_MRAP_01_AT_base { scope = 0; class EventHandlers; };
    class EF_MRAP_01_AT_base_OCimport_02 : EF_MRAP_01_AT_base_OCimport_01 { class EventHandlers; };

    class EF_MRAP_01_FSV_base;
    class EF_MRAP_01_FSV_base_OCimport_01 : EF_MRAP_01_FSV_base { scope = 0; class EventHandlers; };
    class EF_MRAP_01_FSV_base_OCimport_02 : EF_MRAP_01_FSV_base_OCimport_01 { class EventHandlers; };

    class EF_MRAP_01_LAAD_base;
    class EF_MRAP_01_LAAD_base_OCimport_01 : EF_MRAP_01_LAAD_base { scope = 0; class EventHandlers; };
    class EF_MRAP_01_LAAD_base_OCimport_02 : EF_MRAP_01_LAAD_base_OCimport_01 { class EventHandlers; };

    class ACE_B_T_SpottingScope : ACE_SpottingScopeObject_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotting Scope";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Spotter_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_T_AH99J_EF : EF_B_AH99J_NATO_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RAH-66J Comanche";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_T_CommandoMortar_RF : B_CommandoMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RSG60";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_T_Heli_Attack_03_F : Aegis_B_Heli_Attack_03_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-64E Apache";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_T_Heli_EC_03_RF : B_Heli_EC_03_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "H225M Super Cougar";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_T_Heli_EC_04_military_RF : B_Heli_EC_04_military_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "H225M Super Cougar (Unarmed)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_T_Pickup_AT_RF : Aegis_B_Pickup_AT_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Aegis_B_T_Pickup_AT_RF";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_T_UAV_02_lxWS : UAV_02_Base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AP-5 Bustard";
        side = 1;
        faction = "blu_t_f";
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

    class Aegis_B_T_support_CMort_RF : B_T_Support_AMort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_AR_F";

        backpack = "B_CommandoMortar_weapon_RF";

        linkedItems[] = {"V_ChestrigF_rgr","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_ChestrigF_rgr","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_T_JSOC_AR_F : Atlas_B_T_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_T_JSOC_StealthUniform_RolledUp_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Shemag_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Shemag_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_MX_SW_khk_HAMR_IR_Snds_BI_F","hgun_P07_khk_snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_MX_SW_khk_HAMR_IR_Snds_BI_F","hgun_P07_khk_snds_F","Throw","Put"};

        magazines[] = {"100rnd_65x39_caseless_khaki_mag","100rnd_65x39_caseless_khaki_mag","100rnd_65x39_caseless_khaki_mag","100rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"100rnd_65x39_caseless_khaki_mag","100rnd_65x39_caseless_khaki_mag","100rnd_65x39_caseless_khaki_mag","100rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_T_JSOC_Exp_F : Atlas_B_T_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_T_JSOC_StealthUniform_F";

        backpack = "Atlas_B_T_AssaultPack_JSOC_Exp_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_MXC_khk_Holo_IR_Snds_F","hgun_P07_khk_snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_MXC_khk_Holo_IR_Snds_F","hgun_P07_khk_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_T_JSOC_F : Atlas_B_T_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Operator";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_T_JSOC_StealthUniform_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_MX_khk_HAMR_IR_Snds_F","hgun_P07_khk_snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_arifle_MX_khk_HAMR_IR_Snds_F","hgun_P07_khk_snds_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_T_JSOC_GL_F : Atlas_B_T_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_T_JSOC_StealthUniform_RolledUp_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_MX_GL_khk_HAMR_IR_Snds_F","hgun_P07_khk_snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_MX_GL_khk_HAMR_IR_Snds_F","hgun_P07_khk_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue","3Rnd_Smoke_Grenade_shell","3Rnd_HEDP_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue","3Rnd_Smoke_Grenade_shell","3Rnd_HEDP_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_T_JSOC_JTAC_F : Atlas_B_T_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "JTAC";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_T_JSOC_StealthUniform_F";

        backpack = "B_RadioBag_01_tropic_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_MX_khk_HAMR_IR_Snds_F","hgun_P07_khk_snds_F","Throw","Put","Laserdesignator"};
        respawnWeapons[] = {"Atlas_arifle_MX_khk_HAMR_IR_Snds_F","hgun_P07_khk_snds_F","Throw","Put","Laserdesignator"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_T_JSOC_LAT_F : Atlas_B_T_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Operator (AT)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_T_JSOC_StealthUniform_RolledUp_F";

        backpack = "Atlas_B_T_AssaultPack_JSOC_LAT_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_MXC_khk_Holo_IR_Snds_F","hgun_P07_khk_snds_F","launch_MRAWS_olive_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_MXC_khk_Holo_IR_Snds_F","hgun_P07_khk_snds_F","launch_MRAWS_olive_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_T_JSOC_M_F : Atlas_B_T_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_T_JSOC_StealthUniform_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_MXM_khk_SOS_IR_Snds_BI_F","hgun_P07_khk_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_MXM_khk_SOS_IR_Snds_BI_F","hgun_P07_khk_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_T_JSOC_Medic_F : Atlas_B_T_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_T_JSOC_StealthUniform_F";

        backpack = "Atlas_B_T_AssaultPack_JSOC_Medic_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_MXC_khk_Holo_IR_Snds_F","hgun_P07_khk_snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_MXC_khk_Holo_IR_Snds_F","hgun_P07_khk_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_T_JSOC_SL_F : Atlas_B_T_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_T_JSOC_StealthUniform_RolledUp_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Shemag_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Shemag_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_MX_GL_khk_HAMR_IR_Snds_F","hgun_P07_khk_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_MX_GL_khk_HAMR_IR_Snds_F","hgun_P07_khk_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag_tracer","30Rnd_65x39_caseless_khaki_mag_tracer","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue","3Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag_tracer","30Rnd_65x39_caseless_khaki_mag_tracer","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue","3Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_T_JSOC_Sharpshooter_F : Atlas_B_T_JSOC_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_T_JSOC_StealthUniform_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Shemag_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Shemag_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_SR25_MR_khk_SOS_IR_Snds_BI_F","hgun_P07_khk_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_SR25_MR_khk_SOS_IR_Snds_BI_F","hgun_P07_khk_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_T_JSOC_TL_F : Atlas_B_T_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_T_JSOC_StealthUniform_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_MX_khk_HAMR_IR_Snds_F","hgun_P07_khk_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_MX_khk_HAMR_IR_Snds_F","hgun_P07_khk_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag_tracer","30Rnd_65x39_caseless_khaki_mag_tracer","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag_tracer","30Rnd_65x39_caseless_khaki_mag_tracer","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_T_JSOC_UAV_F : Atlas_B_T_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Specialist";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_T_JSOC_StealthUniform_RolledUp_F";

        backpack = "B_UAV_01_backpack_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UAVTerminal","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UAVTerminal","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_MX_khk_HAMR_IR_Snds_F","hgun_P07_khk_snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_MX_khk_HAMR_IR_Snds_F","hgun_P07_khk_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_T_JSOC_UAV_lxWS : Atlas_B_T_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Specialist (AP-5)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_T_JSOC_StealthUniform_F";

        backpack = "B_UAV_02_backpack_lXWS";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UAVTerminal","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_tna","Aegis_H_Helmet_FASTMT_Cover_tna_F","G_Balaclava_light_tropic_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UAVTerminal","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_MXC_khk_Holo_IR_Snds_F","hgun_P07_khk_snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_MXC_khk_Holo_IR_Snds_F","hgun_P07_khk_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_AFV_Wheeled_01_cannon_F : AFV_Wheeled_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rooikat 120";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_AFV_Wheeled_01_up_cannon_F : AFV_Wheeled_01_up_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rooikat 120 UP";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_APC_Tracked_01_AA_F : B_APC_Tracked_01_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Bardelas";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_APC_Tracked_01_CRV_F : B_APC_Tracked_01_CRV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Nemmera";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_APC_Tracked_01_rcws_F : B_APC_Tracked_01_rcws_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Namer";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_APC_Wheeled_01_apc_QAV : APC_Wheeled_01_apc_qav_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMV-7 Marshall (APC)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_APC_Wheeled_01_atgm_lxWS_v2 : APC_Wheeled_01_atgm_base_v2_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMV-7 Marshall (ATGM)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_APC_Wheeled_01_cannon_v2_F : APC_Wheeled_01_base_v2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMV-7 Marshall";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_APC_Wheeled_01_command_lxWS : APC_Wheeled_01_command_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Badger IFV (Command)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_APC_Wheeled_01_medical_F : B_APC_Wheeled_01_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Badger IFV (Medical)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_APC_Wheeled_01_mgs_QAV : APC_Wheeled_01_mgs_QAV_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMV-7 Marshall (MGS)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_APC_Wheeled_01_mgs_up_QAV : APC_Wheeled_01_mgs_up_QAV_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMV-7 Marshall (MGS-UP)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_APC_Wheeled_01_mortar_lxWS : APC_Wheeled_01_mortar_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Badger IFV (Mortar)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_APC_Wheeled_01_shorad_QAV : APC_Wheeled_01_shorad_QAV_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMV-7A Guardian";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Boat_Armed_01_minigun_F : B_Boat_Armed_01_minigun_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Speedboat Minigun";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Boat_Transport_01_F : B_Boat_Transport_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Boat";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Crew_F : B_crew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_SL_F";

        linkedItems[] = {"Aegis_V_PlateCarrier_RF_tna","H_HelmetCrew_B_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier_RF_tna","H_HelmetCrew_B_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_Holo_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_khk_Holo_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Diver_Exp_F : B_diver_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Diver Explosive Specialist";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_diver"};

        uniformClass = "U_B_Wetsuit";

        backpack = "B_AssaultPack_blk_DiverExp";

        linkedItems[] = {"V_RebreatherB","G_B_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_RebreatherB","G_B_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SDAR_F","hgun_P07_khk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SDAR_F","hgun_P07_khk_Snds_F","Throw","Put"};

        magazines[] = {"20Rnd_556x45_Stanag_red","20Rnd_556x45_Stanag_red","20Rnd_556x45_Stanag_red","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_556x45_Stanag_red","20Rnd_556x45_Stanag_red","20Rnd_556x45_Stanag_red","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Diver_F : B_diver_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Diver";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_diver"};

        uniformClass = "U_B_Wetsuit";

        linkedItems[] = {"V_RebreatherB","G_B_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_RebreatherB","G_B_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SDAR_F","hgun_P07_khk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SDAR_F","hgun_P07_khk_Snds_F","Throw","Put"};

        magazines[] = {"20Rnd_556x45_Stanag_red","20Rnd_556x45_Stanag_red","20Rnd_556x45_Stanag_red","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_556x45_Stanag_red","20Rnd_556x45_Stanag_red","20Rnd_556x45_Stanag_red","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Diver_TL_F : B_diver_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Diver Team Leader";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_diver"};

        uniformClass = "U_B_Wetsuit";

        linkedItems[] = {"V_RebreatherB","G_B_Diving","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_RebreatherB","G_B_Diving","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SDAR_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SDAR_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};

        magazines[] = {"20Rnd_556x45_Stanag_red","20Rnd_556x45_Stanag_red","20Rnd_556x45_Stanag_red","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_556x45_Stanag_red","20Rnd_556x45_Stanag_red","20Rnd_556x45_Stanag_red","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Engineer_F : B_engineer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_SL_F";

        backpack = "B_Kitbag_rgr_BTEng_F";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Fighter_Pilot_F : B_Fighter_Pilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter Pilot";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_B_PilotCoveralls";

        linkedItems[] = {"H_PilotHelmetFighter_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_PilotHelmetFighter_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_GMG_01_A_F : B_GMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307A";
        side = 1;
        faction = "blu_t_f";
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

    class B_T_GMG_01_F : B_GMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_GMG_01_high_F : B_GMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307 (High)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_HMG_01_A_F : B_HMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312A";
        side = 1;
        faction = "blu_t_f";
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

    class B_T_HMG_01_F : B_HMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_HMG_01_high_F : B_HMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312 (High)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_HMG_02_F : HMG_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_HMG_02_high_F : HMG_02_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_HeavyGunner_F : B_HeavyGunner_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"MMG_02_khaki_RCO_LP_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"MMG_02_khaki_RCO_LP_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Heli_Attack_01_dynamicLoadout_F : B_Heli_Attack_01_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RAH-66 Comanche";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Heli_Light_01_dynamicLoadout_F : B_Heli_Light_01_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-6 Little Bird";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Heli_Transport_01_F : B_Heli_Transport_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-80 Ghost Hawk";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Heli_Transport_01_medevac_F : B_Heli_Transport_01_medevac_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-80 MEV";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Heli_Transport_03_F : B_Heli_Transport_03_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH-47I Chinook";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Heli_Transport_03_unarmed_F : B_Heli_Transport_03_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH-47I Chinook (unarmed)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Heli_light_01_F : B_Heli_Light_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-6 Little Bird";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Helicrew_F : B_helicrew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_pilot"};

        uniformClass = "U_B_HeliPilotCoveralls";

        linkedItems[] = {"V_TacVest_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_TacVest_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_Holo_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_khk_Holo_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Helipilot_F : B_Helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_pilot"};

        uniformClass = "U_B_HeliPilotCoveralls";

        linkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"SMG_01_khk_Holo_F","Throw","Put"};
        respawnWeapons[] = {"SMG_01_khk_Holo_F","Throw","Put"};

        magazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_LSV_01_AT_F : LSV_01_AT_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (Mini-Spike AT)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_LSV_01_armed_F : LSV_01_armed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (XM312)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_LSV_01_light_F : LSV_01_light_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (light)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_LSV_01_unarmed_F : LSV_01_unarmed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Lifeboat : B_Lifeboat_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rescue Boat";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_MBT_01_TUSK_F : B_MBT_01_TUSK_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Merkava Mk IV LIC";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_MBT_01_arty_F : B_MBT_01_arty_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sholef";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_MBT_01_cannon_F : B_MBT_01_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Merkava Mk IV M";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_MBT_01_mlrs_F : B_MBT_01_mlrs_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Seara";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_MRAP_01_F : B_MRAP_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_MRAP_01_gmg_F : B_MRAP_01_gmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV (GMG)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_MRAP_01_hmg_F : B_MRAP_01_hmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV (HMG)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Medic_F : B_medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_F";

        backpack = "B_AssaultPack_tna_BTMedic_F";

        linkedItems[] = {"V_PlateCarrierSpec_tna_F","H_HelmetB_Enh_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrierSpec_tna_F","H_HelmetB_Enh_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MX_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Mortar_01_F : B_Mortar_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "B_T_Mortar_01_F";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Officer_F : B_officer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_casual"};

        uniformClass = "U_B_T_Soldier_F";

        linkedItems[] = {"V_Rangemaster_belt_tna_F","H_MilCap_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Rangemaster_belt_tna_F","H_MilCap_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_MXC_khk_F","hgun_Pistol_heavy_01_black_MRD_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MXC_khk_F","hgun_Pistol_heavy_01_black_MRD_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Pickup_Comms_rf : B_Pickup_Comms_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Comms)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Pickup_aat_rf : B_Pickup_aat_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (AA)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Pickup_mmg_rf : B_Pickup_mmg_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (MMG)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Pickup_rf : B_Pickup_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Pilot_F : B_Pilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_B_PilotCoveralls";

        backpack = "ACE_NonSteerableParachute";

        linkedItems[] = {"H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"SMG_01_khk_Holo_F","Throw","Put"};
        respawnWeapons[] = {"SMG_01_khk_Holo_F","Throw","Put"};

        magazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Plane_CAS_01_dynamicLoadout_F : B_Plane_CAS_01_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "A-10D Thunderbolt II";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Plane_Fighter_01_F : B_Plane_Fighter_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "F/A-181 Black Wasp II";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Plane_Fighter_01_Stealth_F : B_Plane_Fighter_01_Stealth_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "F/A-181 Black Wasp II (Stealth)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Plane_Fighter_05_F : B_Plane_Fighter_05_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "F-35F Lightning II";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Plane_Fighter_05_Stealth_F : B_Plane_Fighter_05_Stealth_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "F-35F Lightning II (Stealth)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Quadbike_01_F : Quadbike_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Radar_System_01_F : Radar_System_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AN/MPQ-105 Radar";
        side = 1;
        faction = "blu_t_f";
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

    class B_T_RadioOperator_F : B_T_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_SL_F";

        backpack = "B_RadioBag_01_tropic_F";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MX_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Recon_AR_F : B_recon_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Autorifleman";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_T_NATO_SF"};

        uniformClass = "U_B_T_Soldier_AR_F";

        linkedItems[] = {"V_PlateCarrier2_tna_F","H_HelmetB_Enh_Light_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier2_tna_F","H_HelmetB_Enh_Light_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_SPAR_02_khk_RCO_Pointer_Snds_Bipod_F","hgun_P07_khk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_02_khk_RCO_Pointer_Snds_Bipod_F","hgun_P07_khk_Snds_F","Throw","Put"};

        magazines[] = {"150Rnd_556x45_Drum_Green_Mag_F","150Rnd_556x45_Drum_Green_Mag_F","150Rnd_556x45_Drum_Green_Mag_F","150Rnd_556x45_Drum_Green_Mag_F","150Rnd_556x45_Drum_Green_Mag_F","150Rnd_556x45_Drum_Green_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"150Rnd_556x45_Drum_Green_Mag_F","150Rnd_556x45_Drum_Green_Mag_F","150Rnd_556x45_Drum_Green_Mag_F","150Rnd_556x45_Drum_Green_Mag_F","150Rnd_556x45_Drum_Green_Mag_F","150Rnd_556x45_Drum_Green_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Recon_CQ_F : B_recon_CQ_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (Shotgun)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_T_NATO_SF"};

        uniformClass = "U_B_T_Soldier_SL_F";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_Light_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_Light_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"sgun_KSG_ACO_F","hgun_P07_khk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"sgun_KSG_ACO_F","hgun_P07_khk_Snds_F","Throw","Put"};

        magazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Recon_Exp_F : B_recon_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Demo Specialist";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_B_T_Soldier_AR_F";

        backpack = "B_Kitbag_rgr_BTReconExp_F";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_Booniehat_tna_hs_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_Booniehat_tna_hs_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_SPAR_01_khk_Holo_Pointer_Snds_F","hgun_P07_khk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_khk_Holo_Pointer_Snds_F","hgun_P07_khk_Snds_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Recon_F : B_recon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_T_NATO_SF"};

        uniformClass = "U_B_T_Soldier_SL_F";

        linkedItems[] = {"H_HelmetB_Enh_Light_tna_F","V_PlateCarrier1_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"H_HelmetB_Enh_Light_tna_F","V_PlateCarrier1_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_SPAR_01_khk_RCO_Pointer_Snds_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SPAR_01_khk_RCO_Pointer_Snds_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Recon_GL_F : B_recon_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Grenadier";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_T_NATO_SF"};

        uniformClass = "U_B_T_Soldier_SL_F";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_Light_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_Light_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_SPAR_01_GL_khk_RCO_Pointer_Snds_F","hgun_P07_khk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_GL_khk_RCO_Pointer_Snds_F","hgun_P07_khk_Snds_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Recon_JTAC_F : B_recon_JTAC_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon JTAC";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_T_NATO_SF"};

        uniformClass = "U_B_T_Soldier_F";

        backpack = "B_RadioBag_01_tropic_F";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_Watchcap_camo_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_Watchcap_camo_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_SPAR_01_khk_Holo_Pointer_Snds_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator_01_khk_F"};
        respawnWeapons[] = {"arifle_SPAR_01_khk_Holo_Pointer_Snds_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator_01_khk_F"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Recon_LAT_F : B_recon_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (AT)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_T_NATO_SF"};

        uniformClass = "U_B_T_Soldier_AR_F";

        backpack = "B_AssaultPack_rgr_BTLAT_F";

        linkedItems[] = {"V_PlateCarrier2_tna_F","H_HelmetB_Light_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier2_tna_F","H_HelmetB_Light_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_SPAR_01_khk_Holo_Pointer_Snds_F","launch_NLAW_F","hgun_P07_khk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_khk_Holo_Pointer_Snds_F","launch_NLAW_F","hgun_P07_khk_Snds_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Recon_MG_F : B_recon_MG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Gunner";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_T_NATO_SF"};

        uniformClass = "U_B_T_Soldier_F";

        linkedItems[] = {"H_HelmetB_Light_tna_F","V_PlateCarrier2_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"H_HelmetB_Light_tna_F","V_PlateCarrier2_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"LMG_Mk200_khk_Hamr_Pointer_Bipod_Snds_F","hgun_P07_khk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Mk200_khk_Hamr_Pointer_Bipod_Snds_F","hgun_P07_khk_Snds_F","Throw","Put"};

        magazines[] = {"200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Recon_M_F : B_recon_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Marksman";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_B_T_Soldier_F";

        linkedItems[] = {"V_TacVest_grn","H_Booniehat_tna_hs_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_Booniehat_tna_hs_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_SPAR_03_khk_MOS_Pointer_Snds_Bipod_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_SPAR_03_khk_MOS_Pointer_Snds_Bipod_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Recon_Medic_F : B_recon_medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Paramedic";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_T_NATO_SF"};

        uniformClass = "U_B_T_Soldier_AR_F";

        backpack = "B_AssaultPack_rgr_BTReconMedic";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_Light_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_Light_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_SPAR_01_khk_Holo_Pointer_Snds_F","hgun_P07_khk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_khk_Holo_Pointer_Snds_F","hgun_P07_khk_Snds_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Recon_Sharpshooter_F : B_Recon_Sharpshooter_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Sharpshooter";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        linkedItems[] = {"V_TacVest_grn","H_Cap_tna_hs_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_Cap_tna_hs_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"srifle_EBR_khk_DMS_LP_BI_S_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_EBR_khk_DMS_LP_BI_S_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Recon_TL_F : B_recon_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Team Leader";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_T_NATO_SF"};

        uniformClass = "U_B_T_Soldier_SL_F";

        linkedItems[] = {"V_PlateCarrier2_tna_F","H_HelmetB_Enh_Light_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier2_tna_F","H_HelmetB_Enh_Light_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_SPAR_01_khk_RCO_Pointer_Snds_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_SPAR_01_khk_RCO_Pointer_Snds_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_SAM_System_03_F : SAM_System_03_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MIM-104 Patriot";
        side = 1;
        faction = "blu_t_f";
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

    class B_T_SDV_01_F : SDV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "SDV";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Diver_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Sharpshooter_F : B_Sharpshooter_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"srifle_DMR_03_khaki_AMS_LP_BI_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_03_khaki_AMS_LP_BI_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Sniper_F : B_sniper_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_sniper"};

        uniformClass = "U_B_T_Sniper_F";

        linkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};

        magazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_AAA_F : B_soldier_AAA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_F";

        backpack = "B_Carryall_oli_BTAAA_F";

        linkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_AAR_F : B_soldier_AAR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_AR_F";

        backpack = "B_Kitbag_tna_BTAAR_F";

        linkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_AAT_F : B_soldier_AAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_F";

        backpack = "B_Carryall_oli_BTAAT_F";

        linkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_AA_F : B_soldier_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_F";

        backpack = "B_Kitbag_rgr_BTAA_F";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_Holo_Pointer_F","launch_B_Titan_tna_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_khk_Holo_Pointer_F","launch_B_Titan_tna_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_AR_F : B_soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_AR_F";

        linkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier2_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier2_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MX_SW_khk_Hamr_Pointer_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_SW_khk_Hamr_Pointer_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_AT_F : B_soldier_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_F";

        backpack = "B_Kitbag_rgr_BTAT_F";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_Holo_Pointer_F","launch_B_Titan_short_tna_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_khk_Holo_Pointer_F","launch_B_Titan_short_tna_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_A_F : B_Soldier_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_F";

        backpack = "B_Carryall_oli_BTAmmo_F";

        linkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_CBRN_F : B_T_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Specialist";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_CBRN_Suit_01_Tropic_F";

        backpack = "B_CombinationUnitRespirator_01_F";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_Holo_Flash_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_khk_Holo_Flash_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_CQ_F : B_Soldier_CQ_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_F";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"sgun_KSG_ACO_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"sgun_KSG_ACO_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_Exp_F : B_soldier_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_F";

        backpack = "B_Kitbag_rgr_BTExp_F";

        linkedItems[] = {"V_PlateCarrierGL_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrierGL_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_F : B_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_F";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_Enh_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_Enh_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MX_khk_Hamr_Pointer_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_khk_Hamr_Pointer_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_GL_F : B_Soldier_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_F";

        linkedItems[] = {"V_PlateCarrierGL_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrierGL_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MX_GL_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_GL_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_LAT2_F : B_soldier_LAT2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light AT)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_F";

        backpack = "B_AssaultPack_rgr_BTLAT2_F";

        linkedItems[] = {"V_PlateCarrier2_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier2_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MX_khk_Holo_Pointer_F","launch_MRAWS_green_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_khk_Holo_Pointer_F","launch_MRAWS_green_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_LAT_F : B_soldier_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_F";

        backpack = "B_AssaultPack_rgr_BTLAT_F";

        linkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier2_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier2_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MX_khk_Holo_Pointer_F","launch_NLAW_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_khk_Holo_Pointer_F","launch_NLAW_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_Lite_F : B_Soldier_lite_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_B_T_Soldier_SL_F";

        linkedItems[] = {"V_BandollierB_tna_F","H_MilCap_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_tna_F","H_MilCap_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_MXC_khk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_khk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_MG_F : B_Soldier_MG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        linkedItems[] = {"V_PlateCarrier2_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier2_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"LMG_Mk200_khk_Hamr_Pointer_Bipod_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Mk200_khk_Hamr_Pointer_Bipod_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_PG_F : B_soldier_PG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Para Trooper";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_F";

        backpack = "B_Parachute";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_Repair_F : B_soldier_repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_F";

        backpack = "B_AssaultPack_tna_BTRepair_F";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_SL_F : B_Soldier_SL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_SL_F";

        linkedItems[] = {"V_PlateCarrierGL_tna_F","H_HelmetB_Enh_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrierGL_tna_F","H_HelmetB_Enh_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MX_khk_Hamr_Pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MX_khk_Hamr_Pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_65x39_caseless_khaki_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_65x39_caseless_khaki_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_TL_F : B_Soldier_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_SL_F";

        linkedItems[] = {"V_PlateCarrierGL_tna_F","H_HelmetB_Enh_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrierGL_tna_F","H_HelmetB_Enh_tna_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MX_GL_khk_Hamr_Pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MX_GL_khk_Hamr_Pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_65x39_caseless_khaki_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag_Tracer","30Rnd_65x39_caseless_khaki_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_UAV_F : B_soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_SL_F";

        backpack = "B_UAV_01_backpack_F";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Soldier_unarmed_F : B_T_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_F";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_Enh_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_Enh_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class B_T_Spotter_F : B_spotter_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_sniper"};

        uniformClass = "U_B_T_Sniper_F";

        linkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_SPAR_01_khk_RCO_Pointer_Snds_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator_01_khk_F"};
        respawnWeapons[] = {"arifle_SPAR_01_khk_RCO_Pointer_Snds_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator_01_khk_F"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Static_AA_F : B_static_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AA)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Static_AT_F : B_static_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AT)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Static_Designator_01_F : B_Static_Designator_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Remote Designator";
        side = 1;
        faction = "blu_t_f";
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

    class B_T_Support_AMG_F : B_support_AMG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (HMG/GMG)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_AR_F";

        backpack = "B_HMG_01_support_grn_F";

        linkedItems[] = {"V_ChestrigF_rgr","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_ChestrigF_rgr","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Support_AMort_F : B_support_AMort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (Mk6)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_AR_F";

        backpack = "B_Mortar_01_support_grn_F";

        linkedItems[] = {"V_ChestrigF_rgr","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_ChestrigF_rgr","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Support_GMG_F : B_support_GMG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (GMG)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_AR_F";

        backpack = "B_GMG_01_Weapon_grn_F";

        linkedItems[] = {"V_ChestrigF_rgr","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_ChestrigF_rgr","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Support_MG_F : B_support_MG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (HMG)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_AR_F";

        backpack = "B_HMG_01_Weapon_grn_F";

        linkedItems[] = {"V_ChestrigF_rgr","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_ChestrigF_rgr","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Support_Mort_F : B_support_Mort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mk6)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_AR_F";

        backpack = "B_Mortar_01_Weapon_grn_F";

        linkedItems[] = {"V_ChestrigF_rgr","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_ChestrigF_rgr","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Survivor_F : B_T_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_F";

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

    class B_T_Truck_01_FFT_rf : C_Truck_01_FFT_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Fire Truck";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_unarmed_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Truck_01_Repair_F : B_Truck_01_Repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Repair";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Truck_01_ammo_F : B_Truck_01_ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Ammo";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Truck_01_box_F : B_Truck_01_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Container";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Truck_01_cargo_F : Truck_01_cargo_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Cargo";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Truck_01_covered_F : B_Truck_01_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport (covered)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Truck_01_flatbed_F : Truck_01_flatbed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Flatbed";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Truck_01_fuel_F : B_Truck_01_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Fuel";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Truck_01_medical_F : B_Truck_01_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Medical";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Truck_01_mover_F : B_Truck_01_mover_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_Truck_01_transport_F : B_Truck_01_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_TwinMortar_RF : B_TwinMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMOS Container";
        side = 1;
        faction = "blu_t_f";
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

    class B_T_UAV_01_F : B_UAV_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR-2 Darter";
        side = 1;
        faction = "blu_t_f";
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

    class B_T_UAV_02_dynamicLoadout_F : B_UAV_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "YABHON-R3";
        side = 1;
        faction = "blu_t_f";
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

    class B_T_UAV_03_dynamicLoadout_F : UAV_03_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MQ-12 Falcon";
        side = 1;
        faction = "blu_t_f";
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

    class B_T_UAV_05_F : B_UAV_05_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XQ-47B";
        side = 1;
        faction = "blu_t_f";
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

    class B_T_UAV_06_F : UAV_06_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican";
        side = 1;
        faction = "blu_t_f";
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

    class B_T_UAV_06_medical_F : UAV_06_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican (Medical)";
        side = 1;
        faction = "blu_t_f";
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

    class B_T_UGV_01_medical_olive_F : UGV_01_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper Medical";
        side = 1;
        faction = "blu_t_f";
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

    class B_T_UGV_01_olive_F : UGV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper";
        side = 1;
        faction = "blu_t_f";
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

    class B_T_UGV_01_rcws_olive_F : UGV_01_rcws_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper RCWS";
        side = 1;
        faction = "blu_t_f";
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

    class B_T_UGV_02_Demining_F : UGV_02_Demining_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ED-1D Pelter";
        side = 1;
        faction = "blu_t_f";
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

    class B_T_VTOL_01_armed_F : VTOL_01_armed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AV-44X Blackfish";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_VTOL_01_infantry_F : VTOL_01_infantry_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "V-44 X Blackfish (Infantry Transport)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_VTOL_01_vehicle_F : VTOL_01_vehicle_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "V-44 X Blackfish (Vehicle Transport)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_ghillie_spotter_tna_F : B_T_ghillie_tna_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter (Jungle)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_sniper"};

        uniformClass = "U_B_T_FullGhillie_tna_F";

        linkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_SPAR_01_khk_RCO_Pointer_Snds_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator_01_khk_F"};
        respawnWeapons[] = {"arifle_SPAR_01_khk_RCO_Pointer_Snds_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator_01_khk_F"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_ghillie_tna_F : B_ghillie_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper (Jungle)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_sniper"};

        uniformClass = "U_B_T_FullGhillie_tna_F";

        linkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_Chestrig_rgr","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_qav_abramsx : qav_abramsx_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AbramsX";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_soldier_M_F : B_soldier_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_F";

        linkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"H_HelmetB_tna_F","V_PlateCarrier1_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXM_khk_MOS_Pointer_Bipod_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MXM_khk_MOS_Pointer_Bipod_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_soldier_UAV_02_LxWS_F : B_T_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AP-5)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_SL_F";

        backpack = "Aegis_B_T_UAV_02_backpack_lxWS";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_soldier_UAV_06_F : B_T_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_SL_F";

        backpack = "B_UAV_06_backpack_F";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_soldier_UAV_06_medical_F : B_T_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_SL_F";

        backpack = "B_UAV_06_medical_backpack_F";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_soldier_UGV_02_Demining_F : B_T_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1D)";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_SL_F";

        backpack = "B_UGV_02_Demining_backpack_F";

        linkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrier1_tna_F","H_HelmetB_tna_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MXC_khk_ACO_Pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_T_soldier_mine_F : B_T_Soldier_Exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mine Specialist";
        side = 1;
        faction = "blu_t_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_T_Soldier_F";

        backpack = "B_Carryall_tna_BTMine_F";

        linkedItems[] = {"V_PlateCarrierGL_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};
        respawnlinkedItems[] = {"V_PlateCarrierGL_tna_F","H_HelmetB_tna_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_tna_F"};

        weapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_khk_Holo_Pointer_F","hgun_P07_khk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_CombatBoat_AT_NATO_T : EF_CombatBoat_AT_West_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (AT)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_CombatBoat_HMG_NATO_T : EF_CombatBoat_HMG_West_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (HMG)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_CombatBoat_Unarmed_NATO_T : EF_CombatBoat_Unarmed_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (Unarmed)";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_MRAP_01_AT_NATO_T : EF_MRAP_01_AT_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV AT";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_MRAP_01_FSV_NATO_T : EF_MRAP_01_FSV_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV FSV";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_MRAP_01_LAAD_NATO_T : EF_MRAP_01_LAAD_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV LAAD";
        side = 1;
        faction = "blu_t_f";
        crew = "B_T_Crew_F";

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
        class BLU_T_F {
            class Armored {
                class B_T_SPGPlatoon_Scorcher {
                    name = "Artillery SPG Platoon";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";

                    class Unit0 {
                        vehicle = "B_T_MBT_01_arty_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_MBT_01_arty_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_MBT_01_arty_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_MBT_01_arty_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class B_T_SPGSection_MLRS {
                    name = "MLRS Section";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";

                    class Unit0 {
                        vehicle = "B_T_MBT_01_mlrs_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_MBT_01_mlrs_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class B_T_SPGSection_Scorcher {
                    name = "Artillery SPG Section";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";

                    class Unit0 {
                        vehicle = "B_T_MBT_01_arty_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_MBT_01_arty_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class B_T_TankDestrSection_Rhino {
                    name = "Tank Destroyer Section";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";

                    class Unit0 {
                        vehicle = "B_T_AFV_Wheeled_01_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_AFV_Wheeled_01_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class B_T_TankDestrSection_RhinoUP {
                    name = "Tank Destroyer Section (UP)";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";

                    class Unit0 {
                        vehicle = "B_T_AFV_Wheeled_01_up_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_AFV_Wheeled_01_up_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class B_T_TankPlatoon {
                    name = "Tank Platoon";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

                    class Unit0 {
                        vehicle = "B_T_MBT_01_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_MBT_01_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_MBT_01_cannon_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_MBT_01_cannon_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class B_T_TankPlatoon_AA {
                    name = "Tank Platoon (Combined)";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

                    class Unit0 {
                        vehicle = "B_T_MBT_01_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_APC_Tracked_01_aa_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_MBT_01_cannon_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_APC_Tracked_01_aa_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class B_T_TankSection {
                    name = "Tank Section";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

                    class Unit0 {
                        vehicle = "B_T_MBT_01_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_MBT_01_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class B_T_InfSentry {
                    name = "Sentry";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class B_T_InfSquad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_T_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class B_T_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_soldier_M_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_T_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_T_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_T_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class B_T_InfTeam {
                    name = "Fire Team";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_T_InfTeam_AA {
                    name = "Air-defense Team";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_T_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_T_InfTeam_Light {
                    name = "Fire Team (Light)";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_soldier_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_soldier_LAT2_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class JSOCInfantry {
                class Atlas_B_T_JSOCFAC {
                    name = "JSOC FAC Team";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_T_JSOC_JTAC_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_T_JSOC_Sharpshooter_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Atlas_B_T_JSOCPatrol {
                    name = "JSOC Patrol";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_T_JSOC_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_T_JSOC_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_T_JSOC_Medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_T_JSOC_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Atlas_B_T_JSOCTeam {
                    name = "JSOC Team";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_T_JSOC_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_T_JSOC_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_T_JSOC_Medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_T_JSOC_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_T_JSOC_JTAC_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_T_JSOC_Exp_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
            };
            class Mechanized {
                class B_T_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_APC_Wheeled_01_cannon_v2_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_T_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_T_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "B_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class B_T_MechInf_AA {
                    name = "Mechanized Air-defense Squad";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_APC_Tracked_01_aa_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_T_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_T_soldier_AA_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_T_soldier_AAA_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_T_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "B_T_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class B_T_MechInf_AT {
                    name = "Mechanized Anti-armor Squad";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_APC_Tracked_01_rcws_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_T_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_T_soldier_AT_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_T_soldier_AAT_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_T_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "B_T_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class B_T_MechInf_Support {
                    name = "Mechanized Support Squad";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_APC_Wheeled_01_cannon_v2_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_soldier_repair_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_T_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_T_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "B_T_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized {
                class B_T_MotInf_AA {
                    name = "Motorized Air-defense Team";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_MRAP_01_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class B_T_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_MRAP_01_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class B_T_MotInf_GMGTeam {
                    name = "Motorized GMG Team";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_MRAP_01_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_support_GMG_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class B_T_MotInf_MGTeam {
                    name = "Motorized HMG Team";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_MRAP_01_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_support_MG_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class B_T_MotInf_MortTeam {
                    name = "Motorized Mortar Team";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_MRAP_01_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_support_Mort_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_support_AMort_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class B_T_MotInf_Reinforcements {
                    name = "Motorized Reinforcements";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_Truck_01_transport_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "B_T_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "B_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "B_T_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "B_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "B_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "B_T_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "B_T_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "B_T_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit13 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit14 {
                        vehicle = "B_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit15 {
                        vehicle = "B_T_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit16 {
                        vehicle = "B_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };
                };
                class B_T_MotInf_Team {
                    name = "Motorized Team";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_MRAP_01_gmg_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
            class Naval {
                class B_T_DiverTeam {
                    name = "Diver Team";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_naval.paa";

                    class Unit0 {
                        vehicle = "B_T_diver_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_diver_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_diver_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_diver_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_T_DiverTeam_Boat {
                    name = "Diver Team (Boat)";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_naval.paa";

                    class Unit0 {
                        vehicle = "B_T_diver_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_diver_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_diver_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_diver_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_T_Boat_Transport_01_F";
                        rank = "PRIVATE";
                        position[] = {-32,-57,0};
                    };
                };
                class B_T_DiverTeam_SDV {
                    name = "Diver Team (SDV)";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_naval.paa";

                    class Unit0 {
                        vehicle = "B_T_diver_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_diver_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_diver_F";
                        rank = "PRIVATE";
                        position[] = {-6,-6,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_diver_F";
                        rank = "PRIVATE";
                        position[] = {11,-11,0};
                    };

                    class Unit4 {
                        vehicle = "B_SDV_01_F";
                        rank = "PRIVATE";
                        position[] = {-16,-16,0};
                    };

                    class Unit5 {
                        vehicle = "B_SDV_01_F";
                        rank = "PRIVATE";
                        position[] = {21,-21,0};
                    };
                };
                class B_T_sentryTeam_SpeedBoat {
                    name = "Sentry Team (Speed Boat)";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_naval.paa";

                    class Unit0 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_Boat_Armed_01_minigun_F";
                        rank = "PRIVATE";
                        position[] = {-32,-57,0};
                    };
                };
            };
            class SpecOps {
                class B_T_DiverTeam {
                    name = "Diver Team";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_diver_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_diver_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_diver_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_diver_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_T_ReconPatrol {
                    name = "Recon Patrol";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "B_T_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_recon_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_T_ReconSentry {
                    name = "Recon Sentry";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "B_T_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_recon_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class B_T_ReconSquad {
                    name = "Recon Squad";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "B_T_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_recon_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_T_recon_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_T_recon_JTAC_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_T_recon_exp_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_T_Recon_Sharpshooter_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class B_T_ReconTeam {
                    name = "Recon Team";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "B_T_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_recon_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_T_recon_JTAC_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_T_recon_exp_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
                class B_T_SniperTeam {
                    name = "Sniper Team";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "B_T_spotter_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_sniper_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
            };
            class Support {
                class B_T_Recon_EOD {
                    name = "Recon Support Team (EOD)";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_recon_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_recon_exp_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_recon_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_T_Support_CLS {
                    name = "Support Team (CLS)";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_T_Support_ENG {
                    name = "Support Team (Engineer)";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_soldier_repair_F";
                        rank = "PRIVATE";
                        position[] = {10,-5,0};
                    };
                };
                class B_T_Support_EOD {
                    name = "Support Team (EOD)";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_T_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_T_Support_GMG {
                    name = "GMG Team";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_support_GMG_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class B_T_Support_MG {
                    name = "HMG Team";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_support_MG_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class B_T_Support_Mort {
                    name = "Mortar Team";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";

                    class Unit0 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_T_support_Mort_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_T_support_AMort_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class B_T_Support_Mort_RF {
                    name = "Light Mortar Team";
                    side = 1;
                    faction = "BLU_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";

                    class Unit0 {
                        vehicle = "B_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_T_Support_CMort_RF";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_T_Support_CMort_RF";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
        };
    };
};
