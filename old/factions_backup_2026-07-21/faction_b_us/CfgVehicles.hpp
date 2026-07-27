// faction_b_us -- in-place FA red-tracer conversion for BLUFOR NATO
// (BLU_F / BLU_T_F / BLU_W_F / BLU_NATO_lxWS). GENERATED - regenerate via generate.py.
#define GHOST_BACKPACK_EH class EventHandlers { init = "if (local (_this select 0)) then { private _u = _this select 0; if (_u getUnitTrait 'medic') then { _u addBackpack 'ghost_backpack_Backpack_Kitbag_Medic_RGR'; private _bp = backpackContainer _u; _bp addItemCargoGlobal ['ghost_medbags_FirstAid',1]; _bp addItemCargoGlobal ['ghost_medbags_DrugKit',1]; } else { _u addBackpack 'B_AssaultPack_mcamo'; if (random 1 < 0.3333) then { (backpackContainer _u) addMagazineCargoGlobal [selectRandom ['GX_DEPLOYABLE_MAGAZINE_UAV_02_lxWS','GX_DEPLOYABLE_MAGAZINE_UAV_01','GX_DEPLOYABLE_MAGAZINE_BLACKHORNET_UAV'],1]; }; }; };"; };

class CfgVehicles {
    class Atlas_B_D_Soldier_JSOC_base;
    class Atlas_B_Soldier_JSOC_base;
    class Atlas_B_T_Soldier_JSOC_base;
    class Atlas_B_W_Soldier_JSOC_base;
    class B_Soldier_A_F;
    class B_Soldier_F;
    class B_Soldier_SL_F;
    class B_Soldier_TL_F;
    class B_Soldier_lite_F;
    class B_Soldier_recon_base;
    class B_Soldier_sniper_base_F;
    class B_T_Pilot_F;
    class B_T_Soldier_F;
    class B_engineer_F;
    class B_ghillie_base_F;
    class B_medic_F;
    class B_recon_AR_F;
    class B_recon_GL_F;
    class B_soldier_AAA_F;
    class B_soldier_AAR_F;
    class B_soldier_AAT_F;
    class B_soldier_AA_F;
    class B_soldier_AR_F;
    class B_soldier_AT_F;
    class B_soldier_LAT2_F;
    class B_soldier_LAT_F;
    class B_soldier_M_F;
    class B_soldier_PG_F;
    class B_soldier_exp_F;
    class B_soldier_repair_F;
    class B_support_AMG_F;
    class B_support_AMort_F;
    class B_support_GMG_F;
    class B_support_MG_F;
    class B_support_Mort_F;
    class StaticMGWeapon;
    class HMG_02_base_F: StaticMGWeapon {
        class Turrets {
            class MainTurret;
        };
    };
    class HMG_02_high_base_F: HMG_02_base_F {
        class Turrets {
            class MainTurret;
        };
    };

    class Atlas_B_JSOC_Exp_F: Atlas_B_Soldier_JSOC_base {  // BLU_F
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_JSOC_F: Atlas_B_Soldier_JSOC_base {  // BLU_F
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_JSOC_JTAC_F: Atlas_B_Soldier_JSOC_base {  // BLU_F
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_JSOC_LAT_F: Atlas_B_Soldier_JSOC_base {  // BLU_F
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MRAWS_HEAT_F", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MRAWS_HEAT_F", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_JSOC_M_F: Atlas_B_Soldier_JSOC_base {  // BLU_F
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_JSOC_Medic_F: Atlas_B_Soldier_JSOC_base {  // BLU_F
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_JSOC_SL_F: Atlas_B_Soldier_JSOC_base {  // BLU_F
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue", "3Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue", "3Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_JSOC_TL_F: Atlas_B_Soldier_JSOC_base {  // BLU_F
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_RadioOperator_F: B_Soldier_F {  // BLU_F
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_Recon_Sharpshooter_F: B_Soldier_recon_base {  // BLU_F
        magazines[] = {"FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_recon_F: B_Soldier_recon_base {  // BLU_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_recon_JTAC_F: B_Soldier_recon_base {  // BLU_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_recon_LAT_F: B_Soldier_recon_base {  // BLU_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_recon_M_F: B_Soldier_recon_base {  // BLU_F
        magazines[] = {"FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_recon_TL_F: B_Soldier_recon_base {  // BLU_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_recon_exp_F: B_Soldier_recon_base {  // BLU_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_recon_medic_F: B_Soldier_recon_base {  // BLU_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_sniper_F: B_Soldier_sniper_base_F {  // BLU_F
        magazines[] = {"FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_spotter_F: B_Soldier_sniper_base_F {  // BLU_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_T_JSOC_Exp_F: Atlas_B_T_Soldier_JSOC_base {  // BLU_T_F
        magazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_T_JSOC_F: Atlas_B_T_Soldier_JSOC_base {  // BLU_T_F
        magazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_T_JSOC_GL_F: Atlas_B_T_Soldier_JSOC_base {  // BLU_T_F
        magazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue", "3Rnd_Smoke_Grenade_shell", "3Rnd_HEDP_Grenade_shell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue", "3Rnd_Smoke_Grenade_shell", "3Rnd_HEDP_Grenade_shell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_T_JSOC_JTAC_F: Atlas_B_T_Soldier_JSOC_base {  // BLU_T_F
        magazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_T_JSOC_LAT_F: Atlas_B_T_Soldier_JSOC_base {  // BLU_T_F
        magazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MRAWS_HEAT_F", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MRAWS_HEAT_F", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_T_JSOC_M_F: Atlas_B_T_Soldier_JSOC_base {  // BLU_T_F
        magazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_T_JSOC_Medic_F: Atlas_B_T_Soldier_JSOC_base {  // BLU_T_F
        magazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_T_JSOC_SL_F: Atlas_B_T_Soldier_JSOC_base {  // BLU_T_F
        magazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue", "3Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue", "3Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_T_JSOC_TL_F: Atlas_B_T_Soldier_JSOC_base {  // BLU_T_F
        magazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_T_JSOC_UAV_F: Atlas_B_T_Soldier_JSOC_base {  // BLU_T_F
        magazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_T_JSOC_UAV_lxWS: Atlas_B_T_Soldier_JSOC_base {  // BLU_T_F
        magazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_T_HMG_02_F: HMG_02_base_F {  // BLU_T_F
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {"FA_200Rnd_127_Mk258_T_Red", "FA_200Rnd_127_Mk258_T_Red", "FA_200Rnd_127_Mk258_T_Red", "FA_200Rnd_127_Mk258_T_Red"};
            };
        };
    };
    class B_T_HMG_02_high_F: HMG_02_high_base_F {  // BLU_T_F
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {"FA_200Rnd_127_Mk258_T_Red", "FA_200Rnd_127_Mk258_T_Red", "FA_200Rnd_127_Mk258_T_Red", "FA_200Rnd_127_Mk258_T_Red"};
            };
        };
    };
    class B_T_RadioOperator_F: B_T_Soldier_F {  // BLU_T_F
        magazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_T_Recon_AR_F: B_recon_AR_F {  // BLU_T_F
        magazines[] = {"FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_T_Recon_Exp_F: B_recon_exp_F {  // BLU_T_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_T_Recon_F: B_recon_F {  // BLU_T_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_T_Recon_GL_F: B_recon_GL_F {  // BLU_T_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_T_Recon_JTAC_F: B_recon_JTAC_F {  // BLU_T_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_T_Recon_LAT_F: B_recon_LAT_F {  // BLU_T_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_T_Recon_M_F: B_recon_M_F {  // BLU_T_F
        magazines[] = {"FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_T_Recon_Medic_F: B_recon_medic_F {  // BLU_T_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_T_Recon_TL_F: B_recon_TL_F {  // BLU_T_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_T_Soldier_Lite_F: B_Soldier_lite_F {  // BLU_T_F
        magazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "HandGrenade", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "HandGrenade", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_T_Soldier_TL_F: B_Soldier_TL_F {  // BLU_T_F
        magazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "FA_30Rnd_65_EPR_Khaki_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_T_Spotter_F: B_spotter_F {  // BLU_T_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_W_JSOC_Exp_F: Atlas_B_W_Soldier_JSOC_base {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_W_JSOC_F: Atlas_B_W_Soldier_JSOC_base {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_W_JSOC_GL_F: Atlas_B_W_Soldier_JSOC_base {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue", "3Rnd_Smoke_Grenade_shell", "3Rnd_HEDP_Grenade_shell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue", "3Rnd_Smoke_Grenade_shell", "3Rnd_HEDP_Grenade_shell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_W_JSOC_JTAC_F: Atlas_B_W_Soldier_JSOC_base {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_W_JSOC_LAT_F: Atlas_B_W_Soldier_JSOC_base {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MRAWS_HEAT_F", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MRAWS_HEAT_F", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_W_JSOC_M_F: Atlas_B_W_Soldier_JSOC_base {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_W_JSOC_Medic_F: Atlas_B_W_Soldier_JSOC_base {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_W_JSOC_SL_F: Atlas_B_W_Soldier_JSOC_base {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue", "3Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue", "3Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_W_JSOC_TL_F: Atlas_B_W_Soldier_JSOC_base {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_W_JSOC_UAV_F: Atlas_B_W_Soldier_JSOC_base {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_W_JSOC_UAV_lxWS: Atlas_B_W_Soldier_JSOC_base {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Engineer_F: B_engineer_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_HMG_02_F: HMG_02_base_F {  // BLU_W_F
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {"FA_200Rnd_127_Mk258_T_Red", "FA_200Rnd_127_Mk258_T_Red", "FA_200Rnd_127_Mk258_T_Red", "FA_200Rnd_127_Mk258_T_Red"};
            };
        };
    };
    class B_W_HMG_02_high_F: HMG_02_high_base_F {  // BLU_W_F
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                magazines[] = {"FA_200Rnd_127_Mk258_T_Red", "FA_200Rnd_127_Mk258_T_Red", "FA_200Rnd_127_Mk258_T_Red", "FA_200Rnd_127_Mk258_T_Red"};
            };
        };
    };
    class B_W_Medic_F: B_medic_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Soldier_F: B_Soldier_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_RadioOperator_F: B_W_Soldier_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Recon_AR_F: B_recon_AR_F {  // BLU_W_F
        magazines[] = {"FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Recon_Exp_F: B_recon_exp_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Recon_F: B_recon_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Recon_GL_F: B_recon_GL_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "FA_1Rnd_40mm_Mk380_NRP", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Recon_JTAC_F: B_recon_JTAC_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Recon_LAT_F: B_recon_LAT_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Recon_Medic_F: B_recon_medic_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Recon_TL_F: B_recon_TL_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Soldier_AAA_F: B_soldier_AAA_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "B_IR_Grenade", "B_IR_Grenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "B_IR_Grenade", "B_IR_Grenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Soldier_AAR_F: B_soldier_AAR_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "B_IR_Grenade", "B_IR_Grenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "B_IR_Grenade", "B_IR_Grenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Soldier_AAT_F: B_soldier_AAT_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "B_IR_Grenade", "B_IR_Grenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "B_IR_Grenade", "B_IR_Grenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Soldier_AA_F: B_soldier_AA_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "FA_Titan_AA_MIM165_Sentry", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "FA_Titan_AA_MIM165_Sentry", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Soldier_AR_F: B_soldier_AR_F {  // BLU_W_F
        magazines[] = {"FA_100Rnd_65x39_caseless_black_mag_T_Red", "FA_100Rnd_65x39_caseless_black_mag_T_Red", "FA_100Rnd_65x39_caseless_black_mag_T_Red", "FA_100Rnd_65x39_caseless_black_mag_T_Red", "FA_100Rnd_65x39_caseless_black_mag_T_Red", "FA_100Rnd_65x39_caseless_black_mag_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_100Rnd_65x39_caseless_black_mag_T_Red", "FA_100Rnd_65x39_caseless_black_mag_T_Red", "FA_100Rnd_65x39_caseless_black_mag_T_Red", "FA_100Rnd_65x39_caseless_black_mag_T_Red", "FA_100Rnd_65x39_caseless_black_mag_T_Red", "FA_100Rnd_65x39_caseless_black_mag_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Soldier_AT_F: B_soldier_AT_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AT", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "Titan_AT", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Soldier_A_F: B_Soldier_A_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Soldier_Exp_F: B_soldier_exp_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Soldier_LAT2_F: B_soldier_LAT2_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MRAWS_HEAT_F", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MRAWS_HEAT_F", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Soldier_LAT_F: B_soldier_LAT_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Soldier_Lite_F: B_Soldier_lite_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "HandGrenade", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "HandGrenade", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Soldier_PG_F: B_soldier_PG_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Soldier_Repair_F: B_soldier_repair_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Soldier_SL_F: B_Soldier_SL_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "B_IR_Grenade", "B_IR_Grenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "B_IR_Grenade", "B_IR_Grenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Soldier_TL_F: B_Soldier_TL_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Spotter_F: B_spotter_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Support_AMG_F: B_support_AMG_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "B_IR_Grenade", "B_IR_Grenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "B_IR_Grenade", "B_IR_Grenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Support_AMort_F: B_support_AMort_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "B_IR_Grenade", "B_IR_Grenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "B_IR_Grenade", "B_IR_Grenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Support_GMG_F: B_support_GMG_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "B_IR_Grenade", "B_IR_Grenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "B_IR_Grenade", "B_IR_Grenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Support_MG_F: B_support_MG_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "B_IR_Grenade", "B_IR_Grenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "B_IR_Grenade", "B_IR_Grenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_Support_Mort_F: B_support_Mort_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "B_IR_Grenade", "B_IR_Grenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "B_IR_Grenade", "B_IR_Grenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_ghillie_wdl_F: B_ghillie_base_F {  // BLU_W_F
        magazines[] = {"FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "FA_10Rnd_408_Mk240_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_ghillie_spotter_wdl_F: B_W_ghillie_wdl_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "ClaymoreDirectionalMine_Remote_Mag", "APERSTripMine_Wire_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_W_soldier_M_F: B_soldier_M_F {  // BLU_W_F
        magazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "FA_30Rnd_65_EPR_Black_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_D_JSOC_Exp_F: Atlas_B_D_Soldier_JSOC_base {  // BLU_NATO_lxWS
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_D_JSOC_F: Atlas_B_D_Soldier_JSOC_base {  // BLU_NATO_lxWS
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_D_JSOC_GL_F: Atlas_B_D_Soldier_JSOC_base {  // BLU_NATO_lxWS
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue", "3Rnd_Smoke_Grenade_shell", "3Rnd_HEDP_Grenade_shell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue", "3Rnd_Smoke_Grenade_shell", "3Rnd_HEDP_Grenade_shell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_D_JSOC_JTAC_F: Atlas_B_D_Soldier_JSOC_base {  // BLU_NATO_lxWS
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_D_JSOC_LAT_F: Atlas_B_D_Soldier_JSOC_base {  // BLU_NATO_lxWS
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MRAWS_HEAT_F", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MRAWS_HEAT_F", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_D_JSOC_M_F: Atlas_B_D_Soldier_JSOC_base {  // BLU_NATO_lxWS
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_D_JSOC_Medic_F: Atlas_B_D_Soldier_JSOC_base {  // BLU_NATO_lxWS
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_D_JSOC_SL_F: Atlas_B_D_Soldier_JSOC_base {  // BLU_NATO_lxWS
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue", "3Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "3Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue", "3Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_D_JSOC_TL_F: Atlas_B_D_Soldier_JSOC_base {  // BLU_NATO_lxWS
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_D_JSOC_UAV_F: Atlas_B_D_Soldier_JSOC_base {  // BLU_NATO_lxWS
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class Atlas_B_D_JSOC_UAV_lxWS: Atlas_B_D_Soldier_JSOC_base {  // BLU_NATO_lxWS
        magazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        respawnMagazines[] = {"FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "FA_30Rnd_65_EPR_T_Red", "16Rnd_9x21_Mag_v2", "16Rnd_9x21_Mag_v2", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_blue", "Chemlight_blue"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_D_Pilot_lxWS: B_T_Pilot_F {  // BLU_NATO_lxWS
        magazines[] = {"FA_30Rnd_45ACP_Mk421_T_Red", "FA_30Rnd_45ACP_Mk421_T_Red", "FA_30Rnd_45ACP_Mk421_T_Red", "FA_30Rnd_45ACP_Mk421_T_Red", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange"};
        respawnMagazines[] = {"FA_30Rnd_45ACP_Mk421_T_Red", "FA_30Rnd_45ACP_Mk421_T_Red", "FA_30Rnd_45ACP_Mk421_T_Red", "FA_30Rnd_45ACP_Mk421_T_Red", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_D_recon_AR_lxWS: B_recon_AR_F {  // BLU_NATO_lxWS
        magazines[] = {"FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "FA_200Rnd_556x45_Box_F_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_D_recon_JTAC_lxWS: B_recon_JTAC_F {  // BLU_NATO_lxWS
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "B_IR_Grenade", "B_IR_Grenade", "Laserbatteries", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_D_recon_LAT_lxWS: B_recon_LAT_F {  // BLU_NATO_lxWS
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "NLAW_F", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_D_recon_M_lxWS: B_recon_M_F {  // BLU_NATO_lxWS
        magazines[] = {"FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "FA_20Rnd_762_M80A2_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_D_recon_TL_lxWS: B_recon_TL_F {  // BLU_NATO_lxWS
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_D_recon_exp_lxWS: B_recon_exp_F {  // BLU_NATO_lxWS
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_D_recon_lxWS: B_recon_F {  // BLU_NATO_lxWS
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShell", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
    class B_D_recon_medic_lxWS: B_recon_medic_F {  // BLU_NATO_lxWS
        magazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        respawnMagazines[] = {"FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "FA_30Rnd_556_Mk327_HV_T_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellRed", "SmokeShellBlue", "SmokeShellOrange", "Chemlight_green", "Chemlight_green"};
        items[] += {"ghost_medbags_FirstAid"};
        respawnItems[] += {"ghost_medbags_FirstAid"};
        GHOST_BACKPACK_EH
    };
};
