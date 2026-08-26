//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class BLU_NATO_lxWS {
        displayName = "US (Desert)";
        side = 1;
        priority = 3;
        icon = "\A3_Aegis\Data_F_Aegis\FactionIcons\CfgFactionClasses_BLU_CA.paa";
        flag = "\A3\Data_F\Flags\flag_US_CO.paa";
    };
};

class CfgVehicles {

    class B_D_CTRG_CommandoMortar_RF;
    class B_D_CTRG_CommandoMortar_RF_OCimport_01 : B_D_CTRG_CommandoMortar_RF { scope = 0; class EventHandlers; };
    class B_D_CTRG_CommandoMortar_RF_OCimport_02 : B_D_CTRG_CommandoMortar_RF_OCimport_01 { class EventHandlers; };

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

    class B_HeavyGunner_F;
    class B_HeavyGunner_F_OCimport_01 : B_HeavyGunner_F { scope = 0; class EventHandlers; };
    class B_HeavyGunner_F_OCimport_02 : B_HeavyGunner_F_OCimport_01 { class EventHandlers; };

    class Aegis_B_Heli_Attack_03_F;
    class Aegis_B_Heli_Attack_03_F_OCimport_01 : Aegis_B_Heli_Attack_03_F { scope = 0; class EventHandlers; };
    class Aegis_B_Heli_Attack_03_F_OCimport_02 : Aegis_B_Heli_Attack_03_F_OCimport_01 { class EventHandlers; };

    class B_Heli_EC_03_RF;
    class B_Heli_EC_03_RF_OCimport_01 : B_Heli_EC_03_RF { scope = 0; class EventHandlers; };
    class B_Heli_EC_03_RF_OCimport_02 : B_Heli_EC_03_RF_OCimport_01 { class EventHandlers; };

    class B_Heli_EC_04_military_RF;
    class B_Heli_EC_04_military_RF_OCimport_01 : B_Heli_EC_04_military_RF { scope = 0; class EventHandlers; };
    class B_Heli_EC_04_military_RF_OCimport_02 : B_Heli_EC_04_military_RF_OCimport_01 { class EventHandlers; };

    class B_Heli_Transport_03_F;
    class B_Heli_Transport_03_F_OCimport_01 : B_Heli_Transport_03_F { scope = 0; class EventHandlers; };
    class B_Heli_Transport_03_F_OCimport_02 : B_Heli_Transport_03_F_OCimport_01 { class EventHandlers; };

    class B_Heli_Transport_03_unarmed_F;
    class B_Heli_Transport_03_unarmed_F_OCimport_01 : B_Heli_Transport_03_unarmed_F { scope = 0; class EventHandlers; };
    class B_Heli_Transport_03_unarmed_F_OCimport_02 : B_Heli_Transport_03_unarmed_F_OCimport_01 { class EventHandlers; };

    class B_helicrew_F;
    class B_helicrew_F_OCimport_01 : B_helicrew_F { scope = 0; class EventHandlers; };
    class B_helicrew_F_OCimport_02 : B_helicrew_F_OCimport_01 { class EventHandlers; };

    class B_LSV_01_AT_F;
    class B_LSV_01_AT_F_OCimport_01 : B_LSV_01_AT_F { scope = 0; class EventHandlers; };
    class B_LSV_01_AT_F_OCimport_02 : B_LSV_01_AT_F_OCimport_01 { class EventHandlers; };

    class B_LSV_01_armed_F;
    class B_LSV_01_armed_F_OCimport_01 : B_LSV_01_armed_F { scope = 0; class EventHandlers; };
    class B_LSV_01_armed_F_OCimport_02 : B_LSV_01_armed_F_OCimport_01 { class EventHandlers; };

    class B_LSV_01_light_F;
    class B_LSV_01_light_F_OCimport_01 : B_LSV_01_light_F { scope = 0; class EventHandlers; };
    class B_LSV_01_light_F_OCimport_02 : B_LSV_01_light_F_OCimport_01 { class EventHandlers; };

    class B_LSV_01_unarmed_F;
    class B_LSV_01_unarmed_F_OCimport_01 : B_LSV_01_unarmed_F { scope = 0; class EventHandlers; };
    class B_LSV_01_unarmed_F_OCimport_02 : B_LSV_01_unarmed_F_OCimport_01 { class EventHandlers; };

    class Aegis_B_Pickup_AT_RF;
    class Aegis_B_Pickup_AT_RF_OCimport_01 : Aegis_B_Pickup_AT_RF { scope = 0; class EventHandlers; };
    class Aegis_B_Pickup_AT_RF_OCimport_02 : Aegis_B_Pickup_AT_RF_OCimport_01 { class EventHandlers; };

    class B_Pickup_Comms_rf;
    class B_Pickup_Comms_rf_OCimport_01 : B_Pickup_Comms_rf { scope = 0; class EventHandlers; };
    class B_Pickup_Comms_rf_OCimport_02 : B_Pickup_Comms_rf_OCimport_01 { class EventHandlers; };

    class B_Pickup_rf;
    class B_Pickup_rf_OCimport_01 : B_Pickup_rf { scope = 0; class EventHandlers; };
    class B_Pickup_rf_OCimport_02 : B_Pickup_rf_OCimport_01 { class EventHandlers; };

    class B_Pickup_aat_rf;
    class B_Pickup_aat_rf_OCimport_01 : B_Pickup_aat_rf { scope = 0; class EventHandlers; };
    class B_Pickup_aat_rf_OCimport_02 : B_Pickup_aat_rf_OCimport_01 { class EventHandlers; };

    class B_Pickup_mmg_rf;
    class B_Pickup_mmg_rf_OCimport_01 : B_Pickup_mmg_rf { scope = 0; class EventHandlers; };
    class B_Pickup_mmg_rf_OCimport_02 : B_Pickup_mmg_rf_OCimport_01 { class EventHandlers; };

    class Radar_System_01_base_F;
    class Radar_System_01_base_F_OCimport_01 : Radar_System_01_base_F { scope = 0; class EventHandlers; };
    class Radar_System_01_base_F_OCimport_02 : Radar_System_01_base_F_OCimport_01 { class EventHandlers; };

    class B_RadioOperator_F;
    class B_RadioOperator_F_OCimport_01 : B_RadioOperator_F { scope = 0; class EventHandlers; };
    class B_RadioOperator_F_OCimport_02 : B_RadioOperator_F_OCimport_01 { class EventHandlers; };

    class B_recon_CQ_F;
    class B_recon_CQ_F_OCimport_01 : B_recon_CQ_F { scope = 0; class EventHandlers; };
    class B_recon_CQ_F_OCimport_02 : B_recon_CQ_F_OCimport_01 { class EventHandlers; };

    class B_recon_GL_F;
    class B_recon_GL_F_OCimport_01 : B_recon_GL_F { scope = 0; class EventHandlers; };
    class B_recon_GL_F_OCimport_02 : B_recon_GL_F_OCimport_01 { class EventHandlers; };

    class B_recon_MG_F;
    class B_recon_MG_F_OCimport_01 : B_recon_MG_F { scope = 0; class EventHandlers; };
    class B_recon_MG_F_OCimport_02 : B_recon_MG_F_OCimport_01 { class EventHandlers; };

    class B_Recon_Sharpshooter_F;
    class B_Recon_Sharpshooter_F_OCimport_01 : B_Recon_Sharpshooter_F { scope = 0; class EventHandlers; };
    class B_Recon_Sharpshooter_F_OCimport_02 : B_Recon_Sharpshooter_F_OCimport_01 { class EventHandlers; };

    class SAM_System_03_base_F;
    class SAM_System_03_base_F_OCimport_01 : SAM_System_03_base_F { scope = 0; class EventHandlers; };
    class SAM_System_03_base_F_OCimport_02 : SAM_System_03_base_F_OCimport_01 { class EventHandlers; };

    class B_Sharpshooter_F;
    class B_Sharpshooter_F_OCimport_01 : B_Sharpshooter_F { scope = 0; class EventHandlers; };
    class B_Sharpshooter_F_OCimport_02 : B_Sharpshooter_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_CQ_F;
    class B_Soldier_CQ_F_OCimport_01 : B_Soldier_CQ_F { scope = 0; class EventHandlers; };
    class B_Soldier_CQ_F_OCimport_02 : B_Soldier_CQ_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_MG_F;
    class B_Soldier_MG_F_OCimport_01 : B_Soldier_MG_F { scope = 0; class EventHandlers; };
    class B_Soldier_MG_F_OCimport_02 : B_Soldier_MG_F_OCimport_01 { class EventHandlers; };

    class B_Static_Designator_01_F;
    class B_Static_Designator_01_F_OCimport_01 : B_Static_Designator_01_F { scope = 0; class EventHandlers; };
    class B_Static_Designator_01_F_OCimport_02 : B_Static_Designator_01_F_OCimport_01 { class EventHandlers; };

    class B_TwinMortar_RF;
    class B_TwinMortar_RF_OCimport_01 : B_TwinMortar_RF { scope = 0; class EventHandlers; };
    class B_TwinMortar_RF_OCimport_02 : B_TwinMortar_RF_OCimport_01 { class EventHandlers; };

    class B_UAV_01_F;
    class B_UAV_01_F_OCimport_01 : B_UAV_01_F { scope = 0; class EventHandlers; };
    class B_UAV_01_F_OCimport_02 : B_UAV_01_F_OCimport_01 { class EventHandlers; };

    class B_UAV_02_dynamicLoadout_F;
    class B_UAV_02_dynamicLoadout_F_OCimport_01 : B_UAV_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class B_UAV_02_dynamicLoadout_F_OCimport_02 : B_UAV_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class B_UAV_02_lxWS;
    class B_UAV_02_lxWS_OCimport_01 : B_UAV_02_lxWS { scope = 0; class EventHandlers; };
    class B_UAV_02_lxWS_OCimport_02 : B_UAV_02_lxWS_OCimport_01 { class EventHandlers; };

    class UAV_03_dynamicLoadout_base_F;
    class UAV_03_dynamicLoadout_base_F_OCimport_01 : UAV_03_dynamicLoadout_base_F { scope = 0; class EventHandlers; };
    class UAV_03_dynamicLoadout_base_F_OCimport_02 : UAV_03_dynamicLoadout_base_F_OCimport_01 { class EventHandlers; };

    class B_W_UAV_05_F;
    class B_W_UAV_05_F_OCimport_01 : B_W_UAV_05_F { scope = 0; class EventHandlers; };
    class B_W_UAV_05_F_OCimport_02 : B_W_UAV_05_F_OCimport_01 { class EventHandlers; };

    class UAV_06_base_F;
    class UAV_06_base_F_OCimport_01 : UAV_06_base_F { scope = 0; class EventHandlers; };
    class UAV_06_base_F_OCimport_02 : UAV_06_base_F_OCimport_01 { class EventHandlers; };

    class UAV_06_medical_base_F;
    class UAV_06_medical_base_F_OCimport_01 : UAV_06_medical_base_F { scope = 0; class EventHandlers; };
    class UAV_06_medical_base_F_OCimport_02 : UAV_06_medical_base_F_OCimport_01 { class EventHandlers; };

    class UGV_02_Demining_Base_F;
    class UGV_02_Demining_Base_F_OCimport_01 : UGV_02_Demining_Base_F { scope = 0; class EventHandlers; };
    class UGV_02_Demining_Base_F_OCimport_02 : UGV_02_Demining_Base_F_OCimport_01 { class EventHandlers; };

    class B_D_soldier_UAV01_lxWS;
    class B_D_soldier_UAV01_lxWS_OCimport_01 : B_D_soldier_UAV01_lxWS { scope = 0; class EventHandlers; };
    class B_D_soldier_UAV01_lxWS_OCimport_02 : B_D_soldier_UAV01_lxWS_OCimport_01 { class EventHandlers; };

    class B_D_support_AMort_lxWS;
    class B_D_support_AMort_lxWS_OCimport_01 : B_D_support_AMort_lxWS { scope = 0; class EventHandlers; };
    class B_D_support_AMort_lxWS_OCimport_02 : B_D_support_AMort_lxWS_OCimport_01 { class EventHandlers; };

    class Atlas_B_D_Soldier_JSOC_base;
    class Atlas_B_D_Soldier_JSOC_base_OCimport_01 : Atlas_B_D_Soldier_JSOC_base { scope = 0; class EventHandlers; };
    class Atlas_B_D_Soldier_JSOC_base_OCimport_02 : Atlas_B_D_Soldier_JSOC_base_OCimport_01 { class EventHandlers; };

    class Atlas_B_D_JSOC_M_F;
    class Atlas_B_D_JSOC_M_F_OCimport_01 : Atlas_B_D_JSOC_M_F { scope = 0; class EventHandlers; };
    class Atlas_B_D_JSOC_M_F_OCimport_02 : Atlas_B_D_JSOC_M_F_OCimport_01 { class EventHandlers; };

    class B_AFV_Wheeled_01_cannon_F;
    class B_AFV_Wheeled_01_cannon_F_OCimport_01 : B_AFV_Wheeled_01_cannon_F { scope = 0; class EventHandlers; };
    class B_AFV_Wheeled_01_cannon_F_OCimport_02 : B_AFV_Wheeled_01_cannon_F_OCimport_01 { class EventHandlers; };

    class B_AFV_Wheeled_01_up_cannon_F;
    class B_AFV_Wheeled_01_up_cannon_F_OCimport_01 : B_AFV_Wheeled_01_up_cannon_F { scope = 0; class EventHandlers; };
    class B_AFV_Wheeled_01_up_cannon_F_OCimport_02 : B_AFV_Wheeled_01_up_cannon_F_OCimport_01 { class EventHandlers; };

    class B_APC_Tracked_01_CRV_F;
    class B_APC_Tracked_01_CRV_F_OCimport_01 : B_APC_Tracked_01_CRV_F { scope = 0; class EventHandlers; };
    class B_APC_Tracked_01_CRV_F_OCimport_02 : B_APC_Tracked_01_CRV_F_OCimport_01 { class EventHandlers; };

    class B_APC_Tracked_01_AA_F;
    class B_APC_Tracked_01_AA_F_OCimport_01 : B_APC_Tracked_01_AA_F { scope = 0; class EventHandlers; };
    class B_APC_Tracked_01_AA_F_OCimport_02 : B_APC_Tracked_01_AA_F_OCimport_01 { class EventHandlers; };

    class B_APC_Tracked_01_rcws_F;
    class B_APC_Tracked_01_rcws_F_OCimport_01 : B_APC_Tracked_01_rcws_F { scope = 0; class EventHandlers; };
    class B_APC_Tracked_01_rcws_F_OCimport_02 : B_APC_Tracked_01_rcws_F_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_01_atgm_base_v2;
    class APC_Wheeled_01_atgm_base_v2_OCimport_01 : APC_Wheeled_01_atgm_base_v2 { scope = 0; class EventHandlers; };
    class APC_Wheeled_01_atgm_base_v2_OCimport_02 : APC_Wheeled_01_atgm_base_v2_OCimport_01 { class EventHandlers; };

    class B_APC_Wheeled_01_cannon_v2_F;
    class B_APC_Wheeled_01_cannon_v2_F_OCimport_01 : B_APC_Wheeled_01_cannon_v2_F { scope = 0; class EventHandlers; };
    class B_APC_Wheeled_01_cannon_v2_F_OCimport_02 : B_APC_Wheeled_01_cannon_v2_F_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_01_command_base_lxWS;
    class APC_Wheeled_01_command_base_lxWS_OCimport_01 : APC_Wheeled_01_command_base_lxWS { scope = 0; class EventHandlers; };
    class APC_Wheeled_01_command_base_lxWS_OCimport_02 : APC_Wheeled_01_command_base_lxWS_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_01_mortar_base_lxWS;
    class APC_Wheeled_01_mortar_base_lxWS_OCimport_01 : APC_Wheeled_01_mortar_base_lxWS { scope = 0; class EventHandlers; };
    class APC_Wheeled_01_mortar_base_lxWS_OCimport_02 : APC_Wheeled_01_mortar_base_lxWS_OCimport_01 { class EventHandlers; };

    class B_Fighter_Pilot_F;
    class B_Fighter_Pilot_F_OCimport_01 : B_Fighter_Pilot_F { scope = 0; class EventHandlers; };
    class B_Fighter_Pilot_F_OCimport_02 : B_Fighter_Pilot_F_OCimport_01 { class EventHandlers; };

    class B_Helipilot_F;
    class B_Helipilot_F_OCimport_01 : B_Helipilot_F { scope = 0; class EventHandlers; };
    class B_Helipilot_F_OCimport_02 : B_Helipilot_F_OCimport_01 { class EventHandlers; };

    class B_Heli_Attack_01_dynamicLoadout_F;
    class B_Heli_Attack_01_dynamicLoadout_F_OCimport_01 : B_Heli_Attack_01_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class B_Heli_Attack_01_dynamicLoadout_F_OCimport_02 : B_Heli_Attack_01_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class B_Heli_Light_01_dynamicLoadout_F;
    class B_Heli_Light_01_dynamicLoadout_F_OCimport_01 : B_Heli_Light_01_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class B_Heli_Light_01_dynamicLoadout_F_OCimport_02 : B_Heli_Light_01_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class B_Heli_Light_01_F;
    class B_Heli_Light_01_F_OCimport_01 : B_Heli_Light_01_F { scope = 0; class EventHandlers; };
    class B_Heli_Light_01_F_OCimport_02 : B_Heli_Light_01_F_OCimport_01 { class EventHandlers; };

    class B_Heli_Transport_01_F;
    class B_Heli_Transport_01_F_OCimport_01 : B_Heli_Transport_01_F { scope = 0; class EventHandlers; };
    class B_Heli_Transport_01_F_OCimport_02 : B_Heli_Transport_01_F_OCimport_01 { class EventHandlers; };

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

    class B_MRAP_01_gmg_F;
    class B_MRAP_01_gmg_F_OCimport_01 : B_MRAP_01_gmg_F { scope = 0; class EventHandlers; };
    class B_MRAP_01_gmg_F_OCimport_02 : B_MRAP_01_gmg_F_OCimport_01 { class EventHandlers; };

    class B_MRAP_01_hmg_F;
    class B_MRAP_01_hmg_F_OCimport_01 : B_MRAP_01_hmg_F { scope = 0; class EventHandlers; };
    class B_MRAP_01_hmg_F_OCimport_02 : B_MRAP_01_hmg_F_OCimport_01 { class EventHandlers; };

    class B_MRAP_01_F;
    class B_MRAP_01_F_OCimport_01 : B_MRAP_01_F { scope = 0; class EventHandlers; };
    class B_MRAP_01_F_OCimport_02 : B_MRAP_01_F_OCimport_01 { class EventHandlers; };

    class B_Mortar_01_F;
    class B_Mortar_01_F_OCimport_01 : B_Mortar_01_F { scope = 0; class EventHandlers; };
    class B_Mortar_01_F_OCimport_02 : B_Mortar_01_F_OCimport_01 { class EventHandlers; };

    class B_T_Pilot_F;
    class B_T_Pilot_F_OCimport_01 : B_T_Pilot_F { scope = 0; class EventHandlers; };
    class B_T_Pilot_F_OCimport_02 : B_T_Pilot_F_OCimport_01 { class EventHandlers; };

    class B_Plane_CAS_01_dynamicLoadout_F;
    class B_Plane_CAS_01_dynamicLoadout_F_OCimport_01 : B_Plane_CAS_01_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class B_Plane_CAS_01_dynamicLoadout_F_OCimport_02 : B_Plane_CAS_01_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class B_Plane_Fighter_01_F;
    class B_Plane_Fighter_01_F_OCimport_01 : B_Plane_Fighter_01_F { scope = 0; class EventHandlers; };
    class B_Plane_Fighter_01_F_OCimport_02 : B_Plane_Fighter_01_F_OCimport_01 { class EventHandlers; };

    class B_Plane_Fighter_01_Stealth_F;
    class B_Plane_Fighter_01_Stealth_F_OCimport_01 : B_Plane_Fighter_01_Stealth_F { scope = 0; class EventHandlers; };
    class B_Plane_Fighter_01_Stealth_F_OCimport_02 : B_Plane_Fighter_01_Stealth_F_OCimport_01 { class EventHandlers; };

    class Plane_Fighter_05_Base_F;
    class Plane_Fighter_05_Base_F_OCimport_01 : Plane_Fighter_05_Base_F { scope = 0; class EventHandlers; };
    class Plane_Fighter_05_Base_F_OCimport_02 : Plane_Fighter_05_Base_F_OCimport_01 { class EventHandlers; };

    class B_Quadbike_01_F;
    class B_Quadbike_01_F_OCimport_01 : B_Quadbike_01_F { scope = 0; class EventHandlers; };
    class B_Quadbike_01_F_OCimport_02 : B_Quadbike_01_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_A_F;
    class B_Soldier_A_F_OCimport_01 : B_Soldier_A_F { scope = 0; class EventHandlers; };
    class B_Soldier_A_F_OCimport_02 : B_Soldier_A_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_GL_F;
    class B_Soldier_GL_F_OCimport_01 : B_Soldier_GL_F { scope = 0; class EventHandlers; };
    class B_Soldier_GL_F_OCimport_02 : B_Soldier_GL_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_SL_F;
    class B_Soldier_SL_F_OCimport_01 : B_Soldier_SL_F { scope = 0; class EventHandlers; };
    class B_Soldier_SL_F_OCimport_02 : B_Soldier_SL_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_TL_F;
    class B_Soldier_TL_F_OCimport_01 : B_Soldier_TL_F { scope = 0; class EventHandlers; };
    class B_Soldier_TL_F_OCimport_02 : B_Soldier_TL_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_lite_F;
    class B_Soldier_lite_F_OCimport_01 : B_Soldier_lite_F { scope = 0; class EventHandlers; };
    class B_Soldier_lite_F_OCimport_02 : B_Soldier_lite_F_OCimport_01 { class EventHandlers; };

    class B_soldier_F;
    class B_soldier_F_OCimport_01 : B_soldier_F { scope = 0; class EventHandlers; };
    class B_soldier_F_OCimport_02 : B_soldier_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_unarmed_F;
    class B_Soldier_unarmed_F_OCimport_01 : B_Soldier_unarmed_F { scope = 0; class EventHandlers; };
    class B_Soldier_unarmed_F_OCimport_02 : B_Soldier_unarmed_F_OCimport_01 { class EventHandlers; };

    class B_Survivor_F;
    class B_Survivor_F_OCimport_01 : B_Survivor_F { scope = 0; class EventHandlers; };
    class B_Survivor_F_OCimport_02 : B_Survivor_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_Repair_F;
    class B_Truck_01_Repair_F_OCimport_01 : B_Truck_01_Repair_F { scope = 0; class EventHandlers; };
    class B_Truck_01_Repair_F_OCimport_02 : B_Truck_01_Repair_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_ammo_F;
    class B_Truck_01_ammo_F_OCimport_01 : B_Truck_01_ammo_F { scope = 0; class EventHandlers; };
    class B_Truck_01_ammo_F_OCimport_02 : B_Truck_01_ammo_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_box_F;
    class B_Truck_01_box_F_OCimport_01 : B_Truck_01_box_F { scope = 0; class EventHandlers; };
    class B_Truck_01_box_F_OCimport_02 : B_Truck_01_box_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_cargo_F;
    class B_Truck_01_cargo_F_OCimport_01 : B_Truck_01_cargo_F { scope = 0; class EventHandlers; };
    class B_Truck_01_cargo_F_OCimport_02 : B_Truck_01_cargo_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_covered_F;
    class B_Truck_01_covered_F_OCimport_01 : B_Truck_01_covered_F { scope = 0; class EventHandlers; };
    class B_Truck_01_covered_F_OCimport_02 : B_Truck_01_covered_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_flatbed_F;
    class B_Truck_01_flatbed_F_OCimport_01 : B_Truck_01_flatbed_F { scope = 0; class EventHandlers; };
    class B_Truck_01_flatbed_F_OCimport_02 : B_Truck_01_flatbed_F_OCimport_01 { class EventHandlers; };

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

    class B_UGV_01_F;
    class B_UGV_01_F_OCimport_01 : B_UGV_01_F { scope = 0; class EventHandlers; };
    class B_UGV_01_F_OCimport_02 : B_UGV_01_F_OCimport_01 { class EventHandlers; };

    class B_UGV_01_rcws_F;
    class B_UGV_01_rcws_F_OCimport_01 : B_UGV_01_rcws_F { scope = 0; class EventHandlers; };
    class B_UGV_01_rcws_F_OCimport_02 : B_UGV_01_rcws_F_OCimport_01 { class EventHandlers; };

    class VTOL_01_armed_base_F;
    class VTOL_01_armed_base_F_OCimport_01 : VTOL_01_armed_base_F { scope = 0; class EventHandlers; };
    class VTOL_01_armed_base_F_OCimport_02 : VTOL_01_armed_base_F_OCimport_01 { class EventHandlers; };

    class VTOL_01_infantry_base_F;
    class VTOL_01_infantry_base_F_OCimport_01 : VTOL_01_infantry_base_F { scope = 0; class EventHandlers; };
    class VTOL_01_infantry_base_F_OCimport_02 : VTOL_01_infantry_base_F_OCimport_01 { class EventHandlers; };

    class VTOL_01_vehicle_base_F;
    class VTOL_01_vehicle_base_F_OCimport_01 : VTOL_01_vehicle_base_F { scope = 0; class EventHandlers; };
    class VTOL_01_vehicle_base_F_OCimport_02 : VTOL_01_vehicle_base_F_OCimport_01 { class EventHandlers; };

    class B_crew_F;
    class B_crew_F_OCimport_01 : B_crew_F { scope = 0; class EventHandlers; };
    class B_crew_F_OCimport_02 : B_crew_F_OCimport_01 { class EventHandlers; };

    class B_engineer_F;
    class B_engineer_F_OCimport_01 : B_engineer_F { scope = 0; class EventHandlers; };
    class B_engineer_F_OCimport_02 : B_engineer_F_OCimport_01 { class EventHandlers; };

    class B_medic_F;
    class B_medic_F_OCimport_01 : B_medic_F { scope = 0; class EventHandlers; };
    class B_medic_F_OCimport_02 : B_medic_F_OCimport_01 { class EventHandlers; };

    class B_officer_F;
    class B_officer_F_OCimport_01 : B_officer_F { scope = 0; class EventHandlers; };
    class B_officer_F_OCimport_02 : B_officer_F_OCimport_01 { class EventHandlers; };

    class B_recon_AR_F;
    class B_recon_AR_F_OCimport_01 : B_recon_AR_F { scope = 0; class EventHandlers; };
    class B_recon_AR_F_OCimport_02 : B_recon_AR_F_OCimport_01 { class EventHandlers; };

    class B_recon_JTAC_F;
    class B_recon_JTAC_F_OCimport_01 : B_recon_JTAC_F { scope = 0; class EventHandlers; };
    class B_recon_JTAC_F_OCimport_02 : B_recon_JTAC_F_OCimport_01 { class EventHandlers; };

    class B_recon_LAT_F;
    class B_recon_LAT_F_OCimport_01 : B_recon_LAT_F { scope = 0; class EventHandlers; };
    class B_recon_LAT_F_OCimport_02 : B_recon_LAT_F_OCimport_01 { class EventHandlers; };

    class B_recon_M_F;
    class B_recon_M_F_OCimport_01 : B_recon_M_F { scope = 0; class EventHandlers; };
    class B_recon_M_F_OCimport_02 : B_recon_M_F_OCimport_01 { class EventHandlers; };

    class B_recon_TL_F;
    class B_recon_TL_F_OCimport_01 : B_recon_TL_F { scope = 0; class EventHandlers; };
    class B_recon_TL_F_OCimport_02 : B_recon_TL_F_OCimport_01 { class EventHandlers; };

    class B_recon_exp_F;
    class B_recon_exp_F_OCimport_01 : B_recon_exp_F { scope = 0; class EventHandlers; };
    class B_recon_exp_F_OCimport_02 : B_recon_exp_F_OCimport_01 { class EventHandlers; };

    class B_recon_F;
    class B_recon_F_OCimport_01 : B_recon_F { scope = 0; class EventHandlers; };
    class B_recon_F_OCimport_02 : B_recon_F_OCimport_01 { class EventHandlers; };

    class B_recon_medic_F;
    class B_recon_medic_F_OCimport_01 : B_recon_medic_F { scope = 0; class EventHandlers; };
    class B_recon_medic_F_OCimport_02 : B_recon_medic_F_OCimport_01 { class EventHandlers; };

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

    class B_soldier_LAT2_F;
    class B_soldier_LAT2_F_OCimport_01 : B_soldier_LAT2_F { scope = 0; class EventHandlers; };
    class B_soldier_LAT2_F_OCimport_02 : B_soldier_LAT2_F_OCimport_01 { class EventHandlers; };

    class B_soldier_LAT_F;
    class B_soldier_LAT_F_OCimport_01 : B_soldier_LAT_F { scope = 0; class EventHandlers; };
    class B_soldier_LAT_F_OCimport_02 : B_soldier_LAT_F_OCimport_01 { class EventHandlers; };

    class B_soldier_M_F;
    class B_soldier_M_F_OCimport_01 : B_soldier_M_F { scope = 0; class EventHandlers; };
    class B_soldier_M_F_OCimport_02 : B_soldier_M_F_OCimport_01 { class EventHandlers; };

    class B_soldier_PG_F;
    class B_soldier_PG_F_OCimport_01 : B_soldier_PG_F { scope = 0; class EventHandlers; };
    class B_soldier_PG_F_OCimport_02 : B_soldier_PG_F_OCimport_01 { class EventHandlers; };

    class B_soldier_UAV_F;
    class B_soldier_UAV_F_OCimport_01 : B_soldier_UAV_F { scope = 0; class EventHandlers; };
    class B_soldier_UAV_F_OCimport_02 : B_soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class B_soldier_UAV_lxWS;
    class B_soldier_UAV_lxWS_OCimport_01 : B_soldier_UAV_lxWS { scope = 0; class EventHandlers; };
    class B_soldier_UAV_lxWS_OCimport_02 : B_soldier_UAV_lxWS_OCimport_01 { class EventHandlers; };

    class B_soldier_exp_F;
    class B_soldier_exp_F_OCimport_01 : B_soldier_exp_F { scope = 0; class EventHandlers; };
    class B_soldier_exp_F_OCimport_02 : B_soldier_exp_F_OCimport_01 { class EventHandlers; };

    class B_soldier_mine_F;
    class B_soldier_mine_F_OCimport_01 : B_soldier_mine_F { scope = 0; class EventHandlers; };
    class B_soldier_mine_F_OCimport_02 : B_soldier_mine_F_OCimport_01 { class EventHandlers; };

    class B_soldier_repair_F;
    class B_soldier_repair_F_OCimport_01 : B_soldier_repair_F { scope = 0; class EventHandlers; };
    class B_soldier_repair_F_OCimport_02 : B_soldier_repair_F_OCimport_01 { class EventHandlers; };

    class B_static_AA_F;
    class B_static_AA_F_OCimport_01 : B_static_AA_F { scope = 0; class EventHandlers; };
    class B_static_AA_F_OCimport_02 : B_static_AA_F_OCimport_01 { class EventHandlers; };

    class B_static_AT_F;
    class B_static_AT_F_OCimport_01 : B_static_AT_F { scope = 0; class EventHandlers; };
    class B_static_AT_F_OCimport_02 : B_static_AT_F_OCimport_01 { class EventHandlers; };

    class B_support_AMort_F;
    class B_support_AMort_F_OCimport_01 : B_support_AMort_F { scope = 0; class EventHandlers; };
    class B_support_AMort_F_OCimport_02 : B_support_AMort_F_OCimport_01 { class EventHandlers; };

    class EF_AH99J_dynamicLoadout_base;
    class EF_AH99J_dynamicLoadout_base_OCimport_01 : EF_AH99J_dynamicLoadout_base { scope = 0; class EventHandlers; };
    class EF_AH99J_dynamicLoadout_base_OCimport_02 : EF_AH99J_dynamicLoadout_base_OCimport_01 { class EventHandlers; };

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

    class Aegis_B_D_CommandoMortar_RF : B_D_CTRG_CommandoMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RSG60";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_GMG_01_A_F : B_GMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307A";
        side = 1;
        faction = "blu_nato_lxws";
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

    class Aegis_B_D_GMG_01_F : B_GMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_GMG_01_high_F : B_GMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307 (High)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_HMG_01_A_F : B_HMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312A";
        side = 1;
        faction = "blu_nato_lxws";
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

    class Aegis_B_D_HMG_01_F : B_HMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_HMG_01_high_F : B_HMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312 (High)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_HeavyGunner_F : B_HeavyGunner_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_tshirt";

        linkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"MMG_02_sand_RCO_LP_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"MMG_02_sand_RCO_LP_F","hgun_P07_F","Throw","Put"};

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

    class Aegis_B_D_Heli_Attack_03_F : Aegis_B_Heli_Attack_03_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-64E Apache";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_Helipilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_Heli_EC_03_RF : B_Heli_EC_03_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "H225M Super Cougar";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_HeliPilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_Heli_EC_04_military_RF : B_Heli_EC_04_military_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "H225M Super Cougar (Unarmed)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_HeliPilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_Heli_Transport_03_F : B_Heli_Transport_03_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH-47I Chinook";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_HeliPilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_Heli_Transport_03_unarmed_F : B_Heli_Transport_03_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH-47I Chinook (unarmed)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_HeliPilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_Helicrew_F : B_helicrew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_pilot"};

        uniformClass = "U_B_HeliPilotCoveralls";

        linkedItems[] = {"V_TacVest_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_TacVest_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MXC_Holo_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_Holo_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_LSV_01_AT_F : B_LSV_01_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (Mini-Spike AT)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_LSV_01_armed_F : B_LSV_01_armed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (XM312)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_LSV_01_light_F : B_LSV_01_light_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (light)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_LSV_01_unarmed_F : B_LSV_01_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_Pickup_AT_RF : Aegis_B_Pickup_AT_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Aegis_B_D_Pickup_AT_RF";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_Pickup_Comms_rf : B_Pickup_Comms_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Comms)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_Pickup_RF : B_Pickup_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_Pickup_aat_rf : B_Pickup_aat_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (AA)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_Pickup_mmg_rf : B_Pickup_mmg_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (MMG)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_Radar_System_01_F : Radar_System_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AN/MPQ-105 Radar";
        side = 1;
        faction = "blu_nato_lxws";
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

    class Aegis_B_D_RadioOperator_F : B_RadioOperator_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_vest";

        backpack = "Aegis_B_RadioBag_01_des_lxWS";

        linkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_Holo_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Holo_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_Recon_CQ_F : B_recon_CQ_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (Shotgun)";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_vest";

        linkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_light_sand","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_light_sand","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"sgun_KSG_ACO_F","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"sgun_KSG_ACO_F","hgun_P07_snds_F","Throw","Put"};

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

    class Aegis_B_D_Recon_GL_F : B_recon_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Grenadier";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_vest";

        linkedItems[] = {"V_lxWS_PlateCarrier2_desert","H_HelmetB_light_sand","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier2_desert","H_HelmetB_light_sand","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_GL_snd_RCO_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_GL_snd_RCO_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_Recon_MG_F : B_recon_MG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Gunner";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        linkedItems[] = {"V_lxWS_PlateCarrier2_desert","H_HelmetB_light_sand","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier2_desert","H_HelmetB_light_sand","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"LMG_Mk200_plain_RCO_LP_S_F","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Mk200_plain_RCO_LP_S_F","hgun_P07_snds_F","Throw","Put"};

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

    class Aegis_B_D_Recon_Sharpshooter : B_Recon_Sharpshooter_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Sharpshooter";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_tshirt";

        linkedItems[] = {"V_TacVest_khk","lxWS_H_booniehat_desert","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_TacVest_khk","lxWS_H_booniehat_desert","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"srifle_EBR_blk_DMS_LP_BI_S_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_EBR_blk_DMS_LP_BI_S_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};

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

    class Aegis_B_D_SAM_System_03_F : SAM_System_03_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MIM-104 Patriot";
        side = 1;
        faction = "blu_nato_lxws";
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

    class Aegis_B_D_Sharpshooter_F : B_Sharpshooter_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_vest";

        linkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"srifle_DMR_03_tan_AMS_LP_F","hgun_P07_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_03_tan_AMS_LP_F","hgun_P07_F","Throw","Put","Rangefinder"};

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

    class Aegis_B_D_Soldier_CQ_F : B_Soldier_CQ_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        linkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"sgun_KSG_ACO_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"sgun_KSG_ACO_F","hgun_P07_F","Throw","Put"};

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

    class Aegis_B_D_Soldier_MG_F : B_Soldier_MG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_vest";

        linkedItems[] = {"V_lxWS_PlateCarrier2_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier2_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"LMG_Mk200_plain_RCO_LP_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Mk200_plain_RCO_LP_F","hgun_P07_F","Throw","Put"};

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

    class Aegis_B_D_Static_Designator_01_F : B_Static_Designator_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Remote Designator";
        side = 1;
        faction = "blu_nato_lxws";
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

    class Aegis_B_D_TwinMortar_RF : B_TwinMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMOS Container";
        side = 1;
        faction = "blu_nato_lxws";
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

    class Aegis_B_D_UAV_01_F : B_UAV_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR-2 Darter";
        side = 1;
        faction = "blu_nato_lxws";
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

    class Aegis_B_D_UAV_02_dynamicLoadout_F : B_UAV_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "YABHON-R3";
        side = 1;
        faction = "blu_nato_lxws";
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

    class Aegis_B_D_UAV_02_lxWS : B_UAV_02_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AP-5 Bustard";
        side = 1;
        faction = "blu_nato_lxws";
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

    class Aegis_B_D_UAV_03_dynamicLoadout_F : UAV_03_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MQ-12 Falcon";
        side = 1;
        faction = "blu_nato_lxws";
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

    class Aegis_B_D_UAV_05_F : B_W_UAV_05_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XQ-47B";
        side = 1;
        faction = "blu_nato_lxws";
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

    class Aegis_B_D_UAV_06_F : UAV_06_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican";
        side = 1;
        faction = "blu_nato_lxws";
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

    class Aegis_B_D_UAV_06_medical_F : UAV_06_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican (Medical)";
        side = 1;
        faction = "blu_nato_lxws";
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

    class Aegis_B_D_UGV_02_Demining_F : UGV_02_Demining_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ED-1D Pelter";
        side = 1;
        faction = "blu_nato_lxws";
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

    class Aegis_B_D_soldier_UAV_06_F : B_D_soldier_UAV01_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        backpack = "B_UAV_06_backpack_F";

        linkedItems[] = {"V_lxWS_PlateCarrierSpec_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrierSpec_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};

        weapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_soldier_UAV_06_medical_F : B_D_soldier_UAV01_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        backpack = "B_UAV_06_medical_backpack_F";

        linkedItems[] = {"V_lxWS_PlateCarrierSpec_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrierSpec_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};

        weapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_soldier_UGV_02_Demining_F : B_D_soldier_UAV01_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1D)";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        backpack = "B_UGV_02_Demining_backpack_F";

        linkedItems[] = {"V_lxWS_PlateCarrierSpec_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrierSpec_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};

        weapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_D_support_CMort_RF : B_D_support_AMort_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_tshirt";

        backpack = "B_D_CTRG_CommandoMortar_weapon_RF";

        linkedItems[] = {"V_Chestrig_khk","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_Chestrig_khk","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_D_JSOC_AR_F : Atlas_B_D_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_D_JSOC_StealthUniform_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Shemag_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Shemag_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};

        weapons[] = {"Atlas_arifle_MX_SW_HAMR_IR_Snds_BI_F","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_MX_SW_HAMR_IR_Snds_BI_F","hgun_P07_snds_F","Throw","Put"};

        magazines[] = {"100rnd_65x39_caseless_mag","100rnd_65x39_caseless_mag","100rnd_65x39_caseless_mag","100rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"100rnd_65x39_caseless_mag","100rnd_65x39_caseless_mag","100rnd_65x39_caseless_mag","100rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_D_JSOC_Exp_F : Atlas_B_D_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_D_JSOC_StealthUniform_RolledUp_F";

        backpack = "Atlas_B_D_AssaultPack_JSOC_Exp_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};

        weapons[] = {"Atlas_arifle_MXC_Holo_IR_Snds_F","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_MXC_Holo_IR_Snds_F","hgun_P07_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_D_JSOC_F : Atlas_B_D_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Operator";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_D_JSOC_StealthUniform_RolledUp_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};

        weapons[] = {"Atlas_arifle_MX_HAMR_IR_Snds_F","hgun_P07_snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_arifle_MX_HAMR_IR_Snds_F","hgun_P07_snds_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_D_JSOC_GL_F : Atlas_B_D_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_D_JSOC_StealthUniform_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};

        weapons[] = {"Atlas_arifle_MX_GL_HAMR_IR_Snds_F","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_MX_GL_HAMR_IR_Snds_F","hgun_P07_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue","3Rnd_Smoke_Grenade_shell","3Rnd_HEDP_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue","3Rnd_Smoke_Grenade_shell","3Rnd_HEDP_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_D_JSOC_JTAC_F : Atlas_B_D_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "JTAC";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_D_JSOC_StealthUniform_RolledUp_F";

        backpack = "Aegis_B_RadioBag_01_des_lxWS";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};

        weapons[] = {"Atlas_arifle_MX_HAMR_IR_Snds_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
        respawnWeapons[] = {"Atlas_arifle_MX_HAMR_IR_Snds_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_D_JSOC_LAT_F : Atlas_B_D_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Operator (AT)";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_D_JSOC_StealthUniform_F";

        backpack = "Atlas_B_D_AssaultPack_JSOC_LAT_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};

        weapons[] = {"Atlas_arifle_MXC_Holo_IR_Snds_F","hgun_P07_snds_F","launch_MRAWS_sand_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_MXC_Holo_IR_Snds_F","hgun_P07_snds_F","launch_MRAWS_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_D_JSOC_M_F : Atlas_B_D_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_D_JSOC_StealthUniform_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};

        weapons[] = {"Atlas_arifle_MXM_SOS_IR_Snds_BI_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_MXM_SOS_IR_Snds_BI_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_D_JSOC_Medic_F : Atlas_B_D_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_D_JSOC_StealthUniform_F";

        backpack = "Atlas_B_D_AssaultPack_JSOC_Medic_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};

        weapons[] = {"Atlas_arifle_MXC_Holo_IR_Snds_F","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_MXC_Holo_IR_Snds_F","hgun_P07_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_D_JSOC_SL_F : Atlas_B_D_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_D_JSOC_StealthUniform_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Shemag_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Shemag_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};

        weapons[] = {"Atlas_arifle_MX_GL_HAMR_IR_Snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_MX_GL_HAMR_IR_Snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_tracer","30Rnd_65x39_caseless_mag_tracer","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue","3Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_tracer","30Rnd_65x39_caseless_mag_tracer","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue","3Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_D_JSOC_Sharpshooter_F : Atlas_B_D_JSOC_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_D_JSOC_StealthUniform_RolledUp_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Shemag_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Shemag_khk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};

        weapons[] = {"Atlas_arifle_SR25_MR_Snd_MOS_IR_Snds_BI_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_SR25_MR_Snd_MOS_IR_Snds_BI_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_D_JSOC_TL_F : Atlas_B_D_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_D_JSOC_StealthUniform_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_tan_F"};

        weapons[] = {"Atlas_arifle_MX_HAMR_IR_Snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_MX_HAMR_IR_Snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_tracer","30Rnd_65x39_caseless_mag_tracer","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_tracer","30Rnd_65x39_caseless_mag_tracer","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_D_JSOC_UAV_F : Atlas_B_D_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Specialist";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_D_JSOC_StealthUniform_F";

        backpack = "B_UAV_01_backpack_F";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UAVTerminal","Aegis_NVG_IVAS_01_tan_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UAVTerminal","Aegis_NVG_IVAS_01_tan_F"};

        weapons[] = {"Atlas_arifle_MX_HAMR_IR_Snds_F","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_MX_HAMR_IR_Snds_F","hgun_P07_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_D_JSOC_UAV_lxWS : Atlas_B_D_Soldier_JSOC_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Specialist (AP-5)";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Atlas_U_B_D_JSOC_StealthUniform_RolledUp_F";

        backpack = "B_UAV_02_backpack_lXWS";

        linkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UAVTerminal","Aegis_NVG_IVAS_01_tan_F"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier2_alt_Desert","Aegis_H_Helmet_FASTMT_Cover_Desert_F","G_Balaclava_snd_lxWS","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UAVTerminal","Aegis_NVG_IVAS_01_tan_F"};

        weapons[] = {"Atlas_arifle_MXC_Holo_IR_Snds_F","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_MXC_Holo_IR_Snds_F","hgun_P07_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_AFV_Wheeled_01_cannon_F : B_AFV_Wheeled_01_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rooikat 120";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_AFV_Wheeled_01_up_cannon_F : B_AFV_Wheeled_01_up_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rooikat 120 UP";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_APC_Tracked_01_CRV_lxWS : B_APC_Tracked_01_CRV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Nemmera";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_APC_Tracked_01_aa_lxWS : B_APC_Tracked_01_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Bardelas";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_APC_Tracked_01_rcws_lxWS : B_APC_Tracked_01_rcws_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Namer";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_APC_Wheeled_01_atgm_lxWS_v2 : APC_Wheeled_01_atgm_base_v2_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMV-7 Marshall (ATGM)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_APC_Wheeled_01_cannon_lxWS_v2 : B_APC_Wheeled_01_cannon_v2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Badger IFV";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_APC_Wheeled_01_command_lxWS : APC_Wheeled_01_command_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Badger IFV (Command)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_APC_Wheeled_01_mortar_lxWS : APC_Wheeled_01_mortar_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Badger IFV (Mortar)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Fighter_Pilot_F : B_Fighter_Pilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter Pilot";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_B_PilotCoveralls";

        linkedItems[] = {"H_PilotHelmetFighter_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_PilotHelmetFighter_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"hgun_P07_F","Throw","Put"};

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

    class B_D_HeliPilot_lxWS : B_Helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_pilot"};

        uniformClass = "U_B_HeliPilotCoveralls";

        linkedItems[] = {"H_PilotHelmetHeli_B","V_TacVest_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"H_PilotHelmetHeli_B","V_TacVest_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"SMG_01_black_Holo_F","Throw","Put"};
        respawnWeapons[] = {"SMG_01_black_Holo_F","Throw","Put"};

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

    class B_D_Heli_Attack_01_dynamicLoadout_lxWS : B_Heli_Attack_01_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RAH-66 Comanche";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_HeliPilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Heli_Light_01_dynamicLoadout_lxWS : B_Heli_Light_01_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-6 Little Bird";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_HeliPilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Heli_Light_01_lxWS : B_Heli_Light_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-6 Little Bird";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_HeliPilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Heli_Transport_01_lxWS : B_Heli_Transport_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-80 Ghost Hawk";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_HeliPilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_MBT_01_TUSK_lxWS : B_MBT_01_TUSK_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Merkava Mk IV LIC";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_MBT_01_arty_lxWS : B_MBT_01_arty_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sholef";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_MBT_01_cannon_lxWS : B_MBT_01_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Merkava Mk IV M";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_MBT_01_mlrs_lxWS : B_MBT_01_mlrs_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Seara";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_MRAP_01_gmg_lxWS : B_MRAP_01_gmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV (GMG)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_MRAP_01_hmg_lxWS : B_MRAP_01_hmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV (HMG)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_MRAP_01_lxWS : B_MRAP_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Mortar_01_lxWS : B_Mortar_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "B_D_Mortar_01_lxWS";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Pilot_lxWS : B_T_Pilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_B_PilotCoveralls";

        backpack = "ACE_NonSteerableParachute";

        linkedItems[] = {"H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"SMG_01_black_Holo_F","Throw","Put"};
        respawnWeapons[] = {"SMG_01_black_Holo_F","Throw","Put"};

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

    class B_D_Plane_CAS_01_dynamicLoadout_lxWS : B_Plane_CAS_01_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "A-10D Thunderbolt II";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Plane_Fighter_01_F : B_Plane_Fighter_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "F/A-181 Black Wasp II";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Plane_Fighter_01_Stealth_F : B_Plane_Fighter_01_Stealth_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "F/A-181 Black Wasp II (Stealth)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Plane_Fighter_05_F : Plane_Fighter_05_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "F-35F Lightning II";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Plane_Fighter_05_Stealth_F : Plane_Fighter_05_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "F-35F Lightning II (Stealth)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Quadbike_01_lxWS : B_Quadbike_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Soldier_A_lxWS : B_Soldier_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        backpack = "B_AssaultPack_desert_Ammo_lxWS";

        linkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Soldier_GL_lxWS : B_Soldier_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        linkedItems[] = {"V_lxWS_PlateCarrierGL_desert","H_HelmetSpecB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrierGL_desert","H_HelmetSpecB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_GL_ACO_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_GL_ACO_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Soldier_SL_lxWS : B_Soldier_SL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_vest";

        linkedItems[] = {"V_lxWS_PlateCarrierGL_desert","H_HelmetB_desert","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrierGL_desert","H_HelmetB_desert","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MX_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Soldier_TL_lxWS : B_Soldier_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_vest";

        linkedItems[] = {"V_lxWS_PlateCarrierGL_desert","H_HelmetSpecB_sand","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrierGL_desert","H_HelmetSpecB_sand","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_GL_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MX_GL_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Soldier_lite_lxWS : B_Soldier_lite_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_vest";

        linkedItems[] = {"V_BandollierB_khk","lxWS_H_MilCap_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_BandollierB_khk","lxWS_H_MilCap_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MXC_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Soldier_lxWS : B_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        linkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Hamr_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Soldier_unarmed_lxWS : B_Soldier_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        linkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

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

    class B_D_Survivor_lxWS : B_Survivor_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

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

    class B_D_Truck_01_Repair_lxWS : B_Truck_01_Repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Repair";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Truck_01_ammo_lxWS : B_Truck_01_ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Ammo";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Truck_01_box_lxWS : B_Truck_01_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Container";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Truck_01_cargo_lxWS : B_Truck_01_cargo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Cargo";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Truck_01_covered_lxWS : B_Truck_01_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport (covered)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Truck_01_flatbed_lxWS : B_Truck_01_flatbed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Flatbed";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Truck_01_fuel_lxWS : B_Truck_01_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Fuel";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Truck_01_medical_lxWS : B_Truck_01_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Medical";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Truck_01_mover_lxWS : B_Truck_01_mover_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_Truck_01_transport_lxWS : B_Truck_01_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_UGV_01_lxWS : B_UGV_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper";
        side = 1;
        faction = "blu_nato_lxws";
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

    class B_D_UGV_01_rcws_lxWS : B_UGV_01_rcws_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper RCWS";
        side = 1;
        faction = "blu_nato_lxws";
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

    class B_D_VTOL_01_armed_F : VTOL_01_armed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AV-44X Blackfish";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_VTOL_01_infantry_F : VTOL_01_infantry_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "V-44 X Blackfish (Infantry Transport)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_VTOL_01_vehicle_F : VTOL_01_vehicle_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "V-44 X Blackfish (Vehicle Transport)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_crew_lxWS : B_crew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_vest";

        linkedItems[] = {"Aegis_V_PlateCarrier_RF_desert","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"Aegis_V_PlateCarrier_RF_desert","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MXC_Holo_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_Holo_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_engineer_lxWS : B_engineer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_vest";

        backpack = "B_Kitbag_desert_Eng_lxWS";

        linkedItems[] = {"V_Chestrig_khk","H_HelmetB_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_Chestrig_khk","H_HelmetB_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_medic_lxWS : B_medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_tshirt";

        backpack = "B_AssaultPack_desert_Medic_lxWS";

        linkedItems[] = {"V_lxWS_PlateCarrierSpec_desert","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrierSpec_desert","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_Holo_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Holo_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_officer_lxWS : B_officer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_casual"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        linkedItems[] = {"V_BandollierB_khk","lxWS_H_MilCap_desert","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_khk","lxWS_H_MilCap_desert","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_MXC_F","hgun_Pistol_heavy_01_MRD_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MXC_F","hgun_Pistol_heavy_01_MRD_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_recon_AR_lxWS : B_recon_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Autorifleman";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_vest";

        linkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetSpecB_light_sand","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetSpecB_light_sand","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_02_snd_RCO_Pointer_Snds_Bipod_F","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_02_snd_RCO_Pointer_Snds_Bipod_F","hgun_P07_snds_F","Throw","Put"};

        magazines[] = {"150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_recon_JTAC_lxWS : B_recon_JTAC_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon JTAC";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        backpack = "B_RadioBag_01_coyote_F";

        linkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_Watchcap_camo_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_Watchcap_camo_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_snd_Holo_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
        respawnWeapons[] = {"arifle_SPAR_01_snd_Holo_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};

        magazines[] = {"30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_recon_LAT_lxWS : B_recon_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (AT)";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_tshirt";

        backpack = "B_AssaultPack_rgr_ReconLAT";

        linkedItems[] = {"V_lxWS_PlateCarrier2_desert","H_HelmetB","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier2_desert","H_HelmetB","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_snd_Holo_Pointer_Snds_F","launch_NLAW_F","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_snd_Holo_Pointer_Snds_F","launch_NLAW_F","hgun_P07_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_recon_M_lxWS : B_recon_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Marksman";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        linkedItems[] = {"V_TacVest_oli","H_Booniehat_mcamo_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_Booniehat_mcamo_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_03_snd_MOS_Pointer_Snds_Bipod_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_SPAR_03_snd_MOS_Pointer_Snds_Bipod_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};

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

    class B_D_recon_TL_lxWS : B_recon_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Team Leader";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_vest";

        linkedItems[] = {"V_lxWS_PlateCarrier2_desert","H_HelmetSpecB_light_sand","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier2_desert","H_HelmetSpecB_light_sand","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_snd_RCO_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_SPAR_01_snd_RCO_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_Tracer_Red","30Rnd_556x45_Stanag_Sand_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_Tracer_Red","30Rnd_556x45_Stanag_Sand_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_recon_exp_lxWS : B_recon_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Demo Specialist";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_tshirt";

        backpack = "B_AssaultPack_desert_ReconExp_lxWS";

        linkedItems[] = {"V_lxWS_PlateCarrier1_desert","lxWS_H_Booniehat_desert","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier1_desert","lxWS_H_Booniehat_desert","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_snd_Holo_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_snd_Holo_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_recon_lxWS : B_recon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_vest";

        linkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetSpecB_light_sand","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetSpecB_light_sand","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_snd_RCO_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SPAR_01_snd_RCO_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_recon_medic_lxWS : B_recon_medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Paramedic";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_SF"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_tshirt";

        backpack = "B_AssaultPack_desert_ReconMedic_lxWS";

        linkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_snd_Holo_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_snd_Holo_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","30Rnd_556x45_Stanag_Sand_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_soldier_AAA_lxWS : B_soldier_AAA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_tshirt";

        backpack = "B_D_Carryall_mcamo_AAA_lxWS";

        linkedItems[] = {"V_Chestrig_khk","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_Chestrig_khk","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_soldier_AAR_lxWS : B_soldier_AAR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_tshirt";

        backpack = "B_Kitbag_desert_AAR_lxWS";

        linkedItems[] = {"V_Chestrig_khk","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_Chestrig_khk","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_soldier_AAT_lxWS : B_soldier_AAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_tshirt";

        backpack = "B_D_Carryall_mcamo_AAT_lxWS";

        linkedItems[] = {"V_Chestrig_khk","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_Chestrig_khk","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_soldier_AA_lxWS : B_soldier_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        backpack = "B_AssaultPack_desert_AA_lxWS";

        linkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_soldier_AR_lxWS : B_soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_tshirt";

        linkedItems[] = {"V_lxWS_PlateCarrier2_desert","H_HelmetB_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier2_desert","H_HelmetB_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_SW_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_SW_Hamr_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_soldier_AT_lxWS : B_soldier_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        backpack = "B_AssaultPack_desert_AT_lxWS";

        linkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_soldier_LAT2_lxWS : B_soldier_LAT2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light AT)";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        backpack = "B_AssaultPack_desert_LAT2_lxWS";

        linkedItems[] = {"V_lxWS_PlateCarrier2_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier2_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_Holo_pointer_F","launch_MRAWS_sand_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Holo_pointer_F","launch_MRAWS_sand_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_soldier_LAT_lxWS : B_soldier_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        backpack = "B_AssaultPack_desert_LAT_lxWS";

        linkedItems[] = {"V_lxWS_PlateCarrier2_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier2_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_Holo_pointer_F","launch_NLAW_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Holo_pointer_F","launch_NLAW_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_soldier_M_lxWS : B_soldier_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        linkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MXM_MOS_LP_BI_F","hgun_P07_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MXM_MOS_LP_BI_F","hgun_P07_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_soldier_PG_lxWS : B_soldier_PG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Para Trooper";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        backpack = "B_Parachute";

        linkedItems[] = {"V_lxWS_PlateCarrierSpec_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrierSpec_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_soldier_UAV01_lxWS : B_soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        backpack = "B_UAV_01_backpack_F";

        linkedItems[] = {"V_lxWS_PlateCarrierSpec_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrierSpec_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};

        weapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_soldier_UAV02_lxWS : B_soldier_UAV_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AP-5)";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        backpack = "B_UAV_02_backpack_lxWS";

        linkedItems[] = {"V_lxWS_PlateCarrierSpec_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrierSpec_desert","H_HelmetB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};

        weapons[] = {"SMG_01_Holo_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"SMG_01_Holo_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_soldier_exp_lxWS : B_soldier_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        backpack = "B_Kitbag_desert_Exp_lxWS";

        linkedItems[] = {"V_lxWS_PlateCarrierGL_desert","H_HelmetSpecB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrierGL_desert","H_HelmetSpecB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_soldier_mine_lxWS : B_soldier_mine_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mine Specialist";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        backpack = "B_Carryall_desert_Mine_lxWS";

        linkedItems[] = {"V_lxWS_PlateCarrierGL_desert","H_HelmetSpecB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrierGL_desert","H_HelmetSpecB_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_soldier_repair_lxWS : B_soldier_repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert";

        backpack = "B_AssaultPack_desert_Repair_lxWS";

        linkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier1_desert","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_static_AA_lxWS : B_static_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AA)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_static_AT_lxWS : B_static_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AT)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_D_support_AMort_lxWS : B_support_AMort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (Mk6)";
        side = 1;
        faction = "blu_nato_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_B_CombatUniform_desert_tshirt";

        backpack = "B_D_Mortar_01_support_lxWS";

        linkedItems[] = {"V_Chestrig_khk","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_Chestrig_khk","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_AH99J_NATO_Des : EF_AH99J_dynamicLoadout_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RAH-66J Comanche";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_Helipilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_CombatBoat_AT_NATO_Des : EF_CombatBoat_AT_West_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (AT)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_CombatBoat_HMG_NATO_Des : EF_CombatBoat_HMG_West_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (HMG)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_CombatBoat_Unarmed_NATO_Des : EF_CombatBoat_Unarmed_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (Unarmed)";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_MRAP_01_AT_NATO_Des : EF_MRAP_01_AT_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV AT";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_MRAP_01_FSV_NATO_Des : EF_MRAP_01_FSV_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV FSV";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_MRAP_01_LAAD_NATO_Des : EF_MRAP_01_LAAD_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV LAAD";
        side = 1;
        faction = "blu_nato_lxws";
        crew = "B_D_crew_lxWS";

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
        class BLU_NATO_lxWS {
            class Armored {
                class BUS_D_Mortar_Platoon_lxWS {
                    name = "Mortar Battery";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";

                    class Unit0 {
                        vehicle = "B_D_APC_Wheeled_01_mortar_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_APC_Wheeled_01_mortar_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_APC_Wheeled_01_mortar_lxWS";
                        rank = "SERGEANT";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_APC_Wheeled_01_mortar_lxWS";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };
                };
                class BUS_D_Mortar_Section_lxWS {
                    name = "Mortar Section";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";

                    class Unit0 {
                        vehicle = "B_D_APC_Wheeled_01_mortar_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_APC_Wheeled_01_mortar_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };
                };
                class BUS_D_SPGPlatoon_Scorcher_lxWS {
                    name = "Artillery SPG Platoon";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";

                    class Unit0 {
                        vehicle = "B_D_MBT_01_arty_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_MBT_01_arty_lxWS";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_MBT_01_arty_lxWS";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_MBT_01_arty_lxWS";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class BUS_D_SPGSection_MLRS_lxWS {
                    name = "MLRS Section";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";

                    class Unit0 {
                        vehicle = "B_D_MBT_01_mlrs_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_MBT_01_mlrs_lxWS";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class BUS_D_SPGSection_Scorcher_lxWS {
                    name = "Artillery SPG Section";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";

                    class Unit0 {
                        vehicle = "B_D_MBT_01_arty_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_MBT_01_arty_lxWS";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class BUS_D_TankDestrSection_Rhino {
                    name = "Tank Destroyer Section";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_art.paa";

                    class Unit0 {
                        vehicle = "B_D_AFV_Wheeled_01_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_AFV_Wheeled_01_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class BUS_D_TankDestrSection_RhinoUP {
                    name = "Tank Destroyer Section (UP)";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_art.paa";

                    class Unit0 {
                        vehicle = "B_D_AFV_Wheeled_01_up_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_AFV_Wheeled_01_up_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class BUS_D_TankPlatoon_AA_lxWS {
                    name = "Tank Platoon (Combined)";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

                    class Unit0 {
                        vehicle = "B_D_MBT_01_cannon_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_APC_Tracked_01_aa_lxWS";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_MBT_01_cannon_lxWS";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_APC_Tracked_01_aa_lxWS";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class BUS_D_TankPlatoon_lxWS {
                    name = "Tank Platoon";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

                    class Unit0 {
                        vehicle = "B_D_MBT_01_cannon_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_MBT_01_cannon_lxWS";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_MBT_01_cannon_lxWS";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_MBT_01_cannon_lxWS";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class BUS_D_TankSection_lxWS {
                    name = "Tank Section";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

                    class Unit0 {
                        vehicle = "B_D_MBT_01_cannon_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_MBT_01_cannon_lxWS";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class BUS_D_InfSentry_lxWS {
                    name = "Sentry";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_soldier_GL_lxWS";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class BUS_D_InfSquad_Weapons_lxWS {
                    name = "Weapons Squad";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_soldier_SL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_soldier_AR_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_soldier_GL_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_soldier_M_lxWS";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_D_soldier_AT_lxWS";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_D_soldier_AAT_lxWS";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_D_soldier_A_lxWS";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_D_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class BUS_D_InfSquad_lxWS {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_soldier_SL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_D_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_soldier_LAT_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_soldier_M_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_D_soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_D_soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_D_soldier_A_lxWS";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_D_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class BUS_D_InfTeam_AA_lxWS {
                    name = "Air-defense Team";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_soldier_AA_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_soldier_AA_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_soldier_AAA_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class BUS_D_InfTeam_AT_lxWS {
                    name = "Anti-armor Team";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_soldier_AT_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_soldier_AT_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_soldier_AAT_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class BUS_D_InfTeam_lxWS {
                    name = "Fire Team";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_soldier_GL_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_soldier_LAT_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class JSOCInfantry {
                class Atlas_B_D_JSOCFAC {
                    name = "JSOC FAC Team";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_D_JSOC_JTAC_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_D_JSOC_Sharpshooter_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Atlas_B_D_JSOCPatrol {
                    name = "JSOC Patrol";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_D_JSOC_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_D_JSOC_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_D_JSOC_Medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_D_JSOC_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Atlas_B_D_JSOCTeam {
                    name = "JSOC Team";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_D_JSOC_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_D_JSOC_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_D_JSOC_Medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_D_JSOC_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_D_JSOC_JTAC_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_D_JSOC_Exp_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
            };
            class Mechanized {
                class BUS_D_MechInfSquad_lxWS {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_APC_Wheeled_01_cannon_lxWS_v2";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_soldier_SL_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_D_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_soldier_LAT_lxWS";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_D_soldier_M_lxWS";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_D_soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_D_soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_D_soldier_A_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "B_D_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class BUS_D_MechInf_AT_lxWS {
                    name = "Mechanized Anti-armor Squad";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_APC_Wheeled_01_atgm_lxWS_v2";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_soldier_SL_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_soldier_AT_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_D_soldier_AT_lxWS";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_D_soldier_AT_lxWS";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_D_soldier_AAT_lxWS";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_D_soldier_AAT_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "B_D_soldier_AAT_lxWS";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class BUS_D_MechInf_Support_lxWS {
                    name = "Mechanized Support Squad";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_APC_Wheeled_01_cannon_lxWS_v2";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_soldier_SL_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_soldier_repair_lxWS";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_D_engineer_lxWS";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_D_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_D_soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_D_soldier_exp_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "B_D_soldier_A_lxWS";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized {
                class BUS_D_MotInf_AA_lxWS {
                    name = "Motorized Air-defense Team";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_MRAP_01_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_soldier_AA_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_soldier_AA_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_soldier_AAA_lxWS";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class BUS_D_MotInf_AT_lxWS {
                    name = "Motorized Anti-armor Team";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_MRAP_01_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_soldier_AT_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_soldier_AT_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_soldier_AAT_lxWS";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class BUS_D_MotInf_GMGTeam_lxWS {
                    name = "Motorized GMG Team";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_MRAP_01_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_support_GMG_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_support_AMG_lxWS";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class BUS_D_MotInf_MGTeam_lxWS {
                    name = "Motorized HMG Team";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_MRAP_01_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_support_MG_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_support_AMG_lxWS";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class BUS_D_MotInf_MortTeam_lxWS {
                    name = "Motorized Mortar Team";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_MRAP_01_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_support_Mort_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_support_AMort_lxWS";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class BUS_D_MotInf_Reinforce_lxWS {
                    name = "Motorized Reinforcements";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_Truck_01_transport_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_soldier_SL_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_soldier_LAT_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "B_D_soldier_M_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "B_D_soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "B_D_soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "B_D_soldier_A_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "B_D_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "B_D_soldier_SL_lxWS";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "B_D_soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "B_D_soldier_LAT_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "B_D_soldier_M_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit13 {
                        vehicle = "B_D_soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit14 {
                        vehicle = "B_D_soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit15 {
                        vehicle = "B_D_soldier_A_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit16 {
                        vehicle = "B_D_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };
                };
                class BUS_D_MotInf_Team_lxWS {
                    name = "Motorized Team";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_MRAP_01_gmg_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_soldier_LAT_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
            class SpecOps {
                class BUS_D_ReconPatrol {
                    name = "Recon Patrol";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "B_D_recon_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_recon_M_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_recon_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_recon_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class BUS_D_ReconSentry {
                    name = "Recon Sentry";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "B_D_recon_M_lxWS";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_recon_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class BUS_D_ReconSquad {
                    name = "Recon Squad";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "B_D_recon_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_recon_M_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_recon_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_recon_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_D_recon_LAT_lxWS";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_D_recon_JTAC_lxWS";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_D_recon_exp_lxWS";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_D_recon_lxWS";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class BUS_D_ReconTeam {
                    name = "Recon Team";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "B_D_recon_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_recon_M_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_recon_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_recon_LAT_lxWS";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_D_recon_JTAC_lxWS";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_D_recon_exp_lxWS";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
                class lxWS_BUS_D_SmallTeam_UAV {
                    name = "Small UAV Team";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_soldier_UAV01_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_UAV_01_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
            class Support {
                class BUS_D_Recon_EOD_lxWS {
                    name = "Recon Support Team (EOD)";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_recon_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_recon_exp_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_recon_exp_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_recon_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class BUS_D_Support_CLS_lxWS {
                    name = "Support Team (CLS)";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class BUS_D_Support_ENG_lxWS {
                    name = "Support Team (Engineer)";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_engineer_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_engineer_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_soldier_repair_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-5,0};
                    };
                };
                class BUS_D_Support_EOD_lxWS {
                    name = "Support Team (EOD)";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_engineer_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_soldier_exp_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_D_soldier_exp_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class BUS_D_Support_GMG_lxWS {
                    name = "GMG Team";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_support_GMG_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_support_AMG_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class BUS_D_Support_MG_lxWS {
                    name = "HMG Team";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_D_soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_support_MG_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_support_AMG_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class BUS_D_Support_Mort_lxWS {
                    name = "Mortar Team";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mortar.paa";

                    class Unit0 {
                        vehicle = "B_D_soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_D_support_Mort_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_D_support_AMort_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class B_D_Support_Mort_RF {
                    name = "Light Mortar Team";
                    side = 1;
                    faction = "BLU_NATO_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";

                    class Unit0 {
                        vehicle = "B_D_soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_D_Support_CMort_RF";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_D_Support_CMort_RF";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
        };
    };
};
