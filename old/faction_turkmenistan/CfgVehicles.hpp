// Turkmenistan faction — duplicated from Aegis/Atlas Atlas_IND_AR_F (Ardistan), Independent side.
// Units inherit their Atlas role class; loadouts are restated with futureAmmo green-tracer
// magazines (5.45 / SVD / RPG / Titan-AA / 40mm-HE), keeping pistol/grenades/smoke/mines vanilla.
// (Aegis SMOKESHELLS_*/SMOKEGRENADES_* macros are expanded inline so no Aegis include is needed.)

#define TKM_HEADER \
    scope = 2; \
    scopeCurator = 2; \
    faction = "ghost_Turkmenistan"

// Repeat helpers (HEMTT's preprocessor has no BI/CBA TKM_LN or mag_N).
#define TKM_L2(x) x,x
#define TKM_L3(x) x,x,x
#define TKM_L4(x) x,x,x,x
#define TKM_L6(x) x,x,x,x,x,x
#define TKM_L8(x) x,x,x,x,x,x,x,x
#define TKM_L10(x) x,x,x,x,x,x,x,x,x,x

class CfgVehicles {
    // --- external base classes (A3_Atlas), forward-declared for inheritance ---
    class Atlas_I_AR_Soldier_SL_F;
    class Atlas_I_AR_RadioOperator_F;
    class Atlas_I_AR_Soldier_LAT_F;
    class Atlas_I_AR_Soldier_M_F;
    class Atlas_I_AR_Soldier_TL_F;
    class Atlas_I_AR_Soldier_AR_F;
    class Atlas_I_AR_Soldier_A_F;
    class Atlas_I_AR_Medic_F;
    class Atlas_I_AR_Soldier_GL_F;
    class Atlas_I_AR_Soldier_F;
    class Atlas_I_AR_soldier_AA_F;
    class Atlas_I_AR_soldier_AAA_F;
    class Atlas_I_AR_soldier_AAR_F;
    class Atlas_I_AR_Engineer_F;
    class Atlas_I_AR_Soldier_Exp_F;
    class Atlas_I_AR_Crew_F;
    class Atlas_I_AR_MRAP_02_F;
    class Atlas_I_AR_Truck_02_transport_F;
    class Atlas_I_AR_Wheeled_04_export_F;
    class Atlas_I_AR_APC_Tracked_02_30mm_lxWS;
    class Atlas_I_AR_MBT_02_cannon_F;
    class Atlas_I_AR_APC_Wheeled_04_cannon_v2_F;

    // === Infantry ===============================================================
    class GVAR(Soldier_SL_F): Atlas_I_AR_Soldier_SL_F {
        TKM_HEADER;
        magazines[] = {TKM_L8("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), TKM_L2("HandGrenade"), TKM_L4("SmokeShell"), TKM_L2("SmokeShellBlue")};
        respawnMagazines[] = {TKM_L8("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), TKM_L2("HandGrenade"), TKM_L4("SmokeShell"), TKM_L2("SmokeShellBlue")};
    };
    class GVAR(RadioOperator_F): Atlas_I_AR_RadioOperator_F {
        TKM_HEADER;
        magazines[] = {TKM_L10("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), "HandGrenade", "SmokeShell"};
        respawnMagazines[] = {TKM_L10("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), "HandGrenade", "SmokeShell"};
    };
    class GVAR(Soldier_LAT_F): Atlas_I_AR_Soldier_LAT_F {
        TKM_HEADER;
        magazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), "FA_RPG7_PG7VR2", "HandGrenade", TKM_L2("SmokeShell")};
        respawnMagazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), "FA_RPG7_PG7VR2", "HandGrenade", TKM_L2("SmokeShell")};
    };
    class GVAR(Soldier_M_F): Atlas_I_AR_Soldier_M_F {
        TKM_HEADER;
        magazines[] = {TKM_L8("FA_Aegis_10Rnd_762x54_SVD_HV_T_Green"), "HandGrenade", "SmokeShell"};
        respawnMagazines[] = {TKM_L8("FA_Aegis_10Rnd_762x54_SVD_HV_T_Green"), "HandGrenade", "SmokeShell"};
    };
    class GVAR(Soldier_TL_F): Atlas_I_AR_Soldier_TL_F {
        TKM_HEADER;
        magazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), TKM_L6("FA_1Rnd_40mm_Mk380_NRP"), TKM_L2("HandGrenade"), "SmokeShell", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell"};
        respawnMagazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), TKM_L6("FA_1Rnd_40mm_Mk380_NRP"), TKM_L2("HandGrenade"), "SmokeShell", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell"};
    };
    class GVAR(Soldier_AR_F): Atlas_I_AR_Soldier_AR_F {
        TKM_HEADER;
        magazines[] = {TKM_L4("FA_Aegis_45Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), "HandGrenade", "SmokeShell"};
        respawnMagazines[] = {TKM_L4("FA_Aegis_45Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), "HandGrenade", "SmokeShell"};
    };
    class GVAR(Soldier_A_F): Atlas_I_AR_Soldier_A_F {
        TKM_HEADER;
        magazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), "HandGrenade", "SmokeShell"};
        respawnMagazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), "HandGrenade", "SmokeShell"};
    };
    class GVAR(Medic_F): Atlas_I_AR_Medic_F {
        TKM_HEADER;
        magazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), "HandGrenade", TKM_L2("SmokeShell"), "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange"};
        respawnMagazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), "HandGrenade", TKM_L2("SmokeShell"), "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange"};
    };
    class GVAR(Soldier_GL_F): Atlas_I_AR_Soldier_GL_F {
        TKM_HEADER;
        magazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), TKM_L6("FA_1Rnd_40mm_Mk380_NRP"), TKM_L2("HandGrenade"), "SmokeShell", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), TKM_L6("FA_1Rnd_40mm_Mk380_NRP"), TKM_L2("HandGrenade"), "SmokeShell", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
    };
    class GVAR(Soldier_F): Atlas_I_AR_Soldier_F {
        TKM_HEADER;
        magazines[] = {TKM_L10("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), "HandGrenade", "SmokeShell"};
        respawnMagazines[] = {TKM_L10("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), "HandGrenade", "SmokeShell"};
    };
    class GVAR(soldier_AA_F): Atlas_I_AR_soldier_AA_F {
        TKM_HEADER;
        magazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), "FA_Titan_AA_MIM165_Sentry", TKM_L2("HandGrenade"), TKM_L2("SmokeShell")};
        respawnMagazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), "FA_Titan_AA_MIM165_Sentry", TKM_L2("HandGrenade"), TKM_L2("SmokeShell")};
    };
    class GVAR(soldier_AAA_F): Atlas_I_AR_soldier_AAA_F {
        TKM_HEADER;
        magazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), "HandGrenade", "SmokeShell"};
        respawnMagazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), "HandGrenade", "SmokeShell"};
    };
    class GVAR(soldier_AAR_F): Atlas_I_AR_soldier_AAR_F {
        TKM_HEADER;
        magazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), "HandGrenade", "SmokeShell"};
        respawnMagazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L2("17Rnd_9x21_Mag"), "HandGrenade", "SmokeShell"};
    };
    class GVAR(Engineer_F): Atlas_I_AR_Engineer_F {
        TKM_HEADER;
        magazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), "HandGrenade", TKM_L2("SmokeShell")};
        respawnMagazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), "HandGrenade", TKM_L2("SmokeShell")};
    };
    class GVAR(Soldier_Exp_F): Atlas_I_AR_Soldier_Exp_F {
        TKM_HEADER;
        magazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L3("APERSMine_Range_Mag"), TKM_L2("HandGrenade"), TKM_L2("SmokeShell")};
        respawnMagazines[] = {TKM_L6("FA_Aegis_30Rnd_545x39_7N44_T_Green"), TKM_L3("APERSMine_Range_Mag"), TKM_L2("HandGrenade"), TKM_L2("SmokeShell")};
    };

    // Vehicle crewman.
    class GVAR(Crew_F): Atlas_I_AR_Crew_F {
        TKM_HEADER;
        magazines[] = {TKM_L4("FA_Aegis_30Rnd_545x39_7N44_T_Green"), "HandGrenade", TKM_L2("SmokeShell")};
        respawnMagazines[] = {TKM_L4("FA_Aegis_30Rnd_545x39_7N44_T_Green"), "HandGrenade", TKM_L2("SmokeShell")};
    };

    // === Vehicles ===============================================================
    // Unarmed transport — faction re-tag; crew -> ghost rifleman.
    class GVAR(MRAP_02_F): Atlas_I_AR_MRAP_02_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };
    class GVAR(Truck_02_transport_F): Atlas_I_AR_Truck_02_transport_F {
        TKM_HEADER;
        crew = QGVAR(Soldier_F);
    };

    // BTR-100 export (30mm autocannon + 7.62 coax). Cannon rounds -> FA green.
    class GVAR(Wheeled_04_export_F): Atlas_I_AR_Wheeled_04_export_F {
        TKM_HEADER;
        crew = QGVAR(Crew_F);
        class Turrets {
            class MainTurret {
                magazines[] = {"FA_60Rnd_30mm_APFSDS_T_Green", "FA_250Rnd_30mm_HEI_T_Green", "2000Rnd_762x51_Belt_Green", "SmokeLauncherMag"};
            };
        };
    };

    // BTR-T Iskatel (30mm autocannon + 7.62 coax + ATGM). Cannon -> FA green; keep coax + missiles.
    class GVAR(APC_Tracked_02_30mm_lxWS): Atlas_I_AR_APC_Tracked_02_30mm_lxWS {
        TKM_HEADER;
        crew = QGVAR(Crew_F);
        class Turrets {
            class MainTurret {
                magazines[] = {TKM_L2("FA_60Rnd_30mm_APFSDS_T_Green"), TKM_L2("FA_250Rnd_30mm_HEI_T_Green"), TKM_L10("200Rnd_762x51_Belt_Green"), TKM_L2("2Rnd_GAT_missiles_O")};
            };
        };
    };

    // Sprut-SDM wheeled tank destroyer (125mm + 7.62 coax + gun-launched ATGM). Cannon -> FA green.
    class GVAR(APC_Wheeled_04_cannon_v2_F): Atlas_I_AR_APC_Wheeled_04_cannon_v2_F {
        TKM_HEADER;
        crew = QGVAR(Crew_F);
        class Turrets {
            class MainTurret {
                magazines[] = {"FA_24Rnd_125mm_APFSDS_T_Green", "FA_12Rnd_125mm_AMP_T_Green", "2000Rnd_762x51_Belt_Green", "4Rnd_125mm_cannon_missiles"};
            };
        };
    };

    // T-100 Varsuk MBT. Base turret is vanilla A3 (not readable here), so ADD FA green rounds
    // to the inherited loadout rather than risk dropping inherited coax/missile mags.
    class GVAR(MBT_02_cannon_F): Atlas_I_AR_MBT_02_cannon_F {
        TKM_HEADER;
        crew = QGVAR(Crew_F);
        class Turrets {
            class MainTurret {
                magazines[] += {"FA_24Rnd_125mm_APFSDS_T_Green", "FA_12Rnd_125mm_AMP_T_Green"};
            };
        };
    };
};
