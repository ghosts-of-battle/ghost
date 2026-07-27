class CfgVehicles {
    // Ancestry for the turret overrides below. Each level restates its own
    // parent and only DECLARES the nested name (no body of its own), so no
    // vanilla class is severed; that is what makes `class Turrets: Turrets`
    // in the clones legal to rapify and correct at runtime.
    class APC_Wheeled_01_atgm_base_v2;
    class B_APC_Tracked_01_base_F;
    class B_APC_Wheeled_01_cannon_F;
    class B_MBT_01_mlrs_base_F;
    class MBT_01_base_F;
    class MRAP_01_hmg_base_F;
    class UGV_01_base_F;
    class Wheeled_APC_F;
    class AFV_Wheeled_01_base_F: Wheeled_APC_F {
        class Turrets;
    };
    class APC_Wheeled_01_base_F;
    class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F {
        class Turrets;
    };
    class B_APC_Tracked_01_rcws_F: B_APC_Tracked_01_base_F {
        class Turrets;
    };
    class B_MBT_01_base_F: MBT_01_base_F {
        class Turrets;
    };
    class B_MBT_01_mlrs_F: B_MBT_01_mlrs_base_F {
        class Turrets;
    };
    class B_MRAP_01_hmg_F: MRAP_01_hmg_base_F {
        class Turrets;
    };
    class B_T_APC_Wheeled_01_atgm_lxWS_v2: APC_Wheeled_01_atgm_base_v2 {
        class Turrets;
    };
    class B_T_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_cannon_F {
        class Turrets;
    };
    class MBT_01_arty_base_F: MBT_01_base_F {
        class Turrets;
    };
    class UGV_01_rcws_base_F: UGV_01_base_F {
        class Turrets;
    };
    class AFV_Wheeled_01_up_base_F: AFV_Wheeled_01_base_F {
        class Turrets;
    };
    class APC_Wheeled_01_base_v2_F: APC_Wheeled_01_base_F {
        class Turrets;
    };
    class B_MBT_01_arty_base_F: MBT_01_arty_base_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class B_MBT_01_cannon_F: B_MBT_01_base_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class B_T_UGV_01_rcws_olive_F: UGV_01_rcws_base_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class B_W_AFV_Wheeled_01_cannon_F: AFV_Wheeled_01_base_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class B_W_APC_Tracked_01_CRV_F: B_APC_Tracked_01_CRV_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class B_W_APC_Tracked_01_rcws_F: B_APC_Tracked_01_rcws_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class B_W_APC_Wheeled_01_atgm_lxWS_v2: B_T_APC_Wheeled_01_atgm_lxWS_v2 {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class B_W_APC_Wheeled_01_cannon_F: B_T_APC_Wheeled_01_cannon_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class B_W_MBT_01_mlrs_F: B_MBT_01_mlrs_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class B_W_MRAP_01_hmg_F: B_MRAP_01_hmg_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class B_W_UGV_01_rcws_F: UGV_01_rcws_base_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class B_APC_Wheeled_01_cannon_v2_F: APC_Wheeled_01_base_v2_F {
        class Turrets;
    };
    class B_MBT_01_TUSK_F: B_MBT_01_cannon_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets;
            };
        };
    };
    class B_MBT_01_arty_F: B_MBT_01_arty_base_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets;
            };
        };
    };
    class B_W_AFV_Wheeled_01_up_cannon_F: AFV_Wheeled_01_up_base_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class B_W_APC_Wheeled_01_cannon_v2_F: APC_Wheeled_01_base_v2_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class B_W_MBT_01_cannon_F: B_MBT_01_cannon_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class B_D_APC_Wheeled_01_cannon_lxWS_v2: B_APC_Wheeled_01_cannon_v2_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class B_W_MBT_01_TUSK_F: B_MBT_01_TUSK_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics;
                };
            };
        };
    };
    class B_W_MBT_01_arty_F: B_MBT_01_arty_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics;
                };
            };
        };
    };
    class Aegis_B_W_AH99J_EF;
    class Aegis_B_W_CombatBoat_AT_EF;
    class Aegis_B_W_CombatBoat_HMG_EF;
    class Aegis_B_W_CombatBoat_Unarmed_EF;
    class Aegis_B_W_CommandoMortar_RF;
    class Aegis_B_W_Heli_Attack_03_F;
    class Aegis_B_W_Heli_EC_03_RF;
    class Aegis_B_W_Heli_EC_04_military_RF;
    class Aegis_B_W_MRAP_01_AT_EF;
    class Aegis_B_W_MRAP_01_FSV_EF;
    class Aegis_B_W_MRAP_01_LAAD_EF;
    class Aegis_B_W_Pickup_AT_RF;
    class Aegis_B_W_Pickup_Comms_rf;
    class Aegis_B_W_Pickup_RF;
    class Aegis_B_W_Pickup_aat_rf;
    class Aegis_B_W_Pickup_mmg_rf;
    class Aegis_B_W_UAV_02_lxWS;
    class Aegis_B_W_support_CMort_RF;
    class Atlas_B_W_JSOC_AR_F;
    class Atlas_B_W_JSOC_Exp_F;
    class Atlas_B_W_JSOC_F;
    class Atlas_B_W_JSOC_GL_F;
    class Atlas_B_W_JSOC_JTAC_F;
    class Atlas_B_W_JSOC_LAT_F;
    class Atlas_B_W_JSOC_M_F;
    class Atlas_B_W_JSOC_Medic_F;
    class Atlas_B_W_JSOC_SL_F;
    class Atlas_B_W_JSOC_Sharpshooter_F;
    class Atlas_B_W_JSOC_TL_F;
    class Atlas_B_W_JSOC_UAV_F;
    class Atlas_B_W_JSOC_UAV_lxWS;
    class B_AAA_System_01_F;
    class B_AA_01_Weapon_grn_F;
    class B_AA_01_weapon_F;
    class B_AT_01_Weapon_grn_F;
    class B_AT_01_weapon_F;
    class B_Captain_Pettka_F;
    class B_Competitor_F;
    class B_GMG_01_A_Weapon_grn_F;
    class B_GMG_01_A_weapon_F;
    class B_GMG_01_Weapon_grn_F;
    class B_GMG_01_high_Weapon_grn_F;
    class B_GMG_01_high_weapon_F;
    class B_GMG_01_weapon_F;
    class B_HMG_01_A_Weapon_grn_F;
    class B_HMG_01_A_weapon_F;
    class B_HMG_01_Weapon_grn_F;
    class B_HMG_01_high_Weapon_grn_F;
    class B_HMG_01_high_weapon_F;
    class B_HMG_01_support_F;
    class B_HMG_01_support_grn_F;
    class B_HMG_01_support_high_F;
    class B_HMG_01_support_high_grn_F;
    class B_HMG_01_weapon_F;
    class B_HMG_02_Weapon_grn_F;
    class B_HMG_02_high_Weapon_grn_F;
    class B_HMG_02_high_weapon_F;
    class B_HMG_02_support_F;
    class B_HMG_02_support_grn_F;
    class B_HMG_02_support_high_F;
    class B_HMG_02_support_high_grn_F;
    class B_HMG_02_weapon_F;
    class B_Heli_Attack_01_pylons_dynamicLoadout_F;
    class B_Heli_Transport_01_F;
    class B_Heli_Transport_01_pylons_F;
    class B_Mortar_01_Weapon_grn_F;
    class B_Mortar_01_support_F;
    class B_Mortar_01_support_grn_F;
    class B_Mortar_01_weapon_F;
    class B_Officer_Parade_F;
    class B_Officer_Parade_Veteran_F;
    class B_Patrol_Engineer_F;
    class B_Patrol_HeavyGunner_F;
    class B_Patrol_Medic_F;
    class B_Patrol_Soldier_AR_F;
    class B_Patrol_Soldier_AT_F;
    class B_Patrol_Soldier_A_F;
    class B_Patrol_Soldier_MG_F;
    class B_Patrol_Soldier_M_F;
    class B_Patrol_Soldier_TL_F;
    class B_Patrol_Soldier_UAV_F;
    class B_Protagonist_VR_F;
    class B_RangeMaster_F;
    class B_SAM_System_01_F;
    class B_SAM_System_02_F;
    class B_SDV_01_F;
    class B_Ship_Gun_01_F;
    class B_Ship_MRLS_01_F;
    class B_Slingload_01_Ammo_F;
    class B_Slingload_01_Cargo_F;
    class B_Slingload_01_Fuel_F;
    class B_Slingload_01_Medevac_F;
    class B_Slingload_01_Repair_F;
    class B_Soldier_VR_F;
    class B_T_Boat_Armed_01_minigun_F;
    class B_T_Boat_Transport_01_F;
    class B_T_Diver_Exp_F;
    class B_T_Diver_F;
    class B_T_Diver_TL_F;
    class B_T_Lifeboat;
    class B_T_UGV_01_medical_olive_F;
    class B_T_UGV_01_olive_F;
    class B_T_ghillie_spotter_tna_F;
    class B_T_ghillie_tna_F;
    class B_UAV_01_backpack_F;
    class B_UAV_02_CAS_F;
    class B_UAV_06_backpack_F;
    class B_UAV_06_medical_backpack_F;
    class B_UGV_02_Demining_backpack_F;
    class B_UGV_02_Science_F;
    class B_UGV_02_Science_backpack_F;
    class B_W_APC_Tracked_01_AA_F;
    class B_W_APC_Wheeled_01_medical_F;
    class B_W_Engineer_F;
    class B_W_GMG_01_A_F;
    class B_W_GMG_01_F;
    class B_W_GMG_01_high_F;
    class B_W_HMG_01_A_F;
    class B_W_HMG_01_F;
    class B_W_HMG_01_high_F;
    class B_W_HMG_02_F;
    class B_W_HMG_02_high_F;
    class B_W_HeavyGunner_F;
    class B_W_Heli_Attack_01_dynamicLoadout_F;
    class B_W_Heli_Light_01_dynamicLoadout_F;
    class B_W_Heli_Transport_01_F;
    class B_W_Heli_Transport_01_medevac_F;
    class B_W_Heli_Transport_03_F;
    class B_W_Heli_Transport_03_unarmed_F;
    class B_W_Heli_light_01_F;
    class B_W_LSV_01_AT_F;
    class B_W_LSV_01_armed_F;
    class B_W_LSV_01_light_F;
    class B_W_LSV_01_unarmed_F;
    class B_W_MRAP_01_F;
    class B_W_MRAP_01_gmg_F;
    class B_W_Medic_F;
    class B_W_Mortar_01_F;
    class B_W_Officer_F;
    class B_W_Plane_CAS_01_dynamicLoadout_F;
    class B_W_Plane_Fighter_01_F;
    class B_W_Plane_Fighter_01_Stealth_F;
    class B_W_Plane_Fighter_05_F;
    class B_W_Plane_Fighter_05_Stealth_F;
    class B_W_Quadbike_01_F;
    class B_W_Radar_System_01_F;
    class B_W_RadioOperator_F;
    class B_W_Recon_AR_F;
    class B_W_Recon_CQ_F;
    class B_W_Recon_Exp_F;
    class B_W_Recon_F;
    class B_W_Recon_GL_F;
    class B_W_Recon_JTAC_F;
    class B_W_Recon_LAT_F;
    class B_W_Recon_MG_F;
    class B_W_Recon_M_F;
    class B_W_Recon_Medic_F;
    class B_W_Recon_Sharpshooter_F;
    class B_W_Recon_TL_F;
    class B_W_SAM_System_03_F;
    class B_W_Sharpshooter_F;
    class B_W_Sniper_F;
    class B_W_Soldier_AAA_F;
    class B_W_Soldier_AAR_F;
    class B_W_Soldier_AAT_F;
    class B_W_Soldier_AA_F;
    class B_W_Soldier_AR_F;
    class B_W_Soldier_AT_F;
    class B_W_Soldier_A_F;
    class B_W_Soldier_CBRN_F;
    class B_W_Soldier_CQ_F;
    class B_W_Soldier_Exp_F;
    class B_W_Soldier_F;
    class B_W_Soldier_GL_F;
    class B_W_Soldier_LAT2_F;
    class B_W_Soldier_LAT_F;
    class B_W_Soldier_Lite_F;
    class B_W_Soldier_MG_F;
    class B_W_Soldier_PG_F;
    class B_W_Soldier_Repair_F;
    class B_W_Soldier_SL_F;
    class B_W_Soldier_TL_F;
    class B_W_Soldier_UAV_F;
    class B_W_Soldier_unarmed_F;
    class B_W_Spotter_F;
    class B_W_Static_AA_F;
    class B_W_Static_AT_F;
    class B_W_Static_Designator_01_F;
    class B_W_Static_Designator_01_weapon_F;
    class B_W_Support_AMG_F;
    class B_W_Support_AMort_F;
    class B_W_Support_GMG_F;
    class B_W_Support_MG_F;
    class B_W_Support_Mort_F;
    class B_W_Survivor_F;
    class B_W_Truck_01_Repair_F;
    class B_W_Truck_01_ammo_F;
    class B_W_Truck_01_box_F;
    class B_W_Truck_01_cargo_F;
    class B_W_Truck_01_covered_F;
    class B_W_Truck_01_flatbed_F;
    class B_W_Truck_01_fuel_F;
    class B_W_Truck_01_medical_F;
    class B_W_Truck_01_mover_F;
    class B_W_Truck_01_transport_F;
    class B_W_UAV_01_F;
    class B_W_UAV_02_dynamicLoadout_F;
    class B_W_UAV_03_dynamicLoadout_F;
    class B_W_UAV_05_F;
    class B_W_UAV_06_F;
    class B_W_UAV_06_medical_F;
    class B_W_UGV_01_F;
    class B_W_UGV_01_medical_F;
    class B_W_UGV_02_Demining_F;
    class B_W_VTOL_01_armed_F;
    class B_W_VTOL_01_infantry_F;
    class B_W_VTOL_01_vehicle_F;
    class B_W_ghillie_spotter_wdl_F;
    class B_W_ghillie_wdl_F;
    class B_W_soldier_M_F;
    class B_W_soldier_UAV_02_LxWS_F;
    class B_W_soldier_UAV_06_F;
    class B_W_soldier_UAV_06_medical_F;
    class B_W_soldier_UGV_02_Demining_F;
    class B_W_soldier_UGV_02_Science_F;
    class B_W_soldier_mine_F;
    class B_ghillie_ard_F;
    class B_ghillie_lsh_F;
    class B_ghillie_sard_F;
    class B_ghillie_spotter_ard_F;
    class B_ghillie_spotter_lsh_F;
    class B_ghillie_spotter_sard_F;
    class CamoNet_sand_F;
    class CamoNet_sand_big_F;
    class CamoNet_sand_open_F;
    class Item_B_UavTerminal;
    class Weapon_launch_B_Titan_F;
    class Weapon_launch_launch_B_Titan_short_F;
    // mod drones (owning mods intentionally not in requiredAddons)
    class B_T_UAV_03_dynamicLoadout_F;
    class B_UAV_RC40_HE_RF;
    class B_UAV_RC40_SENSOR_RF;
    class GX_B_HONEYBADGER_UGV_AT_GREEN;
    class GX_B_HUNTER_SP_UAV;
    class GX_B_MAGURA_V5_USV;
    class GX_B_MQ8B_UAV_ARMED;
    class GX_B_MQ8B_UAV_RECON;
    class GX_B_MQ8B_UAV_RECON_SEATED;
    class GX_B_THEMIS_UGV_CARGO;
    class GX_B_THEMIS_UGV_DEFNDER_MEDIUM;
    class GX_B_THEMIS_UGV_HUNTER_LAUNCHER;
    class qav_ripsaw_Mk44;
    class qav_ripsaw_c;
    class rksla3_aeroshark_blufor;
    class qav_abramsx_templar;
    class qav_abramsx_tusk;
    class VVE_APC_Wheeled_01_apc_QAV;
    class VVE_APC_Wheeled_01_mgs_QAV;
    class VVE_APC_Wheeled_01_mgs_up_QAV;
    class VVE_APC_Wheeled_01_shorad_QAV;

    class ghost_faction_b_us_mxc_woodland_Aegis_B_W_AH99J_EF: Aegis_B_W_AH99J_EF {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_Aegis_B_W_CombatBoat_AT_EF: Aegis_B_W_CombatBoat_AT_EF {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_Aegis_B_W_CombatBoat_HMG_EF: Aegis_B_W_CombatBoat_HMG_EF {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_Aegis_B_W_CombatBoat_Unarmed_EF: Aegis_B_W_CombatBoat_Unarmed_EF {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_Aegis_B_W_CommandoMortar_RF: Aegis_B_W_CommandoMortar_RF {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_Aegis_B_W_Heli_Attack_03_F: Aegis_B_W_Heli_Attack_03_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_Aegis_B_W_Heli_EC_03_RF: Aegis_B_W_Heli_EC_03_RF {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_Aegis_B_W_Heli_EC_04_military_RF: Aegis_B_W_Heli_EC_04_military_RF {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_Aegis_B_W_MRAP_01_AT_EF: Aegis_B_W_MRAP_01_AT_EF {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_Aegis_B_W_MRAP_01_FSV_EF: Aegis_B_W_MRAP_01_FSV_EF {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_Aegis_B_W_MRAP_01_LAAD_EF: Aegis_B_W_MRAP_01_LAAD_EF {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_Aegis_B_W_Pickup_AT_RF: Aegis_B_W_Pickup_AT_RF {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_Aegis_B_W_Pickup_Comms_rf: Aegis_B_W_Pickup_Comms_rf {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_Aegis_B_W_Pickup_RF: Aegis_B_W_Pickup_RF {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_Aegis_B_W_Pickup_aat_rf: Aegis_B_W_Pickup_aat_rf {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_Aegis_B_W_Pickup_mmg_rf: Aegis_B_W_Pickup_mmg_rf {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_Aegis_B_W_UAV_02_lxWS: Aegis_B_W_UAV_02_lxWS {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_Aegis_B_W_support_CMort_RF: Aegis_B_W_support_CMort_RF {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_Atlas_B_W_JSOC_AR_F: Atlas_B_W_JSOC_AR_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Shemag_oli",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Shemag_oli",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_Atlas_B_W_JSOC_Exp_F: Atlas_B_W_JSOC_Exp_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "APERSMine_Range_Mag",
            "APERSMine_Range_Mag",
            "APERSMine_Range_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "APERSMine_Range_Mag",
            "APERSMine_Range_Mag",
            "APERSMine_Range_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_Atlas_B_W_JSOC_F: Atlas_B_W_JSOC_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_Atlas_B_W_JSOC_GL_F: Atlas_B_W_JSOC_GL_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_blue",
            "Chemlight_blue",
            "3Rnd_Smoke_Grenade_shell",
            "3Rnd_HEDP_Grenade_shell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_blue",
            "Chemlight_blue",
            "3Rnd_Smoke_Grenade_shell",
            "3Rnd_HEDP_Grenade_shell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_Atlas_B_W_JSOC_JTAC_F: Atlas_B_W_JSOC_JTAC_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "MiniGrenade",
            "MiniGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "Laserbatteries",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "MiniGrenade",
            "MiniGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "Laserbatteries",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        backpack = "ghost_backpack_B_RadioBag_01_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_Atlas_B_W_JSOC_LAT_F: Atlas_B_W_JSOC_LAT_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "MRAWS_HEAT_F",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "MRAWS_HEAT_F",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_Atlas_B_W_JSOC_M_F: Atlas_B_W_JSOC_M_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_Atlas_B_W_JSOC_Medic_F: Atlas_B_W_JSOC_Medic_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellRed",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellRed",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_Atlas_B_W_JSOC_SL_F: Atlas_B_W_JSOC_SL_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "30Rnd_65x39_caseless_black_mag_tracer",
            "30Rnd_65x39_caseless_black_mag_tracer",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_blue",
            "Chemlight_blue",
            "3Rnd_Smoke_Grenade_shell",
            "1Rnd_SmokeBlue_Grenade_shell",
            "1Rnd_SmokeGreen_Grenade_shell",
            "1Rnd_SmokeOrange_Grenade_shell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "30Rnd_65x39_caseless_black_mag_tracer",
            "30Rnd_65x39_caseless_black_mag_tracer",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_blue",
            "Chemlight_blue",
            "3Rnd_Smoke_Grenade_shell",
            "1Rnd_SmokeBlue_Grenade_shell",
            "1Rnd_SmokeGreen_Grenade_shell",
            "1Rnd_SmokeOrange_Grenade_shell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Shemag_oli",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Shemag_oli",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_Atlas_B_W_JSOC_Sharpshooter_F: Atlas_B_W_JSOC_Sharpshooter_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Shemag_oli",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Shemag_oli",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_Atlas_B_W_JSOC_TL_F: Atlas_B_W_JSOC_TL_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "30Rnd_65x39_caseless_black_mag_tracer",
            "30Rnd_65x39_caseless_black_mag_tracer",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "30Rnd_65x39_caseless_black_mag_tracer",
            "30Rnd_65x39_caseless_black_mag_tracer",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_Atlas_B_W_JSOC_UAV_F: Atlas_B_W_JSOC_UAV_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "B_UAVTerminal",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "B_UAVTerminal",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_Atlas_B_W_JSOC_UAV_lxWS: Atlas_B_W_JSOC_UAV_lxWS {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag_v2",
            "16Rnd_9x21_Mag_v2",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_blue",
            "Chemlight_blue"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "B_UAVTerminal",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Balaclava_light_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "B_UAVTerminal",
            "Aegis_NVG_IVAS_01_grn_F"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_AAA_System_01_F: B_AAA_System_01_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_AA_01_Weapon_grn_F: B_AA_01_Weapon_grn_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_AA_01_weapon_F: B_AA_01_weapon_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_AT_01_Weapon_grn_F: B_AT_01_Weapon_grn_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_AT_01_weapon_F: B_AT_01_weapon_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_Captain_Pettka_F: B_Captain_Pettka_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_Competitor_F: B_Competitor_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        linkedItems[] = {
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_D_APC_Wheeled_01_cannon_lxWS_v2: B_D_APC_Wheeled_01_cannon_lxWS_v2 {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "140Rnd_30mm_MP_shells_Tracer_Red",
                    "140Rnd_30mm_MP_shells_Tracer_Red",
                    "60Rnd_30mm_APFSDS_shells_Tracer_Red",
                    "60Rnd_30mm_APFSDS_shells_Tracer_Red",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green"
                };
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_GMG_01_A_Weapon_grn_F: B_GMG_01_A_Weapon_grn_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_GMG_01_A_weapon_F: B_GMG_01_A_weapon_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_GMG_01_Weapon_grn_F: B_GMG_01_Weapon_grn_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_GMG_01_high_Weapon_grn_F: B_GMG_01_high_Weapon_grn_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_GMG_01_high_weapon_F: B_GMG_01_high_weapon_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_GMG_01_weapon_F: B_GMG_01_weapon_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_HMG_01_A_Weapon_grn_F: B_HMG_01_A_Weapon_grn_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_HMG_01_A_weapon_F: B_HMG_01_A_weapon_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_HMG_01_Weapon_grn_F: B_HMG_01_Weapon_grn_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_HMG_01_high_Weapon_grn_F: B_HMG_01_high_Weapon_grn_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_HMG_01_high_weapon_F: B_HMG_01_high_weapon_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_HMG_01_support_F: B_HMG_01_support_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_HMG_01_support_grn_F: B_HMG_01_support_grn_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_HMG_01_support_high_F: B_HMG_01_support_high_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_HMG_01_support_high_grn_F: B_HMG_01_support_high_grn_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_HMG_01_weapon_F: B_HMG_01_weapon_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_HMG_02_Weapon_grn_F: B_HMG_02_Weapon_grn_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_HMG_02_high_Weapon_grn_F: B_HMG_02_high_Weapon_grn_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_HMG_02_high_weapon_F: B_HMG_02_high_weapon_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_HMG_02_support_F: B_HMG_02_support_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_HMG_02_support_grn_F: B_HMG_02_support_grn_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_HMG_02_support_high_F: B_HMG_02_support_high_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_HMG_02_support_high_grn_F: B_HMG_02_support_high_grn_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_HMG_02_weapon_F: B_HMG_02_weapon_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_Heli_Attack_01_pylons_dynamicLoadout_F: B_Heli_Attack_01_pylons_dynamicLoadout_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_Heli_Transport_01_F: B_Heli_Transport_01_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        displayName = "UH-80 Ghost Hawk (Ultra Stealth)";
        radarTargetSize = 0.2;    // vanilla 0.7
        irTargetSize = 0.3;       // vanilla 0.8
        audible = 2;              // vanilla 50 (Helicopter base)
        camouflage = 0.8;         // vanilla 100 (Helicopter base)
    };
    class ghost_faction_b_us_mxc_woodland_B_Heli_Transport_01_pylons_F: B_Heli_Transport_01_pylons_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_Mortar_01_Weapon_grn_F: B_Mortar_01_Weapon_grn_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_Mortar_01_support_F: B_Mortar_01_support_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_Mortar_01_support_grn_F: B_Mortar_01_support_grn_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_Mortar_01_weapon_F: B_Mortar_01_weapon_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_Officer_Parade_F: B_Officer_Parade_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        linkedItems[] = {
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_Officer_Parade_Veteran_F: B_Officer_Parade_Veteran_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        linkedItems[] = {
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_Patrol_Engineer_F: B_Patrol_Engineer_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrierGL_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrierGL_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        backpack = "ghost_backpack_Kitbag_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_Patrol_HeavyGunner_F: B_Patrol_HeavyGunner_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_150Rnd_762x54_Box_T_Green",
            "FA_150Rnd_762x54_Box_T_Green",
            "FA_150Rnd_762x54_Box_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "FA_150Rnd_762x54_Box_T_Green",
            "FA_150Rnd_762x54_Box_T_Green",
            "FA_150Rnd_762x54_Box_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        linkedItems[] = {
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_Patrol_Medic_F: B_Patrol_Medic_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "HandGrenade",
            "HandGrenade"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "HandGrenade",
            "HandGrenade"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_Patrol_Soldier_AR_F: B_Patrol_Soldier_AR_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_100Rnd_65_Mk328_T_Green",
            "FA_100Rnd_65_Mk328_T_Green",
            "FA_100Rnd_65_Mk328_T_Green",
            "FA_100Rnd_65_Mk328_T_Green",
            "FA_100Rnd_65_Mk328_T_Green",
            "FA_100Rnd_65_Mk328_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "FA_100Rnd_65_Mk328_T_Green",
            "FA_100Rnd_65_Mk328_T_Green",
            "FA_100Rnd_65_Mk328_T_Green",
            "FA_100Rnd_65_Mk328_T_Green",
            "FA_100Rnd_65_Mk328_T_Green",
            "FA_100Rnd_65_Mk328_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Bandanna_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Bandanna_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_Patrol_Soldier_AT_F: B_Patrol_Soldier_AT_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "Titan_AP",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "Titan_AP",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_Patrol_Soldier_A_F: B_Patrol_Soldier_A_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        linkedItems[] = {
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_Patrol_Soldier_MG_F: B_Patrol_Soldier_MG_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_200Rnd_65_Mk328_T_Green",
            "FA_200Rnd_65_Mk328_T_Green",
            "FA_200Rnd_65_Mk328_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "FA_200Rnd_65_Mk328_T_Green",
            "FA_200Rnd_65_Mk328_T_Green",
            "FA_200Rnd_65_Mk328_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Bandanna_oli",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Bandanna_oli",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_Patrol_Soldier_M_F: B_Patrol_Soldier_M_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Bandanna_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_Bandanna_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_Patrol_Soldier_TL_F: B_Patrol_Soldier_TL_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "HandGrenade",
            "HandGrenade",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "SmokeShell",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellBlue"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "HandGrenade",
            "HandGrenade",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "SmokeShell",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellBlue"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrierGL_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "B_UavTerminal",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrierGL_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "B_UavTerminal",
            "NVGoggles"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_Patrol_Soldier_UAV_F: B_Patrol_Soldier_UAV_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "FA_30Rnd_65_EPR_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "B_UavTerminal",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "B_UavTerminal",
            "NVGoggles"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_Protagonist_VR_F: B_Protagonist_VR_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        linkedItems[] = {
            "G_Goggles_VR"
        };
        respawnLinkedItems[] = {
            "G_Goggles_VR"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_RangeMaster_F: B_RangeMaster_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        linkedItems[] = {
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_SAM_System_01_F: B_SAM_System_01_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_SAM_System_02_F: B_SAM_System_02_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_SDV_01_F: B_SDV_01_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_Ship_Gun_01_F: B_Ship_Gun_01_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_Ship_MRLS_01_F: B_Ship_MRLS_01_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_Slingload_01_Ammo_F: B_Slingload_01_Ammo_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_Slingload_01_Cargo_F: B_Slingload_01_Cargo_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_Slingload_01_Fuel_F: B_Slingload_01_Fuel_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_Slingload_01_Medevac_F: B_Slingload_01_Medevac_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_Slingload_01_Repair_F: B_Slingload_01_Repair_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_Soldier_VR_F: B_Soldier_VR_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_T_Boat_Armed_01_minigun_F: B_T_Boat_Armed_01_minigun_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_T_Boat_Transport_01_F: B_T_Boat_Transport_01_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_T_Diver_Exp_F: B_T_Diver_Exp_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "20Rnd_556x45_Stanag_red",
            "20Rnd_556x45_Stanag_red",
            "20Rnd_556x45_Stanag_red",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "20Rnd_556x45_Stanag_red",
            "20Rnd_556x45_Stanag_red",
            "20Rnd_556x45_Stanag_red",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "G_B_Diving",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "G_B_Diving",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_T_Diver_F: B_T_Diver_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_T_Diver_TL_F: B_T_Diver_TL_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "20Rnd_556x45_Stanag_red",
            "20Rnd_556x45_Stanag_red",
            "20Rnd_556x45_Stanag_red",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "20Rnd_556x45_Stanag_red",
            "20Rnd_556x45_Stanag_red",
            "20Rnd_556x45_Stanag_red",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "G_B_Diving",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "G_B_Diving",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_T_Lifeboat: B_T_Lifeboat {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_T_UGV_01_medical_olive_F: B_T_UGV_01_medical_olive_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_T_UGV_01_olive_F: B_T_UGV_01_olive_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_T_UGV_01_rcws_olive_F: B_T_UGV_01_rcws_olive_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "FA_200Rnd_127_Mk258_T_Green",
                    "FA_200Rnd_127_Mk258_T_Green",
                    "64Rnd_40mm_G_belt",
                    "64Rnd_40mm_G_belt"
                };
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_T_ghillie_spotter_tna_F: B_T_ghillie_spotter_tna_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "APERSTripMine_Wire_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "Laserbatteries",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "APERSTripMine_Wire_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "Laserbatteries",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_tna_F"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_tna_F"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_T_ghillie_tna_F: B_T_ghillie_tna_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "APERSTripMine_Wire_Mag",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "APERSTripMine_Wire_Mag",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_tna_F"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_tna_F"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_UAV_01_backpack_F: B_UAV_01_backpack_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_UAV_02_CAS_F: B_UAV_02_CAS_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_UAV_06_backpack_F: B_UAV_06_backpack_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_UAV_06_medical_backpack_F: B_UAV_06_medical_backpack_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_UGV_02_Demining_backpack_F: B_UGV_02_Demining_backpack_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_UGV_02_Science_F: B_UGV_02_Science_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_UGV_02_Science_backpack_F: B_UGV_02_Science_backpack_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_AFV_Wheeled_01_cannon_F: B_W_AFV_Wheeled_01_cannon_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "FA_30Rnd_120mm_APFSDS_T_Green",
                    "FA_30Rnd_120mm_AMP_T_Green",
                    "FA_30Rnd_120mm_HEATMP_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "4Rnd_120mm_LG_cannon_missiles"
                };
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_AFV_Wheeled_01_up_cannon_F: B_W_AFV_Wheeled_01_up_cannon_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "FA_30Rnd_120mm_APFSDS_T_Green",
                    "FA_30Rnd_120mm_AMP_T_Green",
                    "FA_30Rnd_120mm_HEATMP_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "4Rnd_120mm_LG_cannon_missiles"
                };
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_APC_Tracked_01_AA_F: B_W_APC_Tracked_01_AA_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_APC_Tracked_01_CRV_F: B_W_APC_Tracked_01_CRV_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "FA_200Rnd_127_Mk258_T_Green",
                    "FA_200Rnd_127_Mk258_T_Green"
                };
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_APC_Tracked_01_rcws_F: B_W_APC_Tracked_01_rcws_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "64Rnd_40mm_G_belt",
                    "64Rnd_40mm_G_belt",
                    "64Rnd_40mm_AB_G_belt",
                    "64Rnd_40mm_AB_G_belt",
                    "FA_200Rnd_127_Mk258_T_Green",
                    "FA_200Rnd_127_Mk258_T_Green",
                    "FA_200Rnd_127_Mk258_T_Green",
                    "FA_200Rnd_127_Mk258_T_Green"
                };
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_APC_Wheeled_01_atgm_lxWS_v2: B_W_APC_Wheeled_01_atgm_lxWS_v2 {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "140Rnd_30mm_MP_shells_Tracer_Red",
                    "140Rnd_30mm_MP_shells_Tracer_Red",
                    "60Rnd_30mm_APFSDS_shells_Tracer_Red",
                    "60Rnd_30mm_APFSDS_shells_Tracer_Red",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "4Rnd_GAT_missiles_lxWS"
                };
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_APC_Wheeled_01_cannon_F: B_W_APC_Wheeled_01_cannon_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "60Rnd_40mm_GPR_Tracer_Red_shells",
                    "60Rnd_40mm_GPR_Tracer_Red_shells",
                    "60Rnd_40mm_GPR_Tracer_Red_shells",
                    "60Rnd_40mm_GPR_Tracer_Red_shells",
                    "40Rnd_40mm_APFSDS_Tracer_Red_shells",
                    "40Rnd_40mm_APFSDS_Tracer_Red_shells",
                    "40Rnd_40mm_APFSDS_Tracer_Red_shells",
                    "40Rnd_40mm_APFSDS_Tracer_Red_shells",
                    "FA_200Rnd_762_M80A2_HV_T_Green",
                    "FA_200Rnd_762_M80A2_HV_T_Green",
                    "FA_200Rnd_762_M80A2_HV_T_Green",
                    "FA_200Rnd_762_M80A2_HV_T_Green",
                    "FA_200Rnd_762_M80A2_HV_T_Green",
                    "FA_200Rnd_762_M80A2_HV_T_Green",
                    "FA_200Rnd_762_M80A2_HV_T_Green",
                    "FA_200Rnd_762_M80A2_HV_T_Green"
                };
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_APC_Wheeled_01_cannon_v2_F: B_W_APC_Wheeled_01_cannon_v2_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "140Rnd_30mm_MP_shells_Tracer_Red",
                    "140Rnd_30mm_MP_shells_Tracer_Red",
                    "60Rnd_30mm_APFSDS_shells_Tracer_Red",
                    "60Rnd_30mm_APFSDS_shells_Tracer_Red",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green"
                };
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_APC_Wheeled_01_medical_F: B_W_APC_Wheeled_01_medical_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Engineer_F: B_W_Engineer_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_Kitbag_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_GMG_01_A_F: B_W_GMG_01_A_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_GMG_01_F: B_W_GMG_01_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_GMG_01_high_F: B_W_GMG_01_high_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_HMG_01_A_F: B_W_HMG_01_A_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_HMG_01_F: B_W_HMG_01_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_HMG_01_high_F: B_W_HMG_01_high_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_HMG_02_F: B_W_HMG_02_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_HMG_02_high_F: B_W_HMG_02_high_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_HeavyGunner_F: B_W_HeavyGunner_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_130Rnd_338_Mk372_T_Green",
            "FA_130Rnd_338_Mk372_T_Green",
            "FA_130Rnd_338_Mk372_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_130Rnd_338_Mk372_T_Green",
            "FA_130Rnd_338_Mk372_T_Green",
            "FA_130Rnd_338_Mk372_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Heli_Attack_01_dynamicLoadout_F: B_W_Heli_Attack_01_dynamicLoadout_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Heli_Light_01_dynamicLoadout_F: B_W_Heli_Light_01_dynamicLoadout_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Heli_Transport_01_F: B_W_Heli_Transport_01_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Heli_Transport_01_medevac_F: B_W_Heli_Transport_01_medevac_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Heli_Transport_03_F: B_W_Heli_Transport_03_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Heli_Transport_03_unarmed_F: B_W_Heli_Transport_03_unarmed_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Heli_light_01_F: B_W_Heli_light_01_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_LSV_01_AT_F: B_W_LSV_01_AT_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_LSV_01_armed_F: B_W_LSV_01_armed_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_LSV_01_light_F: B_W_LSV_01_light_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_LSV_01_unarmed_F: B_W_LSV_01_unarmed_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_MBT_01_TUSK_F: B_W_MBT_01_TUSK_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "FA_30Rnd_120mm_APFSDS_T_Green",
                    "FA_30Rnd_120mm_AMP_T_Green",
                    "FA_30Rnd_120mm_HEATMP_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "4Rnd_120mm_LG_cannon_missiles"
                };
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        magazines[] = {
                            "FA_200Rnd_127_Mk258_T_Green",
                            "FA_200Rnd_127_Mk258_T_Green",
                            "SmokeLauncherMag",
                            "Laserbatteries"
                        };
                    };
                };
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_MBT_01_arty_F: B_W_MBT_01_arty_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "FA_30Rnd_120mm_APFSDS_T_Green",
                    "FA_30Rnd_120mm_AMP_T_Green",
                    "FA_30Rnd_120mm_HEATMP_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "4Rnd_120mm_LG_cannon_missiles"
                };
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        magazines[] = {
                            "64Rnd_40mm_G_belt",
                            "FA_200Rnd_127_Mk258_T_Green",
                            "FA_200Rnd_127_Mk258_T_Green",
                            "SmokeLauncherMag"
                        };
                    };
                };
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_MBT_01_cannon_F: B_W_MBT_01_cannon_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "FA_30Rnd_120mm_APFSDS_T_Green",
                    "FA_30Rnd_120mm_AMP_T_Green",
                    "FA_30Rnd_120mm_HEATMP_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "FA_200Rnd_338_Mk372_T_Green",
                    "4Rnd_120mm_LG_cannon_missiles"
                };
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_MBT_01_mlrs_F: B_W_MBT_01_mlrs_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "FA_12Rnd_230mm_gmlrsu_B"
                };
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_MRAP_01_F: B_W_MRAP_01_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_MRAP_01_gmg_F: B_W_MRAP_01_gmg_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_MRAP_01_hmg_F: B_W_MRAP_01_hmg_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "FA_200Rnd_127_Mk258_T_Green",
                    "FA_200Rnd_127_Mk258_T_Green"
                };
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Medic_F: B_W_Medic_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellRed",
            "SmokeShellBlue",
            "SmokeShellOrange"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellRed",
            "SmokeShellBlue",
            "SmokeShellOrange"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Mortar_01_F: B_W_Mortar_01_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Officer_F: B_W_Officer_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "11Rnd_45ACP_Mag",
            "11Rnd_45ACP_Mag",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Plane_CAS_01_dynamicLoadout_F: B_W_Plane_CAS_01_dynamicLoadout_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Plane_Fighter_01_F: B_W_Plane_Fighter_01_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Plane_Fighter_01_Stealth_F: B_W_Plane_Fighter_01_Stealth_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Plane_Fighter_05_F: B_W_Plane_Fighter_05_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Plane_Fighter_05_Stealth_F: B_W_Plane_Fighter_05_Stealth_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Quadbike_01_F: B_W_Quadbike_01_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Radar_System_01_F: B_W_Radar_System_01_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_RadioOperator_F: B_W_RadioOperator_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_B_RadioBag_01_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Recon_AR_F: B_W_Recon_AR_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Recon_CQ_F: B_W_Recon_CQ_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Recon_Exp_F: B_W_Recon_Exp_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "APERSMine_Range_Mag",
            "APERSMine_Range_Mag",
            "APERSMine_Range_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "APERSMine_Range_Mag",
            "APERSMine_Range_Mag",
            "APERSMine_Range_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Recon_F: B_W_Recon_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Recon_GL_F: B_W_Recon_GL_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green",
            "1Rnd_Smoke_Grenade_shell",
            "1Rnd_Smoke_Grenade_shell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green",
            "1Rnd_Smoke_Grenade_shell",
            "1Rnd_Smoke_Grenade_shell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Recon_JTAC_F: B_W_Recon_JTAC_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "Laserbatteries",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "Laserbatteries",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_B_RadioBag_01_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Recon_LAT_F: B_W_Recon_LAT_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "NLAW_F",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "NLAW_F",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Recon_MG_F: B_W_Recon_MG_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Recon_M_F: B_W_Recon_M_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Recon_Medic_F: B_W_Recon_Medic_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellRed",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellRed",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Recon_Sharpshooter_F: B_W_Recon_Sharpshooter_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Recon_TL_F: B_W_Recon_TL_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_SAM_System_03_F: B_W_SAM_System_03_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Sharpshooter_F: B_W_Sharpshooter_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "FA_20Rnd_762_M80A2_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Sniper_F: B_W_Sniper_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "APERSTripMine_Wire_Mag",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "APERSTripMine_Wire_Mag",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_AAA_F: B_W_Soldier_AAA_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_Carryall_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_AAR_F: B_W_Soldier_AAR_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_Kitbag_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_AAT_F: B_W_Soldier_AAT_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_Carryall_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_AA_F: B_W_Soldier_AA_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "FA_Titan_AA_MIM165_Sentry",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "FA_Titan_AA_MIM165_Sentry",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_Kitbag_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_AR_F: B_W_Soldier_AR_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_100Rnd_65_Mk328_Black_T_Green",
            "FA_100Rnd_65_Mk328_Black_T_Green",
            "FA_100Rnd_65_Mk328_Black_T_Green",
            "FA_100Rnd_65_Mk328_Black_T_Green",
            "FA_100Rnd_65_Mk328_Black_T_Green",
            "FA_100Rnd_65_Mk328_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_100Rnd_65_Mk328_Black_T_Green",
            "FA_100Rnd_65_Mk328_Black_T_Green",
            "FA_100Rnd_65_Mk328_Black_T_Green",
            "FA_100Rnd_65_Mk328_Black_T_Green",
            "FA_100Rnd_65_Mk328_Black_T_Green",
            "FA_100Rnd_65_Mk328_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_AT_F: B_W_Soldier_AT_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "FA_Titan_AT_BGM185_Broadsword",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "FA_Titan_AT_BGM185_Broadsword",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_Kitbag_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_A_F: B_W_Soldier_A_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_Carryall_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_CBRN_F: B_W_Soldier_CBRN_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ChemicalDetector_01_watch_F",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "G_AirPurifyingRespirator_01_F",
            "ItemMap",
            "ItemCompass",
            "ChemicalDetector_01_watch_F",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_CQ_F: B_W_Soldier_CQ_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_Exp_F: B_W_Soldier_Exp_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "APERSMine_Range_Mag",
            "APERSMine_Range_Mag",
            "APERSMine_Range_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "APERSMine_Range_Mag",
            "APERSMine_Range_Mag",
            "APERSMine_Range_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrierGL_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrierGL_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_Kitbag_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_F: B_W_Soldier_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_GL_F: B_W_Soldier_GL_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell",
            "1Rnd_Smoke_Grenade_shell",
            "1Rnd_Smoke_Grenade_shell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell",
            "1Rnd_Smoke_Grenade_shell",
            "1Rnd_Smoke_Grenade_shell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrierGL_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrierGL_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_LAT2_F: B_W_Soldier_LAT2_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MRAWS_HEAT_F",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MRAWS_HEAT_F",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_LAT_F: B_W_Soldier_LAT_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "NLAW_F",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "NLAW_F",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_Lite_F: B_W_Soldier_Lite_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "HandGrenade",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "HandGrenade",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Booniehat_Multicam_Woodland_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_MG_F: B_W_Soldier_MG_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier2_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_PG_F: B_W_Soldier_PG_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_Repair_F: B_W_Soldier_Repair_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_SL_F: B_W_Soldier_SL_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrierGL_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrierGL_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_TL_F: B_W_Soldier_TL_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "1Rnd_Smoke_Grenade_shell",
            "1Rnd_SmokeBlue_Grenade_shell",
            "1Rnd_SmokeGreen_Grenade_shell",
            "1Rnd_SmokeOrange_Grenade_shell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "FA_1Rnd_40mm_Mk380_NRP",
            "FA_1Rnd_40mm_Mk380_NRP",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue",
            "SmokeShellOrange",
            "1Rnd_Smoke_Grenade_shell",
            "1Rnd_SmokeBlue_Grenade_shell",
            "1Rnd_SmokeGreen_Grenade_shell",
            "1Rnd_SmokeOrange_Grenade_shell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrierGL_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrierGL_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_UAV_F: B_W_Soldier_UAV_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "B_UavTerminal",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "B_UavTerminal",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Soldier_unarmed_F: B_W_Soldier_unarmed_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Spotter_F: B_W_Spotter_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "APERSTripMine_Wire_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "Laserbatteries",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "APERSTripMine_Wire_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "Laserbatteries",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Static_AA_F: B_W_Static_AA_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Static_AT_F: B_W_Static_AT_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Static_Designator_01_F: B_W_Static_Designator_01_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Static_Designator_01_weapon_F: B_W_Static_Designator_01_weapon_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Support_AMG_F: B_W_Support_AMG_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Support_AMort_F: B_W_Support_AMort_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Support_GMG_F: B_W_Support_GMG_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Support_MG_F: B_W_Support_MG_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Support_Mort_F: B_W_Support_Mort_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Survivor_F: B_W_Survivor_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Truck_01_Repair_F: B_W_Truck_01_Repair_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Truck_01_ammo_F: B_W_Truck_01_ammo_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Truck_01_box_F: B_W_Truck_01_box_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Truck_01_cargo_F: B_W_Truck_01_cargo_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Truck_01_covered_F: B_W_Truck_01_covered_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Truck_01_flatbed_F: B_W_Truck_01_flatbed_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Truck_01_fuel_F: B_W_Truck_01_fuel_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Truck_01_medical_F: B_W_Truck_01_medical_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Truck_01_mover_F: B_W_Truck_01_mover_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_Truck_01_transport_F: B_W_Truck_01_transport_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        crew = "ghost_faction_b_us_mxc_woodland_B_W_Soldier_F";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_UAV_01_F: B_W_UAV_01_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_UAV_02_dynamicLoadout_F: B_W_UAV_02_dynamicLoadout_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_UAV_03_dynamicLoadout_F: B_W_UAV_03_dynamicLoadout_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_UAV_05_F: B_W_UAV_05_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_UAV_06_F: B_W_UAV_06_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_UAV_06_medical_F: B_W_UAV_06_medical_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_UGV_01_F: B_W_UGV_01_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_UGV_01_medical_F: B_W_UGV_01_medical_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_UGV_01_rcws_F: B_W_UGV_01_rcws_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {
                    "FA_200Rnd_127_Mk258_T_Green",
                    "FA_200Rnd_127_Mk258_T_Green",
                    "64Rnd_40mm_G_belt",
                    "64Rnd_40mm_G_belt"
                };
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_UGV_02_Demining_F: B_W_UGV_02_Demining_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_VTOL_01_armed_F: B_W_VTOL_01_armed_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_VTOL_01_infantry_F: B_W_VTOL_01_infantry_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_VTOL_01_vehicle_F: B_W_VTOL_01_vehicle_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_W_ghillie_spotter_wdl_F: B_W_ghillie_spotter_wdl_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "APERSTripMine_Wire_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "Laserbatteries",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "FA_30Rnd_556_Mk327_HV_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "APERSTripMine_Wire_Mag",
            "MiniGrenade",
            "MiniGrenade",
            "B_IR_Grenade",
            "B_IR_Grenade",
            "Laserbatteries",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_ghillie_wdl_F: B_W_ghillie_wdl_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "APERSTripMine_Wire_Mag",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "APERSTripMine_Wire_Mag",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_soldier_M_F: B_W_soldier_M_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_soldier_UAV_02_LxWS_F: B_W_soldier_UAV_02_LxWS_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "B_UavTerminal",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "B_UavTerminal",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_soldier_UAV_06_F: B_W_soldier_UAV_06_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "B_UavTerminal",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "B_UavTerminal",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_soldier_UAV_06_medical_F: B_W_soldier_UAV_06_medical_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "B_UavTerminal",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "B_UavTerminal",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_soldier_UGV_02_Demining_F: B_W_soldier_UGV_02_Demining_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "B_UavTerminal",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "B_UavTerminal",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_soldier_UGV_02_Science_F: B_W_soldier_UGV_02_Science_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "B_UavTerminal",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "B_UavTerminal",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_AssaultPack_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_W_soldier_mine_F: B_W_soldier_mine_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "APERSMine_Range_Mag",
            "APERSMine_Range_Mag",
            "APERSMine_Range_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "FA_30Rnd_65_EPR_Black_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "APERSMine_Range_Mag",
            "APERSMine_Range_Mag",
            "APERSMine_Range_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrierGL_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrierGL_mcam_wdl",
            "ghost_headware_H_Helmet_FASTMT_Cover_wdl_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles_INDEP"
        };
        backpack = "ghost_backpack_Carryall_Multicam_Woodland";
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_ghillie_ard_F: B_ghillie_ard_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "APERSTripMine_Wire_Mag",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "APERSTripMine_Wire_Mag",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_ghillie_lsh_F: B_ghillie_lsh_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "APERSTripMine_Wire_Mag",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "APERSTripMine_Wire_Mag",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_ghillie_sard_F: B_ghillie_sard_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        magazines[] = {
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "APERSTripMine_Wire_Mag",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "FA_10Rnd_408_Mk240_T_Green",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "APERSTripMine_Wire_Mag",
            "SmokeShell",
            "SmokeShell",
            "Chemlight_green",
            "Chemlight_green"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_ghillie_spotter_ard_F: B_ghillie_spotter_ard_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_ghillie_spotter_lsh_F: B_ghillie_spotter_lsh_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_B_ghillie_spotter_sard_F: B_ghillie_spotter_sard_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mcam_wdl",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam_wdl_f';";
            };
        };
    };
    class ghost_faction_b_us_mxc_woodland_CamoNet_sand_F: CamoNet_sand_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_CamoNet_sand_big_F: CamoNet_sand_big_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_CamoNet_sand_open_F: CamoNet_sand_open_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_Item_B_UavTerminal: Item_B_UavTerminal {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_Weapon_launch_B_Titan_F: Weapon_launch_B_Titan_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_Weapon_launch_launch_B_Titan_short_F: Weapon_launch_launch_B_Titan_short_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    // ==== mod drone units fielded by every US faction ====
    class ghost_faction_b_us_mxc_woodland_B_T_UAV_03_dynamicLoadout_F: B_T_UAV_03_dynamicLoadout_F {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_UAV_RC40_HE_RF: B_UAV_RC40_HE_RF {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_B_UAV_RC40_SENSOR_RF: B_UAV_RC40_SENSOR_RF {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_GX_B_HONEYBADGER_UGV_AT_GREEN: GX_B_HONEYBADGER_UGV_AT_GREEN {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_GX_B_HUNTER_SP_UAV: GX_B_HUNTER_SP_UAV {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_GX_B_MAGURA_V5_USV: GX_B_MAGURA_V5_USV {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_GX_B_MQ8B_UAV_ARMED: GX_B_MQ8B_UAV_ARMED {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_GX_B_MQ8B_UAV_RECON: GX_B_MQ8B_UAV_RECON {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_GX_B_MQ8B_UAV_RECON_SEATED: GX_B_MQ8B_UAV_RECON_SEATED {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_GX_B_THEMIS_UGV_CARGO: GX_B_THEMIS_UGV_CARGO {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_GX_B_THEMIS_UGV_DEFNDER_MEDIUM: GX_B_THEMIS_UGV_DEFNDER_MEDIUM {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_GX_B_THEMIS_UGV_HUNTER_LAUNCHER: GX_B_THEMIS_UGV_HUNTER_LAUNCHER {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_qav_ripsaw_Mk44: qav_ripsaw_Mk44 {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_qav_ripsaw_c: qav_ripsaw_c {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_rksla3_aeroshark_blufor: rksla3_aeroshark_blufor {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_qav_abramsx_templar: qav_abramsx_templar {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_qav_abramsx_tusk: qav_abramsx_tusk {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_VVE_APC_Wheeled_01_apc_QAV: VVE_APC_Wheeled_01_apc_QAV {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_VVE_APC_Wheeled_01_mgs_QAV: VVE_APC_Wheeled_01_mgs_QAV {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_VVE_APC_Wheeled_01_mgs_up_QAV: VVE_APC_Wheeled_01_mgs_up_QAV {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
    class ghost_faction_b_us_mxc_woodland_VVE_APC_Wheeled_01_shorad_QAV: VVE_APC_Wheeled_01_shorad_QAV {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "ghost_b_us_mxc_woodland";
    };
};
