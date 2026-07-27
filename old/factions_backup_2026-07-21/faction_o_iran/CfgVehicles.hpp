// Iran faction — 1:1 duplicate of CSAT (OPF_F) as re-geared by ax_alternateiran
// (Axle's Alternate Iran; PCU hex uniforms + AX helmets, Katiba 6.2 kept), side 0 / East.
// Main combat line restated with futureAmmo GREEN-tracer magazines
// (6.5 caseless / Zafir 7.62x54 box / RPG-32 / Titan / 40mm HE).
// Specialist lines (recon, sniper, urban, support, divers, pilots) are re-tagged 1:1 —
// their vanilla CSAT 6.5 ammo already fires green tracers, and futureAmmo green rounds
// remain selectable via magazine wells. Marksman DMR + pistols/SMG/smoke stay vanilla
// (no futureAmmo equivalent).

#define TKM_HEADER \
    scope = 2; \
    scopeCurator = 2; \
    side = 0; \
    faction = "ghost_O_Iran"

#define TKM_L2(x) x,x
#define TKM_L4(x) x,x,x,x
#define TKM_L6(x) x,x,x,x,x,x
#define TKM_L10(x) x,x,x,x,x,x,x,x,x,x
#define TKM_L12(x) x,x,x,x,x,x,x,x,x,x,x,x
#define TKM_L18(x) x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x

#define TKM_65_GREEN "FA_30Rnd_62_DBP25_T_Green"

class CfgVehicles {
    // --- external base classes (vanilla A3 / Aegis-patched), forward-declared ---
    class O_Soldier_F;
    class O_Soldier_lite_F;
    class O_Soldier_GL_F;
    class O_Soldier_AR_F;
    class O_Soldier_SL_F;
    class O_Soldier_TL_F;
    class O_soldier_M_F;
    class O_Soldier_LAT_F;
    class O_Soldier_AT_F;
    class O_Soldier_AA_F;
    class O_medic_F;
    class O_soldier_repair_F;
    class O_soldier_exp_F;
    class O_Soldier_A_F;
    class O_engineer_F;
    class O_crew_F;
    class O_officer_F;
    class O_soldier_PG_F;
    class O_soldier_UAV_F;
    class O_RadioOperator_F;
    class O_Soldier_CBRN_F;
    class O_Soldier_CQ_F;
    class O_Soldier_HAT_F;
    class O_Sharpshooter_F;
    class O_HeavyGunner_F;
    class O_helipilot_F;
    class O_Pilot_F;
    class O_helicrew_F;
    class O_Fighter_Pilot_F;
    class O_Soldier_AAR_F;
    class O_Soldier_AAT_F;
    class O_Soldier_AAA_F;
    class O_Soldier_AHAT_F;
    class O_support_MG_F;
    class O_support_GMG_F;
    class O_support_Mort_F;
    class O_support_AMG_F;
    class O_support_AMort_F;
    class O_diver_F;
    class O_diver_TL_F;
    class O_diver_exp_F;
    class O_spotter_F;
    class O_sniper_F;
    class O_Pathfinder_F;
    class O_recon_F;
    class O_recon_M_F;
    class O_recon_LAT_F;
    class O_recon_medic_F;
    class O_recon_exp_F;
    class O_recon_JTAC_F;
    class O_recon_TL_F;
    class O_recon_CQ_F;
    class O_recon_AR_F;
    class O_recon_GL_F;
    class O_soldierU_AR_F;
    class O_soldierU_AAR_F;
    class O_soldierU_LAT_F;
    class O_soldierU_AT_F;
    class O_soldierU_AAT_F;
    class O_soldierU_AA_F;
    class O_soldierU_AAA_F;
    class O_soldierU_TL_F;
    class O_soldierU_SL_F;
    class O_soldierU_medic_F;
    class O_soldierU_repair_F;
    class O_soldierU_exp_F;
    class O_engineer_U_F;
    class O_soldierU_M_F;
    class O_soldierU_A_F;
    class O_soldierU_GL_F;
    class O_soldierU_CQ_F;
    class O_soldierU_CBRN_F;
    class O_Urban_Sharpshooter_F;
    class O_Urban_HeavyGunner_F;
    class O_Urban_RadioOperator_F;
    class O_MBT_02_cannon_F;
    class O_MBT_04_cannon_F;
    class O_MBT_04_command_F;
    class O_APC_Tracked_02_cannon_F;
    class O_APC_Tracked_02_AA_F;
    class O_APC_Tracked_02_30mm_lxWS;
    class O_APC_Wheeled_02_rcws_v2_F;
    class O_MRAP_02_F;
    class O_MRAP_02_hmg_F;
    class O_MRAP_02_gmg_F;
    class O_Truck_02_covered_F;
    class O_Truck_02_transport_F;
    class O_Truck_02_box_F;
    class O_Truck_02_medical_F;
    class O_Truck_02_Ammo_F;
    class O_Truck_02_fuel_F;
    class O_Truck_02_MRL_F;
    class O_Truck_02_cargo_F;
    class O_Truck_02_flatbed_F;
    class O_UGV_01_rcws_F;
    class O_UGV_01_medical_F;
    class O_Plane_Fighter_03_dynamicLoadout_F;
    class O_Plane_Fighter_03_Cluster_F;
    class O_VTOL_02_infantry_dynamicLoadout_F;
    class O_VTOL_02_vehicle_dynamicLoadout_F;
    class O_Plane_Transport_01_infantry_F;
    class O_Plane_Transport_01_vehicle_F;
    class O_Heli_Attack_02_dynamicLoadout_F;
    class O_Heli_Light_02_dynamicLoadout_F;
    class O_Heli_Light_02_unarmed_F;
    class O_HMG_01_F;
    class O_HMG_01_high_F;
    class O_GMG_01_F;
    class O_GMG_01_high_F;
    class O_Mortar_01_F;
    class O_static_AT_F;
    class O_static_AA_F;
    class O_HMG_02_F;
    class O_HMG_02_high_F;
    class O_Static_Designator_02_F;
    class O_Boat_Transport_02_F;
    class O_Boat_Armed_01_hmg_F;
    class O_SDV_01_F;
    class O_supplyCrate_F;
    // --- drone base classes (external mods: ArmaFPV, vnd, orion, orlan, gx_drones, RF, sting, WS CDLC) ---
    class O_Rev_Darter;
    class O_Rev_Bustard;
    class GX_O_DRONE40_UAV_HE;
    class GX_O_DRONE40_UAV_RECON;
    class O_UAV_RC40_HE_RF;
    class O_UAV_RC40_SENSOR_RF;
    class GX_O_HONEYBADGER_UGV_AT;
    class GX_O_HUNTER_SP_UAV;
    class orion_F_OPF;
    class orion_F_KAB20_OPF;
    class orion_F_KAB50_OPF;
    class orion_F_KORNET_OPF;
    class orlan_F_OPF;
    class GX_O_RQ11B_UAV;
    class O_Crocus_AP;
    class O_Crocus_AP_TI;
    class O_Crocus_AT;
    class O_Crocus_AT_TI;
    class O_KVN_AP;
    class O_KVN_AP_TI;
    class O_KVN_AT;
    class O_KVN_AT_TI;
    class O_Sting_F;
    class O_Sting_TI_F;
    class O_UAV_02_lxWS;
    class O_G_UAV_02_IED_lxWS;
    class O_UAV_02_dynamicLoadout_F;
    class O_T_UAV_04_CAS_F;

    // === Infantry — main line (FA green restate) ==================================
    class GVAR(Soldier_F): O_Soldier_F {
        TKM_HEADER;
        magazines[] = {TKM_L10(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L2("HandGrenade_East"), TKM_L2("SmokeShell")};
        respawnMagazines[] = {TKM_L10(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L2("HandGrenade_East"), TKM_L2("SmokeShell")};
    };
    class GVAR(Soldier_lite_F): O_Soldier_lite_F {
        TKM_HEADER;
        magazines[] = {TKM_L10(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L2("HandGrenade_East"), TKM_L2("SmokeShell")};
        respawnMagazines[] = {TKM_L10(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L2("HandGrenade_East"), TKM_L2("SmokeShell")};
    };
    class GVAR(Soldier_GL_F): O_Soldier_GL_F {
        TKM_HEADER;
        magazines[] = {TKM_L6(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L6("FA_1Rnd_40mm_Mk380_NRP"), TKM_L2("HandGrenade_East"), TKM_L2("SmokeShell"), TKM_L2("1Rnd_Smoke_Grenade_shell")};
        respawnMagazines[] = {TKM_L6(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L6("FA_1Rnd_40mm_Mk380_NRP"), TKM_L2("HandGrenade_East"), TKM_L2("SmokeShell"), TKM_L2("1Rnd_Smoke_Grenade_shell")};
    };
    class GVAR(Soldier_AR_F): O_Soldier_AR_F {
        TKM_HEADER;
        magazines[] = {TKM_L4("FA_150Rnd_762x54_Box_T_Green"), TKM_L2("17Rnd_9x21_Mag"), "HandGrenade_East", TKM_L2("SmokeShell")};
        respawnMagazines[] = {TKM_L4("FA_150Rnd_762x54_Box_T_Green"), TKM_L2("17Rnd_9x21_Mag"), "HandGrenade_East", TKM_L2("SmokeShell")};
    };
    class GVAR(Soldier_SL_F): O_Soldier_SL_F {
        TKM_HEADER;
        magazines[] = {TKM_L6(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L2("HandGrenade_East"), TKM_L2("O_IR_Grenade"), "SmokeShell", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
        respawnMagazines[] = {TKM_L6(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L2("HandGrenade_East"), TKM_L2("O_IR_Grenade"), "SmokeShell", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
    };
    class GVAR(Soldier_TL_F): O_Soldier_TL_F {
        TKM_HEADER;
        magazines[] = {TKM_L6(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L6("FA_1Rnd_40mm_Mk380_NRP"), TKM_L2("HandGrenade_East"), "SmokeShell", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
        respawnMagazines[] = {TKM_L6(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L6("FA_1Rnd_40mm_Mk380_NRP"), TKM_L2("HandGrenade_East"), "SmokeShell", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
    };
    class GVAR(soldier_M_F): O_soldier_M_F {
        TKM_HEADER; // DMR 7.62x54 10Rnd has no futureAmmo equivalent — vanilla mags kept
    };
    class GVAR(Soldier_LAT_F): O_Soldier_LAT_F {
        TKM_HEADER;
        magazines[] = {TKM_L6(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), "FA_RPG32_PG32V2", TKM_L2("HandGrenade_East"), TKM_L2("SmokeShell")};
        respawnMagazines[] = {TKM_L6(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), "FA_RPG32_PG32V2", TKM_L2("HandGrenade_East"), TKM_L2("SmokeShell")};
    };
    class GVAR(Soldier_AT_F): O_Soldier_AT_F {
        TKM_HEADER;
        magazines[] = {TKM_L12(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), "FA_Titan_AT_BGM185_Broadsword", TKM_L2("HandGrenade_East"), TKM_L2("SmokeShell")};
        respawnMagazines[] = {TKM_L12(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), "FA_Titan_AT_BGM185_Broadsword", TKM_L2("HandGrenade_East"), TKM_L2("SmokeShell")};
    };
    class GVAR(Soldier_AA_F): O_Soldier_AA_F {
        TKM_HEADER;
        magazines[] = {TKM_L12(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), "FA_Titan_AA_MIM165_Sentry", TKM_L2("HandGrenade_East"), TKM_L2("SmokeShell")};
        respawnMagazines[] = {TKM_L12(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), "FA_Titan_AA_MIM165_Sentry", TKM_L2("HandGrenade_East"), TKM_L2("SmokeShell")};
    };
    class GVAR(medic_F): O_medic_F {
        TKM_HEADER;
        magazines[] = {TKM_L6(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L2("HandGrenade_East"), "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange"};
        respawnMagazines[] = {TKM_L6(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L2("HandGrenade_East"), "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange"};
    };
    class GVAR(soldier_repair_F): O_soldier_repair_F {
        TKM_HEADER;
        magazines[] = {TKM_L6(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L2("HandGrenade_East"), TKM_L2("SmokeShell")};
        respawnMagazines[] = {TKM_L6(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L2("HandGrenade_East"), TKM_L2("SmokeShell")};
    };
    class GVAR(soldier_exp_F): O_soldier_exp_F {
        TKM_HEADER;
        magazines[] = {TKM_L6(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L2("APERSMine_Range_Mag"), "APERSMine_Range_Mag", TKM_L2("HandGrenade_East"), TKM_L2("SmokeShell")};
        respawnMagazines[] = {TKM_L6(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L2("APERSMine_Range_Mag"), "APERSMine_Range_Mag", TKM_L2("HandGrenade_East"), TKM_L2("SmokeShell")};
    };
    class GVAR(Soldier_A_F): O_Soldier_A_F {
        TKM_HEADER;
        magazines[] = {TKM_L6(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L2("HandGrenade_East"), TKM_L2("SmokeShell")};
        respawnMagazines[] = {TKM_L6(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L2("HandGrenade_East"), TKM_L2("SmokeShell")};
    };
    class GVAR(engineer_F): O_engineer_F {
        TKM_HEADER;
        magazines[] = {TKM_L6(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L2("HandGrenade_East"), "SmokeShell", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
        respawnMagazines[] = {TKM_L6(TKM_65_GREEN), TKM_L2("17Rnd_9x21_Mag"), TKM_L2("HandGrenade_East"), "SmokeShell", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
    };
    class GVAR(officer_F): O_officer_F {
        TKM_HEADER;
        magazines[] = {TKM_L4(TKM_65_GREEN), TKM_L2("6Rnd_45ACP_Cylinder"), "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
        respawnMagazines[] = {TKM_L4(TKM_65_GREEN), TKM_L2("6Rnd_45ACP_Cylinder"), "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
    };

    // === Infantry — re-tag only (vanilla loadout kept; CSAT 6.5 is already green-tracer)
    class GVAR(crew_F): O_crew_F {
        TKM_HEADER;
    };
    class GVAR(soldier_PG_F): O_soldier_PG_F {
        TKM_HEADER;
    };
    class GVAR(soldier_UAV_F): O_soldier_UAV_F {
        TKM_HEADER;
        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) addBackpack (selectRandom ['O_Sting_TI_Bag','O_Sting_Bag','O_KVN_AT_TI_Bag','O_KVN_AT_Bag','O_KVN_AP_TI_Bag','O_KVN_AP_Bag','O_Crocus_AT_TI_Bag','O_Crocus_AT_Bag','O_Crocus_AP_TI_Bag','O_Crocus_AP_Bag','O_UAV_02_backpack_lxWS','O_UAV_01_backpack_F']); };";
        };
    };
    class GVAR(RadioOperator_F): O_RadioOperator_F {
        TKM_HEADER;
    };
    class GVAR(Soldier_CBRN_F): O_Soldier_CBRN_F {
        TKM_HEADER;
    };
    class GVAR(Soldier_CQ_F): O_Soldier_CQ_F {
        TKM_HEADER;
    };
    class GVAR(Soldier_HAT_F): O_Soldier_HAT_F {
        TKM_HEADER;
    };
    class GVAR(Sharpshooter_F): O_Sharpshooter_F {
        TKM_HEADER;
    };
    class GVAR(HeavyGunner_F): O_HeavyGunner_F {
        TKM_HEADER;
    };
    class GVAR(helipilot_F): O_helipilot_F {
        TKM_HEADER;
    };
    class GVAR(Pilot_F): O_Pilot_F {
        TKM_HEADER;
    };
    class GVAR(helicrew_F): O_helicrew_F {
        TKM_HEADER;
    };
    class GVAR(Fighter_Pilot_F): O_Fighter_Pilot_F {
        TKM_HEADER;
    };
    class GVAR(Soldier_AAR_F): O_Soldier_AAR_F {
        TKM_HEADER;
    };
    class GVAR(Soldier_AAT_F): O_Soldier_AAT_F {
        TKM_HEADER;
    };
    class GVAR(Soldier_AAA_F): O_Soldier_AAA_F {
        TKM_HEADER;
    };
    class GVAR(Soldier_AHAT_F): O_Soldier_AHAT_F {
        TKM_HEADER;
    };
    class GVAR(support_MG_F): O_support_MG_F {
        TKM_HEADER;
    };
    class GVAR(support_GMG_F): O_support_GMG_F {
        TKM_HEADER;
    };
    class GVAR(support_Mort_F): O_support_Mort_F {
        TKM_HEADER;
    };
    class GVAR(support_AMG_F): O_support_AMG_F {
        TKM_HEADER;
    };
    class GVAR(support_AMort_F): O_support_AMort_F {
        TKM_HEADER;
    };
    class GVAR(diver_F): O_diver_F {
        TKM_HEADER;
    };
    class GVAR(diver_TL_F): O_diver_TL_F {
        TKM_HEADER;
    };
    class GVAR(diver_exp_F): O_diver_exp_F {
        TKM_HEADER;
    };
    class GVAR(spotter_F): O_spotter_F {
        TKM_HEADER;
    };
    class GVAR(sniper_F): O_sniper_F {
        TKM_HEADER;
    };
    class GVAR(Pathfinder_F): O_Pathfinder_F {
        TKM_HEADER;
    };
    class GVAR(recon_F): O_recon_F {
        TKM_HEADER;
    };
    class GVAR(recon_M_F): O_recon_M_F {
        TKM_HEADER;
    };
    class GVAR(recon_LAT_F): O_recon_LAT_F {
        TKM_HEADER;
    };
    class GVAR(recon_medic_F): O_recon_medic_F {
        TKM_HEADER;
    };
    class GVAR(recon_exp_F): O_recon_exp_F {
        TKM_HEADER;
    };
    class GVAR(recon_JTAC_F): O_recon_JTAC_F {
        TKM_HEADER;
    };
    class GVAR(recon_TL_F): O_recon_TL_F {
        TKM_HEADER;
    };
    class GVAR(recon_CQ_F): O_recon_CQ_F {
        TKM_HEADER;
    };
    class GVAR(recon_AR_F): O_recon_AR_F {
        TKM_HEADER;
    };
    class GVAR(recon_GL_F): O_recon_GL_F {
        TKM_HEADER;
    };
    class GVAR(soldierU_AR_F): O_soldierU_AR_F {
        TKM_HEADER;
    };
    class GVAR(soldierU_AAR_F): O_soldierU_AAR_F {
        TKM_HEADER;
    };
    class GVAR(soldierU_LAT_F): O_soldierU_LAT_F {
        TKM_HEADER;
    };
    class GVAR(soldierU_AT_F): O_soldierU_AT_F {
        TKM_HEADER;
    };
    class GVAR(soldierU_AAT_F): O_soldierU_AAT_F {
        TKM_HEADER;
    };
    class GVAR(soldierU_AA_F): O_soldierU_AA_F {
        TKM_HEADER;
    };
    class GVAR(soldierU_AAA_F): O_soldierU_AAA_F {
        TKM_HEADER;
    };
    class GVAR(soldierU_TL_F): O_soldierU_TL_F {
        TKM_HEADER;
    };
    class GVAR(soldierU_SL_F): O_soldierU_SL_F {
        TKM_HEADER;
    };
    class GVAR(soldierU_medic_F): O_soldierU_medic_F {
        TKM_HEADER;
    };
    class GVAR(soldierU_repair_F): O_soldierU_repair_F {
        TKM_HEADER;
    };
    class GVAR(soldierU_exp_F): O_soldierU_exp_F {
        TKM_HEADER;
    };
    class GVAR(engineer_U_F): O_engineer_U_F {
        TKM_HEADER;
    };
    class GVAR(soldierU_M_F): O_soldierU_M_F {
        TKM_HEADER;
    };
    class GVAR(soldierU_A_F): O_soldierU_A_F {
        TKM_HEADER;
    };
    class GVAR(soldierU_GL_F): O_soldierU_GL_F {
        TKM_HEADER;
    };
    class GVAR(soldierU_CQ_F): O_soldierU_CQ_F {
        TKM_HEADER;
    };
    class GVAR(soldierU_CBRN_F): O_soldierU_CBRN_F {
        TKM_HEADER;
    };
    class GVAR(Urban_Sharpshooter_F): O_Urban_Sharpshooter_F {
        TKM_HEADER;
    };
    class GVAR(Urban_HeavyGunner_F): O_Urban_HeavyGunner_F {
        TKM_HEADER;
    };
    class GVAR(Urban_RadioOperator_F): O_Urban_RadioOperator_F {
        TKM_HEADER;
    };

    // === Armor ====================================================================
    // T-100 Varsuk: 125mm + coax -> FA green; gun-launched ATGM kept.
    class GVAR(MBT_02_cannon_F): O_MBT_02_cannon_F {
        TKM_HEADER;
        crew = QGVAR(crew_F);
        class Turrets {
            class MainTurret {
                magazines[] = {"FA_24Rnd_125mm_APFSDS_T_Green", "FA_12Rnd_125mm_AMP_T_Green", "FA_12Rnd_125mm_3OF82", TKM_L18("FA_200Rnd_762_M80A2_HV_T_Green"), "4Rnd_125mm_cannon_missiles"};
            };
        };
    };
    // T-140/T-140K Angara: advanced 125mm — vanilla loadout kept (already green tracer).
    class GVAR(MBT_04_cannon_F): O_MBT_04_cannon_F {
        TKM_HEADER;
        crew = QGVAR(crew_F);
    };
    class GVAR(MBT_04_command_F): O_MBT_04_command_F {
        TKM_HEADER;
        crew = QGVAR(crew_F);
    };
    // BTR-K Kamysh: 30mm + coax -> FA green; ATGM kept.
    class GVAR(APC_Tracked_02_cannon_F): O_APC_Tracked_02_cannon_F {
        TKM_HEADER;
        crew = QGVAR(crew_F);
        class Turrets {
            class MainTurret {
                magazines[] = {TKM_L2("FA_60Rnd_30mm_APFSDS_T_Green"), TKM_L2("FA_140Rnd_30mm_API_T_Green"), TKM_L10("FA_200Rnd_762_M80A2_HV_T_Green"), TKM_L2("2Rnd_GAT_missiles_O")};
            };
        };
    };
    class GVAR(APC_Tracked_02_30mm_lxWS): O_APC_Tracked_02_30mm_lxWS {
        TKM_HEADER;
        crew = QGVAR(crew_F);
        class Turrets {
            class MainTurret {
                magazines[] = {TKM_L2("FA_60Rnd_30mm_APFSDS_T_Green"), TKM_L2("FA_140Rnd_30mm_API_T_Green"), TKM_L10("FA_200Rnd_762_M80A2_HV_T_Green"), TKM_L2("2Rnd_GAT_missiles_O")};
            };
        };
    };
    // ZSU-39 Tigris: quad 35mm AHEAD — vanilla loadout kept (already green tracer).
    class GVAR(APC_Tracked_02_AA_F): O_APC_Tracked_02_AA_F {
        TKM_HEADER;
        crew = QGVAR(crew_F);
    };
    // MSE-3 Marid RCWS: 12.7 -> FA green; 40mm GMG belt kept (no FA equivalent).
    class GVAR(APC_Wheeled_02_rcws_v2_F): O_APC_Wheeled_02_rcws_v2_F {
        TKM_HEADER;
        crew = QGVAR(crew_F);
        class Turrets {
            class MainTurret {
                magazines[] = {TKM_L2("64Rnd_40mm_G_belt"), TKM_L4("FA_200Rnd_127x99_Mk211Mod0_T_Green")};
            };
        };
    };

    // === Cars / soft ==============================================================
    class GVAR(MRAP_02_F): O_MRAP_02_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(MRAP_02_hmg_F): O_MRAP_02_hmg_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(MRAP_02_gmg_F): O_MRAP_02_gmg_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(Truck_02_covered_F): O_Truck_02_covered_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(Truck_02_transport_F): O_Truck_02_transport_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(Truck_02_box_F): O_Truck_02_box_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(Truck_02_medical_F): O_Truck_02_medical_F {
        TKM_HEADER;
        crew = QGVAR(medic_F);
    };
    class GVAR(Truck_02_Ammo_F): O_Truck_02_Ammo_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(Truck_02_fuel_F): O_Truck_02_fuel_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(Truck_02_MRL_F): O_Truck_02_MRL_F {
        TKM_HEADER;
        crew = QGVAR(crew_F);
    };
    class GVAR(Truck_02_cargo_F): O_Truck_02_cargo_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(Truck_02_flatbed_F): O_Truck_02_flatbed_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(UGV_01_rcws_F): O_UGV_01_rcws_F {
        TKM_HEADER;
    };
    class GVAR(UGV_01_medical_F): O_UGV_01_medical_F {
        TKM_HEADER;
    };

    // === Air ======================================================================
    class GVAR(Plane_Fighter_03_dynamicLoadout_F): O_Plane_Fighter_03_dynamicLoadout_F {
        TKM_HEADER;
        crew = QGVAR(Fighter_Pilot_F);
    };
    class GVAR(Plane_Fighter_03_Cluster_F): O_Plane_Fighter_03_Cluster_F {
        TKM_HEADER;
        crew = QGVAR(Fighter_Pilot_F);
    };
    class GVAR(VTOL_02_infantry_dynamicLoadout_F): O_VTOL_02_infantry_dynamicLoadout_F {
        TKM_HEADER;
        crew = QGVAR(helipilot_F);
    };
    class GVAR(VTOL_02_vehicle_dynamicLoadout_F): O_VTOL_02_vehicle_dynamicLoadout_F {
        TKM_HEADER;
        crew = QGVAR(helipilot_F);
    };
    class GVAR(Plane_Transport_01_infantry_F): O_Plane_Transport_01_infantry_F {
        TKM_HEADER;
        crew = QGVAR(Fighter_Pilot_F);
    };
    class GVAR(Plane_Transport_01_vehicle_F): O_Plane_Transport_01_vehicle_F {
        TKM_HEADER;
        crew = QGVAR(Fighter_Pilot_F);
    };
    class GVAR(Heli_Attack_02_dynamicLoadout_F): O_Heli_Attack_02_dynamicLoadout_F {
        TKM_HEADER;
        crew = QGVAR(helipilot_F);
    };
    class GVAR(Heli_Light_02_dynamicLoadout_F): O_Heli_Light_02_dynamicLoadout_F {
        TKM_HEADER;
        crew = QGVAR(helipilot_F);
    };
    class GVAR(Heli_Light_02_unarmed_F): O_Heli_Light_02_unarmed_F {
        TKM_HEADER;
        crew = QGVAR(helipilot_F);
    };

    // === Statics ==================================================================
    class GVAR(HMG_01_F): O_HMG_01_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(HMG_01_high_F): O_HMG_01_high_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(GMG_01_F): O_GMG_01_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(GMG_01_high_F): O_GMG_01_high_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(Mortar_01_F): O_Mortar_01_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(Static_AT_F): O_static_AT_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(Static_AA_F): O_static_AA_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(HMG_02_F): O_HMG_02_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(HMG_02_high_F): O_HMG_02_high_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(Static_Designator_02_F): O_Static_Designator_02_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };

    // === Boats ====================================================================
    class GVAR(Boat_Transport_02_F): O_Boat_Transport_02_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(Boat_Armed_01_hmg_F): O_Boat_Armed_01_hmg_F {
        TKM_HEADER;
        crew = QGVAR(crew_F);
    };
    class GVAR(SDV_01_F): O_SDV_01_F {
        TKM_HEADER;
        crew = QGVAR(diver_F);
    };

    // === Supplies =================================================================
    class GVAR(supplyCrate_F): O_supplyCrate_F {
        TKM_HEADER;
    };

    // === Drones (placeable units, re-factioned to ghost_O_Iran) ===================
    class GVAR(Rev_Darter): O_Rev_Darter { TKM_HEADER; };
    class GVAR(Rev_Bustard): O_Rev_Bustard { TKM_HEADER; };
    class GVAR(DRONE40_UAV_HE): GX_O_DRONE40_UAV_HE { TKM_HEADER; };
    class GVAR(DRONE40_UAV_RECON): GX_O_DRONE40_UAV_RECON { TKM_HEADER; };
    class GVAR(UAV_RC40_HE_RF): O_UAV_RC40_HE_RF { TKM_HEADER; };
    class GVAR(UAV_RC40_SENSOR_RF): O_UAV_RC40_SENSOR_RF { TKM_HEADER; };
    class GVAR(HONEYBADGER_UGV_AT): GX_O_HONEYBADGER_UGV_AT { TKM_HEADER; };
    class GVAR(HUNTER_SP_UAV): GX_O_HUNTER_SP_UAV { TKM_HEADER; };
    class GVAR(orion_F): orion_F_OPF { TKM_HEADER; };
    class GVAR(orion_F_KAB20): orion_F_KAB20_OPF { TKM_HEADER; };
    class GVAR(orion_F_KAB50): orion_F_KAB50_OPF { TKM_HEADER; };
    class GVAR(orion_F_KORNET): orion_F_KORNET_OPF { TKM_HEADER; };
    class GVAR(orlan_F): orlan_F_OPF { TKM_HEADER; };
    class GVAR(RQ11B_UAV): GX_O_RQ11B_UAV { TKM_HEADER; };
    class GVAR(Crocus_AP): O_Crocus_AP { TKM_HEADER; };
    class GVAR(Crocus_AP_TI): O_Crocus_AP_TI { TKM_HEADER; };
    class GVAR(Crocus_AT): O_Crocus_AT { TKM_HEADER; };
    class GVAR(Crocus_AT_TI): O_Crocus_AT_TI { TKM_HEADER; };
    class GVAR(KVN_AP): O_KVN_AP { TKM_HEADER; };
    class GVAR(KVN_AP_TI): O_KVN_AP_TI { TKM_HEADER; };
    class GVAR(KVN_AT): O_KVN_AT { TKM_HEADER; };
    class GVAR(KVN_AT_TI): O_KVN_AT_TI { TKM_HEADER; };
    class GVAR(Sting_F): O_Sting_F { TKM_HEADER; };
    class GVAR(Sting_TI_F): O_Sting_TI_F { TKM_HEADER; };
    class GVAR(UAV_02_lxWS): O_UAV_02_lxWS { TKM_HEADER; };
    class GVAR(G_UAV_02_IED_lxWS): O_G_UAV_02_IED_lxWS { TKM_HEADER; };
    class GVAR(UAV_02_dynamicLoadout_F): O_UAV_02_dynamicLoadout_F { TKM_HEADER; };
    class GVAR(T_UAV_04_CAS_F): O_T_UAV_04_CAS_F { TKM_HEADER; };
};
