class CfgVehicles {
    class B_T_Boat_Armed_01_minigun_F;
    class E22_B_FDF_APC_Wheeled_01_cannon_ATGM_F;
    class E22_B_FDF_APC_Wheeled_01_command_F;
    class E22_B_FDF_APC_Wheeled_01_mortar_F;
    class E22_B_FDF_MRAP_01_AT_F;
    class E22_B_FDF_MRAP_01_FSV_F;
    class B_Heli_EC_04_military_RF;
    class B_Heli_EC_03_RF;
    class E22_B_FDF_MRAP_01_LAAD_F;
    class E22_B_FDF_W_SAM_system_01_F;
    class E22_B_FDF_W_AAA_System_01_F;
    class E22_B_FDF_W_Radar_system_01_F;
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
    class B_T_UGV_01_olive_F;
    class B_T_UGV_01_rcws_olive_F;
    class E22_FDF_Soldier_Base;
    class E22_B_FDF_Plane_Fighter_04_F;
    class E22_B_FDF_UAV_01_F;
    class E22_B_FDF_UAV_01_backpack_F;
    class E22_B_FDF_UAV_06_F;
    class E22_B_FDF_UAV_06_antimine_F;
    class E22_B_FDF_UAV_06_medical_F;
    class E22_B_FDF_UAV_06_backpack_F;
    class E22_B_FDF_UAV_06_antimine_backpack_F;
    class E22_B_FDF_UAV_06_medical_backpack_F;
    class E22_B_FDF_APC_Tracked_03_F;
    class B_T_APC_Tracked_01_AA_F;
    class E22_B_FDF_APC_Wheeled_01_cannon_F;
    class E22_B_FDF_APC_Wheeled_01_unarmed_F;
    class E22_B_FDF_MBT_03_cannon_F;
    class E22_B_FDF_Boat_Combat_01_unarmed_F;
    class E22_B_FDF_Boat_Combat_01_HMG_F;
    class E22_B_FDF_Boat_Combat_01_AT_F;
    class E22_B_FDF_Boat_Transport_01_F;
    class E22_B_FDF_Boat_Transport_02_F;
    class E22_B_FDF_LSV_01_unarmed_F;
    class E22_B_FDF_LSV_01_light_F;
    class E22_B_FDF_LSV_01_AT_F;
    class E22_B_FDF_MRAP_01_F;
    class E22_B_FDF_MRAP_01_hmg_F;
    class E22_B_FDF_MRAP_01_gmg_F;
    class E22_B_FDF_Pickup_01_F;
    class E22_B_FDF_Pickup_01_comms_F;
    class E22_B_FDF_Pickup_01_fuel_F;
    class E22_B_FDF_Pickup_01_MMG_F;
    class E22_B_FDF_Pickup_01_MRL_F;
    class E22_B_FDF_Pickup_01_AAT_F;
    class E22_B_FDF_Pickup_01_RCWS_F;
    class E22_B_FDF_Quadbike_01_F;
    class E22_B_FDF_Truck_01_transport_F;
    class E22_B_FDF_Truck_01_covered_F;
    class E22_B_FDF_Truck_01_mover_F;
    class E22_B_FDF_Truck_01_Box_F;
    class E22_B_FDF_Truck_01_Repair_F;
    class E22_B_FDF_Truck_01_ammo_F;
    class E22_B_FDF_Truck_01_fuel_F;
    class E22_B_FDF_Truck_01_medical_F;
    class E22_B_FDF_Truck_01_flatbed_F;
    class E22_B_FDF_Truck_01_cargo_F;
    class E22_B_FDF_UGV_02_Science_F;
    class E22_B_FDF_UGV_02_Demining_F;
    class E22_B_FDF_UGV_02_Science_backpack_F;
    class E22_B_FDF_UGV_02_Demining_backpack_F;
    class E22_B_FDF_HMG_02_F;
    class E22_B_FDF_HMG_02_high_F;
    class E22_B_FDF_HMG_02_support_F;
    class E22_B_FDF_HMG_02_support_high_F;
    class E22_B_FDF_HMG_02_weapon_F;
    class E22_B_FDF_HMG_02_high_weapon_F;
    class E22_B_FDF_Mortar_01_F;
    class E22_B_FDF_Mortar_01_support_F;
    class E22_B_FDF_Mortar_01_weapon_F;

    class ghost_b_fdf_Soldier_01_F: E22_FDF_Soldier_Base {
        side = 1;
        faction = "ghost_b_fdf";
        scope=0;
        weapons[]={};
        respawnweapons[]={};
        items[]={};
        respawnItems[]={};
        magazines[]={};
        respawnmagazines[]={};
        linkedItems[]={};
        respawnLinkedItems[]={};
        uniformClass="E22_FDF_U_CombatUniform_01_woodland_F";
        // Any FDF infantry that spawns without a backpack gets a random loitering-munition drone bag.
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "if (local (_this select 0) && {backpack (_this select 0) == ''}) then { (_this select 0) addBackpack (selectRandom ['B_KVN_AT_TI_Bag','B_KVN_AT_Bag','B_KVN_AP_TI_Bag','B_KVN_AP_Bag','B_Crocus_AT_TI_Bag','B_Crocus_AT_Bag','B_Crocus_AP_TI_Bag','B_Crocus_AP_Bag']); };";
            };
        };
    };
    class ghost_b_fdf_Soldier_02_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        uniformClass="E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F";
    };
    class ghost_b_fdf_Soldier_03_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        uniformClass="E22_FDF_U_CombatUniform_01_light_woodland_F";
    };
    class ghost_b_fdf_Soldier_04_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        uniformClass="E22_FDF_U_CombatUniform_01_light_woodland_shortsleeve_F";
    };
    class ghost_b_fdf_Soldier_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Rifleman";
        backpack="";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_AICO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_AICO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"SmokeShell",
			"SmokeShell",
			"HandGrenade",
			"HandGrenade"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"SmokeShell",
			"SmokeShell",
			"HandGrenade",
			"HandGrenade"
		};
    };
    class ghost_b_fdf_Soldier_Light_F: ghost_b_fdf_Soldier_02_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Rifleman (Light)";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_Cap_Military_woodland_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_Cap_Military_woodland_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_VFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_VFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
    };
    class ghost_b_fdf_Soldier_Unarmed_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        displayName="Rifleman (Unarmed)";
        backpack="";
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"Throw",
			"Put"
		};
        magazines[]={};
        respawnmagazines[]={};
    };
    class ghost_b_fdf_Soldier_GL_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Grenadier";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_heavy_woodland_F",
			"E22_FDF_H_HelmetHBK_ear_woodland_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_heavy_woodland_F",
			"E22_FDF_H_HelmetHBK_ear_woodland_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_GL_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_GL_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
    };
    class ghost_b_fdf_Soldier_SL_F: ghost_b_fdf_Soldier_02_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Squad Leader";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_CQB_woodland_F",
			"E22_FDF_H_HelmetHBK_ear_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_CQB_woodland_F",
			"E22_FDF_H_HelmetHBK_ear_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_GL_black_AICO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_GL_black_AICO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"UGL_FlareRed_F",
			"UGL_FlareRed_F",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"B_IR_Grenade",
			"B_IR_Grenade"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"UGL_FlareRed_F",
			"UGL_FlareRed_F",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"B_IR_Grenade",
			"B_IR_Grenade"
		};
    };
    class ghost_b_fdf_Soldier_TL_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Team Leader";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_CQB_woodland_F",
			"E22_FDF_H_HelmetHBK_ear_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_CQB_woodland_F",
			"E22_FDF_H_HelmetHBK_ear_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_GL_black_AICO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_GL_black_AICO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"UGL_FlareRed_F",
			"UGL_FlareRed_F",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"UGL_FlareRed_F",
			"UGL_FlareRed_F",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell"
		};
    };
    class ghost_b_fdf_Soldier_M_F: ghost_b_fdf_Soldier_02_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Marksman";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_SR10_AFG_black_MRPS_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_SR10_AFG_black_MRPS_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
        respawnmagazines[]=
		{
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
    };
    class ghost_b_fdf_Soldier_LAT_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Rifleman (Light AT)";
        backpack="E22_FDF_B_kitbag_woodland_LAT";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_ear_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_ear_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"launch_MRAWS_green_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"launch_MRAWS_green_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"HandGrenade",
			"HandGrenade",
			"RPG32_F"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"HandGrenade",
			"HandGrenade",
			"RPG32_F"
		};
    };
    class ghost_b_fdf_Soldier_CLS_F: ghost_b_fdf_Soldier_02_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Combat Life Saver";
        backpack="E22_FDF_B_Kitbag_woodland_CLS";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"SmokeShellPurple",
			"SmokeShellPurple"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"SmokeShellPurple",
			"SmokeShellPurple"
		};
    };
    class ghost_b_fdf_Soldier_REP_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Repair Specialist";
        backpack="E22_FDF_B_Kitbag_woodland_REP";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_amber_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_amber_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
    };
    class ghost_b_fdf_Soldier_EXP_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Explosive Specialist";
        backpack="E22_FDF_B_Kitbag_woodland_EXP";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_amber_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_amber_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"smokeshell",
			"smokeshell"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"smokeshell",
			"smokeshell"
		};
    };
    class ghost_b_fdf_Helipilot_F: ghost_b_fdf_Soldier_02_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Helicopter Pilot";
        // Aircrew are not infantry - no random drone bag (also covers Helicrew, which inherits this).
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "";
            };
        };
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_compact_woodland_F",
			"E22_FDF_H_Helmet_Heli_VisorUp_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_compact_woodland_F",
			"E22_FDF_H_Helmet_Heli_VisorUp_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight",
			"NVGoggles_OPFOR"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight",
			"NVGoggles_OPFOR"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnWeapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
    };
    class ghost_b_fdf_Helicrew_F: ghost_b_fdf_Helipilot_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Helicopter Crew";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_compact_woodland_F",
			"E22_FDF_H_Helmet_Heli_crew_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_compact_woodland_F",
			"E22_FDF_H_Helmet_Heli_crew_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnWeapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
    };
    class ghost_b_fdf_Soldier_AB_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        scopecurator=2;
        displayName="Ammo Bearer";
        backpack="E22_FDF_B_Kitbag_woodland_AMO";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"HandGrenade",
			"HandGrenade"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"HandGrenade",
			"HandGrenade"
		};
    };
    class ghost_b_fdf_Soldier_ENG_F: ghost_b_fdf_Soldier_02_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Engineer";
        backpack="E22_FDF_B_Kitbag_woodland_ENG";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_amber_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_amber_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_VFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_VFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"HandGrenade",
			"HandGrenade"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"HandGrenade",
			"HandGrenade"
		};
    };
    class ghost_b_fdf_Crewman_F: ghost_b_fdf_Soldier_02_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Crewman";
        // Vehicle crew are not infantry - no random drone bag.
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "";
            };
        };
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_crew_woodland_F",
			"E22_FDF_H_Beret_01_headset_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_crew_woodland_F",
			"E22_FDF_H_Beret_01_headset_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
    };
    class ghost_b_fdf_Officer_F: ghost_b_fdf_Soldier_02_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Officer";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_holster_woodland_F",
			"E22_FDF_H_Beret_01_black_F",
			"ItemMap",
			"ItemWatch",
			"ItemRadio"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_holster_woodland_F",
			"E22_FDF_H_Beret_01_black_F",
			"ItemMap",
			"ItemWatch",
			"ItemRadio"
		};
        Items[]={};
        respawnItems[]={};
        weapons[]=
		{
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnWeapons[]=
		{
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
        respawnmagazines[]=
		{
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
    };
    class ghost_b_fdf_Officer_Field_F: ghost_b_fdf_Soldier_02_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Field Commander";
        backpack="";
        linkedItems[]=
		{
			"E22_FDF_H_Beret_01_headset_black_F",
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"ItemMap",
			"ItemWatch",
			"ItemRadio"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_H_Beret_01_headset_black_F",
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"ItemMap",
			"ItemWatch",
			"ItemRadio"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_VFG_black_AICO_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnWeapons[]=
		{
			"JCA_arifle_M4A4_VFG_black_AICO_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
    };
    class ghost_b_fdf_Soldier_Survivor_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Survivor";
        backpack="";
        linkedItems[]={};
        respawnLinkedItems[]={};
        Items[]={};
        respawnItems[]={};
        weapons[]=
		{
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"Throw",
			"Put"
		};
        magazines[]={};
        respawnmagazines[]={};
    };
    class ghost_b_fdf_Soldier_Mine_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Mine Specialist";
        backpack="E22_FDF_B_Kitbag_woodland_MINE";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
    };
    class ghost_b_fdf_RadioOperator_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Radio Operator";
        backpack="E22_FDF_B_RadioBag_woodland";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
    };
    class ghost_b_fdf_Support_Mortar_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Gunner (Mk6)";
        backpack="ghost_b_fdf_Mortar_01_weapon_F";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
    };
    class ghost_b_fdf_Support_Mortar_A_F: ghost_b_fdf_Support_Mortar_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Gunner (Mk6, Asst.)";
        uniformClass="E22_FDF_U_CombatUniform_01_woodland_shortsleeve_F";
        backpack="ghost_b_fdf_Mortar_01_support_F";
    };
    class ghost_b_fdf_Soldier_UAV_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="UAV Specialist";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_ear_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ghost_b_fdf_UavTerminal"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_ear_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ghost_b_fdf_UavTerminal"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_VFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_VFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"SmokeShell",
			"SmokeShell"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"SmokeShell",
			"SmokeShell"
		};
    };
    class ghost_b_fdf_Soldier_UAV_01_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="UAV Operator (AR-2)";
        backpack="ghost_b_fdf_UAV_01_backpack_F";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ghost_b_fdf_UavTerminal"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ghost_b_fdf_UavTerminal"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"SmokeShell",
			"SmokeShell"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"SmokeShell",
			"SmokeShell"
		};
    };
    class ghost_b_fdf_Soldier_UAV_06_F: ghost_b_fdf_Soldier_02_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="UAV Operator (AL-6)";
        backpack="ghost_b_fdf_UAV_06_backpack_F";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_faded_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ghost_b_fdf_UavTerminal"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_faded_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ghost_b_fdf_UavTerminal"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"SmokeShell",
			"SmokeShell"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"SmokeShell",
			"SmokeShell"
		};
    };
    class ghost_b_fdf_Soldier_UAV_06_medical_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="UAV Operator (AL-6, Medical)";
        backpack="ghost_b_fdf_UAV_06_medical_backpack_F";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ghost_b_fdf_UavTerminal"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ghost_b_fdf_UavTerminal"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"SmokeShell",
			"SmokeShell"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"SmokeShell",
			"SmokeShell"
		};
    };
    class ghost_b_fdf_Soldier_UAV_06_demining_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="UAV Operator (AL-6, Demining)";
        backpack="ghost_b_fdf_UAV_06_antimine_backpack_F";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ghost_b_fdf_UavTerminal"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ghost_b_fdf_UavTerminal"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"SmokeShell",
			"SmokeShell"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"SmokeShell",
			"SmokeShell"
		};
    };
    class ghost_b_fdf_Soldier_UGV_02_science_F: ghost_b_fdf_Soldier_02_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="UGV Operator (ED-1E)";
        backpack="ghost_b_fdf_UGV_02_Science_backpack_F";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ghost_b_fdf_UavTerminal"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ghost_b_fdf_UavTerminal"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"SmokeShell",
			"SmokeShell"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"SmokeShell",
			"SmokeShell"
		};
    };
    class ghost_b_fdf_Soldier_UGV_02_demining_F: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="UGV Operator (ED-1D)";
        backpack="ghost_b_fdf_UGV_02_Demining_backpack_F";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_amber_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ghost_b_fdf_UavTerminal"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_amber_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ghost_b_fdf_UavTerminal"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_laserModule_F",
			"JCA_hgun_P226_black_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"SmokeShell",
			"SmokeShell"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"SmokeShell",
			"SmokeShell"
		};
    };
    class ghost_b_fdf_Recon_base: ghost_b_fdf_Soldier_01_F {
        side = 1;
        faction = "ghost_b_fdf";
        scope=1;
        backpack="";
    };
    class ghost_b_fdf_Recon_F: ghost_b_fdf_Recon_base {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Recon Scout";
        uniformClass="E22_FDF_U_CombatUniform_01_light_woodland_F";
        backpack="E22_FDF_B_Kitbag_woodland";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_ear_woodland_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_ear_woodland_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_DualMount_snds_F",
			"JCA_hgun_P226_black_snds_F",
			"Throw",
			"Put"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_DualMount_snds_F",
			"JCA_hgun_P226_black_snds_F",
			"Throw",
			"Put"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
    };
    class ghost_b_fdf_Recon_LAT_F: ghost_b_fdf_Recon_base {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Recon Scout (Anti-Tank)";
        uniformClass="E22_FDF_U_CombatUniform_01_light_woodland_F";
        backpack="E22_FDF_B_kitbag_woodland_LAT";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_ear_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_ear_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_DualMount_snds_F",
			"launch_MRAWS_green_F",
			"JCA_hgun_P226_black_snds_F",
			"Throw",
			"Put",
			"Binocular"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_DualMount_snds_F",
			"launch_MRAWS_green_F",
			"JCA_hgun_P226_black_snds_F",
			"Throw",
			"Put",
			"Binocular"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"RPG32_F"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"RPG32_F"
		};
    };
    class ghost_b_fdf_Recon_EXP_F: ghost_b_fdf_Recon_base {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Recon Demo Specialist";
        uniformClass="E22_FDF_U_CombatUniform_01_light_woodland_shortsleeve_F";
        backpack="E22_FDF_B_Kitbag_woodland_EXP";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_amber_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_amber_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_DualMount_snds_F",
			"JCA_hgun_P226_black_snds_F",
			"Throw",
			"Put",
			"Binocular"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_AFG_black_IHO_DualMount_snds_F",
			"JCA_hgun_P226_black_snds_F",
			"Throw",
			"Put",
			"Binocular"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
    };
    class ghost_b_fdf_Recon_CLS_F: ghost_b_fdf_Recon_base {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Recon Paramedic";
        uniformClass="E22_FDF_U_CombatUniform_01_light_woodland_shortsleeve_F";
        backpack="E22_FDF_B_Kitbag_woodland_CLS";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_tactical_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_VFG_black_AICO_DualMount_snds_F",
			"JCA_hgun_P226_black_snds_F",
			"Throw",
			"Put",
			"Binocular"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_VFG_black_AICO_DualMount_snds_F",
			"JCA_hgun_P226_black_snds_F",
			"Throw",
			"Put",
			"Binocular"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
    };
    class ghost_b_fdf_Recon_TL_F: ghost_b_fdf_Recon_base {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Recon Team Leader";
        uniformClass="E22_FDF_U_CombatUniform_01_light_woodland_F";
        backpack="E22_FDF_B_Kitbag_woodland";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_ear_woodland_F",
			"E22_FDF_G_Balaclava_02_green_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_ear_woodland_F",
			"E22_FDF_G_Balaclava_02_green_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_GL_black_AICO_DualMount_snds_F",
			"JCA_hgun_P226_black_snds_F",
			"Throw",
			"Put",
			"Binocular"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_GL_black_AICO_DualMount_snds_F",
			"JCA_hgun_P226_black_snds_F",
			"Throw",
			"Put",
			"Binocular"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
    };
    class ghost_b_fdf_Recon_M_F: ghost_b_fdf_Recon_base {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Recon Marksman";
        uniformClass="E22_FDF_U_CombatUniform_01_light_woodland_shortsleeve_F";
        backpack="E22_FDF_B_Kitbag_woodland";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_headset_woodland_F",
			"JCA_G_Glasses_Tactical_clear_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_SR10_AFG_black_MRPS_laserModule_snds_F",
			"JCA_hgun_P226_black_snds_F",
			"Throw",
			"Put",
			"Binocular"
		};
        respawnweapons[]=
		{
			"JCA_arifle_SR10_AFG_black_MRPS_laserModule_snds_F",
			"JCA_hgun_P226_black_snds_F",
			"Throw",
			"Put",
			"Binocular"
		};
        magazines[]=
		{
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
        respawnmagazines[]=
		{
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"FA_ACE_20Rnd_762x51_M993_AP",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag"
		};
    };
    class ghost_b_fdf_Recon_JTAC_F: ghost_b_fdf_Recon_base {
        side = 1;
        faction = "ghost_b_fdf";
        scope=2;
        displayName="Recon JTAC";
        uniformClass="E22_FDF_U_CombatUniform_01_light_woodland_F";
        backpack="";
        linkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_ear_woodland_F",
			"JCA_G_Glasses_Tactical_faded_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        respawnLinkedItems[]=
		{
			"E22_FDF_V_CarrierRigKBT_01_combat_woodland_F",
			"E22_FDF_H_HelmetHBK_ear_woodland_F",
			"JCA_G_Glasses_Tactical_faded_black_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        Items[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        respawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit",
			"acc_Flashlight"
		};
        weapons[]=
		{
			"JCA_arifle_M4A4_GL_black_AICO_DualMount_snds_F",
			"JCA_hgun_P226_black_snds_F",
			"Throw",
			"Put",
			"Laserdesignator_01_khk_F"
		};
        respawnweapons[]=
		{
			"JCA_arifle_M4A4_GL_black_AICO_DualMount_snds_F",
			"JCA_hgun_P226_black_snds_F",
			"Throw",
			"Put",
			"Laserdesignator_01_khk_F"
		};
        magazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"Laserbatteries",
			"SmokeShell",
			"SmokeShellBlue",
			"B_IR_Grenade",
			"B_IR_Grenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
        respawnmagazines[]=
		{
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"FA_30Rnd_556x45_AP_Stanag_RF_T_Red",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"JCA_15Rnd_9x21_P226_Mag",
			"Laserbatteries",
			"SmokeShell",
			"SmokeShellBlue",
			"B_IR_Grenade",
			"B_IR_Grenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
    };

    // ---- faction vehicles: 55 E22 BLUFOR air/armour/soft/boats/static ----
    class ghost_b_fdf_Plane_Fighter_04_F: E22_B_FDF_Plane_Fighter_04_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_UAV_01_F: E22_B_FDF_UAV_01_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_UAV_01_backpack_F: E22_B_FDF_UAV_01_backpack_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_UAV_06_F: E22_B_FDF_UAV_06_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_UAV_06_antimine_F: E22_B_FDF_UAV_06_antimine_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_UAV_06_medical_F: E22_B_FDF_UAV_06_medical_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_UAV_06_backpack_F: E22_B_FDF_UAV_06_backpack_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_UAV_06_antimine_backpack_F: E22_B_FDF_UAV_06_antimine_backpack_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_UAV_06_medical_backpack_F: E22_B_FDF_UAV_06_medical_backpack_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_APC_Tracked_03_F: E22_B_FDF_APC_Tracked_03_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_APC_Tracked_01_AA_F: B_T_APC_Tracked_01_AA_F {
        faction = "ghost_b_fdf";
        side = 1;
        crew = "ghost_b_fdf_Crewman_F";
    };
    class ghost_b_fdf_APC_Wheeled_01_cannon_F: E22_B_FDF_APC_Wheeled_01_cannon_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_APC_Wheeled_01_unarmed_F: E22_B_FDF_APC_Wheeled_01_unarmed_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_MBT_03_cannon_F: E22_B_FDF_MBT_03_cannon_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Boat_Combat_01_unarmed_F: E22_B_FDF_Boat_Combat_01_unarmed_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Boat_Combat_01_HMG_F: E22_B_FDF_Boat_Combat_01_HMG_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Boat_Combat_01_AT_F: E22_B_FDF_Boat_Combat_01_AT_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Boat_Transport_01_F: E22_B_FDF_Boat_Transport_01_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Boat_Transport_02_F: E22_B_FDF_Boat_Transport_02_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_LSV_01_unarmed_F: E22_B_FDF_LSV_01_unarmed_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_LSV_01_light_F: E22_B_FDF_LSV_01_light_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_LSV_01_AT_F: E22_B_FDF_LSV_01_AT_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_MRAP_01_F: E22_B_FDF_MRAP_01_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_MRAP_01_hmg_F: E22_B_FDF_MRAP_01_hmg_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_MRAP_01_gmg_F: E22_B_FDF_MRAP_01_gmg_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Pickup_01_F: E22_B_FDF_Pickup_01_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Pickup_01_comms_F: E22_B_FDF_Pickup_01_comms_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Pickup_01_fuel_F: E22_B_FDF_Pickup_01_fuel_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Pickup_01_MMG_F: E22_B_FDF_Pickup_01_MMG_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Pickup_01_MRL_F: E22_B_FDF_Pickup_01_MRL_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Pickup_01_AAT_F: E22_B_FDF_Pickup_01_AAT_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Pickup_01_RCWS_F: E22_B_FDF_Pickup_01_RCWS_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Quadbike_01_F: E22_B_FDF_Quadbike_01_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Truck_01_transport_F: E22_B_FDF_Truck_01_transport_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Truck_01_covered_F: E22_B_FDF_Truck_01_covered_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Truck_01_mover_F: E22_B_FDF_Truck_01_mover_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Truck_01_Box_F: E22_B_FDF_Truck_01_Box_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Truck_01_Repair_F: E22_B_FDF_Truck_01_Repair_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Truck_01_ammo_F: E22_B_FDF_Truck_01_ammo_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Truck_01_fuel_F: E22_B_FDF_Truck_01_fuel_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Truck_01_medical_F: E22_B_FDF_Truck_01_medical_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Truck_01_flatbed_F: E22_B_FDF_Truck_01_flatbed_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Truck_01_cargo_F: E22_B_FDF_Truck_01_cargo_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_UGV_02_Science_F: E22_B_FDF_UGV_02_Science_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_UGV_02_Demining_F: E22_B_FDF_UGV_02_Demining_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_UGV_02_Science_backpack_F: E22_B_FDF_UGV_02_Science_backpack_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_UGV_02_Demining_backpack_F: E22_B_FDF_UGV_02_Demining_backpack_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    // Vanilla Stomper UGV-01 (recon + RCWS) to match spar_woodland (E22 FDF ships only UGV-02).
    class ghost_b_fdf_UGV_01_F: B_T_UGV_01_olive_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_UGV_01_rcws_F: B_T_UGV_01_rcws_olive_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_HMG_02_F: E22_B_FDF_HMG_02_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_HMG_02_high_F: E22_B_FDF_HMG_02_high_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_HMG_02_support_F: E22_B_FDF_HMG_02_support_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_HMG_02_support_high_F: E22_B_FDF_HMG_02_support_high_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_HMG_02_weapon_F: E22_B_FDF_HMG_02_weapon_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_HMG_02_high_weapon_F: E22_B_FDF_HMG_02_high_weapon_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Mortar_01_F: E22_B_FDF_Mortar_01_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Mortar_01_support_F: E22_B_FDF_Mortar_01_support_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Mortar_01_weapon_F: E22_B_FDF_Mortar_01_weapon_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    // ==== BLUFOR drone units ported into this faction (unit-list drones) ====
    class ghost_b_fdf_B_UAV_RC40_HE_RF: B_UAV_RC40_HE_RF {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_B_UAV_RC40_SENSOR_RF: B_UAV_RC40_SENSOR_RF {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_GX_B_HONEYBADGER_UGV_AT_GREEN: GX_B_HONEYBADGER_UGV_AT_GREEN {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_GX_B_HUNTER_SP_UAV: GX_B_HUNTER_SP_UAV {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_qav_ripsaw_c: qav_ripsaw_c {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_qav_ripsaw_Mk44: qav_ripsaw_Mk44 {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_GX_B_THEMIS_UGV_HUNTER_LAUNCHER: GX_B_THEMIS_UGV_HUNTER_LAUNCHER {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_GX_B_THEMIS_UGV_DEFNDER_MEDIUM: GX_B_THEMIS_UGV_DEFNDER_MEDIUM {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_GX_B_THEMIS_UGV_CARGO: GX_B_THEMIS_UGV_CARGO {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_GX_B_MAGURA_V5_USV: GX_B_MAGURA_V5_USV {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_GX_B_MQ8B_UAV_RECON_SEATED: GX_B_MQ8B_UAV_RECON_SEATED {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_GX_B_MQ8B_UAV_RECON: GX_B_MQ8B_UAV_RECON {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_GX_B_MQ8B_UAV_ARMED: GX_B_MQ8B_UAV_ARMED {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_rksla3_aeroshark_blufor: rksla3_aeroshark_blufor {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_B_T_UAV_03_dynamicLoadout_F: B_T_UAV_03_dynamicLoadout_F {
        faction = "ghost_b_fdf";
        side = 1;
    };
    // ==== additional FDF vehicles/statics ====
    class ghost_b_fdf_APC_Wheeled_01_cannon_ATGM_F: E22_B_FDF_APC_Wheeled_01_cannon_ATGM_F {
        faction = "ghost_b_fdf";
        side = 1;
        crew = "ghost_b_fdf_Crewman_F";
    };
    class ghost_b_fdf_APC_Wheeled_01_command_F: E22_B_FDF_APC_Wheeled_01_command_F {
        faction = "ghost_b_fdf";
        side = 1;
        crew = "ghost_b_fdf_Crewman_F";
    };
    class ghost_b_fdf_APC_Wheeled_01_mortar_F: E22_B_FDF_APC_Wheeled_01_mortar_F {
        faction = "ghost_b_fdf";
        side = 1;
        crew = "ghost_b_fdf_Crewman_F";
    };
    class ghost_b_fdf_MRAP_01_AT_F: E22_B_FDF_MRAP_01_AT_F {
        faction = "ghost_b_fdf";
        side = 1;
        crew = "ghost_b_fdf_Crewman_F";
    };
    class ghost_b_fdf_MRAP_01_FSV_F: E22_B_FDF_MRAP_01_FSV_F {
        faction = "ghost_b_fdf";
        side = 1;
        crew = "ghost_b_fdf_Crewman_F";
    };
    class ghost_b_fdf_Heli_EC_04_military_RF: B_Heli_EC_04_military_RF {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_Heli_EC_03_RF: B_Heli_EC_03_RF {
        faction = "ghost_b_fdf";
        side = 1;
    };
    class ghost_b_fdf_MRAP_01_LAAD_F: E22_B_FDF_MRAP_01_LAAD_F {
        faction = "ghost_b_fdf";
        side = 1;
        crew = "ghost_b_fdf_Crewman_F";
    };
    class ghost_b_fdf_W_SAM_system_01_F: E22_B_FDF_W_SAM_system_01_F {
        faction = "ghost_b_fdf";
        side = 1;
        crew = "ghost_b_fdf_Crewman_F";
    };
    class ghost_b_fdf_W_AAA_System_01_F: E22_B_FDF_W_AAA_System_01_F {
        faction = "ghost_b_fdf";
        side = 1;
        crew = "ghost_b_fdf_Crewman_F";
    };
    class ghost_b_fdf_W_Radar_system_01_F: E22_B_FDF_W_Radar_system_01_F {
        faction = "ghost_b_fdf";
        side = 1;
        crew = "ghost_b_fdf_Crewman_F";
    };
    class ghost_b_fdf_Boat_Armed_01_minigun_F: B_T_Boat_Armed_01_minigun_F {
        faction = "ghost_b_fdf";
        side = 1;
        crew = "ghost_b_fdf_Crewman_F";
    };
};
