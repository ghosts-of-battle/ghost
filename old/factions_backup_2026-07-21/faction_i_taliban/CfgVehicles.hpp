// Taliban faction — duplicate of the Western Sahara CDLC IND_TURA_lxWS (Tura) roster
// (blueprint: O:\GIT\ghost\old\tal dump). Loadouts are NOT changed (no futureAmmo here),
// except hireling/deserter/defector whose primary weapon becomes an Aegis M4A1
// (STANAG well, vanilla 5.56 mags). All units re-tagged to ghost_I_Taliban.

#define TKM_HEADER \
    scope = 2; \
    scopeCurator = 2; \
    side = 2; \
    faction = "ghost_I_Taliban"

#define TKM_L2(x) x,x
#define TKM_L4(x) x,x,x,x
#define TKM_L6(x) x,x,x,x,x,x

class CfgVehicles {
    // --- external base classes (WS CDLC / Aegis), forward-declared for inheritance ---
    class I_Tura_scout_lxWS;
    class I_Tura_watcher_lxWS;
    class I_Tura_enforcer_lxWS;
    class I_Tura_hireling_lxWS;
    class I_Tura_medic2_lxWS;
    class I_Tura_thug_lxWS;
    class I_Tura_deserter_lxWS;
    class I_Tura_defector_lxWS;
    class I_Tura_soldier_UAV_lxWS;
    class I_Tura_HeavyGunner_lxWS;
    class Aegis_I_Tura_HeavyGunner_2_lxWS;
    class I_Tura_crew_lxWS;
    class I_Tura_Offroad_armor_lxWS;
    class I_Tura_Offroad_armor_AT_lxWS;
    class I_Tura_Offroad_armor_armed_lxWS;
    class I_Tura_Offroad_armor_AA_lxWS;
    class I_Tura_Pickup_01_RF;
    class I_Tura_Pickup_01_hmg_rf;
    class I_Tura_Pickup_fuel_rf;
    class I_Tura_Pickup_01_Rocket_rf;
    class Aegis_I_Tura_APC_Wheeled_04_export_F;
    class I_Tura_UAV_02_IED_lxWS;
    class I_Tura_Mortar_lxWS;
    class I_Tura_HMG_02_lxWS;
    class I_Tura_HMG_02_high_lxWS;
    class I_Tura_ZU23_lxWS;
    class Atlas_I_AR_Truck_02_MRL_F;
    class I_G_Offroad_AA_lxWS;
    class I_A_Truck_02_aa_lxWS;
    class I_Pickup_aat_rf;
    // --- drone base classes (external mods: ArmaFPV, vnd, orion, orlan, gx_drones, Aegis, AddGis, Atlas, WS CDLC) ---
    class Aegis_I_UAV_07_F;
    class I_Crocus_AP;
    class I_Crocus_AP_TI;
    class I_Crocus_AT;
    class I_Crocus_AT_TI;
    class I_KVN_AP;
    class I_KVN_AP_TI;
    class I_KVN_AT;
    class I_KVN_AT_TI;
    class orion_F_IND;
    class orion_F_KAB20_IND;
    class orion_F_KAB50_IND;
    class orion_F_KORNET_IND;
    class orlan_F_IND;
    class GX_I_RQ11B_UAV;
    class GX_I_HUNTER_SP_UAV;
    class I_UAV_02_lxWS;
    class I_UAV_01_F;
    class AddGis_I_AM_UAV_02_IED_F;
    class Atlas_I_I_UAV_02_lxWS;

    // === Infantry (loadouts inherited unchanged unless noted) =====================
    class GVAR(scout_F): I_Tura_scout_lxWS {
        TKM_HEADER;
    };
    class GVAR(watcher_F): I_Tura_watcher_lxWS {
        TKM_HEADER;
    };
    class GVAR(enforcer_F): I_Tura_enforcer_lxWS {
        TKM_HEADER;
    };
    class GVAR(medic_F): I_Tura_medic2_lxWS {
        TKM_HEADER;
    };
    class GVAR(thug_F): I_Tura_thug_lxWS {
        TKM_HEADER;
    };
    class GVAR(soldier_UAV_F): I_Tura_soldier_UAV_lxWS {
        TKM_HEADER;
        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) addBackpack (selectRandom ['I_KVN_AT_TI_Bag','I_KVN_AT_Bag','I_KVN_AP_TI_Bag','I_KVN_AP_Bag','I_Crocus_AT_TI_Bag','I_Crocus_AT_Bag','I_Crocus_AP_TI_Bag','I_Crocus_AP_Bag']); };";
        };
    };
    class GVAR(HeavyGunner_F): I_Tura_HeavyGunner_lxWS {
        TKM_HEADER;
    };
    class GVAR(HeavyGunner_2_F): Aegis_I_Tura_HeavyGunner_2_lxWS {
        TKM_HEADER;
    };
    class GVAR(crew_F): I_Tura_crew_lxWS {
        TKM_HEADER;
    };

    // --- the three M4A1 conversions (per request) ---
    // Hireling: was PDW2000 + RPG-32 -> M4A1 + RPG-32, vanilla STANAG mags.
    class GVAR(hireling_F): I_Tura_hireling_lxWS {
        TKM_HEADER;
        weapons[] = {"Aegis_arifle_M4A1_F", "launch_RPG32_F", "Throw", "Put"};
        respawnWeapons[] = {"Aegis_arifle_M4A1_F", "launch_RPG32_F", "Throw", "Put"};
        magazines[] = {TKM_L6("30Rnd_556x45_Stanag"), "RPG32_F"};
        respawnMagazines[] = {TKM_L6("30Rnd_556x45_Stanag"), "RPG32_F"};
    };
    // Deserter: was Galat (7.62x39) -> plain M4A1, vanilla STANAG mags, smokes kept.
    class GVAR(deserter_F): I_Tura_deserter_lxWS {
        TKM_HEADER;
        weapons[] = {"Aegis_arifle_M4A1_F", "Throw", "Put"};
        respawnWeapons[] = {"Aegis_arifle_M4A1_F", "Throw", "Put"};
        magazines[] = {TKM_L6("30Rnd_556x45_Stanag"), "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple"};
        respawnMagazines[] = {TKM_L6("30Rnd_556x45_Stanag"), "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple"};
    };
    // Defector (RGL role): was SLR GL (lxWS) -> M4A1 GL, vanilla STANAG + 40mm HE.
    class GVAR(defector_F): I_Tura_defector_lxWS {
        TKM_HEADER;
        weapons[] = {"Aegis_arifle_M4A1_GL_F", "Throw", "Put"};
        respawnWeapons[] = {"Aegis_arifle_M4A1_GL_F", "Throw", "Put"};
        magazines[] = {TKM_L6("30Rnd_556x45_Stanag"), "SmokeShell", TKM_L4("1Rnd_HE_Grenade_shell")};
        respawnMagazines[] = {TKM_L6("30Rnd_556x45_Stanag"), "SmokeShell", TKM_L4("1Rnd_HE_Grenade_shell")};
    };

    // === Cars =====================================================================
    class GVAR(Offroad_armor_F): I_Tura_Offroad_armor_lxWS {
        TKM_HEADER;
        crew = QGVAR(watcher_F);
    };
    class GVAR(Offroad_armor_AT_F): I_Tura_Offroad_armor_AT_lxWS {
        TKM_HEADER;
        crew = QGVAR(watcher_F);
    };
    class GVAR(Offroad_armor_armed_F): I_Tura_Offroad_armor_armed_lxWS {
        TKM_HEADER;
        crew = QGVAR(watcher_F);
    };
    class GVAR(Offroad_armor_AA_F): I_Tura_Offroad_armor_AA_lxWS {
        TKM_HEADER;
        crew = QGVAR(watcher_F);
    };
    class GVAR(Pickup_F): I_Tura_Pickup_01_RF {
        TKM_HEADER;
        crew = QGVAR(watcher_F);
    };
    class GVAR(Pickup_hmg_F): I_Tura_Pickup_01_hmg_rf {
        TKM_HEADER;
        crew = QGVAR(watcher_F);
    };
    class GVAR(Pickup_fuel_F): I_Tura_Pickup_fuel_rf {
        TKM_HEADER;
        crew = QGVAR(watcher_F);
    };
    class GVAR(Pickup_Rocket_F): I_Tura_Pickup_01_Rocket_rf {
        TKM_HEADER;
        crew = QGVAR(watcher_F);
    };

    // === Armor ====================================================================
    class GVAR(APC_Wheeled_04_export_F): Aegis_I_Tura_APC_Wheeled_04_export_F {
        TKM_HEADER;
        crew = QGVAR(crew_F);
    };

    // === Autonomous ===============================================================
    // (crew stays I_UAV_AI — inherited)
    class GVAR(UAV_02_IED_F): I_Tura_UAV_02_IED_lxWS {
        TKM_HEADER;
    };

    // === Statics ==================================================================
    class GVAR(Mortar_F): I_Tura_Mortar_lxWS {
        TKM_HEADER;
        crew = QGVAR(deserter_F);
    };
    class GVAR(HMG_02_F): I_Tura_HMG_02_lxWS {
        TKM_HEADER;
        crew = QGVAR(deserter_F);
    };
    class GVAR(HMG_02_high_F): I_Tura_HMG_02_high_lxWS {
        TKM_HEADER;
        crew = QGVAR(deserter_F);
    };
    class GVAR(ZU23_F): I_Tura_ZU23_lxWS {
        TKM_HEADER;
        crew = QGVAR(deserter_F);
    };
    // Base artillery - identical config in Taliban + Afghanistan (same turret).
    class GVAR(Truck_02_MRL_F): Atlas_I_AR_Truck_02_MRL_F {
        TKM_HEADER;
        crew = QGVAR(crew_F);
    };
    // AA vehicles (WS + RF CDLC) - same set in Taliban + Afghanistan.
    class GVAR(Offroad_AA_lxWS): I_G_Offroad_AA_lxWS { TKM_HEADER; crew = QGVAR(crew_F); };
    class GVAR(Truck_02_aa_lxWS): I_A_Truck_02_aa_lxWS { TKM_HEADER; crew = QGVAR(crew_F); };
    class GVAR(Pickup_aat_rf): I_Pickup_aat_rf { TKM_HEADER; crew = QGVAR(crew_F); };

    // === Drones (placeable units, re-factioned to ghost_I_Taliban) ================
    // (ghost_..._UAV_02_IED_F, the Tura IED UAV, is already defined above)
    class GVAR(Aegis_UAV_07_F): Aegis_I_UAV_07_F { TKM_HEADER; };
    class GVAR(Crocus_AP): I_Crocus_AP { TKM_HEADER; };
    class GVAR(Crocus_AP_TI): I_Crocus_AP_TI { TKM_HEADER; };
    class GVAR(Crocus_AT): I_Crocus_AT { TKM_HEADER; };
    class GVAR(Crocus_AT_TI): I_Crocus_AT_TI { TKM_HEADER; };
    class GVAR(KVN_AP): I_KVN_AP { TKM_HEADER; };
    class GVAR(KVN_AP_TI): I_KVN_AP_TI { TKM_HEADER; };
    class GVAR(KVN_AT): I_KVN_AT { TKM_HEADER; };
    class GVAR(KVN_AT_TI): I_KVN_AT_TI { TKM_HEADER; };
    class GVAR(orion_F): orion_F_IND { TKM_HEADER; };
    class GVAR(orion_F_KAB20): orion_F_KAB20_IND { TKM_HEADER; };
    class GVAR(orion_F_KAB50): orion_F_KAB50_IND { TKM_HEADER; };
    class GVAR(orion_F_KORNET): orion_F_KORNET_IND { TKM_HEADER; };
    class GVAR(orlan_F): orlan_F_IND { TKM_HEADER; };
    class GVAR(RQ11B_UAV): GX_I_RQ11B_UAV { TKM_HEADER; };
    class GVAR(HUNTER_SP_UAV): GX_I_HUNTER_SP_UAV { TKM_HEADER; };
    class GVAR(UAV_02_lxWS): I_UAV_02_lxWS { TKM_HEADER; };
    class GVAR(UAV_01_F): I_UAV_01_F { TKM_HEADER; };
    class GVAR(AM_UAV_02_IED_F): AddGis_I_AM_UAV_02_IED_F { TKM_HEADER; };
    class GVAR(Atlas_UAV_02_lxWS): Atlas_I_I_UAV_02_lxWS { TKM_HEADER; };
};
