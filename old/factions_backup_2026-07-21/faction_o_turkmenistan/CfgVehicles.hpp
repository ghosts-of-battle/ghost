// Turkmenistan (East) — 1:1 duplicate of Aegis/Atlas Atlas_OPF_T_F (Takistan), side 0 / OPFOR.
// Every unit inherits its Atlas_O_T_* class (models/gear/textures preserved) and is re-tagged
// to ghost_O_Turkmenistan. NO futureAmmo — this faction runs on vanilla / WS-CDLC ammo only.
// Weapon kit (vanilla AK-12 family, no FA):
//   riflemen        -> AK-12    (arifle_AK12_F)      + 30Rnd_545x39_Mag_F
//   carbine/AA/AT   -> AK-12U   (arifle_AK12U_F)     + 30Rnd_545x39_Mag_F
//   grenadier (GL)  -> AK-12 GL (arifle_AK12_GL_F)   + 30Rnd_545x39_Mag_F + 1Rnd_HE_Grenade_shell
//   autorifleman    -> RPK-12   (arifle_RPK12_F)     + 30Rnd_545x39_Mag_F
//   marksman        -> SLR-V    (arifle_SLR_V_lxWS)  + 20Rnd_762x51_slr_lxWS  (no AK-12 DMR variant)
// Pistol/PDW crew, pilots, and all vehicle/static turrets keep their inherited vanilla loadouts.

#define TKM_HEADER \
    scope = 2; \
    scopeCurator = 2; \
    side = 0; \
    faction = "ghost_O_Turkmenistan"

class CfgVehicles {
    // --- external base classes (A3_Atlas), forward-declared for inheritance ---
    class Atlas_O_T_soldier_F;
    class Atlas_O_T_soldier_A_F;
    class Atlas_O_T_soldier_AR_F;
    class Atlas_O_T_soldier_GL_F;
    class Atlas_O_T_soldier_M_F;
    class Atlas_O_T_soldier_AA_F;
    class Atlas_O_T_soldier_AT_F;
    class Atlas_O_T_soldier_LAT_F;
    class Atlas_O_T_soldier_SL_F;
    class Atlas_O_T_soldier_TL_F;
    class Atlas_O_T_medic_F;
    class Atlas_O_T_RadioOperator_F;
    class Atlas_O_T_crew_F;
    class Atlas_O_T_engineer_F;
    class Atlas_O_T_officer_F;
    class Atlas_O_T_helipilot_F;
    class Atlas_O_T_helicrew_F;
    class Atlas_O_T_Fighter_Pilot_F;
    class Atlas_O_T_soldier_SL_conscript_F;
    class Atlas_O_T_soldier_TL_conscript_F;
    class Atlas_O_T_medic_conscript_F;
    class Atlas_O_T_soldier_1_conscript_F;
    class Atlas_O_T_soldier_2_conscript_F;
    class Atlas_O_T_soldier_LAT_conscript_F;
    class Atlas_O_T_soldier_M_conscript_F;
    class Atlas_O_T_soldier_AR_conscript_F;
    class Atlas_O_T_RadioOperator_conscript_F;
    class Atlas_O_T_Soldier_GL_Conscript_F;
    class Atlas_O_T_Quadbike_01_F;
    class Atlas_O_T_LSV_02_armed_F;
    class Atlas_O_T_LSV_02_unarmed_F;
    class Atlas_O_T_LSV_02_AT_F;
    class Atlas_O_T_Truck_02_F;
    class Atlas_O_T_Truck_02_transport_F;
    class Atlas_O_T_Truck_02_box_F;
    class Atlas_O_T_Truck_02_medical_F;
    class Atlas_O_T_Truck_02_Ammo_F;
    class Atlas_O_T_Truck_02_fuel_F;
    class Atlas_O_T_Truck_02_cargo_F;
    class Atlas_O_T_Truck_02_flatbed_F;
    class Atlas_O_T_Truck_02_aa_lxWS;
    class Atlas_O_T_Truck_02_MRL_F;
    class Atlas_O_T_APC_Wheeled_02_rcws_v2_F;
    class Atlas_O_T_APC_Wheeled_02_hmg_lxWS;
    class Atlas_O_T_APC_Wheeled_02_unarmed_lxWS;
    class Atlas_O_T_APC_Tracked_02_cannon_F;
    class Atlas_O_T_MBT_02_cannon_F;
    class Atlas_O_T_Heli_Light_02_dynamicLoadout_F;
    class Atlas_O_T_Heli_Light_02_unarmed_F;
    class Atlas_O_T_Heli_Attack_02_dynamicLoadout_F;
    class Atlas_O_T_Heli_Attack_04_F;
    class Atlas_O_T_Plane_Fighter_03_dynamicLoadout_F;
    class Atlas_O_T_Mortar_01_F;
    class Atlas_O_T_HMG_01_F;
    class Atlas_O_T_HMG_01_high_F;
    class Atlas_O_T_HMG_02_F;
    class Atlas_O_T_HMG_02_high_F;
    class Atlas_O_T_GMG_01_F;
    class Atlas_O_T_GMG_01_high_F;
    class Atlas_O_T_Static_AT_F;
    class Atlas_O_T_Static_AA_F;
    class Atlas_O_T_supplyCrate_F;
    // --- drone base classes (external mods: ArmaFPV, vnd, orion, orlan, gx_drones, RF, WS CDLC) ---
    class O_Crocus_AP;
    class O_Crocus_AP_TI;
    class O_Crocus_AT;
    class O_Crocus_AT_TI;
    class O_KVN_AP;
    class O_KVN_AP_TI;
    class O_KVN_AT;
    class O_KVN_AT_TI;
    class orion_F_OPF;
    class orion_F_KAB20_OPF;
    class orion_F_KAB50_OPF;
    class orion_F_KORNET_OPF;
    class orlan_F_OPF;
    class GX_O_RQ11B_UAV;
    class GX_O_HUNTER_SP_UAV;
    class O_UAV_02_lxWS;
    class O_G_UAV_02_IED_lxWS;
    class O_UAV_RC40_HE_RF;
    class GX_O_DRONE40_UAV_HE;
    class O_Rev_Darter;
    class O_UAV_01_F;
    class GX_O_HONEYBADGER_UGV_AT;
    class O_Rev_Bustard;

    // === Infantry — regulars: AK-12 rifles / AK-12U carbines / AK-12 GL / RPK-12 / SLR DMR ==
    class GVAR(soldier_F): Atlas_O_T_soldier_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AK12_F", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell"};
    };
    class GVAR(soldier_A_F): Atlas_O_T_soldier_A_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AK12_F", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell"};
    };
    class GVAR(soldier_GL_F): Atlas_O_T_soldier_GL_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12_GL_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AK12_GL_F", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell"};
    };
    class GVAR(soldier_AR_F): Atlas_O_T_soldier_AR_F {
        TKM_HEADER;
        weapons[] = {"arifle_RPK12_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_RPK12_F", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "SmokeShell", "SmokeShell"};
    };
    class GVAR(soldier_M_F): Atlas_O_T_soldier_M_F {
        TKM_HEADER;
        weapons[] = {"arifle_SLR_V_lxWS", "Throw", "Put", "Rangefinder"};
        respawnWeapons[] = {"arifle_SLR_V_lxWS", "Throw", "Put", "Rangefinder"};
        magazines[] = {"20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell"};
    };
    class GVAR(soldier_AA_F): Atlas_O_T_soldier_AA_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12U_F", "launch_O_Titan_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AK12U_F", "launch_O_Titan_F", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "Titan_AA", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "Titan_AA", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell"};
    };
    class GVAR(soldier_AT_F): Atlas_O_T_soldier_AT_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12U_F", "launch_O_Titan_short_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AK12U_F", "launch_O_Titan_short_F", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "Titan_AT", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "Titan_AT", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell"};
    };
    class GVAR(soldier_LAT_F): Atlas_O_T_soldier_LAT_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12_F", "launch_RPG32_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AK12_F", "launch_RPG32_F", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "RPG32_F", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "RPG32_F", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell"};
    };
    class GVAR(soldier_SL_F): Atlas_O_T_soldier_SL_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12_F", "hgun_Pistol_01_F", "Throw", "Put", "Binocular"};
        respawnWeapons[] = {"arifle_AK12_F", "hgun_Pistol_01_F", "Throw", "Put", "Binocular"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
    };
    class GVAR(soldier_TL_F): Atlas_O_T_soldier_TL_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12_GL_F", "hgun_Pistol_01_F", "Throw", "Put", "Binocular"};
        respawnWeapons[] = {"arifle_AK12_GL_F", "hgun_Pistol_01_F", "Throw", "Put", "Binocular"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell"};
    };
    class GVAR(medic_F): Atlas_O_T_medic_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AK12_F", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange"};
    };
    class GVAR(RadioOperator_F): Atlas_O_T_RadioOperator_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AK12_F", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell"};
    };
    class GVAR(soldier_UAV_F): GVAR(soldier_F) {
        TKM_HEADER;
        displayName = "[Ghost] UAV Operator";
        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) addBackpack (selectRandom ['O_Sting_TI_Bag','O_Sting_Bag','O_KVN_AT_TI_Bag','O_KVN_AT_Bag','O_KVN_AP_TI_Bag','O_KVN_AP_Bag','O_Crocus_AT_TI_Bag','O_Crocus_AT_Bag','O_Crocus_AP_TI_Bag','O_Crocus_AP_Bag','O_UAV_02_backpack_lxWS','O_UAV_01_backpack_F']); };";
        };
    };
    class GVAR(engineer_F): Atlas_O_T_engineer_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12U_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AK12U_F", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
    };

    // === Infantry — re-tag only (9x21 PDW/pistol or pilot kit; no primary rifle) ===========
    class GVAR(crew_F): Atlas_O_T_crew_F {
        TKM_HEADER;
    };
    class GVAR(officer_F): Atlas_O_T_officer_F {
        TKM_HEADER;
    };
    class GVAR(helipilot_F): Atlas_O_T_helipilot_F {
        TKM_HEADER;
    };
    class GVAR(helicrew_F): Atlas_O_T_helicrew_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12U_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AK12U_F", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "SmokeShellRed", "SmokeShellOrange", "SmokeShellYellow"};
    };
    class GVAR(Fighter_Pilot_F): Atlas_O_T_Fighter_Pilot_F {
        TKM_HEADER;
    };

    // === Infantry — conscripts: AK-12 rifles / AK-12 GL / RPK-12 AR / SLR marksman ==========
    class GVAR(soldier_1_conscript_F): Atlas_O_T_soldier_1_conscript_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AK12_F", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer"};
    };
    class GVAR(medic_conscript_F): Atlas_O_T_medic_conscript_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AK12_F", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange"};
    };
    class GVAR(soldier_LAT_conscript_F): Atlas_O_T_soldier_LAT_conscript_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12_F", "launch_RPG7_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AK12_F", "launch_RPG7_F", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "RPG7_F", "HandGrenade_Guer", "HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "RPG7_F", "HandGrenade_Guer", "HandGrenade_Guer"};
    };
    class GVAR(RadioOperator_conscript_F): Atlas_O_T_RadioOperator_conscript_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AK12_F", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer"};
    };
    // RPK-12 autorifleman conscript (soldier_M_conscript stays SLR-V marksman below).
    class GVAR(soldier_AR_conscript_F): Atlas_O_T_soldier_AR_conscript_F {
        TKM_HEADER;
        weapons[] = {"arifle_RPK12_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_RPK12_F", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F"};
    };
    class GVAR(soldier_2_conscript_F): Atlas_O_T_soldier_2_conscript_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AK12_F", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer"};
    };
    class GVAR(soldier_SL_conscript_F): Atlas_O_T_soldier_SL_conscript_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12_F", "hgun_Pistol_01_F", "Throw", "Put", "Binocular"};
        respawnWeapons[] = {"arifle_AK12_F", "hgun_Pistol_01_F", "Throw", "Put", "Binocular"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "SmokeShell"};
    };
    class GVAR(soldier_TL_conscript_F): Atlas_O_T_soldier_TL_conscript_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12_GL_F", "hgun_Pistol_01_F", "Throw", "Put", "Binocular"};
        respawnWeapons[] = {"arifle_AK12_GL_F", "hgun_Pistol_01_F", "Throw", "Put", "Binocular"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "HandGrenade_Guer", "HandGrenade_Guer", "SmokeShell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"};
    };
    class GVAR(soldier_M_conscript_F): Atlas_O_T_soldier_M_conscript_F {
        TKM_HEADER;
        weapons[] = {"arifle_SLR_V_lxWS", "Throw", "Put"};
        respawnWeapons[] = {"arifle_SLR_V_lxWS", "Throw", "Put"};
        magazines[] = {"20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "HandGrenade_Guer", "HandGrenade_Guer"};
        respawnMagazines[] = {"20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "20Rnd_762x51_slr_lxWS", "HandGrenade_Guer", "HandGrenade_Guer"};
    };
    class GVAR(Soldier_GL_Conscript_F): Atlas_O_T_Soldier_GL_Conscript_F {
        TKM_HEADER;
        weapons[] = {"arifle_AK12_GL_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AK12_GL_F", "Throw", "Put"};
        magazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "30Rnd_545x39_Mag_F", "HandGrenade_Guer", "HandGrenade_Guer", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell"};
    };

    // === Cars / soft ==============================================================
    class GVAR(Quadbike_01_F): Atlas_O_T_Quadbike_01_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(LSV_02_armed_F): Atlas_O_T_LSV_02_armed_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(LSV_02_unarmed_F): Atlas_O_T_LSV_02_unarmed_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(LSV_02_AT_F): Atlas_O_T_LSV_02_AT_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(Truck_02_F): Atlas_O_T_Truck_02_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(Truck_02_transport_F): Atlas_O_T_Truck_02_transport_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(Truck_02_box_F): Atlas_O_T_Truck_02_box_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(Truck_02_medical_F): Atlas_O_T_Truck_02_medical_F {
        TKM_HEADER;
        crew = QGVAR(medic_F);
    };
    class GVAR(Truck_02_Ammo_F): Atlas_O_T_Truck_02_Ammo_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(Truck_02_fuel_F): Atlas_O_T_Truck_02_fuel_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(Truck_02_cargo_F): Atlas_O_T_Truck_02_cargo_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(Truck_02_flatbed_F): Atlas_O_T_Truck_02_flatbed_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(Truck_02_aa_lxWS): Atlas_O_T_Truck_02_aa_lxWS {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(Truck_02_MRL_F): Atlas_O_T_Truck_02_MRL_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };

    // === Armor (vanilla turret ammo — no futureAmmo) ==============================
    class GVAR(APC_Wheeled_02_rcws_v2_F): Atlas_O_T_APC_Wheeled_02_rcws_v2_F {
        TKM_HEADER;
        crew = QGVAR(crew_F);
    };
    class GVAR(APC_Wheeled_02_hmg_lxWS): Atlas_O_T_APC_Wheeled_02_hmg_lxWS {
        TKM_HEADER;
        crew = QGVAR(crew_F);
    };
    class GVAR(APC_Wheeled_02_unarmed_lxWS): Atlas_O_T_APC_Wheeled_02_unarmed_lxWS {
        TKM_HEADER;
        crew = QGVAR(crew_F);
    };
    class GVAR(APC_Tracked_02_cannon_F): Atlas_O_T_APC_Tracked_02_cannon_F {
        TKM_HEADER;
        crew = QGVAR(crew_F);
    };
    class GVAR(MBT_02_cannon_F): Atlas_O_T_MBT_02_cannon_F {
        TKM_HEADER;
        crew = QGVAR(crew_F);
    };

    // === Air (not in any group tree — same as source faction) =====================
    class GVAR(Heli_Light_02_dynamicLoadout_F): Atlas_O_T_Heli_Light_02_dynamicLoadout_F {
        TKM_HEADER;
        crew = QGVAR(helipilot_F);
    };
    class GVAR(Heli_Light_02_unarmed_F): Atlas_O_T_Heli_Light_02_unarmed_F {
        TKM_HEADER;
        crew = QGVAR(helipilot_F);
    };
    class GVAR(Heli_Attack_02_dynamicLoadout_F): Atlas_O_T_Heli_Attack_02_dynamicLoadout_F {
        TKM_HEADER;
        crew = QGVAR(helipilot_F);
    };
    class GVAR(Heli_Attack_04_F): Atlas_O_T_Heli_Attack_04_F {
        TKM_HEADER;
        crew = QGVAR(helipilot_F);
    };
    class GVAR(Plane_Fighter_03_dynamicLoadout_F): Atlas_O_T_Plane_Fighter_03_dynamicLoadout_F {
        TKM_HEADER;
        crew = QGVAR(Fighter_Pilot_F);
    };

    // === Statics ==================================================================
    class GVAR(Mortar_01_F): Atlas_O_T_Mortar_01_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(HMG_01_F): Atlas_O_T_HMG_01_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(HMG_01_high_F): Atlas_O_T_HMG_01_high_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(HMG_02_F): Atlas_O_T_HMG_02_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(HMG_02_high_F): Atlas_O_T_HMG_02_high_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(GMG_01_F): Atlas_O_T_GMG_01_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(GMG_01_high_F): Atlas_O_T_GMG_01_high_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(Static_AT_F): Atlas_O_T_Static_AT_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };
    class GVAR(Static_AA_F): Atlas_O_T_Static_AA_F {
        TKM_HEADER;
        crew = QGVAR(soldier_F);
    };

    // === Supplies =================================================================
    // (source crate never sets faction= — set it explicitly here)
    class GVAR(supplyCrate_F): Atlas_O_T_supplyCrate_F {
        TKM_HEADER;
    };

    // === Drones (placeable units, re-factioned to ghost_O_Turkmenistan) ===========
    class GVAR(Crocus_AP): O_Crocus_AP { TKM_HEADER; };
    class GVAR(Crocus_AP_TI): O_Crocus_AP_TI { TKM_HEADER; };
    class GVAR(Crocus_AT): O_Crocus_AT { TKM_HEADER; };
    class GVAR(Crocus_AT_TI): O_Crocus_AT_TI { TKM_HEADER; };
    class GVAR(KVN_AP): O_KVN_AP { TKM_HEADER; };
    class GVAR(KVN_AP_TI): O_KVN_AP_TI { TKM_HEADER; };
    class GVAR(KVN_AT): O_KVN_AT { TKM_HEADER; };
    class GVAR(KVN_AT_TI): O_KVN_AT_TI { TKM_HEADER; };
    class GVAR(orion_F): orion_F_OPF { TKM_HEADER; };
    class GVAR(orion_F_KAB20): orion_F_KAB20_OPF { TKM_HEADER; };
    class GVAR(orion_F_KAB50): orion_F_KAB50_OPF { TKM_HEADER; };
    class GVAR(orion_F_KORNET): orion_F_KORNET_OPF { TKM_HEADER; };
    class GVAR(orlan_F): orlan_F_OPF { TKM_HEADER; };
    class GVAR(RQ11B_UAV): GX_O_RQ11B_UAV { TKM_HEADER; };
    class GVAR(HUNTER_SP_UAV): GX_O_HUNTER_SP_UAV { TKM_HEADER; };
    class GVAR(UAV_02_lxWS): O_UAV_02_lxWS { TKM_HEADER; };
    class GVAR(G_UAV_02_IED_lxWS): O_G_UAV_02_IED_lxWS { TKM_HEADER; };
    class GVAR(UAV_RC40_HE_RF): O_UAV_RC40_HE_RF { TKM_HEADER; };
    class GVAR(DRONE40_UAV_HE): GX_O_DRONE40_UAV_HE { TKM_HEADER; };
    class GVAR(Rev_Darter): O_Rev_Darter { TKM_HEADER; };
    class GVAR(UAV_01_F): O_UAV_01_F { TKM_HEADER; };
    class GVAR(HONEYBADGER_UGV_AT): GX_O_HONEYBADGER_UGV_AT { TKM_HEADER; };
    class GVAR(Rev_Bustard): O_Rev_Bustard { TKM_HEADER; };
};
