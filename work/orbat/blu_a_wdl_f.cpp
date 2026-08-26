//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class BLU_A_wdl_F {
        displayName = "BAF (Woodland)";
        side = 1;
        priority = 3;
        icon = "\A3_Aegis\Data_F_Aegis\FactionIcons\CfgFactionClasses_BLU_A_CA.paa";
        flag = "\A3\Data_F\Flags\flag_UK_CO.paa";
    };
};

class CfgVehicles {

    class Aegis_B_A_CombatBoat_AT_EF;
    class Aegis_B_A_CombatBoat_AT_EF_OCimport_01 : Aegis_B_A_CombatBoat_AT_EF { scope = 0; class EventHandlers; };
    class Aegis_B_A_CombatBoat_AT_EF_OCimport_02 : Aegis_B_A_CombatBoat_AT_EF_OCimport_01 { class EventHandlers; };

    class Aegis_B_A_CombatBoat_HMG_EF;
    class Aegis_B_A_CombatBoat_HMG_EF_OCimport_01 : Aegis_B_A_CombatBoat_HMG_EF { scope = 0; class EventHandlers; };
    class Aegis_B_A_CombatBoat_HMG_EF_OCimport_02 : Aegis_B_A_CombatBoat_HMG_EF_OCimport_01 { class EventHandlers; };

    class Aegis_B_A_CombatBoat_Unarmed_EF;
    class Aegis_B_A_CombatBoat_Unarmed_EF_OCimport_01 : Aegis_B_A_CombatBoat_Unarmed_EF { scope = 0; class EventHandlers; };
    class Aegis_B_A_CombatBoat_Unarmed_EF_OCimport_02 : Aegis_B_A_CombatBoat_Unarmed_EF_OCimport_01 { class EventHandlers; };

    class B_CommandoMortar_RF;
    class B_CommandoMortar_RF_OCimport_01 : B_CommandoMortar_RF { scope = 0; class EventHandlers; };
    class B_CommandoMortar_RF_OCimport_02 : B_CommandoMortar_RF_OCimport_01 { class EventHandlers; };

    class B_Heli_light_03_unarmed_RF;
    class B_Heli_light_03_unarmed_RF_OCimport_01 : B_Heli_light_03_unarmed_RF { scope = 0; class EventHandlers; };
    class B_Heli_light_03_unarmed_RF_OCimport_02 : B_Heli_light_03_unarmed_RF_OCimport_01 { class EventHandlers; };

    class Aegis_Heli_Transport_02_Heavy_base_F;
    class Aegis_Heli_Transport_02_Heavy_base_F_OCimport_01 : Aegis_Heli_Transport_02_Heavy_base_F { scope = 0; class EventHandlers; };
    class Aegis_Heli_Transport_02_Heavy_base_F_OCimport_02 : Aegis_Heli_Transport_02_Heavy_base_F_OCimport_01 { class EventHandlers; };

    class B_Heli_light_03_dynamicLoadout_RF;
    class B_Heli_light_03_dynamicLoadout_RF_OCimport_01 : B_Heli_light_03_dynamicLoadout_RF { scope = 0; class EventHandlers; };
    class B_Heli_light_03_dynamicLoadout_RF_OCimport_02 : B_Heli_light_03_dynamicLoadout_RF_OCimport_01 { class EventHandlers; };

    class EF_LCC_SideLoad_Base;
    class EF_LCC_SideLoad_Base_OCimport_01 : EF_LCC_SideLoad_Base { scope = 0; class EventHandlers; };
    class EF_LCC_SideLoad_Base_OCimport_02 : EF_LCC_SideLoad_Base_OCimport_01 { class EventHandlers; };

    class EF_LCC_Base;
    class EF_LCC_Base_OCimport_01 : EF_LCC_Base { scope = 0; class EventHandlers; };
    class EF_LCC_Base_OCimport_02 : EF_LCC_Base_OCimport_01 { class EventHandlers; };

    class B_A_Support_AMort_wdl_F;
    class B_A_Support_AMort_wdl_F_OCimport_01 : B_A_Support_AMort_wdl_F { scope = 0; class EventHandlers; };
    class B_A_Support_AMort_wdl_F_OCimport_02 : B_A_Support_AMort_wdl_F_OCimport_01 { class EventHandlers; };

    class B_T_TwinMortar_RF;
    class B_T_TwinMortar_RF_OCimport_01 : B_T_TwinMortar_RF { scope = 0; class EventHandlers; };
    class B_T_TwinMortar_RF_OCimport_02 : B_T_TwinMortar_RF_OCimport_01 { class EventHandlers; };

    class UAV_02_Base_lxWS;
    class UAV_02_Base_lxWS_OCimport_01 : UAV_02_Base_lxWS { scope = 0; class EventHandlers; };
    class UAV_02_Base_lxWS_OCimport_02 : UAV_02_Base_lxWS_OCimport_01 { class EventHandlers; };

    class Aegis_B_A_UAV_07_F;
    class Aegis_B_A_UAV_07_F_OCimport_01 : Aegis_B_A_UAV_07_F { scope = 0; class EventHandlers; };
    class Aegis_B_A_UAV_07_F_OCimport_02 : Aegis_B_A_UAV_07_F_OCimport_01 { class EventHandlers; };

    class B_A_APC_tracked_03_cannon_v2_F;
    class B_A_APC_tracked_03_cannon_v2_F_OCimport_01 : B_A_APC_tracked_03_cannon_v2_F { scope = 0; class EventHandlers; };
    class B_A_APC_tracked_03_cannon_v2_F_OCimport_02 : B_A_APC_tracked_03_cannon_v2_F_OCimport_01 { class EventHandlers; };

    class B_A_Crew_F;
    class B_A_Crew_F_OCimport_01 : B_A_Crew_F { scope = 0; class EventHandlers; };
    class B_A_Crew_F_OCimport_02 : B_A_Crew_F_OCimport_01 { class EventHandlers; };

    class B_A_Engineer_F;
    class B_A_Engineer_F_OCimport_01 : B_A_Engineer_F { scope = 0; class EventHandlers; };
    class B_A_Engineer_F_OCimport_02 : B_A_Engineer_F_OCimport_01 { class EventHandlers; };

    class B_A_Pilot_wdl_F;
    class B_A_Pilot_wdl_F_OCimport_01 : B_A_Pilot_wdl_F { scope = 0; class EventHandlers; };
    class B_A_Pilot_wdl_F_OCimport_02 : B_A_Pilot_wdl_F_OCimport_01 { class EventHandlers; };

    class B_A_GMG_01_A_F;
    class B_A_GMG_01_A_F_OCimport_01 : B_A_GMG_01_A_F { scope = 0; class EventHandlers; };
    class B_A_GMG_01_A_F_OCimport_02 : B_A_GMG_01_A_F_OCimport_01 { class EventHandlers; };

    class B_A_GMG_01_high_F;
    class B_A_GMG_01_high_F_OCimport_01 : B_A_GMG_01_high_F { scope = 0; class EventHandlers; };
    class B_A_GMG_01_high_F_OCimport_02 : B_A_GMG_01_high_F_OCimport_01 { class EventHandlers; };

    class B_A_GMG_01_F;
    class B_A_GMG_01_F_OCimport_01 : B_A_GMG_01_F { scope = 0; class EventHandlers; };
    class B_A_GMG_01_F_OCimport_02 : B_A_GMG_01_F_OCimport_01 { class EventHandlers; };

    class B_A_HMG_01_A_F;
    class B_A_HMG_01_A_F_OCimport_01 : B_A_HMG_01_A_F { scope = 0; class EventHandlers; };
    class B_A_HMG_01_A_F_OCimport_02 : B_A_HMG_01_A_F_OCimport_01 { class EventHandlers; };

    class B_A_HMG_01_high_F;
    class B_A_HMG_01_high_F_OCimport_01 : B_A_HMG_01_high_F { scope = 0; class EventHandlers; };
    class B_A_HMG_01_high_F_OCimport_02 : B_A_HMG_01_high_F_OCimport_01 { class EventHandlers; };

    class B_A_HMG_01_F;
    class B_A_HMG_01_F_OCimport_01 : B_A_HMG_01_F { scope = 0; class EventHandlers; };
    class B_A_HMG_01_F_OCimport_02 : B_A_HMG_01_F_OCimport_01 { class EventHandlers; };

    class B_A_HMG_02_high_F;
    class B_A_HMG_02_high_F_OCimport_01 : B_A_HMG_02_high_F { scope = 0; class EventHandlers; };
    class B_A_HMG_02_high_F_OCimport_02 : B_A_HMG_02_high_F_OCimport_01 { class EventHandlers; };

    class B_A_HMG_02_F;
    class B_A_HMG_02_F_OCimport_01 : B_A_HMG_02_F { scope = 0; class EventHandlers; };
    class B_A_HMG_02_F_OCimport_02 : B_A_HMG_02_F_OCimport_01 { class EventHandlers; };

    class B_A_HeavyGunner_F;
    class B_A_HeavyGunner_F_OCimport_01 : B_A_HeavyGunner_F { scope = 0; class EventHandlers; };
    class B_A_HeavyGunner_F_OCimport_02 : B_A_HeavyGunner_F_OCimport_01 { class EventHandlers; };

    class Aegis_B_A_Heli_Attack_03_F;
    class Aegis_B_A_Heli_Attack_03_F_OCimport_01 : Aegis_B_A_Heli_Attack_03_F { scope = 0; class EventHandlers; };
    class Aegis_B_A_Heli_Attack_03_F_OCimport_02 : Aegis_B_A_Heli_Attack_03_F_OCimport_01 { class EventHandlers; };

    class B_A_Heli_light_03_dynamicLoadout_F;
    class B_A_Heli_light_03_dynamicLoadout_F_OCimport_01 : B_A_Heli_light_03_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class B_A_Heli_light_03_dynamicLoadout_F_OCimport_02 : B_A_Heli_light_03_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class B_A_Heli_light_03_unarmed_F;
    class B_A_Heli_light_03_unarmed_F_OCimport_01 : B_A_Heli_light_03_unarmed_F { scope = 0; class EventHandlers; };
    class B_A_Heli_light_03_unarmed_F_OCimport_02 : B_A_Heli_light_03_unarmed_F_OCimport_01 { class EventHandlers; };

    class B_A_Helicrew_F;
    class B_A_Helicrew_F_OCimport_01 : B_A_Helicrew_F { scope = 0; class EventHandlers; };
    class B_A_Helicrew_F_OCimport_02 : B_A_Helicrew_F_OCimport_01 { class EventHandlers; };

    class B_A_Helipilot_F;
    class B_A_Helipilot_F_OCimport_01 : B_A_Helipilot_F { scope = 0; class EventHandlers; };
    class B_A_Helipilot_F_OCimport_02 : B_A_Helipilot_F_OCimport_01 { class EventHandlers; };

    class B_A_LSV_01_AT_F;
    class B_A_LSV_01_AT_F_OCimport_01 : B_A_LSV_01_AT_F { scope = 0; class EventHandlers; };
    class B_A_LSV_01_AT_F_OCimport_02 : B_A_LSV_01_AT_F_OCimport_01 { class EventHandlers; };

    class B_A_LSV_01_armed_F;
    class B_A_LSV_01_armed_F_OCimport_01 : B_A_LSV_01_armed_F { scope = 0; class EventHandlers; };
    class B_A_LSV_01_armed_F_OCimport_02 : B_A_LSV_01_armed_F_OCimport_01 { class EventHandlers; };

    class B_A_LSV_01_light_F;
    class B_A_LSV_01_light_F_OCimport_01 : B_A_LSV_01_light_F { scope = 0; class EventHandlers; };
    class B_A_LSV_01_light_F_OCimport_02 : B_A_LSV_01_light_F_OCimport_01 { class EventHandlers; };

    class B_A_LSV_01_unarmed_F;
    class B_A_LSV_01_unarmed_F_OCimport_01 : B_A_LSV_01_unarmed_F { scope = 0; class EventHandlers; };
    class B_A_LSV_01_unarmed_F_OCimport_02 : B_A_LSV_01_unarmed_F_OCimport_01 { class EventHandlers; };

    class B_A_MRAP_03_gmg_F;
    class B_A_MRAP_03_gmg_F_OCimport_01 : B_A_MRAP_03_gmg_F { scope = 0; class EventHandlers; };
    class B_A_MRAP_03_gmg_F_OCimport_02 : B_A_MRAP_03_gmg_F_OCimport_01 { class EventHandlers; };

    class B_A_MRAP_03_hmg_F;
    class B_A_MRAP_03_hmg_F_OCimport_01 : B_A_MRAP_03_hmg_F { scope = 0; class EventHandlers; };
    class B_A_MRAP_03_hmg_F_OCimport_02 : B_A_MRAP_03_hmg_F_OCimport_01 { class EventHandlers; };

    class B_A_MRAP_03_F;
    class B_A_MRAP_03_F_OCimport_01 : B_A_MRAP_03_F { scope = 0; class EventHandlers; };
    class B_A_MRAP_03_F_OCimport_02 : B_A_MRAP_03_F_OCimport_01 { class EventHandlers; };

    class B_A_Medic_F;
    class B_A_Medic_F_OCimport_01 : B_A_Medic_F { scope = 0; class EventHandlers; };
    class B_A_Medic_F_OCimport_02 : B_A_Medic_F_OCimport_01 { class EventHandlers; };

    class B_A_Mortar_01_F;
    class B_A_Mortar_01_F_OCimport_01 : B_A_Mortar_01_F { scope = 0; class EventHandlers; };
    class B_A_Mortar_01_F_OCimport_02 : B_A_Mortar_01_F_OCimport_01 { class EventHandlers; };

    class B_A_Officer_F;
    class B_A_Officer_F_OCimport_01 : B_A_Officer_F { scope = 0; class EventHandlers; };
    class B_A_Officer_F_OCimport_02 : B_A_Officer_F_OCimport_01 { class EventHandlers; };

    class B_A_Pilot_F;
    class B_A_Pilot_F_OCimport_01 : B_A_Pilot_F { scope = 0; class EventHandlers; };
    class B_A_Pilot_F_OCimport_02 : B_A_Pilot_F_OCimport_01 { class EventHandlers; };

    class B_A_Plane_Fighter_05_Stealth_F;
    class B_A_Plane_Fighter_05_Stealth_F_OCimport_01 : B_A_Plane_Fighter_05_Stealth_F { scope = 0; class EventHandlers; };
    class B_A_Plane_Fighter_05_Stealth_F_OCimport_02 : B_A_Plane_Fighter_05_Stealth_F_OCimport_01 { class EventHandlers; };

    class B_A_Plane_Fighter_05_F;
    class B_A_Plane_Fighter_05_F_OCimport_01 : B_A_Plane_Fighter_05_F { scope = 0; class EventHandlers; };
    class B_A_Plane_Fighter_05_F_OCimport_02 : B_A_Plane_Fighter_05_F_OCimport_01 { class EventHandlers; };

    class B_A_Plane_Transport_01_infantry_F;
    class B_A_Plane_Transport_01_infantry_F_OCimport_01 : B_A_Plane_Transport_01_infantry_F { scope = 0; class EventHandlers; };
    class B_A_Plane_Transport_01_infantry_F_OCimport_02 : B_A_Plane_Transport_01_infantry_F_OCimport_01 { class EventHandlers; };

    class B_A_Plane_Transport_01_vehicle_F;
    class B_A_Plane_Transport_01_vehicle_F_OCimport_01 : B_A_Plane_Transport_01_vehicle_F { scope = 0; class EventHandlers; };
    class B_A_Plane_Transport_01_vehicle_F_OCimport_02 : B_A_Plane_Transport_01_vehicle_F_OCimport_01 { class EventHandlers; };

    class B_A_Quadbike_01_F;
    class B_A_Quadbike_01_F_OCimport_01 : B_A_Quadbike_01_F { scope = 0; class EventHandlers; };
    class B_A_Quadbike_01_F_OCimport_02 : B_A_Quadbike_01_F_OCimport_01 { class EventHandlers; };

    class B_A_Radar_System_01_F;
    class B_A_Radar_System_01_F_OCimport_01 : B_A_Radar_System_01_F { scope = 0; class EventHandlers; };
    class B_A_Radar_System_01_F_OCimport_02 : B_A_Radar_System_01_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_wdl_F;
    class B_A_Soldier_wdl_F_OCimport_01 : B_A_Soldier_wdl_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_wdl_F_OCimport_02 : B_A_Soldier_wdl_F_OCimport_01 { class EventHandlers; };

    class B_A_Recon_AR_F;
    class B_A_Recon_AR_F_OCimport_01 : B_A_Recon_AR_F { scope = 0; class EventHandlers; };
    class B_A_Recon_AR_F_OCimport_02 : B_A_Recon_AR_F_OCimport_01 { class EventHandlers; };

    class B_A_Recon_CQ_F;
    class B_A_Recon_CQ_F_OCimport_01 : B_A_Recon_CQ_F { scope = 0; class EventHandlers; };
    class B_A_Recon_CQ_F_OCimport_02 : B_A_Recon_CQ_F_OCimport_01 { class EventHandlers; };

    class B_A_Recon_Exp_F;
    class B_A_Recon_Exp_F_OCimport_01 : B_A_Recon_Exp_F { scope = 0; class EventHandlers; };
    class B_A_Recon_Exp_F_OCimport_02 : B_A_Recon_Exp_F_OCimport_01 { class EventHandlers; };

    class B_A_Recon_GL_F;
    class B_A_Recon_GL_F_OCimport_01 : B_A_Recon_GL_F { scope = 0; class EventHandlers; };
    class B_A_Recon_GL_F_OCimport_02 : B_A_Recon_GL_F_OCimport_01 { class EventHandlers; };

    class B_A_Recon_JTAC_F;
    class B_A_Recon_JTAC_F_OCimport_01 : B_A_Recon_JTAC_F { scope = 0; class EventHandlers; };
    class B_A_Recon_JTAC_F_OCimport_02 : B_A_Recon_JTAC_F_OCimport_01 { class EventHandlers; };

    class B_A_Recon_LAT_F;
    class B_A_Recon_LAT_F_OCimport_01 : B_A_Recon_LAT_F { scope = 0; class EventHandlers; };
    class B_A_Recon_LAT_F_OCimport_02 : B_A_Recon_LAT_F_OCimport_01 { class EventHandlers; };

    class B_A_Recon_MG_F;
    class B_A_Recon_MG_F_OCimport_01 : B_A_Recon_MG_F { scope = 0; class EventHandlers; };
    class B_A_Recon_MG_F_OCimport_02 : B_A_Recon_MG_F_OCimport_01 { class EventHandlers; };

    class B_A_Recon_M_F;
    class B_A_Recon_M_F_OCimport_01 : B_A_Recon_M_F { scope = 0; class EventHandlers; };
    class B_A_Recon_M_F_OCimport_02 : B_A_Recon_M_F_OCimport_01 { class EventHandlers; };

    class B_A_Recon_Medic_F;
    class B_A_Recon_Medic_F_OCimport_01 : B_A_Recon_Medic_F { scope = 0; class EventHandlers; };
    class B_A_Recon_Medic_F_OCimport_02 : B_A_Recon_Medic_F_OCimport_01 { class EventHandlers; };

    class B_A_Recon_Sharpshooter_F;
    class B_A_Recon_Sharpshooter_F_OCimport_01 : B_A_Recon_Sharpshooter_F { scope = 0; class EventHandlers; };
    class B_A_Recon_Sharpshooter_F_OCimport_02 : B_A_Recon_Sharpshooter_F_OCimport_01 { class EventHandlers; };

    class B_A_Recon_TL_F;
    class B_A_Recon_TL_F_OCimport_01 : B_A_Recon_TL_F { scope = 0; class EventHandlers; };
    class B_A_Recon_TL_F_OCimport_02 : B_A_Recon_TL_F_OCimport_01 { class EventHandlers; };

    class B_A_Recon_F;
    class B_A_Recon_F_OCimport_01 : B_A_Recon_F { scope = 0; class EventHandlers; };
    class B_A_Recon_F_OCimport_02 : B_A_Recon_F_OCimport_01 { class EventHandlers; };

    class B_A_SAM_System_03_F;
    class B_A_SAM_System_03_F_OCimport_01 : B_A_SAM_System_03_F { scope = 0; class EventHandlers; };
    class B_A_SAM_System_03_F_OCimport_02 : B_A_SAM_System_03_F_OCimport_01 { class EventHandlers; };

    class B_A_Sharpshooter_F;
    class B_A_Sharpshooter_F_OCimport_01 : B_A_Sharpshooter_F { scope = 0; class EventHandlers; };
    class B_A_Sharpshooter_F_OCimport_02 : B_A_Sharpshooter_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_AAA_F;
    class B_A_Soldier_AAA_F_OCimport_01 : B_A_Soldier_AAA_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_AAA_F_OCimport_02 : B_A_Soldier_AAA_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_AAR_F;
    class B_A_Soldier_AAR_F_OCimport_01 : B_A_Soldier_AAR_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_AAR_F_OCimport_02 : B_A_Soldier_AAR_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_AAT_F;
    class B_A_Soldier_AAT_F_OCimport_01 : B_A_Soldier_AAT_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_AAT_F_OCimport_02 : B_A_Soldier_AAT_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_AA_F;
    class B_A_Soldier_AA_F_OCimport_01 : B_A_Soldier_AA_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_AA_F_OCimport_02 : B_A_Soldier_AA_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_AR_F;
    class B_A_Soldier_AR_F_OCimport_01 : B_A_Soldier_AR_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_AR_F_OCimport_02 : B_A_Soldier_AR_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_AT_F;
    class B_A_Soldier_AT_F_OCimport_01 : B_A_Soldier_AT_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_AT_F_OCimport_02 : B_A_Soldier_AT_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_A_F;
    class B_A_Soldier_A_F_OCimport_01 : B_A_Soldier_A_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_A_F_OCimport_02 : B_A_Soldier_A_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_CQ_F;
    class B_A_Soldier_CQ_F_OCimport_01 : B_A_Soldier_CQ_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_CQ_F_OCimport_02 : B_A_Soldier_CQ_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_Exp_F;
    class B_A_Soldier_Exp_F_OCimport_01 : B_A_Soldier_Exp_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_Exp_F_OCimport_02 : B_A_Soldier_Exp_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_GL_F;
    class B_A_Soldier_GL_F_OCimport_01 : B_A_Soldier_GL_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_GL_F_OCimport_02 : B_A_Soldier_GL_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_LAT_F;
    class B_A_Soldier_LAT_F_OCimport_01 : B_A_Soldier_LAT_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_LAT_F_OCimport_02 : B_A_Soldier_LAT_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_Lite_F;
    class B_A_Soldier_Lite_F_OCimport_01 : B_A_Soldier_Lite_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_Lite_F_OCimport_02 : B_A_Soldier_Lite_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_PG_F;
    class B_A_Soldier_PG_F_OCimport_01 : B_A_Soldier_PG_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_PG_F_OCimport_02 : B_A_Soldier_PG_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_Repair_F;
    class B_A_Soldier_Repair_F_OCimport_01 : B_A_Soldier_Repair_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_Repair_F_OCimport_02 : B_A_Soldier_Repair_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_SL_F;
    class B_A_Soldier_SL_F_OCimport_01 : B_A_Soldier_SL_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_SL_F_OCimport_02 : B_A_Soldier_SL_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_TL_F;
    class B_A_Soldier_TL_F_OCimport_01 : B_A_Soldier_TL_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_TL_F_OCimport_02 : B_A_Soldier_TL_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_UAV_F;
    class B_A_Soldier_UAV_F_OCimport_01 : B_A_Soldier_UAV_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_UAV_F_OCimport_02 : B_A_Soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_F;
    class B_A_Soldier_F_OCimport_01 : B_A_Soldier_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_F_OCimport_02 : B_A_Soldier_F_OCimport_01 { class EventHandlers; };

    class B_A_Static_AA_F;
    class B_A_Static_AA_F_OCimport_01 : B_A_Static_AA_F { scope = 0; class EventHandlers; };
    class B_A_Static_AA_F_OCimport_02 : B_A_Static_AA_F_OCimport_01 { class EventHandlers; };

    class B_A_Static_AT_F;
    class B_A_Static_AT_F_OCimport_01 : B_A_Static_AT_F { scope = 0; class EventHandlers; };
    class B_A_Static_AT_F_OCimport_02 : B_A_Static_AT_F_OCimport_01 { class EventHandlers; };

    class B_A_Static_Designator_01_F;
    class B_A_Static_Designator_01_F_OCimport_01 : B_A_Static_Designator_01_F { scope = 0; class EventHandlers; };
    class B_A_Static_Designator_01_F_OCimport_02 : B_A_Static_Designator_01_F_OCimport_01 { class EventHandlers; };

    class B_A_Support_AMG_F;
    class B_A_Support_AMG_F_OCimport_01 : B_A_Support_AMG_F { scope = 0; class EventHandlers; };
    class B_A_Support_AMG_F_OCimport_02 : B_A_Support_AMG_F_OCimport_01 { class EventHandlers; };

    class B_A_Support_AMort_F;
    class B_A_Support_AMort_F_OCimport_01 : B_A_Support_AMort_F { scope = 0; class EventHandlers; };
    class B_A_Support_AMort_F_OCimport_02 : B_A_Support_AMort_F_OCimport_01 { class EventHandlers; };

    class B_A_Support_GMG_F;
    class B_A_Support_GMG_F_OCimport_01 : B_A_Support_GMG_F { scope = 0; class EventHandlers; };
    class B_A_Support_GMG_F_OCimport_02 : B_A_Support_GMG_F_OCimport_01 { class EventHandlers; };

    class B_A_Support_MG_F;
    class B_A_Support_MG_F_OCimport_01 : B_A_Support_MG_F { scope = 0; class EventHandlers; };
    class B_A_Support_MG_F_OCimport_02 : B_A_Support_MG_F_OCimport_01 { class EventHandlers; };

    class B_A_Support_Mort_F;
    class B_A_Support_Mort_F_OCimport_01 : B_A_Support_Mort_F { scope = 0; class EventHandlers; };
    class B_A_Support_Mort_F_OCimport_02 : B_A_Support_Mort_F_OCimport_01 { class EventHandlers; };

    class B_A_Truck_01_Repair_F;
    class B_A_Truck_01_Repair_F_OCimport_01 : B_A_Truck_01_Repair_F { scope = 0; class EventHandlers; };
    class B_A_Truck_01_Repair_F_OCimport_02 : B_A_Truck_01_Repair_F_OCimport_01 { class EventHandlers; };

    class B_A_Truck_01_ammo_F;
    class B_A_Truck_01_ammo_F_OCimport_01 : B_A_Truck_01_ammo_F { scope = 0; class EventHandlers; };
    class B_A_Truck_01_ammo_F_OCimport_02 : B_A_Truck_01_ammo_F_OCimport_01 { class EventHandlers; };

    class B_A_Truck_01_box_F;
    class B_A_Truck_01_box_F_OCimport_01 : B_A_Truck_01_box_F { scope = 0; class EventHandlers; };
    class B_A_Truck_01_box_F_OCimport_02 : B_A_Truck_01_box_F_OCimport_01 { class EventHandlers; };

    class B_A_Truck_01_cargo_F;
    class B_A_Truck_01_cargo_F_OCimport_01 : B_A_Truck_01_cargo_F { scope = 0; class EventHandlers; };
    class B_A_Truck_01_cargo_F_OCimport_02 : B_A_Truck_01_cargo_F_OCimport_01 { class EventHandlers; };

    class B_A_Truck_01_covered_F;
    class B_A_Truck_01_covered_F_OCimport_01 : B_A_Truck_01_covered_F { scope = 0; class EventHandlers; };
    class B_A_Truck_01_covered_F_OCimport_02 : B_A_Truck_01_covered_F_OCimport_01 { class EventHandlers; };

    class B_A_Truck_01_flatbed_F;
    class B_A_Truck_01_flatbed_F_OCimport_01 : B_A_Truck_01_flatbed_F { scope = 0; class EventHandlers; };
    class B_A_Truck_01_flatbed_F_OCimport_02 : B_A_Truck_01_flatbed_F_OCimport_01 { class EventHandlers; };

    class B_A_Truck_01_fuel_F;
    class B_A_Truck_01_fuel_F_OCimport_01 : B_A_Truck_01_fuel_F { scope = 0; class EventHandlers; };
    class B_A_Truck_01_fuel_F_OCimport_02 : B_A_Truck_01_fuel_F_OCimport_01 { class EventHandlers; };

    class B_A_Truck_01_medical_F;
    class B_A_Truck_01_medical_F_OCimport_01 : B_A_Truck_01_medical_F { scope = 0; class EventHandlers; };
    class B_A_Truck_01_medical_F_OCimport_02 : B_A_Truck_01_medical_F_OCimport_01 { class EventHandlers; };

    class B_A_Truck_01_mover_F;
    class B_A_Truck_01_mover_F_OCimport_01 : B_A_Truck_01_mover_F { scope = 0; class EventHandlers; };
    class B_A_Truck_01_mover_F_OCimport_02 : B_A_Truck_01_mover_F_OCimport_01 { class EventHandlers; };

    class B_A_Truck_01_transport_F;
    class B_A_Truck_01_transport_F_OCimport_01 : B_A_Truck_01_transport_F { scope = 0; class EventHandlers; };
    class B_A_Truck_01_transport_F_OCimport_02 : B_A_Truck_01_transport_F_OCimport_01 { class EventHandlers; };

    class B_A_UAV_01_F;
    class B_A_UAV_01_F_OCimport_01 : B_A_UAV_01_F { scope = 0; class EventHandlers; };
    class B_A_UAV_01_F_OCimport_02 : B_A_UAV_01_F_OCimport_01 { class EventHandlers; };

    class B_A_UAV_02_dynamicLoadout_F;
    class B_A_UAV_02_dynamicLoadout_F_OCimport_01 : B_A_UAV_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class B_A_UAV_02_dynamicLoadout_F_OCimport_02 : B_A_UAV_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class B_A_UAV_06_medical_F;
    class B_A_UAV_06_medical_F_OCimport_01 : B_A_UAV_06_medical_F { scope = 0; class EventHandlers; };
    class B_A_UAV_06_medical_F_OCimport_02 : B_A_UAV_06_medical_F_OCimport_01 { class EventHandlers; };

    class B_A_UAV_06_F;
    class B_A_UAV_06_F_OCimport_01 : B_A_UAV_06_F { scope = 0; class EventHandlers; };
    class B_A_UAV_06_F_OCimport_02 : B_A_UAV_06_F_OCimport_01 { class EventHandlers; };

    class B_A_UGV_01_medical_F;
    class B_A_UGV_01_medical_F_OCimport_01 : B_A_UGV_01_medical_F { scope = 0; class EventHandlers; };
    class B_A_UGV_01_medical_F_OCimport_02 : B_A_UGV_01_medical_F_OCimport_01 { class EventHandlers; };

    class B_A_UGV_01_rcws_F;
    class B_A_UGV_01_rcws_F_OCimport_01 : B_A_UGV_01_rcws_F { scope = 0; class EventHandlers; };
    class B_A_UGV_01_rcws_F_OCimport_02 : B_A_UGV_01_rcws_F_OCimport_01 { class EventHandlers; };

    class B_A_UGV_01_F;
    class B_A_UGV_01_F_OCimport_01 : B_A_UGV_01_F { scope = 0; class EventHandlers; };
    class B_A_UGV_01_F_OCimport_02 : B_A_UGV_01_F_OCimport_01 { class EventHandlers; };

    class B_A_UGV_02_Demining_F;
    class B_A_UGV_02_Demining_F_OCimport_01 : B_A_UGV_02_Demining_F { scope = 0; class EventHandlers; };
    class B_A_UGV_02_Demining_F_OCimport_02 : B_A_UGV_02_Demining_F_OCimport_01 { class EventHandlers; };

    class VTOL_01_infantry_base_F;
    class VTOL_01_infantry_base_F_OCimport_01 : VTOL_01_infantry_base_F { scope = 0; class EventHandlers; };
    class VTOL_01_infantry_base_F_OCimport_02 : VTOL_01_infantry_base_F_OCimport_01 { class EventHandlers; };

    class VTOL_01_vehicle_base_F;
    class VTOL_01_vehicle_base_F_OCimport_01 : VTOL_01_vehicle_base_F { scope = 0; class EventHandlers; };
    class VTOL_01_vehicle_base_F_OCimport_02 : VTOL_01_vehicle_base_F_OCimport_01 { class EventHandlers; };

    class B_A_ghillie_wdl_F;
    class B_A_ghillie_wdl_F_OCimport_01 : B_A_ghillie_wdl_F { scope = 0; class EventHandlers; };
    class B_A_ghillie_wdl_F_OCimport_02 : B_A_ghillie_wdl_F_OCimport_01 { class EventHandlers; };

    class B_ghillie_base_F;
    class B_ghillie_base_F_OCimport_01 : B_ghillie_base_F { scope = 0; class EventHandlers; };
    class B_ghillie_base_F_OCimport_02 : B_ghillie_base_F_OCimport_01 { class EventHandlers; };

    class B_A_soldier_M_F;
    class B_A_soldier_M_F_OCimport_01 : B_A_soldier_M_F { scope = 0; class EventHandlers; };
    class B_A_soldier_M_F_OCimport_02 : B_A_soldier_M_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_UAV_wdl_F;
    class B_A_Soldier_UAV_wdl_F_OCimport_01 : B_A_Soldier_UAV_wdl_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_UAV_wdl_F_OCimport_02 : B_A_Soldier_UAV_wdl_F_OCimport_01 { class EventHandlers; };

    class B_A_Soldier_Exp_wdl_F;
    class B_A_Soldier_Exp_wdl_F_OCimport_01 : B_A_Soldier_Exp_wdl_F { scope = 0; class EventHandlers; };
    class B_A_Soldier_Exp_wdl_F_OCimport_02 : B_A_Soldier_Exp_wdl_F_OCimport_01 { class EventHandlers; };

    class Aegis_B_A_CombatBoat_AT_wdl_EF : Aegis_B_A_CombatBoat_AT_EF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (AT)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_A_CombatBoat_HMG_wdl_EF : Aegis_B_A_CombatBoat_HMG_EF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (HMG)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_A_CombatBoat_Unarmed_wdl_EF : Aegis_B_A_CombatBoat_Unarmed_EF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (Unarmed)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_A_CommandoMortar_wdl_RF : B_CommandoMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RSG60";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_A_Heli_Light_03_unarmed_wdl_RF : B_Heli_light_03_unarmed_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AW159 Wildcat ASW (Unarmed)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Helipilot_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_A_Heli_Transport_02_wdl_F : Aegis_Heli_Transport_02_Heavy_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Merlin HC5";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Helipilot_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_A_Heli_light_03_dynamicLoadout_wdl_RF : B_Heli_light_03_dynamicLoadout_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AW159 Wildcat ASW";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Helipilot_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_A_LCC_01_SideLoad_wdl_EF : EF_LCC_SideLoad_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LCC-1 (Side Load)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Crew_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_A_LCC_01_wdl_EF : EF_LCC_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LCC-1";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Crew_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_A_Support_CMort_wdl_RF : B_A_Support_AMort_wdl_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_tshirt_wdl_f";

        backpack = "B_CommandoMortar_weapon_RF";

        linkedItems[] = {"V_TacChestrig_grn_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_A_TwinMortar_wdl_RF : B_T_TwinMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMOS Container";
        side = 1;
        faction = "blu_a_wdl_f";
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

    class Aegis_B_A_UAV_02_wdl_lxWS : UAV_02_Base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AP-5 Bustard";
        side = 1;
        faction = "blu_a_wdl_f";
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

    class Aegis_B_A_UAV_07_wdl_F : Aegis_B_A_UAV_07_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MQ-9A Albatross";
        side = 1;
        faction = "blu_a_wdl_f";
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

    class B_A_APC_tracked_03_cannon_v2_wdl_F : B_A_APC_tracked_03_cannon_v2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "FV510 Warrior";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_crew_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Crew_wdl_F : B_A_Crew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_vest_wdl_f";

        linkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_HelmetCrew_B_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_HelmetCrew_B_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_holo_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_holo_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Engineer_wdl_F : B_A_Engineer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_vest_wdl_f";

        backpack = "B_Kitbag_wdl_BWEng_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_holo_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_holo_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Fighter_Pilot_wdl_F : B_A_Pilot_wdl_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter Pilot";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_pilot"};

        uniformClass = "U_B_PilotCoveralls";

        backpack = "B_Parachute";

        linkedItems[] = {"H_PilotHelmetFighter_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_PilotHelmetFighter_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"hgun_G17_black_F","Throw","Put"};

        magazines[] = {"17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_GMG_01_A_wdl_F : B_A_GMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307A";
        side = 1;
        faction = "blu_a_wdl_f";
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

    class B_A_GMG_01_high_wdl_F : B_A_GMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307 (High)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_GMG_01_wdl_F : B_A_GMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_HMG_01_A_wdl_F : B_A_HMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312A";
        side = 1;
        faction = "blu_a_wdl_f";
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

    class B_A_HMG_01_high_wdl_F : B_A_HMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312 (High)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_HMG_01_wdl_F : B_A_HMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_HMG_02_high_wdl_F : B_A_HMG_02_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_HMG_02_wdl_F : B_A_HMG_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_HeavyGunner_wdl_F : B_A_HeavyGunner_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_tshirt_wdl_f";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"MMG_02_black_RCO_LP_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"MMG_02_black_RCO_LP_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Heli_Attack_03_wdl_F : Aegis_B_A_Heli_Attack_03_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Navajo AH1";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Helipilot_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Heli_light_03_dynamicLoadout_wdl_F : B_A_Heli_light_03_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-11A Hellcat";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Helipilot_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Heli_light_03_unarmed_wdl_F : B_A_Heli_light_03_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-11A Hellcat (Unarmed)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Helipilot_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Helicrew_wdl_F : B_A_Helicrew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_pilot"};

        uniformClass = "U_B_UBACS_wdl_f";

        linkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_holo_f","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_holo_f","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Helipilot_wdl_F : B_A_Helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_pilot"};

        uniformClass = "U_B_UBACS_wdl_f";

        linkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_PilotHelmetHeli_MilGreen_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_PilotHelmetHeli_MilGreen_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

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

    class B_A_LSV_01_AT_wdl_F : B_A_LSV_01_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (Mini-Spike AT)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_LSV_01_armed_wdl_F : B_A_LSV_01_armed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (XM312)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_LSV_01_light_wdl_F : B_A_LSV_01_light_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (light)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_LSV_01_unarmed_wdl_F : B_A_LSV_01_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_MRAP_03_gmg_wdl_F : B_A_MRAP_03_gmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fennek (GMG)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_MRAP_03_hmg_wdl_F : B_A_MRAP_03_hmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fennek (HMG)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_MRAP_03_wdl_F : B_A_MRAP_03_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fennek";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Medic_wdl_F : B_A_Medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        backpack = "B_TacticalPack_rgr_BAMedic_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_blk_holo_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_blk_holo_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Mortar_01_wdl_F : B_A_Mortar_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "B_A_Mortar_01_wdl_F";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Officer_wdl_F : B_A_Officer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_casual"};

        uniformClass = "U_B_UBACS_wdl_f";

        linkedItems[] = {"V_Rangemaster_belt","H_Beret_red","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Rangemaster_belt","H_Beret_red","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SA80_C_blk_F","hgun_G17_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SA80_C_blk_F","hgun_G17_black_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Pilot_wdl_F : B_A_Pilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_pilot"};

        uniformClass = "U_B_PilotCoveralls";

        backpack = "B_Parachute";

        linkedItems[] = {"H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

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

    class B_A_Plane_Fighter_05_Stealth_wdl_F : B_A_Plane_Fighter_05_Stealth_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "F-35F Peregrine (Stealth)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Fighter_Pilot_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Plane_Fighter_05_wdl_F : B_A_Plane_Fighter_05_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "F-35F Peregrine";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Fighter_Pilot_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Plane_Transport_01_infantry_wdl_F : B_A_Plane_Transport_01_infantry_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "C-192 Samson (Infantry Transport)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Pilot_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Plane_Transport_01_vehicle_wdl_F : B_A_Plane_Transport_01_vehicle_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "C-192 Samson (Vehicle Transport)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Pilot_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Quadbike_01_wdl_F : B_A_Quadbike_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Radar_System_01_wdl_F : B_A_Radar_System_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AN/MPQ-105 Radar";
        side = 1;
        faction = "blu_a_wdl_f";
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

    class B_A_RadioOperator_wdl_F : B_A_Soldier_wdl_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_vest_wdl_f";

        backpack = "B_RadioBag_01_wdl_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_blk_holo_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_blk_holo_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Recon_AR_wdl_F : B_A_Recon_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Autorifleman";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_W_NATO_SF"};

        uniformClass = "U_B_UBACS_tshirt_wdl_f";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MX_SW_Black_Hamr_Pointer_Bipod_Snds_F","hgun_G17_black_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_SW_Black_Hamr_Pointer_Bipod_Snds_F","hgun_G17_black_snds_F","Throw","Put"};

        magazines[] = {"100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Recon_CQ_wdl_F : B_A_Recon_CQ_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (Shotgun)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_W_NATO_SF"};

        uniformClass = "U_B_UBACS_vest_wdl_f";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"sgun_M4_ACO_F","hgun_G17_black_snds_F","Throw","Put"};
        respawnWeapons[] = {"sgun_M4_ACO_F","hgun_G17_black_snds_F","Throw","Put"};

        magazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Recon_Exp_wdl_F : B_A_Recon_Exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Demo Specialist";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_recon"};

        uniformClass = "U_B_UBACS_tshirt_wdl_f";

        backpack = "B_AssaultPack_rgr_ReconExp";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","H_Booniehat_wdl_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","H_Booniehat_wdl_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MXC_Black_Holo_Pointer_Snds_F","hgun_G17_black_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_Black_Holo_Pointer_Snds_F","hgun_G17_black_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Recon_GL_wdl_F : B_A_Recon_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Grenadier";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_W_NATO_SF"};

        uniformClass = "U_B_UBACS_vest_wdl_f";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MX_GL_Black_Hamr_Pointer_Snds_F","hgun_G17_black_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_Pointer_Snds_F","hgun_G17_black_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Recon_JTAC_wdl_F : B_A_Recon_JTAC_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon JTAC";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_W_NATO_SF"};

        uniformClass = "U_B_UBACS_wdl_f";

        backpack = "B_RadioBag_01_wdl_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","H_Watchcap_camo_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","H_Watchcap_camo_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MX_Black_Holo_Pointer_Snds_F","hgun_G17_black_snds_F","Throw","Put","Laserdesignator_01_khk_F"};
        respawnWeapons[] = {"arifle_MX_Black_Holo_Pointer_Snds_F","hgun_G17_black_snds_F","Throw","Put","Laserdesignator_01_khk_F"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Recon_LAT_wdl_F : B_A_Recon_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (AT)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_W_NATO_SF"};

        uniformClass = "U_B_UBACS_tshirt_wdl_f";

        backpack = "B_TacticalPack_rgr_BAReconLAT_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MX_Black_Holo_Pointer_Snds_F","launch_NLAW_F","hgun_G17_black_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Holo_Pointer_Snds_F","launch_NLAW_F","hgun_G17_black_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Recon_MG_wdl_F : B_A_Recon_MG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Gunner";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_W_NATO_SF"};

        uniformClass = "U_B_UBACS_wdl_f";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"LMG_Mk200_black_RCO_LP_S_F","hgun_G17_black_snds_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Mk200_black_RCO_LP_S_F","hgun_G17_black_snds_F","Throw","Put"};

        magazines[] = {"200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Recon_M_wdl_F : B_A_Recon_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Marksman";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_recon"};

        uniformClass = "U_B_UBACS_wdl_f";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","H_Booniehat_wdl_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","H_Booniehat_wdl_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MXM_Black_MOS_Pointer_Bipod_Snds_F","hgun_G17_black_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MXM_Black_MOS_Pointer_Bipod_Snds_F","hgun_G17_black_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Recon_Medic_wdl_F : B_A_Recon_Medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Paramedic";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_W_NATO_SF"};

        uniformClass = "U_B_UBACS_tshirt_wdl_f";

        backpack = "B_TacticalPack_rgr_BAReconMedic_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MXC_Black_Holo_Pointer_Snds_F","hgun_G17_black_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_Black_Holo_Pointer_Snds_F","hgun_G17_black_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Recon_Sharpshooter_wdl_F : B_A_Recon_Sharpshooter_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Sharpshooter";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_recon"};

        uniformClass = "U_B_UBACS_wdl_f";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","H_Cap_khaki_specops_UK_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","H_Cap_khaki_specops_UK_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"srifle_DMR_02_AMS_LP_BI_S_F","hgun_G17_black_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_02_AMS_LP_BI_S_F","hgun_G17_black_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Recon_TL_wdl_F : B_A_Recon_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Team Leader";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_W_NATO_SF"};

        uniformClass = "U_B_UBACS_vest_wdl_f";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_G17_black_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_G17_black_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Recon_wdl_F : B_A_Recon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_W_NATO_SF"};

        uniformClass = "U_B_UBACS_vest_wdl_f";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_recon_olive_F","Aegis_H_Helmet_FASTMT_Cover_UK_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_G17_black_snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_G17_black_snds_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_SAM_System_03_wdl_F : B_A_SAM_System_03_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MIM-104 Patriot";
        side = 1;
        faction = "blu_a_wdl_f";
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

    class B_A_Sharpshooter_wdl_F : B_A_Sharpshooter_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"srifle_DMR_02_AMS_LP_BI_F","hgun_G17_black_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_02_AMS_LP_BI_F","hgun_G17_black_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Soldier_AAA_wdl_F : B_A_Soldier_AAA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        backpack = "B_Carryall_wdl_BWAAA_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_SA80_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Soldier_AAR_wdl_F : B_A_Soldier_AAR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_tshirt_wdl_f";

        backpack = "B_TacticalPack_rgr_BAAAR_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_SA80_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Soldier_AAT_wdl_F : B_A_Soldier_AAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        backpack = "B_Carryall_wdl_BWAAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_SA80_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Soldier_AA_wdl_F : B_A_Soldier_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        backpack = "B_Kitbag_wdl_BWAA_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_holo_pointer_f","launch_B_Titan_olive_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_holo_pointer_f","launch_B_Titan_olive_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Soldier_AR_wdl_F : B_A_Soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_tshirt_wdl_f";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"LMG_Mk200_black_RCO_LP_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Mk200_black_RCO_LP_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Soldier_AT_wdl_F : B_A_Soldier_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        backpack = "B_Kitbag_wdl_BWAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_holo_pointer_f","launch_I_Titan_short_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_holo_pointer_f","launch_I_Titan_short_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Soldier_A_wdl_F : B_A_Soldier_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        backpack = "B_Carryall_wdl_BAAmmo_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Soldier_CBRN_wdl_F : B_A_Soldier_wdl_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Specialist";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_CBRN_Suit_01_Wdl_F";

        backpack = "B_CombinationUnitRespirator_01_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_holo_FL_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_holo_FL_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Soldier_CQ_wdl_F : B_A_Soldier_CQ_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_cqb_olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"sgun_M4_ACO_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"sgun_M4_ACO_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Soldier_Exp_wdl_F : B_A_Soldier_Exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        backpack = "B_Kitbag_rgr_Exp";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_holo_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_holo_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Soldier_GL_wdl_F : B_A_Soldier_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_GL_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_GL_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Soldier_LAT_wdl_F : B_A_Soldier_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        backpack = "B_TacticalPack_rgr_BALAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_blk_holo_pointer_f","launch_NLAW_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_blk_holo_pointer_f","launch_NLAW_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","NLAW_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","NLAW_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Soldier_Lite_wdl_F : B_A_Soldier_Lite_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_casual"};

        uniformClass = "U_B_UBACS_vest_wdl_f";

        linkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_Headset_light","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_Headset_light","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SA80_C_blk_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Soldier_PG_wdl_F : B_A_Soldier_PG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Para Trooper";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        backpack = "B_Parachute";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Soldier_Repair_wdl_F : B_A_Soldier_Repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        backpack = "B_TacticalPack_rgr_BARepair_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_holo_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_holo_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Soldier_SL_wdl_F : B_A_Soldier_SL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Section Leader";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_vest_wdl_f";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_blk_arco_pointer_f","hgun_G17_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SA80_blk_arco_pointer_f","hgun_G17_black_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Soldier_TL_wdl_F : B_A_Soldier_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_vest_wdl_f";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_GL_blk_arco_pointer_f","hgun_G17_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SA80_GL_blk_arco_pointer_f","hgun_G17_black_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Soldier_UAV_wdl_F : B_A_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        backpack = "B_UAV_01_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Soldier_unarmed_wdl_F : B_A_Soldier_wdl_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class B_A_Soldier_wdl_F : B_A_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_blk_arco_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_blk_arco_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Static_AA_wdl_F : B_A_Static_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AA)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Static_AT_wdl_F : B_A_Static_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AT)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Static_Designator_01_wdl_F : B_A_Static_Designator_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Remote Designator";
        side = 1;
        faction = "blu_a_wdl_f";
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

    class B_A_Support_AMG_wdl_F : B_A_Support_AMG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (HMG/GMG)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_tshirt_wdl_f";

        backpack = "B_HMG_01_support_grn_F";

        linkedItems[] = {"V_TacChestrig_grn_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Support_AMort_wdl_F : B_A_Support_AMort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (Mk6)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_tshirt_wdl_f";

        backpack = "B_Mortar_01_support_grn_F";

        linkedItems[] = {"V_TacChestrig_grn_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Support_GMG_wdl_F : B_A_Support_GMG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (GMG)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_tshirt_wdl_f";

        backpack = "B_GMG_01_Weapon_grn_F";

        linkedItems[] = {"V_TacChestrig_grn_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Support_MG_wdl_F : B_A_Support_MG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (HMG)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_tshirt_wdl_f";

        backpack = "B_HMG_01_Weapon_grn_F";

        linkedItems[] = {"V_TacChestrig_grn_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Support_Mort_wdl_F : B_A_Support_Mort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mk6)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_tshirt_wdl_f";

        backpack = "B_Mortar_01_Weapon_grn_F";

        linkedItems[] = {"V_TacChestrig_grn_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Survivor_wdl_F : B_A_Soldier_wdl_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

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

    class B_A_Truck_01_Repair_wdl_F : B_A_Truck_01_Repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Repair";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Truck_01_ammo_wdl_F : B_A_Truck_01_ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Ammo";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Truck_01_box_wdl_F : B_A_Truck_01_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Container";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Truck_01_cargo_wdl_F : B_A_Truck_01_cargo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Cargo";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Truck_01_covered_wdl_F : B_A_Truck_01_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport (covered)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Truck_01_flatbed_wdl_F : B_A_Truck_01_flatbed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Flatbed";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Truck_01_fuel_wdl_F : B_A_Truck_01_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Fuel";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Truck_01_medical_wdl_F : B_A_Truck_01_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Medical";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Truck_01_mover_wdl_F : B_A_Truck_01_mover_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_Truck_01_transport_wdl_F : B_A_Truck_01_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Soldier_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_UAV_01_wdl_F : B_A_UAV_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR-2 Darter";
        side = 1;
        faction = "blu_a_wdl_f";
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

    class B_A_UAV_02_dynamicLoadout_wdl_F : B_A_UAV_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "YABHON-R3";
        side = 1;
        faction = "blu_a_wdl_f";
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

    class B_A_UAV_06_medical_wdl_F : B_A_UAV_06_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican (Medical)";
        side = 1;
        faction = "blu_a_wdl_f";
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

    class B_A_UAV_06_wdl_F : B_A_UAV_06_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican";
        side = 1;
        faction = "blu_a_wdl_f";
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

    class B_A_UGV_01_medical_wdl_F : B_A_UGV_01_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper Medical";
        side = 1;
        faction = "blu_a_wdl_f";
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

    class B_A_UGV_01_rcws_wdl_F : B_A_UGV_01_rcws_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper RCWS";
        side = 1;
        faction = "blu_a_wdl_f";
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

    class B_A_UGV_01_wdl_F : B_A_UGV_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper";
        side = 1;
        faction = "blu_a_wdl_f";
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

    class B_A_UGV_02_Demining_wdl_F : B_A_UGV_02_Demining_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ED-1D Pelter";
        side = 1;
        faction = "blu_a_wdl_f";
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

    class B_A_VTOL_01_infantry_wdl_F : VTOL_01_infantry_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "V-44 X Blackfish (Infantry Transport)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Pilot_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_VTOL_01_vehicle_wdl_F : VTOL_01_vehicle_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "V-44 X Blackfish (Vehicle Transport)";
        side = 1;
        faction = "blu_a_wdl_f";
        crew = "B_A_Pilot_wdl_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_ghillie_spotter_wdl_F : B_A_ghillie_wdl_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter (Woodland)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_sniper"};

        uniformClass = "U_B_W_FullGhillie_wdl_F";

        linkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_G17_black_snds_F","Throw","Put","Laserdesignator_01_khk_F"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_Pointer_Snds_F","hgun_G17_black_snds_F","Throw","Put","Laserdesignator_01_khk_F"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_ghillie_wdl_F : B_ghillie_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper (Woodland)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_sniper"};

        uniformClass = "U_B_W_FullGhillie_wdl_F";

        linkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Aegis_srifle_GM6B_LRPS_F","hgun_G17_black_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Aegis_srifle_GM6B_LRPS_F","hgun_G17_black_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"Aegis_5Rnd_127x99_Mag","Aegis_5Rnd_127x99_Mag","Aegis_5Rnd_127x99_Mag","Aegis_5Rnd_127x99_Mag","Aegis_5Rnd_127x99_Mag","Aegis_5Rnd_127x99_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"Aegis_5Rnd_127x99_Mag","Aegis_5Rnd_127x99_Mag","Aegis_5Rnd_127x99_Mag","Aegis_5Rnd_127x99_Mag","Aegis_5Rnd_127x99_Mag","Aegis_5Rnd_127x99_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_soldier_M_wdl_F : B_A_soldier_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_vest_wdl_f";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Aegis_arifle_SPAR_03_blk_MOS_Pointer_Bipod_F","hgun_G17_black_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Aegis_arifle_SPAR_03_blk_MOS_Pointer_Bipod_F","hgun_G17_black_F","Throw","Put","Rangefinder"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_soldier_UAV_02_wdl_LxWS_F : B_A_Soldier_UAV_wdl_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AP-5)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        backpack = "Aegis_B_A_UAV_02_backpack_lxWS";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_soldier_UAV_06_medical_wdl_F : B_A_Soldier_UAV_wdl_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        backpack = "B_UAV_06_medical_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_soldier_UAV_06_wdl_F : B_A_Soldier_UAV_wdl_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        backpack = "B_UAV_06_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_soldier_UGV_02_Demining_wdl_F : B_A_Soldier_UAV_wdl_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1D)";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        backpack = "B_UGV_02_Demining_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_Helmet_Virtus_Scrim_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_aco_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_A_soldier_mine_wdl_F : B_A_Soldier_Exp_wdl_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mine Specialist";
        side = 1;
        faction = "blu_a_wdl_f";

        identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "U_B_UBACS_wdl_f";

        backpack = "B_Carryall_wdl_Mine";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","Aegis_H_Helmet_Virtus_Cover_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_SA80_C_blk_holo_pointer_f","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SA80_C_blk_holo_pointer_f","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


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
        class BLU_A_wdl_F {
            class Infantry {
                class B_A_InfSentry_W {
                    name = "Sentry";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_soldier_GL_wdl_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_soldier_wdl_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class B_A_InfSquad_W {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_soldier_SL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_RadioOperator_wdl_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_soldier_LAT_wdl_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_A_soldier_M_wdl_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_A_soldier_TL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_A_soldier_AR_wdl_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_A_soldier_A_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_A_medic_wdl_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class B_A_InfSquad_Weapons_W {
                    name = "Weapons Squad";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_soldier_SL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_soldier_AR_wdl_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_soldier_GL_wdl_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_A_soldier_M_wdl_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_A_soldier_AT_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_A_soldier_AAT_wdl_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_A_soldier_A_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_A_medic_wdl_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class B_A_InfTeam_AA_W {
                    name = "Air-defense Team";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_soldier_TL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_soldier_AA_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_soldier_AA_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_A_soldier_AAA_wdl_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_A_InfTeam_AT_W {
                    name = "Anti-armor Team";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_soldier_TL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_soldier_AT_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_soldier_AT_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_A_soldier_AAT_wdl_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_A_InfTeam_W {
                    name = "Fire Team";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_soldier_TL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_soldier_AR_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_soldier_GL_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_A_soldier_LAT_wdl_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class B_A_MechInfSquad_W {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_APC_Tracked_03_cannon_wdl_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_soldier_SL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_RadioOperator_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_A_soldier_LAT_wdl_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_A_soldier_TL_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_A_soldier_AR_wdl_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_A_soldier_A_wdl_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_A_medic_wdl_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class B_A_MechInf_AA_W {
                    name = "Mechanized Air-defense Squad";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_APC_Tracked_03_cannon_wdl_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_soldier_SL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_soldier_AA_wdl_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_A_soldier_AA_wdl_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_A_soldier_AA_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_A_soldier_AAA_wdl_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_A_soldier_AAA_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_A_soldier_AAA_wdl_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class B_A_MechInf_AT_W {
                    name = "Mechanized Anti-armor Squad";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_APC_Tracked_03_cannon_wdl_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_soldier_SL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_soldier_AT_wdl_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_A_soldier_AT_wdl_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_A_soldier_AT_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_A_soldier_AAT_wdl_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_A_soldier_AAT_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_A_soldier_AAT_wdl_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class B_A_MechInf_Support_W {
                    name = "Mechanized Support Squad";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_APC_Tracked_03_cannon_wdl_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_soldier_SL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_soldier_repair_wdl_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_A_engineer_wdl_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_A_medic_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_A_soldier_AR_wdl_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_A_soldier_exp_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_A_soldier_A_wdl_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
            };
            class Motorized {
                class B_A_MotInf_AA_W {
                    name = "Motorized Air-defense Team";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_MRAP_03_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_soldier_AA_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_soldier_AA_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class B_A_MotInf_AT_W {
                    name = "Motorized Anti-armor Team";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_MRAP_03_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_soldier_AT_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_soldier_AT_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class B_A_MotInf_GMGTeam_W {
                    name = "Motorized GMG Team";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_MRAP_03_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_support_GMG_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_support_AMG_wdl_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                };
                class B_A_MotInf_MGTeam_W {
                    name = "Motorized HMG Team";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_MRAP_03_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_support_MG_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_support_AMG_wdl_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                };
                class B_A_MotInf_MortTeam_W {
                    name = "Motorized Mortar Team";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_MRAP_03_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_support_Mort_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_support_AMort_wdl_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                };
                class B_A_MotInf_Reinforcements_W {
                    name = "Motorized Reinforcements";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_Truck_01_transport_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_soldier_SL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_RadioOperator_wdl_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "B_A_soldier_LAT_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "B_A_soldier_M_wdl_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "B_A_soldier_TL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "B_A_soldier_AR_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "B_A_soldier_A_wdl_F";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "B_A_medic_wdl_F";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "B_A_soldier_SL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "B_A_RadioOperator_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "B_A_soldier_LAT_wdl_F";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "B_A_soldier_M_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit13 {
                        vehicle = "B_A_soldier_TL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit14 {
                        vehicle = "B_A_soldier_AR_wdl_F";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit15 {
                        vehicle = "B_A_soldier_A_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit16 {
                        vehicle = "B_A_medic_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };
                };
                class B_A_MotInf_Team_W {
                    name = "Motorized Team";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_MRAP_03_gmg_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_soldier_LAT_wdl_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
            };
            class SpecOps {
                class B_A_ReconPatrol_W {
                    name = "Recon Patrol";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "B_A_recon_TL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_recon_M_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_recon_medic_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_A_recon_wdl_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_A_ReconSentry_W {
                    name = "Recon Sentry";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "B_A_recon_M_wdl_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_recon_wdl_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class B_A_ReconTeam_W {
                    name = "Recon Team";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "B_A_recon_TL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_recon_M_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_recon_medic_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_A_recon_LAT_wdl_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_A_recon_JTAC_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_A_recon_exp_wdl_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
            };
            class Support {
                class B_A_Recon_EOD_W {
                    name = "Recon Support Team (EOD)";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_recon_TL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_recon_exp_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_recon_exp_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_A_recon_wdl_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_A_Support_CLS_W {
                    name = "Support Team (CLS)";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_soldier_TL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_soldier_AR_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_medic_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_A_medic_wdl_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_A_Support_ENG_W {
                    name = "Support Team (Engineer)";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_soldier_TL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_engineer_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_engineer_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_A_soldier_repair_wdl_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_A_Support_EOD_W {
                    name = "Support Team (EOD)";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_soldier_TL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_engineer_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_soldier_exp_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_A_soldier_exp_wdl_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_A_Support_GMG_W {
                    name = "GMG Team";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_soldier_TL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_support_GMG_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_support_AMG_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class B_A_Support_MG_W {
                    name = "HMG Team";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_A_soldier_TL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_support_MG_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_support_AMG_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class B_A_Support_Mort_W {
                    name = "Mortar Team";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mortar.paa";

                    class Unit0 {
                        vehicle = "B_A_soldier_TL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_A_support_Mort_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_A_support_AMort_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class B_A_Support_Mort_wdl_RF {
                    name = "Light Mortar Team";
                    side = 1;
                    faction = "BLU_A_wdl_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";

                    class Unit0 {
                        vehicle = "B_A_soldier_TL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_A_Support_CMort_wdl_RF";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_A_Support_CMort_wdl_RF";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
        };
    };
};
