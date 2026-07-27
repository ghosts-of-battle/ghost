#define US_HDR scope = 2; scopeCurator = 2; side = 1; faction = "ghost_b_us_spar_arid"

class CfgVehicles {
    class B_UAV_RC40_HE_RF;
    class B_UAV_RC40_SENSOR_RF;
    class GX_B_HONEYBADGER_UGV_AT_GREEN;
    class GX_B_HUNTER_SP_UAV;
    class qav_ripsaw_c;
    class qav_ripsaw_Mk44;
    class GX_B_THEMIS_UGV_HUNTER_LAUNCHER;
    class GX_B_THEMIS_UGV_DEFNDER_MEDIUM;
    class GX_B_THEMIS_UGV_CARGO;
    class GX_B_MAGURA_V5_USV;
    class GX_B_MQ8B_UAV_RECON_SEATED;
    class GX_B_MQ8B_UAV_RECON;
    class GX_B_MQ8B_UAV_ARMED;
    class rksla3_aeroshark_blufor;
    class B_T_UAV_03_dynamicLoadout_F;
    class B_Boat_Armed_01_minigun_F;
    class B_Boat_Transport_01_F;
    class B_Heli_Attack_01_dynamicLoadout_F;
    class B_Heli_Light_01_dynamicLoadout_F;
    class B_Heli_Transport_01_F;
    class B_Heli_Transport_03_F;
    class B_Heli_Transport_03_unarmed_F;
    class B_Helipilot_F;
    class B_MRAP_01_F;
    class B_MRAP_01_gmg_F;
    class B_MRAP_01_hmg_F;
    class B_Pilot_F;
    class B_Plane_CAS_01_dynamicLoadout_F;
    class B_Soldier_A_F;
    class B_Soldier_F;
    class B_Soldier_GL_F;
    class B_Soldier_SL_F;
    class B_Soldier_TL_F;
    class B_Soldier_lite_F;
    class B_Truck_01_Repair_F;
    class B_Truck_01_ammo_F;
    class B_Truck_01_box_F;
    class B_Truck_01_covered_F;
    class B_Truck_01_fuel_F;
    class B_Truck_01_medical_F;
    class B_Truck_01_transport_F;
    class B_UGV_01_F;
    class B_UGV_01_rcws_F;
    class B_crew_F;
    class B_engineer_F;
    class B_helicrew_F;
    class B_medic_F;
    class B_officer_F;
    class B_recon_F;
    class B_recon_JTAC_F;
    class B_recon_LAT_F;
    class B_recon_M_F;
    class B_recon_TL_F;
    class B_recon_exp_F;
    class B_recon_medic_F;
    class B_sniper_F;
    class B_soldier_AA_F;
    class B_soldier_AR_F;
    class B_soldier_AT_F;
    class B_soldier_LAT_F;
    class B_soldier_M_F;
    class B_soldier_UAV_F;
    class B_soldier_exp_F;
    class B_soldier_repair_F;
    class B_spotter_F;
    class VVE_APC_Wheeled_01_apc_QAV;
    class VVE_APC_Wheeled_01_mgs_QAV;
    class VVE_APC_Wheeled_01_mgs_up_QAV;
    class VVE_APC_Wheeled_01_shorad_QAV;
    class qav_abramsx_templar;
    class qav_abramsx_tusk;
    class B_APC_Wheeled_01_cannon_F;
    class B_MBT_01_arty_F;
    class B_MBT_01_mlrs_F;

    class ghost_faction_b_us_spar_arid_Soldier_F: B_Soldier_F {
        US_HDR;
        displayName = "Rifleman";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_Soldier_lite_F: B_Soldier_lite_F {
        US_HDR;
        displayName = "Rifleman (Lite)";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "HandGrenade",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "HandGrenade",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_Soldier_TL_F: B_Soldier_TL_F {
        US_HDR;
        displayName = "Team Leader";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_Soldier_SL_F: B_Soldier_SL_F {
        US_HDR;
        displayName = "Squad Leader";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_Soldier_GL_F: B_Soldier_GL_F {
        US_HDR;
        displayName = "Grenadier";
        weapons[] = {
            "arifle_SPAR_01_GL_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_GL_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_Soldier_AR_F: B_soldier_AR_F {
        US_HDR;
        displayName = "Autorifleman";
        weapons[] = {
            "arifle_SPAR_03_blk_MOS_Pointer_Bipod_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_03_blk_MOS_Pointer_Bipod_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell"
        };
        backpack = "ghost_backpack_Kitbag_Multicam";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam'; _u addItemToVest 'FA_ACE_20Rnd_762x51_M993_AP'; _u addItemToVest 'FA_ACE_20Rnd_762x51_M993_AP';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_Soldier_A_F: B_Soldier_A_F {
        US_HDR;
        displayName = "Rifleman (AA)";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "Titan_AA",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "Titan_AA",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell"
        };
        backpack = "ghost_backpack_Kitbag_Multicam";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_Medic_F: B_medic_F {
        US_HDR;
        displayName = "Combat Life Saver";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell",
            "SmokeShellRed"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell",
            "SmokeShellRed"
        };
        backpack = "Dust_AssaultpackE_Medic_OMCPA";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_Soldier_M_F: B_soldier_M_F {
        US_HDR;
        displayName = "Marksman";
        weapons[] = {
            "arifle_SPAR_03_blk_MOS_Pointer_Bipod_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_03_blk_MOS_Pointer_Bipod_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam'; _u addItemToVest 'FA_ACE_20Rnd_762x51_M993_AP'; _u addItemToVest 'FA_ACE_20Rnd_762x51_M993_AP';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_Soldier_LAT_F: B_soldier_LAT_F {
        US_HDR;
        displayName = "Rifleman (AT)";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "NLAW_F",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "NLAW_F",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_Soldier_AT_F: B_soldier_AT_F {
        US_HDR;
        displayName = "Anti-Tank Specialist";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "Titan_AT",
            "Titan_AT",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "Titan_AT",
            "Titan_AT",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell"
        };
        backpack = "ghost_backpack_Kitbag_Multicam";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_Soldier_AA_F: B_soldier_AA_F {
        US_HDR;
        displayName = "Anti-Air Specialist";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "Titan_AA",
            "Titan_AA",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "Titan_AA",
            "Titan_AA",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell"
        };
        backpack = "ghost_backpack_Kitbag_Multicam";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_Engineer_F: B_engineer_F {
        US_HDR;
        displayName = "Engineer";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        backpack = "Dust_Bergen_OMCPA";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_Soldier_Exp_F: B_soldier_exp_F {
        US_HDR;
        displayName = "Explosive Specialist";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "DemoCharge_Remote_Mag",
            "DemoCharge_Remote_Mag",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "DemoCharge_Remote_Mag",
            "DemoCharge_Remote_Mag",
            "SmokeShell",
            "SmokeShell"
        };
        backpack = "Dust_Bergen_OMCPA";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_soldier_repair_F: B_soldier_repair_F {
        US_HDR;
        displayName = "Repair Specialist";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        backpack = "Dust_Bergen_OMCPA";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_RadioOperator_F: B_Soldier_F {
        US_HDR;
        displayName = "Radio Operator";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        backpack = "Dust_RadioBag_OMCPA";
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_soldier_UAV_F: B_soldier_UAV_F {
        US_HDR;
        displayName = "UAV Operator";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "ghost_headware_H_Helmet_FASTMT_Cover_Multicam_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_officer_F: B_officer_F {
        US_HDR;
        displayName = "Officer";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell"
        };
        linkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "Dust_H_PC_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "ghost_vests_V_PlateCarrier1_mtp",
            "Dust_H_PC_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_Crew_F: B_crew_F {
        US_HDR;
        displayName = "Crewman";
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'U_B_CombatUniform_mcam'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_helipilot_F: B_Helipilot_F {
        US_HDR;
        displayName = "Helicopter Pilot";
        magazines[] = {
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'Dust_U_NOMEX_US'; _u addItemToVest '16Rnd_9x21_Mag'; _u addItemToVest '16Rnd_9x21_Mag';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_helicrew_F: B_helicrew_F {
        US_HDR;
        displayName = "Helicopter Crew";
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'Dust_U_NOMEX_US'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_Pilot_F: B_Pilot_F {
        US_HDR;
        displayName = "Fighter Pilot";
        magazines[] = {
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag"
        };
        respawnMagazines[] = {
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'Dust_U_NOMEX_US'; _u addItemToVest '16Rnd_9x21_Mag'; _u addItemToVest '16Rnd_9x21_Mag';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_recon_F: B_recon_F {
        US_HDR;
        displayName = "Recon Rifleman";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "SmokeShell",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "SmokeShell",
            "Chemlight_green"
        };
        linkedItems[] = {
            "Dust_V_RangeBelt_OMCPA",
            "Dust_H_BH_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "Dust_V_RangeBelt_OMCPA",
            "Dust_H_BH_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'Dust_U_CRYE_OMCPA'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_recon_TL_F: B_recon_TL_F {
        US_HDR;
        displayName = "Recon Team Leader";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "Chemlight_green"
        };
        linkedItems[] = {
            "Dust_V_RangeBelt_OMCPA",
            "Dust_H_BH_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "Dust_V_RangeBelt_OMCPA",
            "Dust_H_BH_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'Dust_U_CRYE_OMCPA'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_recon_M_F: B_recon_M_F {
        US_HDR;
        displayName = "Recon Marksman";
        weapons[] = {
            "arifle_SPAR_03_blk_MOS_Pointer_Bipod_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_03_blk_MOS_Pointer_Bipod_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "SmokeShell",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "FA_ACE_20Rnd_762x51_M993_AP",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "SmokeShell",
            "Chemlight_green"
        };
        linkedItems[] = {
            "Dust_V_RangeBelt_OMCPA",
            "Dust_H_BH_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "Dust_V_RangeBelt_OMCPA",
            "Dust_H_BH_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'Dust_U_CRYE_OMCPA'; _u addItemToVest 'FA_ACE_20Rnd_762x51_M993_AP'; _u addItemToVest 'FA_ACE_20Rnd_762x51_M993_AP';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_recon_LAT_F: B_recon_LAT_F {
        US_HDR;
        displayName = "Recon Rifleman (AT)";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "NLAW_F",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "SmokeShell",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "NLAW_F",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "SmokeShell",
            "Chemlight_green"
        };
        linkedItems[] = {
            "Dust_V_RangeBelt_OMCPA",
            "Dust_H_BH_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "Dust_V_RangeBelt_OMCPA",
            "Dust_H_BH_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'Dust_U_CRYE_OMCPA'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_recon_exp_F: B_recon_exp_F {
        US_HDR;
        displayName = "Recon Explosive Spec.";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "APERSMine_Range_Mag",
            "SmokeShell",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "APERSMine_Range_Mag",
            "SmokeShell",
            "Chemlight_green"
        };
        linkedItems[] = {
            "Dust_V_RangeBelt_OMCPA",
            "Dust_H_BH_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "Dust_V_RangeBelt_OMCPA",
            "Dust_H_BH_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'Dust_U_CRYE_OMCPA'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_recon_medic_F: B_recon_medic_F {
        US_HDR;
        displayName = "Recon Medic";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellRed",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "SmokeShell",
            "SmokeShellRed",
            "Chemlight_green"
        };
        backpack = "Dust_AssaultpackE_Medic_OMCPA";
        linkedItems[] = {
            "Dust_V_RangeBelt_OMCPA",
            "Dust_H_BH_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "Dust_V_RangeBelt_OMCPA",
            "Dust_H_BH_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'Dust_U_CRYE_OMCPA'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_recon_JTAC_F: B_recon_JTAC_F {
        US_HDR;
        displayName = "Recon JTAC";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "B_IR_Grenade",
            "Laserbatteries",
            "SmokeShell",
            "SmokeShellGreen",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "B_IR_Grenade",
            "Laserbatteries",
            "SmokeShell",
            "SmokeShellGreen",
            "Chemlight_green"
        };
        backpack = "Dust_RadioBag_OMCPA";
        linkedItems[] = {
            "Dust_V_RangeBelt_OMCPA",
            "Dust_H_BH_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "Dust_V_RangeBelt_OMCPA",
            "Dust_H_BH_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'Dust_U_CRYE_OMCPA'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_sniper_F: B_sniper_F {
        US_HDR;
        displayName = "Sniper";
        magazines[] = {
            "FA_10Rnd_408_Mk240_T_Red",
            "FA_10Rnd_408_Mk240_T_Red",
            "FA_10Rnd_408_Mk240_T_Red",
            "FA_10Rnd_408_Mk240_T_Red",
            "FA_10Rnd_408_Mk240_T_Red",
            "FA_10Rnd_408_Mk240_T_Red",
            "FA_10Rnd_408_Mk240_T_Red",
            "FA_10Rnd_408_Mk240_T_Red",
            "FA_10Rnd_408_Mk240_T_Red",
            "FA_10Rnd_408_Mk240_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_10Rnd_408_Mk240_T_Red",
            "FA_10Rnd_408_Mk240_T_Red",
            "FA_10Rnd_408_Mk240_T_Red",
            "FA_10Rnd_408_Mk240_T_Red",
            "FA_10Rnd_408_Mk240_T_Red",
            "FA_10Rnd_408_Mk240_T_Red",
            "FA_10Rnd_408_Mk240_T_Red",
            "FA_10Rnd_408_Mk240_T_Red",
            "FA_10Rnd_408_Mk240_T_Red",
            "FA_10Rnd_408_Mk240_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "SmokeShell",
            "Chemlight_green"
        };
        linkedItems[] = {
            "Dust_V_RangeBelt_OMCPA",
            "Dust_H_BH_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "Dust_V_RangeBelt_OMCPA",
            "Dust_H_BH_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'Dust_U_CRYE_OMCPA'; _u addItemToVest 'FA_10Rnd_408_Mk240_T_Red'; _u addItemToVest 'FA_10Rnd_408_Mk240_T_Red';";
            };
        };
    };
    class ghost_faction_b_us_spar_arid_spotter_F: B_spotter_F {
        US_HDR;
        displayName = "Spotter";
        weapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SPAR_01_blk_ERCO_Pointer_F",
            "hgun_P07_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "SmokeShell",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
            "16Rnd_9x21_Mag",
            "16Rnd_9x21_Mag",
            "MiniGrenade",
            "SmokeShell",
            "Chemlight_green"
        };
        linkedItems[] = {
            "Dust_V_RangeBelt_OMCPA",
            "Dust_H_BH_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        respawnLinkedItems[] = {
            "Dust_V_RangeBelt_OMCPA",
            "Dust_H_BH_OMCPA",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "NVGoggles"
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "params ['_u']; _u forceAddUniform 'Dust_U_CRYE_OMCPA'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red'; _u addItemToVest 'FA_30Rnd_556x45_AP_Stanag_RF_T_Red';";
            };
        };
    };
    // === Vehicles (faction crew; vanilla=FA turret loads, SPAR=QAV/VVE mod vehicles) ===
    class ghost_faction_b_us_spar_arid_MRAP_01_F: B_MRAP_01_F {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    class ghost_faction_b_us_spar_arid_MRAP_01_hmg_F: B_MRAP_01_hmg_F {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    class ghost_faction_b_us_spar_arid_MRAP_01_gmg_F: B_MRAP_01_gmg_F {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    class ghost_faction_b_us_spar_arid_Truck_01_transport_F: B_Truck_01_transport_F {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    class ghost_faction_b_us_spar_arid_Truck_01_covered_F: B_Truck_01_covered_F {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    class ghost_faction_b_us_spar_arid_Truck_01_box_F: B_Truck_01_box_F {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    class ghost_faction_b_us_spar_arid_Truck_01_ammo_F: B_Truck_01_ammo_F {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    class ghost_faction_b_us_spar_arid_Truck_01_fuel_F: B_Truck_01_fuel_F {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    class ghost_faction_b_us_spar_arid_Truck_01_medical_F: B_Truck_01_medical_F {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    class ghost_faction_b_us_spar_arid_Truck_01_Repair_F: B_Truck_01_Repair_F {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    class ghost_faction_b_us_spar_arid_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_cannon_F {
        US_HDR;
        crew = QGVAR(Crew_F);
        class Turrets {
            class MainTurret {
                magazines[] = {
                    "60Rnd_40mm_GPR_Tracer_Red_shells",
                    "60Rnd_40mm_GPR_Tracer_Red_shells",
                    "60Rnd_40mm_GPR_Tracer_Red_shells",
                    "60Rnd_40mm_GPR_Tracer_Red_shells",
                    "40Rnd_40mm_APFSDS_Tracer_Red_shells",
                    "40Rnd_40mm_APFSDS_Tracer_Red_shells",
                    "40Rnd_40mm_APFSDS_Tracer_Red_shells",
                    "40Rnd_40mm_APFSDS_Tracer_Red_shells",
                    "FA_200Rnd_762_M80A2_HV_T_Red",
                    "FA_200Rnd_762_M80A2_HV_T_Red",
                    "FA_200Rnd_762_M80A2_HV_T_Red",
                    "FA_200Rnd_762_M80A2_HV_T_Red",
                    "FA_200Rnd_762_M80A2_HV_T_Red",
                    "FA_200Rnd_762_M80A2_HV_T_Red",
                    "FA_200Rnd_762_M80A2_HV_T_Red",
                    "FA_200Rnd_762_M80A2_HV_T_Red"
                };
            };
        };
    };
    class ghost_faction_b_us_spar_arid_APC_Tracked_01_rcws_F: VVE_APC_Wheeled_01_mgs_QAV {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    class ghost_faction_b_us_spar_arid_APC_Tracked_01_AA_F: VVE_APC_Wheeled_01_shorad_QAV {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    class ghost_faction_b_us_spar_arid_APC_Tracked_01_CRV_F: VVE_APC_Wheeled_01_mgs_up_QAV {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    class ghost_faction_b_us_spar_arid_MBT_01_cannon_F: qav_abramsx_templar {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    class ghost_faction_b_us_spar_arid_MBT_01_TUSK_F: qav_abramsx_tusk {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    class ghost_faction_b_us_spar_arid_MBT_01_arty_F: B_MBT_01_arty_F {
        US_HDR;
        crew = QGVAR(Crew_F);
        class Turrets {
            class MainTurret {
                magazines[] = {
                    "FA_32Rnd_155mm_heer_B",
                    "FA_4Rnd_155mm_apmi_B",
                    "FA_6Rnd_155mm_apmine_B",
                    "FA_2Rnd_155mm_sfm_B",
                    "FA_6Rnd_155mm_smk_B",
                    "FA_4Rnd_155mm_lgm_B",
                    "FA_6Rnd_155mm_atmine_B"
                };
                class Turrets {
                    class CommanderOptics {
                        magazines[] = {
                            "96Rnd_40mm_G_belt",
                            "FA_200Rnd_127_Mk258_T_Red",
                            "FA_200Rnd_127_Mk258_T_Red",
                            "SmokeLauncherMag"
                        };
                    };
                };
            };
        };
    };
    class ghost_faction_b_us_spar_arid_MBT_01_mlrs_F: B_MBT_01_mlrs_F {
        US_HDR;
        crew = QGVAR(Crew_F);
        class Turrets {
            class MainTurret {
                magazines[] = {"FA_12Rnd_230mm_gmlrsu_B"};
            };
        };
    };
    class ghost_faction_b_us_spar_arid_UGV_01_F: B_UGV_01_F {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    class ghost_faction_b_us_spar_arid_UGV_01_rcws_F: B_UGV_01_rcws_F {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    class ghost_faction_b_us_spar_arid_Heli_Light_01_dynamicLoadout_F: B_Heli_Light_01_dynamicLoadout_F {
        US_HDR;
        crew = QGVAR(helicrew_F);
    };
    class ghost_faction_b_us_spar_arid_Heli_Transport_01_F: B_Heli_Transport_01_F {
        US_HDR;
        crew = QGVAR(helicrew_F);
    };
    class ghost_faction_b_us_spar_arid_Heli_Attack_01_dynamicLoadout_F: B_Heli_Attack_01_dynamicLoadout_F {
        US_HDR;
        crew = QGVAR(helicrew_F);
    };
    class ghost_faction_b_us_spar_arid_Heli_Transport_03_F: B_Heli_Transport_03_F {
        US_HDR;
        crew = QGVAR(helicrew_F);
    };
    class ghost_faction_b_us_spar_arid_Heli_Transport_03_unarmed_F: B_Heli_Transport_03_unarmed_F {
        US_HDR;
        crew = QGVAR(helicrew_F);
    };
    class ghost_faction_b_us_spar_arid_Plane_CAS_01_dynamicLoadout_F: B_Plane_CAS_01_dynamicLoadout_F {
        US_HDR;
        crew = QGVAR(helicrew_F);
    };
    class ghost_faction_b_us_spar_arid_Boat_Transport_01_F: B_Boat_Transport_01_F {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    class ghost_faction_b_us_spar_arid_Boat_Armed_01_minigun_F: B_Boat_Armed_01_minigun_F {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    class ghost_faction_b_us_spar_arid_APC_Wheeled_02_apc_F: VVE_APC_Wheeled_01_apc_QAV {
        US_HDR;
        crew = QGVAR(Crew_F);
    };
    // ==== BLUFOR drone units ported into this faction (unit-list drones) ====
    class ghost_faction_b_us_spar_arid_B_UAV_RC40_HE_RF: B_UAV_RC40_HE_RF {
        US_HDR;
    };
    class ghost_faction_b_us_spar_arid_B_UAV_RC40_SENSOR_RF: B_UAV_RC40_SENSOR_RF {
        US_HDR;
    };
    class ghost_faction_b_us_spar_arid_GX_B_HONEYBADGER_UGV_AT_GREEN: GX_B_HONEYBADGER_UGV_AT_GREEN {
        US_HDR;
    };
    class ghost_faction_b_us_spar_arid_GX_B_HUNTER_SP_UAV: GX_B_HUNTER_SP_UAV {
        US_HDR;
    };
    class ghost_faction_b_us_spar_arid_qav_ripsaw_c: qav_ripsaw_c {
        US_HDR;
    };
    class ghost_faction_b_us_spar_arid_qav_ripsaw_Mk44: qav_ripsaw_Mk44 {
        US_HDR;
    };
    class ghost_faction_b_us_spar_arid_GX_B_THEMIS_UGV_HUNTER_LAUNCHER: GX_B_THEMIS_UGV_HUNTER_LAUNCHER {
        US_HDR;
    };
    class ghost_faction_b_us_spar_arid_GX_B_THEMIS_UGV_DEFNDER_MEDIUM: GX_B_THEMIS_UGV_DEFNDER_MEDIUM {
        US_HDR;
    };
    class ghost_faction_b_us_spar_arid_GX_B_THEMIS_UGV_CARGO: GX_B_THEMIS_UGV_CARGO {
        US_HDR;
    };
    class ghost_faction_b_us_spar_arid_GX_B_MAGURA_V5_USV: GX_B_MAGURA_V5_USV {
        US_HDR;
    };
    class ghost_faction_b_us_spar_arid_GX_B_MQ8B_UAV_RECON_SEATED: GX_B_MQ8B_UAV_RECON_SEATED {
        US_HDR;
    };
    class ghost_faction_b_us_spar_arid_GX_B_MQ8B_UAV_RECON: GX_B_MQ8B_UAV_RECON {
        US_HDR;
    };
    class ghost_faction_b_us_spar_arid_GX_B_MQ8B_UAV_ARMED: GX_B_MQ8B_UAV_ARMED {
        US_HDR;
    };
    class ghost_faction_b_us_spar_arid_rksla3_aeroshark_blufor: rksla3_aeroshark_blufor {
        US_HDR;
    };
    class ghost_faction_b_us_spar_arid_B_T_UAV_03_dynamicLoadout_F: B_T_UAV_03_dynamicLoadout_F {
        US_HDR;
    };
};
