//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class Atlas_BLU_G_ard_F {
        displayName = "Bundeswehr (Arid)";
        side = 1;
        priority = 3;
        icon = "\A3_Atlas\Data_F_Atlas\FactionIcons\CfgFactionClasses_BLU_G_CA.paa";
        flag = "\A3_Atlas\Data_F_Atlas\Flags\flag_Germany_CO.paa";
    };
};

class CfgVehicles {

    class Atlas_B_G_APC_Wheeled_03_cannon_F;
    class Atlas_B_G_APC_Wheeled_03_cannon_F_OCimport_01 : Atlas_B_G_APC_Wheeled_03_cannon_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_APC_Wheeled_03_cannon_F_OCimport_02 : Atlas_B_G_APC_Wheeled_03_cannon_F_OCimport_01 { class EventHandlers; };

    class B_D_CTRG_CommandoMortar_RF;
    class B_D_CTRG_CommandoMortar_RF_OCimport_01 : B_D_CTRG_CommandoMortar_RF { scope = 0; class EventHandlers; };
    class B_D_CTRG_CommandoMortar_RF_OCimport_02 : B_D_CTRG_CommandoMortar_RF_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Crew_F;
    class Atlas_B_G_Crew_F_OCimport_01 : Atlas_B_G_Crew_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Crew_F_OCimport_02 : Atlas_B_G_Crew_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Engineer_F;
    class Atlas_B_G_Engineer_F_OCimport_01 : Atlas_B_G_Engineer_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Engineer_F_OCimport_02 : Atlas_B_G_Engineer_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Fighter_Pilot_F;
    class Atlas_B_G_Fighter_Pilot_F_OCimport_01 : Atlas_B_G_Fighter_Pilot_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Fighter_Pilot_F_OCimport_02 : Atlas_B_G_Fighter_Pilot_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_GMG_01_A_F;
    class Atlas_B_G_GMG_01_A_F_OCimport_01 : Atlas_B_G_GMG_01_A_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_GMG_01_A_F_OCimport_02 : Atlas_B_G_GMG_01_A_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_GMG_01_F;
    class Atlas_B_G_GMG_01_F_OCimport_01 : Atlas_B_G_GMG_01_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_GMG_01_F_OCimport_02 : Atlas_B_G_GMG_01_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_GMG_01_high_F;
    class Atlas_B_G_GMG_01_high_F_OCimport_01 : Atlas_B_G_GMG_01_high_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_GMG_01_high_F_OCimport_02 : Atlas_B_G_GMG_01_high_F_OCimport_01 { class EventHandlers; };

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

    class Atlas_B_G_HeavyGunner_F;
    class Atlas_B_G_HeavyGunner_F_OCimport_01 : Atlas_B_G_HeavyGunner_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_HeavyGunner_F_OCimport_02 : Atlas_B_G_HeavyGunner_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Heli_Transport_02_F;
    class Atlas_B_G_Heli_Transport_02_F_OCimport_01 : Atlas_B_G_Heli_Transport_02_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Heli_Transport_02_F_OCimport_02 : Atlas_B_G_Heli_Transport_02_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Helicrew_F;
    class Atlas_B_G_Helicrew_F_OCimport_01 : Atlas_B_G_Helicrew_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Helicrew_F_OCimport_02 : Atlas_B_G_Helicrew_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Helipilot_F;
    class Atlas_B_G_Helipilot_F_OCimport_01 : Atlas_B_G_Helipilot_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Helipilot_F_OCimport_02 : Atlas_B_G_Helipilot_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_LT_01_AA_F;
    class Atlas_B_G_LT_01_AA_F_OCimport_01 : Atlas_B_G_LT_01_AA_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_LT_01_AA_F_OCimport_02 : Atlas_B_G_LT_01_AA_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_LT_01_AT_F;
    class Atlas_B_G_LT_01_AT_F_OCimport_01 : Atlas_B_G_LT_01_AT_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_LT_01_AT_F_OCimport_02 : Atlas_B_G_LT_01_AT_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_LT_01_cannon_F;
    class Atlas_B_G_LT_01_cannon_F_OCimport_01 : Atlas_B_G_LT_01_cannon_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_LT_01_cannon_F_OCimport_02 : Atlas_B_G_LT_01_cannon_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_LT_01_scout_F;
    class Atlas_B_G_LT_01_scout_F_OCimport_01 : Atlas_B_G_LT_01_scout_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_LT_01_scout_F_OCimport_02 : Atlas_B_G_LT_01_scout_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_MBT_03_cannon_F;
    class Atlas_B_G_MBT_03_cannon_F_OCimport_01 : Atlas_B_G_MBT_03_cannon_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_MBT_03_cannon_F_OCimport_02 : Atlas_B_G_MBT_03_cannon_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_MRAP_03_F;
    class Atlas_B_G_MRAP_03_F_OCimport_01 : Atlas_B_G_MRAP_03_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_MRAP_03_F_OCimport_02 : Atlas_B_G_MRAP_03_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_MRAP_03_gmg_F;
    class Atlas_B_G_MRAP_03_gmg_F_OCimport_01 : Atlas_B_G_MRAP_03_gmg_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_MRAP_03_gmg_F_OCimport_02 : Atlas_B_G_MRAP_03_gmg_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_MRAP_03_hmg_F;
    class Atlas_B_G_MRAP_03_hmg_F_OCimport_01 : Atlas_B_G_MRAP_03_hmg_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_MRAP_03_hmg_F_OCimport_02 : Atlas_B_G_MRAP_03_hmg_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Medic_F;
    class Atlas_B_G_Medic_F_OCimport_01 : Atlas_B_G_Medic_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Medic_F_OCimport_02 : Atlas_B_G_Medic_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Mortar_01_F;
    class Atlas_B_G_Mortar_01_F_OCimport_01 : Atlas_B_G_Mortar_01_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Mortar_01_F_OCimport_02 : Atlas_B_G_Mortar_01_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Officer_F;
    class Atlas_B_G_Officer_F_OCimport_01 : Atlas_B_G_Officer_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Officer_F_OCimport_02 : Atlas_B_G_Officer_F_OCimport_01 { class EventHandlers; };

    class Aegis_Pickup_01_AT_base_RF;
    class Aegis_Pickup_01_AT_base_RF_OCimport_01 : Aegis_Pickup_01_AT_base_RF { scope = 0; class EventHandlers; };
    class Aegis_Pickup_01_AT_base_RF_OCimport_02 : Aegis_Pickup_01_AT_base_RF_OCimport_01 { class EventHandlers; };

    class Pickup_comms_base_rf;
    class Pickup_comms_base_rf_OCimport_01 : Pickup_comms_base_rf { scope = 0; class EventHandlers; };
    class Pickup_comms_base_rf_OCimport_02 : Pickup_comms_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_hmg_base_rf;
    class Pickup_01_hmg_base_rf_OCimport_01 : Pickup_01_hmg_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_hmg_base_rf_OCimport_02 : Pickup_01_hmg_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_aat_base_rf;
    class Pickup_01_aat_base_rf_OCimport_01 : Pickup_01_aat_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_aat_base_rf_OCimport_02 : Pickup_01_aat_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_base_rf;
    class Pickup_01_base_rf_OCimport_01 : Pickup_01_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_base_rf_OCimport_02 : Pickup_01_base_rf_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Plane_Fighter_01_Stealth_F;
    class Atlas_B_G_Plane_Fighter_01_Stealth_F_OCimport_01 : Atlas_B_G_Plane_Fighter_01_Stealth_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Plane_Fighter_01_Stealth_F_OCimport_02 : Atlas_B_G_Plane_Fighter_01_Stealth_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Plane_Fighter_01_F;
    class Atlas_B_G_Plane_Fighter_01_F_OCimport_01 : Atlas_B_G_Plane_Fighter_01_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Plane_Fighter_01_F_OCimport_02 : Atlas_B_G_Plane_Fighter_01_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Radar_System_01_F;
    class Atlas_B_G_Radar_System_01_F_OCimport_01 : Atlas_B_G_Radar_System_01_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Radar_System_01_F_OCimport_02 : Atlas_B_G_Radar_System_01_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_ard_F;
    class Atlas_B_G_Soldier_ard_F_OCimport_01 : Atlas_B_G_Soldier_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_ard_F_OCimport_02 : Atlas_B_G_Soldier_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Recon_AR_F;
    class Atlas_B_G_Recon_AR_F_OCimport_01 : Atlas_B_G_Recon_AR_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Recon_AR_F_OCimport_02 : Atlas_B_G_Recon_AR_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Recon_Exp_F;
    class Atlas_B_G_Recon_Exp_F_OCimport_01 : Atlas_B_G_Recon_Exp_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Recon_Exp_F_OCimport_02 : Atlas_B_G_Recon_Exp_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Recon_GL_F;
    class Atlas_B_G_Recon_GL_F_OCimport_01 : Atlas_B_G_Recon_GL_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Recon_GL_F_OCimport_02 : Atlas_B_G_Recon_GL_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Recon_JTAC_F;
    class Atlas_B_G_Recon_JTAC_F_OCimport_01 : Atlas_B_G_Recon_JTAC_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Recon_JTAC_F_OCimport_02 : Atlas_B_G_Recon_JTAC_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Recon_LAT_F;
    class Atlas_B_G_Recon_LAT_F_OCimport_01 : Atlas_B_G_Recon_LAT_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Recon_LAT_F_OCimport_02 : Atlas_B_G_Recon_LAT_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Recon_MG_F;
    class Atlas_B_G_Recon_MG_F_OCimport_01 : Atlas_B_G_Recon_MG_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Recon_MG_F_OCimport_02 : Atlas_B_G_Recon_MG_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Recon_M_F;
    class Atlas_B_G_Recon_M_F_OCimport_01 : Atlas_B_G_Recon_M_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Recon_M_F_OCimport_02 : Atlas_B_G_Recon_M_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Recon_Medic_F;
    class Atlas_B_G_Recon_Medic_F_OCimport_01 : Atlas_B_G_Recon_Medic_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Recon_Medic_F_OCimport_02 : Atlas_B_G_Recon_Medic_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Recon_TL_F;
    class Atlas_B_G_Recon_TL_F_OCimport_01 : Atlas_B_G_Recon_TL_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Recon_TL_F_OCimport_02 : Atlas_B_G_Recon_TL_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Recon_F;
    class Atlas_B_G_Recon_F_OCimport_01 : Atlas_B_G_Recon_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Recon_F_OCimport_02 : Atlas_B_G_Recon_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_SAM_System_03_F;
    class Atlas_B_G_SAM_System_03_F_OCimport_01 : Atlas_B_G_SAM_System_03_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_SAM_System_03_F_OCimport_02 : Atlas_B_G_SAM_System_03_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_AAA_F;
    class Atlas_B_G_Soldier_AAA_F_OCimport_01 : Atlas_B_G_Soldier_AAA_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_AAA_F_OCimport_02 : Atlas_B_G_Soldier_AAA_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_AAR_F;
    class Atlas_B_G_Soldier_AAR_F_OCimport_01 : Atlas_B_G_Soldier_AAR_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_AAR_F_OCimport_02 : Atlas_B_G_Soldier_AAR_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_AAT_F;
    class Atlas_B_G_Soldier_AAT_F_OCimport_01 : Atlas_B_G_Soldier_AAT_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_AAT_F_OCimport_02 : Atlas_B_G_Soldier_AAT_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_AA_F;
    class Atlas_B_G_Soldier_AA_F_OCimport_01 : Atlas_B_G_Soldier_AA_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_AA_F_OCimport_02 : Atlas_B_G_Soldier_AA_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_AR_F;
    class Atlas_B_G_Soldier_AR_F_OCimport_01 : Atlas_B_G_Soldier_AR_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_AR_F_OCimport_02 : Atlas_B_G_Soldier_AR_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_AT_F;
    class Atlas_B_G_Soldier_AT_F_OCimport_01 : Atlas_B_G_Soldier_AT_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_AT_F_OCimport_02 : Atlas_B_G_Soldier_AT_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_A_F;
    class Atlas_B_G_Soldier_A_F_OCimport_01 : Atlas_B_G_Soldier_A_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_A_F_OCimport_02 : Atlas_B_G_Soldier_A_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_CQ_F;
    class Atlas_B_G_Soldier_CQ_F_OCimport_01 : Atlas_B_G_Soldier_CQ_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_CQ_F_OCimport_02 : Atlas_B_G_Soldier_CQ_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_Exp_F;
    class Atlas_B_G_Soldier_Exp_F_OCimport_01 : Atlas_B_G_Soldier_Exp_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_Exp_F_OCimport_02 : Atlas_B_G_Soldier_Exp_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_GL_F;
    class Atlas_B_G_Soldier_GL_F_OCimport_01 : Atlas_B_G_Soldier_GL_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_GL_F_OCimport_02 : Atlas_B_G_Soldier_GL_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_LAT_F;
    class Atlas_B_G_Soldier_LAT_F_OCimport_01 : Atlas_B_G_Soldier_LAT_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_LAT_F_OCimport_02 : Atlas_B_G_Soldier_LAT_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_Lite_F;
    class Atlas_B_G_Soldier_Lite_F_OCimport_01 : Atlas_B_G_Soldier_Lite_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_Lite_F_OCimport_02 : Atlas_B_G_Soldier_Lite_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_MP_F;
    class Atlas_B_G_Soldier_MP_F_OCimport_01 : Atlas_B_G_Soldier_MP_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_MP_F_OCimport_02 : Atlas_B_G_Soldier_MP_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_PG_F;
    class Atlas_B_G_Soldier_PG_F_OCimport_01 : Atlas_B_G_Soldier_PG_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_PG_F_OCimport_02 : Atlas_B_G_Soldier_PG_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_Repair_F;
    class Atlas_B_G_Soldier_Repair_F_OCimport_01 : Atlas_B_G_Soldier_Repair_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_Repair_F_OCimport_02 : Atlas_B_G_Soldier_Repair_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_SL_F;
    class Atlas_B_G_Soldier_SL_F_OCimport_01 : Atlas_B_G_Soldier_SL_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_SL_F_OCimport_02 : Atlas_B_G_Soldier_SL_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_TL_F;
    class Atlas_B_G_Soldier_TL_F_OCimport_01 : Atlas_B_G_Soldier_TL_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_TL_F_OCimport_02 : Atlas_B_G_Soldier_TL_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_UAV_F;
    class Atlas_B_G_Soldier_UAV_F_OCimport_01 : Atlas_B_G_Soldier_UAV_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_UAV_F_OCimport_02 : Atlas_B_G_Soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_F;
    class Atlas_B_G_Soldier_F_OCimport_01 : Atlas_B_G_Soldier_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_F_OCimport_02 : Atlas_B_G_Soldier_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Static_AA_F;
    class Atlas_B_G_Static_AA_F_OCimport_01 : Atlas_B_G_Static_AA_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Static_AA_F_OCimport_02 : Atlas_B_G_Static_AA_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Static_AT_F;
    class Atlas_B_G_Static_AT_F_OCimport_01 : Atlas_B_G_Static_AT_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Static_AT_F_OCimport_02 : Atlas_B_G_Static_AT_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Static_Designator_01_F;
    class Atlas_B_G_Static_Designator_01_F_OCimport_01 : Atlas_B_G_Static_Designator_01_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Static_Designator_01_F_OCimport_02 : Atlas_B_G_Static_Designator_01_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Support_AMG_F;
    class Atlas_B_G_Support_AMG_F_OCimport_01 : Atlas_B_G_Support_AMG_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Support_AMG_F_OCimport_02 : Atlas_B_G_Support_AMG_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Support_AMort_F;
    class Atlas_B_G_Support_AMort_F_OCimport_01 : Atlas_B_G_Support_AMort_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Support_AMort_F_OCimport_02 : Atlas_B_G_Support_AMort_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Support_GMG_F;
    class Atlas_B_G_Support_GMG_F_OCimport_01 : Atlas_B_G_Support_GMG_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Support_GMG_F_OCimport_02 : Atlas_B_G_Support_GMG_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Support_MG_F;
    class Atlas_B_G_Support_MG_F_OCimport_01 : Atlas_B_G_Support_MG_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Support_MG_F_OCimport_02 : Atlas_B_G_Support_MG_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Support_Mort_F;
    class Atlas_B_G_Support_Mort_F_OCimport_01 : Atlas_B_G_Support_Mort_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Support_Mort_F_OCimport_02 : Atlas_B_G_Support_Mort_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Truck_01_ammo_F;
    class Atlas_B_G_Truck_01_ammo_F_OCimport_01 : Atlas_B_G_Truck_01_ammo_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Truck_01_ammo_F_OCimport_02 : Atlas_B_G_Truck_01_ammo_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Truck_01_box_F;
    class Atlas_B_G_Truck_01_box_F_OCimport_01 : Atlas_B_G_Truck_01_box_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Truck_01_box_F_OCimport_02 : Atlas_B_G_Truck_01_box_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Truck_01_cargo_F;
    class Atlas_B_G_Truck_01_cargo_F_OCimport_01 : Atlas_B_G_Truck_01_cargo_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Truck_01_cargo_F_OCimport_02 : Atlas_B_G_Truck_01_cargo_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Truck_01_covered_F;
    class Atlas_B_G_Truck_01_covered_F_OCimport_01 : Atlas_B_G_Truck_01_covered_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Truck_01_covered_F_OCimport_02 : Atlas_B_G_Truck_01_covered_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Truck_01_flatbed_F;
    class Atlas_B_G_Truck_01_flatbed_F_OCimport_01 : Atlas_B_G_Truck_01_flatbed_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Truck_01_flatbed_F_OCimport_02 : Atlas_B_G_Truck_01_flatbed_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Truck_01_fuel_F;
    class Atlas_B_G_Truck_01_fuel_F_OCimport_01 : Atlas_B_G_Truck_01_fuel_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Truck_01_fuel_F_OCimport_02 : Atlas_B_G_Truck_01_fuel_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Truck_01_medical_F;
    class Atlas_B_G_Truck_01_medical_F_OCimport_01 : Atlas_B_G_Truck_01_medical_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Truck_01_medical_F_OCimport_02 : Atlas_B_G_Truck_01_medical_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Truck_01_mover_F;
    class Atlas_B_G_Truck_01_mover_F_OCimport_01 : Atlas_B_G_Truck_01_mover_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Truck_01_mover_F_OCimport_02 : Atlas_B_G_Truck_01_mover_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Truck_01_Repair_F;
    class Atlas_B_G_Truck_01_Repair_F_OCimport_01 : Atlas_B_G_Truck_01_Repair_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Truck_01_Repair_F_OCimport_02 : Atlas_B_G_Truck_01_Repair_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Truck_01_transport_F;
    class Atlas_B_G_Truck_01_transport_F_OCimport_01 : Atlas_B_G_Truck_01_transport_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Truck_01_transport_F_OCimport_02 : Atlas_B_G_Truck_01_transport_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_UAV_01_F;
    class Atlas_B_G_UAV_01_F_OCimport_01 : Atlas_B_G_UAV_01_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_UAV_01_F_OCimport_02 : Atlas_B_G_UAV_01_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_UAV_02_dynamicLoadout_F;
    class Atlas_B_G_UAV_02_dynamicLoadout_F_OCimport_01 : Atlas_B_G_UAV_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_UAV_02_dynamicLoadout_F_OCimport_02 : Atlas_B_G_UAV_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_UAV_06_F;
    class Atlas_B_G_UAV_06_F_OCimport_01 : Atlas_B_G_UAV_06_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_UAV_06_F_OCimport_02 : Atlas_B_G_UAV_06_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_UAV_06_medical_F;
    class Atlas_B_G_UAV_06_medical_F_OCimport_01 : Atlas_B_G_UAV_06_medical_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_UAV_06_medical_F_OCimport_02 : Atlas_B_G_UAV_06_medical_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_UAV_07_F;
    class Atlas_B_G_UAV_07_F_OCimport_01 : Atlas_B_G_UAV_07_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_UAV_07_F_OCimport_02 : Atlas_B_G_UAV_07_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_UGV_01_F;
    class Atlas_B_G_UGV_01_F_OCimport_01 : Atlas_B_G_UGV_01_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_UGV_01_F_OCimport_02 : Atlas_B_G_UGV_01_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_UGV_01_medical_F;
    class Atlas_B_G_UGV_01_medical_F_OCimport_01 : Atlas_B_G_UGV_01_medical_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_UGV_01_medical_F_OCimport_02 : Atlas_B_G_UGV_01_medical_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_UGV_01_rcws_F;
    class Atlas_B_G_UGV_01_rcws_F_OCimport_01 : Atlas_B_G_UGV_01_rcws_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_UGV_01_rcws_F_OCimport_02 : Atlas_B_G_UGV_01_rcws_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_UGV_02_Demining_F;
    class Atlas_B_G_UGV_02_Demining_F_OCimport_01 : Atlas_B_G_UGV_02_Demining_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_UGV_02_Demining_F_OCimport_02 : Atlas_B_G_UGV_02_Demining_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_soldier_M_F;
    class Atlas_B_G_soldier_M_F_OCimport_01 : Atlas_B_G_soldier_M_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_soldier_M_F_OCimport_02 : Atlas_B_G_soldier_M_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_UAV_ard_F;
    class Atlas_B_G_Soldier_UAV_ard_F_OCimport_01 : Atlas_B_G_Soldier_UAV_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_UAV_ard_F_OCimport_02 : Atlas_B_G_Soldier_UAV_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Soldier_Exp_ard_F;
    class Atlas_B_G_Soldier_Exp_ard_F_OCimport_01 : Atlas_B_G_Soldier_Exp_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Soldier_Exp_ard_F_OCimport_02 : Atlas_B_G_Soldier_Exp_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Support_AMort_ard_F;
    class Atlas_B_G_Support_AMort_ard_F_OCimport_01 : Atlas_B_G_Support_AMort_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Support_AMort_ard_F_OCimport_02 : Atlas_B_G_Support_AMort_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_APC_Wheeled_03_cannon_ard_F : Atlas_B_G_APC_Wheeled_03_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pandur II";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_CommandoMortar_ard_RF : B_D_CTRG_CommandoMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RSG60";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Crew_ard_F : Atlas_B_G_Crew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Coyote_F","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Coyote_F","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"SMG_04_snd_Holo_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"SMG_04_snd_Holo_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Engineer_ard_F : Atlas_B_G_Engineer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        backpack = "B_Kitbag_multitarn_BEEng_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Fighter_Pilot_ard_F : Atlas_B_G_Fighter_Pilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter Pilot";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_pilot"};

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

    class Atlas_B_G_GMG_01_A_ard_F : Atlas_B_G_GMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307A";
        side = 1;
        faction = "atlas_blu_g_ard_f";
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

    class Atlas_B_G_GMG_01_ard_F : Atlas_B_G_GMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_GMG_01_high_ard_F : Atlas_B_G_GMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307 (High)";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_HMG_01_A_ard_F : B_HMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312A";
        side = 1;
        faction = "atlas_blu_g_ard_f";
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

    class Atlas_B_G_HMG_01_ard_F : B_HMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_HMG_01_high_ard_F : B_HMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312 (High)";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_HMG_02_ard_F : HMG_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_HMG_02_high_ard_F : HMG_02_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_HeavyGunner_ard_F : Atlas_B_G_HeavyGunner_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"MMG_01_tan_LP_BI_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"MMG_01_tan_LP_BI_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Heli_Transport_02_ard_F : Atlas_B_G_Heli_Transport_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH-49 Mohawk";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Helicrew_ard_F : Atlas_B_G_Helicrew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 1;
        faction = "atlas_blu_g_ard_f";

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

    class Atlas_B_G_Helipilot_ard_F : Atlas_B_G_Helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_pilot"};

        uniformClass = "Atlas_U_B_G_HeliPilotCoveralls";

        linkedItems[] = {"V_CarrierRigKBT_01_Coyote_F","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Coyote_F","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"SMG_04_snd_Holo_F","Throw","Put"};
        respawnWeapons[] = {"SMG_04_snd_Holo_F","Throw","Put"};

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

    class Atlas_B_G_LT_01_AA_ard_F : Atlas_B_G_LT_01_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AWC 302 Nyx (AA)";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_LT_01_AT_ard_F : Atlas_B_G_LT_01_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AWC 301 Nyx (AT)";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_LT_01_cannon_ard_F : Atlas_B_G_LT_01_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AWC 304 Nyx (Autocannon)";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_LT_01_scout_ard_F : Atlas_B_G_LT_01_scout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AWC 303 Nyx (Recon)";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_MBT_03_cannon_ard_F : Atlas_B_G_MBT_03_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Luchs 3A5";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_MRAP_03_ard_F : Atlas_B_G_MRAP_03_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Strider";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_MRAP_03_gmg_ard_F : Atlas_B_G_MRAP_03_gmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Strider GMG";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_MRAP_03_hmg_ard_F : Atlas_B_G_MRAP_03_hmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Strider HMG";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Medic_ard_F : Atlas_B_G_Medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        backpack = "B_AssaultPack_multitarn_BEMedic_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetSpecB_cover_multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetSpecB_cover_multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_Sand_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36_Sand_Pointer_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Mortar_01_ard_F : Atlas_B_G_Mortar_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_B_G_Mortar_01_ard_F";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Officer_ard_F : Atlas_B_G_Officer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_casual"};

        uniformClass = "Atlas_U_CombatUniformEURO_01_multitarn_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_olive_F","Atlas_H_FieldCap_multitarn","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_olive_F","Atlas_H_FieldCap_multitarn","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_G36C_Sand_F","hgun_P07_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_G36C_Sand_F","hgun_P07_F","Throw","Put","Binocular"};

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

    class Atlas_B_G_Pickup_AT_ard_F : Aegis_Pickup_01_AT_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_B_G_Pickup_AT_ard_F";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Pickup_Comms_ard_F : Pickup_comms_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Comms)";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Pickup_HMG_ard_F : Pickup_01_hmg_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (HMG)";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Pickup_aat_ard_F : Pickup_01_aat_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (AA)";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Pickup_ard_F : Pickup_01_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Plane_Fighter_01_Stealth_ard_F : Atlas_B_G_Plane_Fighter_01_Stealth_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "F/A-181 Black Wasp II (Stealth)";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Fighter_Pilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Plane_Fighter_01_ard_F : Atlas_B_G_Plane_Fighter_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "F/A-181 Black Wasp II";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Fighter_Pilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Radar_System_01_ard_F : Atlas_B_G_Radar_System_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AN/MPQ-105 Radar";
        side = 1;
        faction = "atlas_blu_g_ard_f";
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

    class Atlas_B_G_RadioOperator_ard_F : Atlas_B_G_Soldier_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        backpack = "B_RadioBag_01_multitarn_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_Sand_Holo_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36_Sand_Holo_Pointer_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Recon_AR_ard_F : Atlas_B_G_Recon_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Autorifleman";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_Shemag_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_Shemag_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_02_blk_LRCO_Pointer_Bipod_Snds_F","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_02_blk_LRCO_Pointer_Bipod_Snds_F","hgun_P07_snds_F","Throw","Put"};

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

    class Atlas_B_G_Recon_Exp_ard_F : Atlas_B_G_Recon_Exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Demo Specialist";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        backpack = "B_Kitbag_multitarn_BEExp_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_CQB_cbr_F","H_Shemag_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_CQB_cbr_F","H_Shemag_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put"};

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

    class Atlas_B_G_Recon_GL_ard_F : Atlas_B_G_Recon_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Grenadier";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_CQB_cbr_F","H_Shemag_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_CQB_cbr_F","H_Shemag_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_GL_blk_LRCO_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_GL_blk_LRCO_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put"};

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

    class Atlas_B_G_Recon_JTAC_ard_F : Atlas_B_G_Recon_JTAC_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon JTAC";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        backpack = "B_RadioBag_01_multitarn_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_Cap_headphones_tan","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_Cap_headphones_tan","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put","Laserdesignator_01_khk_F"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put","Laserdesignator_01_khk_F"};

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

    class Atlas_B_G_Recon_LAT_ard_F : Atlas_B_G_Recon_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (AT)";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        backpack = "B_AssaultPack_multitarn_BELAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_Shemag_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_Shemag_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_Snds_F","Atlas_launch_Pzf3_F","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_Snds_F","Atlas_launch_Pzf3_F","hgun_P07_snds_F","Throw","Put"};

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

    class Atlas_B_G_Recon_MG_ard_F : Atlas_B_G_Recon_MG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Gunner";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        backpack = "B_AssaultPack_multitarn_BEReconMG_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_Shemag_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_Shemag_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"MMG_01_black_LRCO_LP_S_F","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"MMG_01_black_LRCO_LP_S_F","hgun_P07_snds_F","Throw","Put"};

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

    class Atlas_B_G_Recon_M_ard_F : Atlas_B_G_Recon_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Marksman";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_Booniehat_Multitarn_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_Booniehat_Multitarn_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_SPAR_03_blk_MOS_Pointer_Bipod_Snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};

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

    class Atlas_B_G_Recon_Medic_ard_F : Atlas_B_G_Recon_Medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Paramedic";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        backpack = "B_AssaultPack_multitarn_BEMedic_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_Cap_headphones_tan","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_Cap_headphones_tan","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_Holo_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put"};

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

    class Atlas_B_G_Recon_TL_ard_F : Atlas_B_G_Recon_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Team Leader";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_Booniehat_Multitarn_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_Booniehat_Multitarn_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_blk_LRCO_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_LRCO_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};

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

    class Atlas_B_G_Recon_ard_F : Atlas_B_G_Recon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_recon"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_Shemag_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_Shemag_khk_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_SPAR_01_blk_LRCO_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_LRCO_Pointer_Snds_F","hgun_P07_snds_F","Throw","Put","Binocular"};

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

    class Atlas_B_G_SAM_System_03_ard_F : Atlas_B_G_SAM_System_03_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MIM-104 Patriot";
        side = 1;
        faction = "atlas_blu_g_ard_f";
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

    class Atlas_B_G_Soldier_AAA_ard_F : Atlas_B_G_Soldier_AAA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        backpack = "B_Carryall_multitarn_BEAAA_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_G36_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};

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

    class Atlas_B_G_Soldier_AAR_ard_F : Atlas_B_G_Soldier_AAR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        backpack = "B_Kitbag_multitarn_BEAAR_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_G36_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};

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

    class Atlas_B_G_Soldier_AAT_ard_F : Atlas_B_G_Soldier_AAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        backpack = "B_Carryall_multitarn_BEAAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_G36_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};

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

    class Atlas_B_G_Soldier_AA_ard_F : Atlas_B_G_Soldier_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        backpack = "B_Kitbag_multitarn_BEAA_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Sand_Holo_Pointer_F","launch_B_Titan_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Sand_Holo_Pointer_F","launch_B_Titan_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Soldier_AR_ard_F : Atlas_B_G_Soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_CQB_cbr_F","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_CQB_cbr_F","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"Atlas_LMG_MK200_plain_IR_BI_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_LMG_MK200_plain_IR_BI_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Soldier_AT_ard_F : Atlas_B_G_Soldier_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        backpack = "B_Kitbag_multitarn_BEAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Sand_Holo_Pointer_F","launch_B_Titan_short_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Sand_Holo_Pointer_F","launch_B_Titan_short_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Soldier_A_ard_F : Atlas_B_G_Soldier_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        backpack = "B_Carryall_multitarn_BEAmmo_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Soldier_CBRN_ard_F : Atlas_B_G_Soldier_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Specialist";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "U_B_CBRN_Suit_01_MTP_F";

        backpack = "B_CombinationUnitRespirator_01_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Sand_Holo_FL_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Sand_Holo_FL_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Soldier_CQ_ard_F : Atlas_B_G_Soldier_CQ_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_CQB_Cbr_F","H_HelmetB_cover_multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_CQB_Cbr_F","H_HelmetB_cover_multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"sgun_M4_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"sgun_M4_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Soldier_Exp_ard_F : Atlas_B_G_Soldier_Exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        backpack = "B_Kitbag_multitarn_BEExp_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Heavy_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Heavy_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Soldier_GL_ard_F : Atlas_B_G_Soldier_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Heavy_Coyote_F","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Heavy_Coyote_F","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_GL_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36_GL_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Soldier_LAT_ard_F : Atlas_B_G_Soldier_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        backpack = "B_AssaultPack_multitarn_BELAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_Sand_Holo_Pointer_F","Atlas_launch_Pzf3_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36_Sand_Holo_Pointer_F","Atlas_launch_Pzf3_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Soldier_Lite_ard_F : Atlas_B_G_Soldier_Lite_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_NATO_casual"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Coyote_F","H_Headset_light","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Coyote_F","H_Headset_light","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_G36C_Sand_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Sand_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Soldier_MP_ard_F : Atlas_B_G_Soldier_MP_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Military Police Officer";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformEURO_02_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","Atlas_H_FieldCap_hs_multitarn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","Atlas_H_FieldCap_hs_multitarn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_G36C_Sand_Holo_FL_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Sand_Holo_FL_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Soldier_PG_ard_F : Atlas_B_G_Soldier_PG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Para Trooper";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        backpack = "B_Parachute";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Soldier_Repair_ard_F : Atlas_B_G_Soldier_Repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        backpack = "B_AssaultPack_multitarn_BERepair_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Soldier_SL_ard_F : Atlas_B_G_Soldier_SL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetSpecB_cover_multitarn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetSpecB_cover_multitarn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_Sand_LRCO_Pointer_F","hgun_P07_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_G36_Sand_LRCO_Pointer_F","hgun_P07_F","Throw","Put","Binocular"};

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

    class Atlas_B_G_Soldier_TL_ard_F : Atlas_B_G_Soldier_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Heavy_Coyote_F","H_HelmetSpecB_cover_multitarn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Heavy_Coyote_F","H_HelmetSpecB_cover_multitarn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_GL_Sand_LRCO_Pointer_F","hgun_P07_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_G36_GL_Sand_LRCO_Pointer_F","hgun_P07_F","Throw","Put","Binocular"};

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

    class Atlas_B_G_Soldier_UAV_ard_F : Atlas_B_G_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        backpack = "B_UAV_01_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};

        weapons[] = {"arifle_G36_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Soldier_ard_F : Atlas_B_G_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetSpecB_cover_multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetSpecB_cover_multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36_Sand_Holo_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36_Sand_Holo_Pointer_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Soldier_unarmed_ard_F : Atlas_B_G_Soldier_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetSpecB_cover_multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetSpecB_cover_multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class Atlas_B_G_Static_AA_ard_F : Atlas_B_G_Static_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AA)";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Static_AT_ard_F : Atlas_B_G_Static_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AT)";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Static_Designator_01_ard_F : Atlas_B_G_Static_Designator_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Remote Designator";
        side = 1;
        faction = "atlas_blu_g_ard_f";
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

    class Atlas_B_G_Support_AMG_ard_F : Atlas_B_G_Support_AMG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (HMG/GMG)";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        backpack = "B_HMG_01_support_F";

        linkedItems[] = {"V_TacChestrig_grn_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Support_AMort_ard_F : Atlas_B_G_Support_AMort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (Mk6)";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        backpack = "B_Mortar_01_support_F";

        linkedItems[] = {"V_TacChestrig_grn_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Support_GMG_ard_F : Atlas_B_G_Support_GMG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (GMG)";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        backpack = "B_GMG_01_Weapon_F";

        linkedItems[] = {"V_TacChestrig_grn_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Support_MG_ard_F : Atlas_B_G_Support_MG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (HMG)";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        backpack = "B_HMG_01_Weapon_F";

        linkedItems[] = {"V_TacChestrig_grn_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Support_Mort_ard_F : Atlas_B_G_Support_Mort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mk6)";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        backpack = "B_Mortar_01_Weapon_F";

        linkedItems[] = {"V_TacChestrig_grn_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_Survivor_ard_F : Atlas_B_G_Soldier_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

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

    class Atlas_B_G_Truck_01_ammo_ard_F : Atlas_B_G_Truck_01_ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Ammo";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Truck_01_box_ard_F : Atlas_B_G_Truck_01_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Container";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Truck_01_cargo_ard_F : Atlas_B_G_Truck_01_cargo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Cargo";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Truck_01_covered_ard_F : Atlas_B_G_Truck_01_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport (covered)";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Truck_01_flatbed_ard_F : Atlas_B_G_Truck_01_flatbed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Flatbed";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Truck_01_fuel_ard_F : Atlas_B_G_Truck_01_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Fuel";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Truck_01_medical_ard_F : Atlas_B_G_Truck_01_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Medical";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Truck_01_mover_ard_F : Atlas_B_G_Truck_01_mover_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Truck_01_repair_ard_F : Atlas_B_G_Truck_01_Repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Repair";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_Truck_01_transport_ard_F : Atlas_B_G_Truck_01_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport";
        side = 1;
        faction = "atlas_blu_g_ard_f";
        crew = "Atlas_B_G_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_G_UAV_01_ard_F : Atlas_B_G_UAV_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR-2 Darter";
        side = 1;
        faction = "atlas_blu_g_ard_f";
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

    class Atlas_B_G_UAV_02_dynamicLoadout_ard_F : Atlas_B_G_UAV_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "YABHON-R3";
        side = 1;
        faction = "atlas_blu_g_ard_f";
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

    class Atlas_B_G_UAV_06_ard_F : Atlas_B_G_UAV_06_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican";
        side = 1;
        faction = "atlas_blu_g_ard_f";
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

    class Atlas_B_G_UAV_06_medical_ard_F : Atlas_B_G_UAV_06_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican (Medical)";
        side = 1;
        faction = "atlas_blu_g_ard_f";
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

    class Atlas_B_G_UAV_07_ard_F : Atlas_B_G_UAV_07_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MQ-9A Reaper";
        side = 1;
        faction = "atlas_blu_g_ard_f";
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

    class Atlas_B_G_UGV_01_ard_F : Atlas_B_G_UGV_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper";
        side = 1;
        faction = "atlas_blu_g_ard_f";
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

    class Atlas_B_G_UGV_01_medical_ard_F : Atlas_B_G_UGV_01_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper Medical";
        side = 1;
        faction = "atlas_blu_g_ard_f";
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

    class Atlas_B_G_UGV_01_rcws_ard_F : Atlas_B_G_UGV_01_rcws_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper RCWS";
        side = 1;
        faction = "atlas_blu_g_ard_f";
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

    class Atlas_B_G_UGV_02_Demining_ard_F : Atlas_B_G_UGV_02_Demining_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ED-1D Pelter";
        side = 1;
        faction = "atlas_blu_g_ard_f";
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

    class Atlas_B_G_soldier_M_ard_F : Atlas_B_G_soldier_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_01_multitarn_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"srifle_DMR_03_tan_LRCO_LP_BI_F","hgun_P07_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_03_tan_LRCO_LP_BI_F","hgun_P07_F","Throw","Put","Rangefinder"};

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

    class Atlas_B_G_soldier_UAV_06_ard_F : Atlas_B_G_Soldier_UAV_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        backpack = "B_UAV_06_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};

        weapons[] = {"arifle_G36_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_soldier_UAV_06_medical_ard_F : Atlas_B_G_Soldier_UAV_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        backpack = "B_UAV_06_medical_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};

        weapons[] = {"arifle_G36_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_soldier_UGV_02_Demining_ard_F : Atlas_B_G_Soldier_UAV_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1D)";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        backpack = "B_UGV_02_Demining_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Light_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles"};

        weapons[] = {"arifle_G36_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36_Sand_ACO_Pointer_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_soldier_mine_ard_F : Atlas_B_G_Soldier_Exp_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mine Specialist";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        backpack = "B_Carryall_multitarn_Mine";

        linkedItems[] = {"V_CarrierRigKBT_01_Heavy_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Heavy_Coyote_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};

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

    class Atlas_B_G_support_CMort_ard_RF : Atlas_B_G_Support_AMort_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 1;
        faction = "atlas_blu_g_ard_f";

        identityTypes[] = {"LanguageENG_F","Head_Euro","Head_Enoch","G_GER_default"};

        uniformClass = "Atlas_U_CombatUniformNCU_02_multitarn_F";

        backpack = "B_D_CTRG_CommandoMortar_weapon_RF";

        linkedItems[] = {"V_TacChestrig_grn_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","H_HelmetB_cover_Multitarn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Sand_Pointer_F","hgun_P07_F","Throw","Put"};

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

};

class CfgGroups {
    class West {
        class Atlas_BLU_G_ard_F {
            class Armored {
                class B_G_LTankSection_AT {
                    name = "AWC Anti-Armor Section";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_LT_01_AT_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_LT_01_AT_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class B_G_ard_LTankPlatoon_AA {
                    name = "AWC Air-Defense Platoon";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_LT_01_scout_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_LT_01_AA_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_G_LT_01_AA_ard_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_G_LT_01_AA_ard_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class B_G_ard_LTankPlatoon_combined {
                    name = "AWC Platoon (Combined)";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_LT_01_scout_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_LT_01_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_G_LT_01_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_G_LT_01_AT_ard_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class B_G_ard_LTankSection_AA {
                    name = "AWC Air-Defense Section";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_LT_01_AA_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_LT_01_AA_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class B_G_ard_LTankSection_Assault {
                    name = "AWC Assault Section";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_LT_01_cannon_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_LT_01_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class B_G_ard_LTankSection_Recon {
                    name = "AWC Recon Section";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_LT_01_scout_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_LT_01_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class B_G_ard_TankPlatoon {
                    name = "Tank Platoon";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_MBT_03_cannon_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_MBT_03_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_G_MBT_03_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_G_MBT_03_cannon_ard_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class B_G_ard_TankSection {
                    name = "Tank Section";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_MBT_03_cannon_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_MBT_03_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class B_G_ard_InfSentry {
                    name = "Sentry";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_soldier_GL_ard_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_soldier_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class B_G_ard_InfSquad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_RadioOperator_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_G_soldier_LAT_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_G_soldier_M_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_G_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_G_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_G_soldier_A_ard_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_G_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class B_G_ard_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_soldier_AR_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_G_soldier_GL_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_G_soldier_M_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_G_soldier_AT_ard_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_G_soldier_ard_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_G_soldier_A_ard_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_G_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class B_G_ard_InfTeam {
                    name = "Fire Team";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_G_soldier_GL_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_G_soldier_LAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_G_ard_InfTeam_AA {
                    name = "Air-defense Team";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_soldier_AA_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_G_soldier_AA_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_G_soldier_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_G_ard_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_soldier_AT_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_G_soldier_AT_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_G_soldier_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class B_G_ard_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_APC_Wheeled_03_cannon_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_G_RadioOperator_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_G_soldier_LAT_ard_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_G_soldier_M_ard_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_G_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_G_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_G_soldier_A_ard_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_B_G_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized {
                class B_G_ard_MotInf_AA {
                    name = "Motorized Air-defense Team";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_MRAP_03_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_soldier_AA_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_G_soldier_AA_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                };
                class B_G_ard_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_MRAP_03_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_soldier_AT_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_G_soldier_AT_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                };
                class B_G_ard_MotInf_Team {
                    name = "Motorized Team";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_MRAP_03_gmg_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_soldier_LAT_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
            };
            class SpecOps {
                class B_G_ard_ReconPatrol {
                    name = "Recon Patrol";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_recon_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_recon_M_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_G_recon_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_G_recon_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_G_ard_ReconSentry {
                    name = "Recon Sentry";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_recon_M_ard_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_recon_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class B_G_ard_ReconTeam {
                    name = "Recon Team";
                    side = 1;
                    faction = "Atlas_BLU_G_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_G_recon_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_G_recon_M_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_G_recon_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_G_recon_LAT_ard_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_G_recon_JTAC_ard_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_G_recon_exp_ard_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
            };
        };
    };
};
