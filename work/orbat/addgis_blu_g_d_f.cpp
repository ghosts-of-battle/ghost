//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class AddGis_BLU_G_D_F {
        displayName = "Bundeswehr (Desert)";
        side = 1;
        priority = 3;
    };
};

class CfgVehicles {

    class Atlas_B_G_APC_Wheeled_03_cannon_ard_F;
    class Atlas_B_G_APC_Wheeled_03_cannon_ard_F_OCimport_01 : Atlas_B_G_APC_Wheeled_03_cannon_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_APC_Wheeled_03_cannon_ard_F_OCimport_02 : Atlas_B_G_APC_Wheeled_03_cannon_ard_F_OCimport_01 { class EventHandlers; };

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

    class Atlas_B_G_Heli_Transport_02_ard_F;
    class Atlas_B_G_Heli_Transport_02_ard_F_OCimport_01 : Atlas_B_G_Heli_Transport_02_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Heli_Transport_02_ard_F_OCimport_02 : Atlas_B_G_Heli_Transport_02_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_LT_01_AA_ard_F;
    class Atlas_B_G_LT_01_AA_ard_F_OCimport_01 : Atlas_B_G_LT_01_AA_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_LT_01_AA_ard_F_OCimport_02 : Atlas_B_G_LT_01_AA_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_LT_01_AT_ard_F;
    class Atlas_B_G_LT_01_AT_ard_F_OCimport_01 : Atlas_B_G_LT_01_AT_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_LT_01_AT_ard_F_OCimport_02 : Atlas_B_G_LT_01_AT_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_LT_01_cannon_ard_F;
    class Atlas_B_G_LT_01_cannon_ard_F_OCimport_01 : Atlas_B_G_LT_01_cannon_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_LT_01_cannon_ard_F_OCimport_02 : Atlas_B_G_LT_01_cannon_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_LT_01_scout_ard_F;
    class Atlas_B_G_LT_01_scout_ard_F_OCimport_01 : Atlas_B_G_LT_01_scout_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_LT_01_scout_ard_F_OCimport_02 : Atlas_B_G_LT_01_scout_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_MBT_03_cannon_ard_F;
    class Atlas_B_G_MBT_03_cannon_ard_F_OCimport_01 : Atlas_B_G_MBT_03_cannon_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_MBT_03_cannon_ard_F_OCimport_02 : Atlas_B_G_MBT_03_cannon_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_MRAP_03_ard_F;
    class Atlas_B_G_MRAP_03_ard_F_OCimport_01 : Atlas_B_G_MRAP_03_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_MRAP_03_ard_F_OCimport_02 : Atlas_B_G_MRAP_03_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_MRAP_03_gmg_ard_F;
    class Atlas_B_G_MRAP_03_gmg_ard_F_OCimport_01 : Atlas_B_G_MRAP_03_gmg_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_MRAP_03_gmg_ard_F_OCimport_02 : Atlas_B_G_MRAP_03_gmg_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_MRAP_03_hmg_ard_F;
    class Atlas_B_G_MRAP_03_hmg_ard_F_OCimport_01 : Atlas_B_G_MRAP_03_hmg_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_MRAP_03_hmg_ard_F_OCimport_02 : Atlas_B_G_MRAP_03_hmg_ard_F_OCimport_01 { class EventHandlers; };

    class B_Mortar_01_F;
    class B_Mortar_01_F_OCimport_01 : B_Mortar_01_F { scope = 0; class EventHandlers; };
    class B_Mortar_01_F_OCimport_02 : B_Mortar_01_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Pickup_AT_ard_F;
    class Atlas_B_G_Pickup_AT_ard_F_OCimport_01 : Atlas_B_G_Pickup_AT_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Pickup_AT_ard_F_OCimport_02 : Atlas_B_G_Pickup_AT_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Pickup_Comms_ard_F;
    class Atlas_B_G_Pickup_Comms_ard_F_OCimport_01 : Atlas_B_G_Pickup_Comms_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Pickup_Comms_ard_F_OCimport_02 : Atlas_B_G_Pickup_Comms_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Pickup_ard_F;
    class Atlas_B_G_Pickup_ard_F_OCimport_01 : Atlas_B_G_Pickup_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Pickup_ard_F_OCimport_02 : Atlas_B_G_Pickup_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Pickup_HMG_ard_F;
    class Atlas_B_G_Pickup_HMG_ard_F_OCimport_01 : Atlas_B_G_Pickup_HMG_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Pickup_HMG_ard_F_OCimport_02 : Atlas_B_G_Pickup_HMG_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Pickup_aat_ard_F;
    class Atlas_B_G_Pickup_aat_ard_F_OCimport_01 : Atlas_B_G_Pickup_aat_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Pickup_aat_ard_F_OCimport_02 : Atlas_B_G_Pickup_aat_ard_F_OCimport_01 { class EventHandlers; };

    class B_Plane_Fighter_01_F;
    class B_Plane_Fighter_01_F_OCimport_01 : B_Plane_Fighter_01_F { scope = 0; class EventHandlers; };
    class B_Plane_Fighter_01_F_OCimport_02 : B_Plane_Fighter_01_F_OCimport_01 { class EventHandlers; };

    class B_Plane_Fighter_01_Stealth_F;
    class B_Plane_Fighter_01_Stealth_F_OCimport_01 : B_Plane_Fighter_01_Stealth_F { scope = 0; class EventHandlers; };
    class B_Plane_Fighter_01_Stealth_F_OCimport_02 : B_Plane_Fighter_01_Stealth_F_OCimport_01 { class EventHandlers; };

    class Radar_System_01_base_F;
    class Radar_System_01_base_F_OCimport_01 : Radar_System_01_base_F { scope = 0; class EventHandlers; };
    class Radar_System_01_base_F_OCimport_02 : Radar_System_01_base_F_OCimport_01 { class EventHandlers; };

    class SAM_System_03_base_F;
    class SAM_System_03_base_F_OCimport_01 : SAM_System_03_base_F { scope = 0; class EventHandlers; };
    class SAM_System_03_base_F_OCimport_02 : SAM_System_03_base_F_OCimport_01 { class EventHandlers; };

    class B_static_AA_F;
    class B_static_AA_F_OCimport_01 : B_static_AA_F { scope = 0; class EventHandlers; };
    class B_static_AA_F_OCimport_02 : B_static_AA_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_UAV_01_ard_F;
    class Atlas_B_G_UAV_01_ard_F_OCimport_01 : Atlas_B_G_UAV_01_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_UAV_01_ard_F_OCimport_02 : Atlas_B_G_UAV_01_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_UAV_02_dynamicLoadout_ard_F;
    class Atlas_B_G_UAV_02_dynamicLoadout_ard_F_OCimport_01 : Atlas_B_G_UAV_02_dynamicLoadout_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_UAV_02_dynamicLoadout_ard_F_OCimport_02 : Atlas_B_G_UAV_02_dynamicLoadout_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_UAV_06_ard_F;
    class Atlas_B_G_UAV_06_ard_F_OCimport_01 : Atlas_B_G_UAV_06_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_UAV_06_ard_F_OCimport_02 : Atlas_B_G_UAV_06_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_UAV_06_medical_ard_F;
    class Atlas_B_G_UAV_06_medical_ard_F_OCimport_01 : Atlas_B_G_UAV_06_medical_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_UAV_06_medical_ard_F_OCimport_02 : Atlas_B_G_UAV_06_medical_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_UAV_07_ard_F;
    class Atlas_B_G_UAV_07_ard_F_OCimport_01 : Atlas_B_G_UAV_07_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_UAV_07_ard_F_OCimport_02 : Atlas_B_G_UAV_07_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_UGV_01_ard_F;
    class Atlas_B_G_UGV_01_ard_F_OCimport_01 : Atlas_B_G_UGV_01_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_UGV_01_ard_F_OCimport_02 : Atlas_B_G_UGV_01_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_UGV_01_medical_ard_F;
    class Atlas_B_G_UGV_01_medical_ard_F_OCimport_01 : Atlas_B_G_UGV_01_medical_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_UGV_01_medical_ard_F_OCimport_02 : Atlas_B_G_UGV_01_medical_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_UGV_01_rcws_ard_F;
    class Atlas_B_G_UGV_01_rcws_ard_F_OCimport_01 : Atlas_B_G_UGV_01_rcws_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_UGV_01_rcws_ard_F_OCimport_02 : Atlas_B_G_UGV_01_rcws_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_UGV_02_Demining_F;
    class Atlas_B_G_UGV_02_Demining_F_OCimport_01 : Atlas_B_G_UGV_02_Demining_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_UGV_02_Demining_F_OCimport_02 : Atlas_B_G_UGV_02_Demining_F_OCimport_01 { class EventHandlers; };

    class B_static_AT_F;
    class B_static_AT_F_OCimport_01 : B_static_AT_F { scope = 0; class EventHandlers; };
    class B_static_AT_F_OCimport_02 : B_static_AT_F_OCimport_01 { class EventHandlers; };

    class B_crew_F;
    class B_crew_F_OCimport_01 : B_crew_F { scope = 0; class EventHandlers; };
    class B_crew_F_OCimport_02 : B_crew_F_OCimport_01 { class EventHandlers; };

    class B_engineer_F;
    class B_engineer_F_OCimport_01 : B_engineer_F { scope = 0; class EventHandlers; };
    class B_engineer_F_OCimport_02 : B_engineer_F_OCimport_01 { class EventHandlers; };

    class B_Fighter_Pilot_F;
    class B_Fighter_Pilot_F_OCimport_01 : B_Fighter_Pilot_F { scope = 0; class EventHandlers; };
    class B_Fighter_Pilot_F_OCimport_02 : B_Fighter_Pilot_F_OCimport_01 { class EventHandlers; };

    class B_HeavyGunner_F;
    class B_HeavyGunner_F_OCimport_01 : B_HeavyGunner_F { scope = 0; class EventHandlers; };
    class B_HeavyGunner_F_OCimport_02 : B_HeavyGunner_F_OCimport_01 { class EventHandlers; };

    class B_helicrew_F;
    class B_helicrew_F_OCimport_01 : B_helicrew_F { scope = 0; class EventHandlers; };
    class B_helicrew_F_OCimport_02 : B_helicrew_F_OCimport_01 { class EventHandlers; };

    class B_Helipilot_F;
    class B_Helipilot_F_OCimport_01 : B_Helipilot_F { scope = 0; class EventHandlers; };
    class B_Helipilot_F_OCimport_02 : B_Helipilot_F_OCimport_01 { class EventHandlers; };

    class B_medic_F;
    class B_medic_F_OCimport_01 : B_medic_F { scope = 0; class EventHandlers; };
    class B_medic_F_OCimport_02 : B_medic_F_OCimport_01 { class EventHandlers; };

    class B_officer_F;
    class B_officer_F_OCimport_01 : B_officer_F { scope = 0; class EventHandlers; };
    class B_officer_F_OCimport_02 : B_officer_F_OCimport_01 { class EventHandlers; };

    class Addgis_B_G_D_Soldier_F;
    class Addgis_B_G_D_Soldier_F_OCimport_01 : Addgis_B_G_D_Soldier_F { scope = 0; class EventHandlers; };
    class Addgis_B_G_D_Soldier_F_OCimport_02 : Addgis_B_G_D_Soldier_F_OCimport_01 { class EventHandlers; };

    class B_recon_AR_F;
    class B_recon_AR_F_OCimport_01 : B_recon_AR_F { scope = 0; class EventHandlers; };
    class B_recon_AR_F_OCimport_02 : B_recon_AR_F_OCimport_01 { class EventHandlers; };

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

    class B_recon_TL_F;
    class B_recon_TL_F_OCimport_01 : B_recon_TL_F { scope = 0; class EventHandlers; };
    class B_recon_TL_F_OCimport_02 : B_recon_TL_F_OCimport_01 { class EventHandlers; };

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

    class B_soldier_LAT_F;
    class B_soldier_LAT_F_OCimport_01 : B_soldier_LAT_F { scope = 0; class EventHandlers; };
    class B_soldier_LAT_F_OCimport_02 : B_soldier_LAT_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_lite_F;
    class B_Soldier_lite_F_OCimport_01 : B_Soldier_lite_F { scope = 0; class EventHandlers; };
    class B_Soldier_lite_F_OCimport_02 : B_Soldier_lite_F_OCimport_01 { class EventHandlers; };

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

    class B_soldier_M_F;
    class B_soldier_M_F_OCimport_01 : B_soldier_M_F { scope = 0; class EventHandlers; };
    class B_soldier_M_F_OCimport_02 : B_soldier_M_F_OCimport_01 { class EventHandlers; };

    class Addgis_B_G_D_Soldier_UAV_F;
    class Addgis_B_G_D_Soldier_UAV_F_OCimport_01 : Addgis_B_G_D_Soldier_UAV_F { scope = 0; class EventHandlers; };
    class Addgis_B_G_D_Soldier_UAV_F_OCimport_02 : Addgis_B_G_D_Soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class Addgis_B_G_D_Soldier_Exp_F;
    class Addgis_B_G_D_Soldier_Exp_F_OCimport_01 : Addgis_B_G_D_Soldier_Exp_F { scope = 0; class EventHandlers; };
    class Addgis_B_G_D_Soldier_Exp_F_OCimport_02 : Addgis_B_G_D_Soldier_Exp_F_OCimport_01 { class EventHandlers; };

    class AddGis_B_G_D_APC_Wheeled_03_cannon_F : Atlas_B_G_APC_Wheeled_03_cannon_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pandur II";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_GMG_01_A_F : B_GMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307A";
        side = 1;
        faction = "addgis_blu_g_d_f";
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

    class AddGis_B_G_D_GMG_01_F : B_GMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "AddGis_B_G_D_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_GMG_01_high_F : B_GMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307 (High)";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "AddGis_B_G_D_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_HMG_01_A_F : B_HMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312A";
        side = 1;
        faction = "addgis_blu_g_d_f";
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

    class AddGis_B_G_D_HMG_01_F : B_HMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_HMG_01_high_F : B_HMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312 (High)";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_HMG_02_F : HMG_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_HMG_02_high_F : HMG_02_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_Heli_Transport_02_F : Atlas_B_G_Heli_Transport_02_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH-49 Mohawk";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_LT_01_AA_F : Atlas_B_G_LT_01_AA_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AWC 302 Nyx (AA)";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_LT_01_AT_F : Atlas_B_G_LT_01_AT_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AWC 301 Nyx (AT)";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_LT_01_cannon_F : Atlas_B_G_LT_01_cannon_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AWC 304 Nyx (Autocannon)";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_LT_01_scout_F : Atlas_B_G_LT_01_scout_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AWC 303 Nyx (Recon)";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_MBT_03_cannon_F : Atlas_B_G_MBT_03_cannon_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Luchs 3A5";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_MRAP_03_F : Atlas_B_G_MRAP_03_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Strider";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_MRAP_03_gmg_F : Atlas_B_G_MRAP_03_gmg_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Strider GMG";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_MRAP_03_hmg_F : Atlas_B_G_MRAP_03_hmg_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Strider HMG";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_Mortar_01_F : B_Mortar_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AddGis_B_G_D_Mortar_01_F";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "AddGis_B_G_D_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_Pickup_AT_F : Atlas_B_G_Pickup_AT_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AddGis_B_G_D_Pickup_AT_F";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_Pickup_Comms_F : Atlas_B_G_Pickup_Comms_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Comms)";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_Pickup_F : Atlas_B_G_Pickup_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_Pickup_HMG_F : Atlas_B_G_Pickup_HMG_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (HMG)";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_Pickup_aat_F : Atlas_B_G_Pickup_aat_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (AA)";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_Plane_Fighter_01_F : B_Plane_Fighter_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "F/A-181 Black Wasp II";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "AddGis_B_G_D_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_Plane_Fighter_01_Stealth_F : B_Plane_Fighter_01_Stealth_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "F/A-181 Black Wasp II (Stealth)";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "AddGis_B_G_D_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_Radar_System_01_F : Radar_System_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AN/MPQ-105 Radar";
        side = 1;
        faction = "addgis_blu_g_d_f";
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

    class AddGis_B_G_D_SAM_System_03_F : SAM_System_03_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MIM-104 Patriot";
        side = 1;
        faction = "addgis_blu_g_d_f";
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

    class AddGis_B_G_D_Static_AA_F : B_static_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AA)";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_B_G_D_UAV_01_F : Atlas_B_G_UAV_01_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR-2 Darter";
        side = 1;
        faction = "addgis_blu_g_d_f";
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

    class AddGis_B_G_D_UAV_02_dynamicLoadout_F : Atlas_B_G_UAV_02_dynamicLoadout_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "YABHON-R3";
        side = 1;
        faction = "addgis_blu_g_d_f";
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

    class AddGis_B_G_D_UAV_06_F : Atlas_B_G_UAV_06_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican";
        side = 1;
        faction = "addgis_blu_g_d_f";
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

    class AddGis_B_G_D_UAV_06_medical_F : Atlas_B_G_UAV_06_medical_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican (Medical)";
        side = 1;
        faction = "addgis_blu_g_d_f";
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

    class AddGis_B_G_D_UAV_07_F : Atlas_B_G_UAV_07_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MQ-9A Reaper";
        side = 1;
        faction = "addgis_blu_g_d_f";
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

    class AddGis_B_G_D_UGV_01_F : Atlas_B_G_UGV_01_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper";
        side = 1;
        faction = "addgis_blu_g_d_f";
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

    class AddGis_B_G_D_UGV_01_medical_F : Atlas_B_G_UGV_01_medical_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper Medical";
        side = 1;
        faction = "addgis_blu_g_d_f";
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

    class AddGis_B_G_D_UGV_01_rcws_F : Atlas_B_G_UGV_01_rcws_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper RCWS";
        side = 1;
        faction = "addgis_blu_g_d_f";
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

    class AddGis_B_G_D_UGV_02_Demining_ard_F : Atlas_B_G_UGV_02_Demining_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ED-1D Pelter";
        side = 1;
        faction = "addgis_blu_g_d_f";
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

    class AddGis_B_G_Static_AT_F : B_static_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AT)";
        side = 1;
        faction = "addgis_blu_g_d_f";
        crew = "Addgis_B_G_D_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Crew_F : B_crew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformEURO_01_tropen_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Coyote_F","H_HelmetCrew_B_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Coyote_F","H_HelmetCrew_B_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"SMG_04_blk_Holo_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"SMG_04_blk_Holo_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Engineer_F : B_engineer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        backpack = "Addgis_B_Kitbag_tan_BEEng_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Fighter_Pilot_F : B_Fighter_Pilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter Pilot";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_pilot"};

        uniformClass = "U_B_PilotCoveralls";

        linkedItems[] = {"H_PilotHelmetFighter_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_PilotHelmetFighter_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"hgun_P07_blk_F","Throw","Put"};

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

    class Addgis_B_G_D_HeavyGunner_F : B_HeavyGunner_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"MMG_01_black_LP_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"MMG_01_black_LP_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"150Rnd_93x64_Mag_Red","150Rnd_93x64_Mag_Red","150Rnd_93x64_Mag_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"150Rnd_93x64_Mag_Red","150Rnd_93x64_Mag_Red","150Rnd_93x64_Mag_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Helicrew_F : B_helicrew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_pilot"};

        uniformClass = "Atlas_U_B_G_HeliPilotCoveralls";

        linkedItems[] = {"V_CarrierRigKBT_01_Coyote_F","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Coyote_F","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Holo_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Holo_F","Throw","Put"};

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

    class Addgis_B_G_D_Helipilot_F : B_Helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_pilot"};

        uniformClass = "Atlas_U_B_G_HeliPilotCoveralls";

        linkedItems[] = {"V_CarrierRigKBT_01_Coyote_F","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Coyote_F","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"SMG_04_blk_Holo_F","Throw","Put"};
        respawnWeapons[] = {"SMG_04_blk_Holo_F","Throw","Put"};

        magazines[] = {"40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Medic_F : B_medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        backpack = "Addgis_B_AssaultPack_tan_BEMedic_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_cbr_F","AddGis_H_HelmetSpecB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_cbr_F","AddGis_H_HelmetSpecB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Officer_F : B_officer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_casual"};

        uniformClass = "AddGis_U_CombatUniformEURO_01_tropen_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_olive_F","AddGis_H_FieldCap_trop","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_olive_F","AddGis_H_FieldCap_trop","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_G36C_F","hgun_P07_blk_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_G36C_F","hgun_P07_blk_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_RadioOperator_F : Addgis_B_G_D_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_02_tropen_F";

        backpack = "B_RadioBag_01_coyote_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_Holo_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36_Holo_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Recon_AR_F : B_recon_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Autorifleman";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","H_ShemagOpen_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","H_ShemagOpen_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_02_blk_LRCO_Pointer_Bipod_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_02_blk_LRCO_Pointer_Bipod_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};

        magazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Recon_Exp_F : B_recon_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Demo Specialist";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        backpack = "Addgis_B_Kitbag_tan_BEExp_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_cbr_F","H_Cap_headphones","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_cbr_F","H_Cap_headphones","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};

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

    class Addgis_B_G_D_Recon_F : B_recon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","H_ShemagOpen_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","H_ShemagOpen_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_blk_LRCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_LRCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Binocular"};

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

    class Addgis_B_G_D_Recon_GL_F : B_recon_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Grenadier";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","H_ShemagOpen_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","H_ShemagOpen_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_GL_blk_LRCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_GL_blk_LRCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};

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

    class Addgis_B_G_D_Recon_JTAC_F : B_recon_JTAC_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon JTAC";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        backpack = "B_RadioBag_01_coyote_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","H_Cap_headphones","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","H_Cap_headphones","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator_01_khk_F"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator_01_khk_F"};

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

    class Addgis_B_G_D_Recon_LAT_F : B_recon_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (AT)";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        backpack = "Addgis_B_AssaultPack_tan_BELAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","H_ShemagOpen_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","H_ShemagOpen_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_Snds_F","Atlas_launch_Pzf3_F","hgun_P07_blk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_Snds_F","Atlas_launch_Pzf3_F","hgun_P07_blk_Snds_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Atlas_dm12_heat_f","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Atlas_dm12_heat_f","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Recon_MG_F : B_recon_MG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Gunner";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        backpack = "Addgis_B_AssaultPack_tan_BEReconMG_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_cbr_F","H_ShemagOpen_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_cbr_F","H_ShemagOpen_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"MMG_01_black_LRCO_LP_S_F","hgun_P07_blk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"MMG_01_black_LRCO_LP_S_F","hgun_P07_blk_Snds_F","Throw","Put"};

        magazines[] = {"150Rnd_93x64_Mag_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"150Rnd_93x64_Mag_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Recon_M_F : B_recon_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Marksman";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","H_Booniehat_trop_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","H_Booniehat_trop_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};

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

    class Addgis_B_G_D_Recon_Medic_F : B_recon_medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Paramedic";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        backpack = "Addgis_B_AssaultPack_tan_BEMedic_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","H_Cap_headphones","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","H_Cap_headphones","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put"};

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

    class Addgis_B_G_D_Recon_TL_F : B_recon_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Team Leader";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","H_Booniehat_trop_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","H_Booniehat_trop_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_blk_LRCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_LRCO_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};

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

    class Addgis_B_G_D_Soldier_AAA_F : B_soldier_AAA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        backpack = "Addgis_B_Carryall_cbr_BEAAA_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_G36_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Soldier_AAR_F : B_soldier_AAR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_02_tropen_F";

        backpack = "Addgis_B_Kitbag_tan_BEAAR_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_G36_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Soldier_AAT_F : B_soldier_AAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        backpack = "Addgis_B_Carryall_cbr_BEAAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_G36_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Soldier_AA_F : B_soldier_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        backpack = "Addgis_B_Kitbag_tan_BEAA_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Holo_Pointer_F","launch_B_Titan_olive_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Holo_Pointer_F","launch_B_Titan_olive_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Soldier_AR_F : B_soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_02_tropen_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_cbr_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_cbr_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"LMG_Mk200_black_LP_BI_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Mk200_black_LP_BI_F","hgun_P07_blk_F","Throw","Put"};

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

    class Addgis_B_G_D_Soldier_AT_F : B_soldier_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        backpack = "Addgis_B_Kitbag_tan_BEAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Holo_Pointer_F","launch_I_Titan_short_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Holo_Pointer_F","launch_I_Titan_short_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Soldier_A_F : B_Soldier_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        backpack = "Addgis_B_Carryall_cbr_BEAmmo_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Soldier_CQ_F : B_Soldier_CQ_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_cbr_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_cbr_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"sgun_M4_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"sgun_M4_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Soldier_Exp_F : B_soldier_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_02_tropen_F";

        backpack = "Addgis_B_Kitbag_tan_BEExp_F";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Soldier_F : B_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetSpecB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetSpecB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_Holo_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36_Holo_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Soldier_GL_F : B_Soldier_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_GL_ACO_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36_GL_ACO_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Soldier_LAT_F : B_soldier_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        backpack = "Addgis_B_AssaultPack_tan_BELAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_Holo_Pointer_F","Atlas_launch_Pzf3_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36_Holo_Pointer_F","Atlas_launch_Pzf3_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Atlas_dm12_heat_f","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Atlas_dm12_heat_f","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Soldier_Lite_F : B_Soldier_lite_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_casual"};

        uniformClass = "AddGis_U_CombatUniformNCU_02_tropen_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Coyote_F","H_Headset_light","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Coyote_F","H_Headset_light","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_G36C_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Soldier_PG_F : B_soldier_PG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Para Trooper";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        backpack = "B_Parachute";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Soldier_Repair_F : B_soldier_repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        backpack = "Addgis_B_AssaultPack_tan_BERepair_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Soldier_SL_F : B_Soldier_SL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_02_tropen_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetSpecB_Cover_tropen","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetSpecB_Cover_tropen","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_LRCO_Pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_G36_LRCO_Pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Soldier_TL_F : B_Soldier_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_Coyote_F","AddGis_H_HelmetSpecB_Cover_tropen","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_Coyote_F","AddGis_H_HelmetSpecB_Cover_tropen","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_GL_LRCO_Pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_G36_GL_LRCO_Pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Soldier_UAV_F : B_soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_02_tropen_F";

        backpack = "B_UAV_01_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};

        weapons[] = {"arifle_G36C_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Soldier_unarmed_F : Addgis_B_G_D_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetSpecB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetSpecB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class Addgis_B_G_D_Support_AMG_F : B_support_AMG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (HMG/GMG)";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_02_tropen_F";

        backpack = "B_HMG_01_support_grn_F";

        linkedItems[] = {"V_TacChestrig_cbr_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_TacChestrig_cbr_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Support_AMort_F : B_support_AMort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (Mk6)";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_02_tropen_F";

        backpack = "B_Mortar_01_support_grn_F";

        linkedItems[] = {"V_TacChestrig_cbr_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_TacChestrig_cbr_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Support_GMG_F : B_support_GMG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (GMG)";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_02_tropen_F";

        backpack = "B_GMG_01_Weapon_grn_F";

        linkedItems[] = {"V_TacChestrig_cbr_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_TacChestrig_cbr_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Support_MG_F : B_support_MG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (HMG)";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_02_tropen_F";

        backpack = "B_HMG_01_Weapon_grn_F";

        linkedItems[] = {"V_TacChestrig_cbr_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_TacChestrig_cbr_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Support_Mort_F : B_support_Mort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mk6)";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_02_tropen_F";

        backpack = "B_Mortar_01_Weapon_grn_F";

        linkedItems[] = {"V_TacChestrig_cbr_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_TacChestrig_cbr_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_Survivor_F : Addgis_B_G_D_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

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

    class Addgis_B_G_D_soldier_M_F : B_soldier_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_01_tropen_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"srifle_DMR_03_LRCO_LP_BI_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_03_LRCO_LP_BI_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};

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

    class Addgis_B_G_D_soldier_UAV_06_F : Addgis_B_G_D_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_02_tropen_F";

        backpack = "B_UAV_06_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};

        weapons[] = {"arifle_G36C_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_soldier_UAV_06_medical_F : Addgis_B_G_D_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_02_tropen_F";

        backpack = "B_UAV_06_medical_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};

        weapons[] = {"arifle_G36C_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_soldier_UGV_02_Demining_F : Addgis_B_G_D_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1D)";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_02_tropen_F";

        backpack = "B_UGV_02_Demining_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};

        weapons[] = {"arifle_G36C_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Addgis_B_G_D_soldier_mine_F : Addgis_B_G_D_Soldier_Exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mine Specialist";
        side = 1;
        faction = "addgis_blu_g_d_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "AddGis_U_CombatUniformNCU_02_tropen_F";

        backpack = "Addgis_B_Carryall_cbr_Mine";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_Coyote_F","AddGis_H_HelmetB_Cover_tropen","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


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
        class AddGis_BLU_G_D_F {
            class Armored {
                class AddGis_B_G_D_LTankPlatoon_AA {
                    name = "AWC Air-Defense Platoon";
                    side = 1;
                    faction = "AddGis_BLU_G_D_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "AddGis_B_G_D_LT_01_scout_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "AddGis_B_G_D_LT_01_AA_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "AddGis_B_G_D_LT_01_AA_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "AddGis_B_G_D_LT_01_AA_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class AddGis_B_G_D_LTankPlatoon_combined {
                    name = "AWC Platoon (Combined)";
                    side = 1;
                    faction = "AddGis_BLU_G_D_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "AddGis_B_G_D_LT_01_scout_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "AddGis_B_G_D_LT_01_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "AddGis_B_G_D_LT_01_cannon_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "AddGis_B_G_D_LT_01_AT_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class AddGis_B_G_D_LTankSection_AA {
                    name = "AWC Air-Defense Section";
                    side = 1;
                    faction = "AddGis_BLU_G_D_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "AddGis_B_G_D_LT_01_AA_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "AddGis_B_G_D_LT_01_AA_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class AddGis_B_G_D_LTankSection_AT {
                    name = "AWC Anti-Armor Section";
                    side = 1;
                    faction = "AddGis_BLU_G_D_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "AddGis_B_G_D_LT_01_AT_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "AddGis_B_G_D_LT_01_AT_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class AddGis_B_G_D_LTankSection_Assault {
                    name = "AWC Assault Section";
                    side = 1;
                    faction = "AddGis_BLU_G_D_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "AddGis_B_G_D_LT_01_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "AddGis_B_G_D_LT_01_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class AddGis_B_G_D_LTankSection_Recon {
                    name = "AWC Recon Section";
                    side = 1;
                    faction = "AddGis_BLU_G_D_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "AddGis_B_G_D_LT_01_scout_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "AddGis_B_G_D_LT_01_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class AddGis_B_G_D_TankPlatoon {
                    name = "Tank Platoon";
                    side = 1;
                    faction = "AddGis_BLU_G_D_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "AddGis_B_G_D_MBT_03_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "AddGis_B_G_D_MBT_03_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "AddGis_B_G_D_MBT_03_cannon_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "AddGis_B_G_D_MBT_03_cannon_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class AddGis_B_G_D_TankSection {
                    name = "Tank Section";
                    side = 1;
                    faction = "AddGis_BLU_G_D_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "AddGis_B_G_D_MBT_03_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "AddGis_B_G_D_MBT_03_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class AddGis_B_G_D_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "AddGis_BLU_G_D_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "AddGis_B_G_D_APC_Wheeled_03_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "AddGis_B_G_D_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "AddGis_B_G_D_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "AddGis_B_G_D_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "AddGis_B_G_D_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "AddGis_B_G_D_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "AddGis_B_G_D_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "AddGis_B_G_D_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "AddGis_B_G_D_medic_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized {
                class AddGis_B_G_D_MotInf_AA {
                    name = "Motorized Air-defense Team";
                    side = 1;
                    faction = "AddGis_BLU_G_D_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "AddGis_B_G_D_MRAP_03_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "AddGis_B_G_D_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "AddGis_B_G_D_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                };
                class AddGis_B_G_D_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 1;
                    faction = "AddGis_BLU_G_D_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "AddGis_B_G_D_MRAP_03_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "AddGis_B_G_D_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "AddGis_B_G_D_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                };
                class AddGis_B_G_D_MotInf_Team {
                    name = "Motorized Team";
                    side = 1;
                    faction = "AddGis_BLU_G_D_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "AddGis_B_G_D_MRAP_03_gmg_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "AddGis_B_G_D_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
            };
        };
    };
};
