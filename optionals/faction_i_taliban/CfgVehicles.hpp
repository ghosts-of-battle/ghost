class CfgVehicles {
    class UAV_02_IED_Base_lxWS;
    class Weapon_Bag_Base;
    class I_SFIA_scout_lxWS;
    class I_SFIA_watcher_lxWS;
    class I_SFIA_enforcer_lxWS;
    class I_SFIA_hireling_lxWS;
    class I_SFIA_medic2_lxWS;
    class I_SFIA_thug_lxWS;
    class I_SFIA_deserter_lxWS;
    class I_SFIA_defector_lxWS;
    class I_SFIA_crew_lxWS;
    class I_SFIA_APC_Wheeled_02_hmg_lxWS;
    class I_SFIA_Mortar_lxWS;
    class I_SFIA_HMG_02_lxWS;
    class I_SFIA_HMG_02_high_lxWS;
    class Offroad_01_armor_base_lxWS;
    class Offroad_01_armor_AT_lxWS;
    class Offroad_01_armor_armed_lxWS;
    class Offroad_01_armor_aa_lxWS;
    class O_SFIA_Truck_02_aa_lxWS;
    class O_SFIA_ZU23_lxWS;
    class Pickup_01_base_rf;
    class Pickup_01_mmg_base_rf;
    class Pickup_01_hmg_base_rf;
    class Pickup_fuel_base_rf;
    class Pickup_01_Rocket_base_rf;

    class ghost_taliban_UAV_02_IED_lxWS: UAV_02_IED_Base_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\ghost_taliban_UAV_02_IED_lxWS.jpg";
        scope = 2;
        scopeCurator = 2;
        side = 2;
        faction = "IND_TURA_lxWS";
        crew = "I_UAV_AI";
        typicalCargo[] = {"I_UAV_AI"};
        hiddenSelectionsTextures[] = {
            "lxWS\air_1_f_lxWS\Data\T_Gun_Drone_CO.paa",
            "lxWS\air_1_f_lxWS\Data\Gun_Drone_Adds_CO.paa"
        };
        hiddenSelectionsMaterials[] = {
            "lxWS\air_1_f_lxWS\Data\drone_T_mat.rvmat",
            "lxWS\air_1_f_lxWS\Data\gun_drone_adds.rvmat"
        };
        textureList[] = {
            "IND_TURA_lxWS",
            1
        };
        class SimpleObject
        {
        };
        class assembleInfo
        {
            primary = 1;
            base = "";
            assembleTo = "";
            displayName = "";
            dissasembleTo[] = {"ghost_taliban_UAV_02_IED_backpack_lxWS"};
        };
    };
    class ghost_taliban_UAV_02_IED_backpack_lxWS: Weapon_Bag_Base {
        side = 2;
        author = "Rotators Collective";
        DLC = "ws";
        mapSize = 0.6;
        scope = 1;
        scopeCurator = 1;
        displayName = "UAV Bag (IED) [Tura]";
        model = "\lxWS\air_f_lxWS\Bags\UAV_backpack_lxWS.p3d";
        editorCategory = "EdCat_Equipment";
        editorSubcategory = "EdSubcat_Backpacks";
        faction = "IND_TURA_lxWS";
        picture = "\lxWS\air_f_lxWS\Data\UI\icon_I_UAV_02_backpack_lxWS_CA.paa";
        hiddenSelections[] = {
            "camo",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            "\lxWS\air_f_lxWS\Bags\Data\UAV_backpack_NATO_CO.paa",
            "lxWS\air_1_f_lxWS\Data\T_Gun_Drone_CO.paa"
        };
        maximumLoad = 0;
        mass = 400;
        class assembleInfo
        {
            base = "";
            displayName = "IED UAV";
            assembleTo = "ghost_taliban_UAV_02_IED_lxWS";
        };
    };
    class ghost_taliban_scout_lxWS: I_SFIA_scout_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        uniformClass = "U_lxWS_Djella_O_02_Sand";
    };
    class ghost_taliban_watcher_lxWS: I_SFIA_watcher_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        uniformClass = "U_lxWS_Djella_O_03_Green";
    };
    class ghost_taliban_enforcer_lxWS: I_SFIA_enforcer_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        uniformClass = "U_lxWS_Djella_O_02_Grey";
    };
    class ghost_taliban_hireling_lxWS: I_SFIA_hireling_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        uniformClass = "U_lxWS_Djella_O_02_Brown";
    };
    class ghost_taliban_medic2_lxWS: I_SFIA_medic2_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        uniformClass = "U_lxWS_Djella_O_03_Green";
    };
    class ghost_taliban_thug_lxWS: I_SFIA_thug_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        uniformClass = "U_lxWS_Djella_O_02_Sand";
    };
    class ghost_taliban_deserter_lxWS: I_SFIA_deserter_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        uniformClass = "U_lxWS_SFIA_deserter_O";
        modelSides[] = {6};
    };
    class ghost_taliban_defector_lxWS: I_SFIA_defector_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        uniformClass = "U_lxWS_SFIA_deserter_O";
    };
    class ghost_taliban_HMG_gunner_lxWS: ghost_taliban_deserter_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 1;
        scopeCurator = 1;
        linkedItems[] = {
            "G_Lowprofile",
            "V_lxWS_HarnessO_oli",
            "lxWS_H_turban_03_green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "G_Lowprofile",
            "V_lxWS_HarnessO_oli",
            "lxWS_H_turban_03_green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        headgearList[] = {
            "lxWS_H_turban_03_black",
            3,
            "lxWS_H_turban_03_green",
            3,
            "lxWS_H_turban_03_sand",
            3
        };
    };
    class ghost_taliban_crew_lxWS: I_SFIA_crew_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        scope = 1;
        scopeCurator = 1;
        faction = "IND_TURA_lxWS";
        side = 2;
        linkedItems[] = {
            "V_BandollierB_blk",
            "H_Tank_black_F",
            "G_Lowprofile",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_BandollierB_blk",
            "H_Tank_black_F",
            "G_Lowprofile",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_VelkoR5_lxWS",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_VelkoR5_lxWS",
            "Throw",
            "Put"
        };
        magazines[] = {
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "HandGrenade",
            "HandGrenade"
        };
        respawnMagazines[] = {
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "HandGrenade",
            "HandGrenade"
        };
    };
    class ghost_taliban_deserter_EXT_R5GL_lxWS: I_SFIA_deserter_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 1;
        scopeCurator = 1;
        weapons[] = {
            "arifle_VelkoR5_GL_lxWS",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_VelkoR5_GL_lxWS",
            "Throw",
            "Put"
        };
        magazines[] = {
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell"
        };
        respawnMagazines[] = {
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "35Rnd_556x45_Velko_reload_tracer_yellow_lxWS",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell"
        };
    };
    class ghost_taliban_enforcer_EXT_Zafir_lxWS: I_SFIA_enforcer_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 1;
        scopeCurator = 1;
        weapons[] = {
            "LMG_Zafir_F",
            "hgun_Pistol_heavy_02_Yorris_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "LMG_Zafir_F",
            "hgun_Pistol_heavy_02_Yorris_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "150Rnd_762x54_Box",
            "150Rnd_762x54_Box",
            "150Rnd_762x54_Box",
            "6Rnd_45ACP_Cylinder",
            "SmokeShell",
            "SmokeShellRed"
        };
        respawnMagazines[] = {
            "150Rnd_762x54_Box",
            "150Rnd_762x54_Box",
            "150Rnd_762x54_Box",
            "6Rnd_45ACP_Cylinder",
            "SmokeShell",
            "SmokeShellRed"
        };
    };
    class ghost_taliban_enforcer_EXT_RPK12_lxWS: I_SFIA_enforcer_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 1;
        scopeCurator = 1;
        weapons[] = {
            "arifle_RPK12_F",
            "hgun_Pistol_heavy_02_Yorris_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_RPK12_F",
            "hgun_Pistol_heavy_02_Yorris_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "75rnd_762x39_AK12_Mag_F",
            "75rnd_762x39_AK12_Mag_F",
            "75rnd_762x39_AK12_Mag_F",
            "75rnd_762x39_AK12_Mag_F",
            "6Rnd_45ACP_Cylinder",
            "SmokeShell",
            "SmokeShellRed"
        };
        respawnMagazines[] = {
            "75rnd_762x39_AK12_Mag_F",
            "75rnd_762x39_AK12_Mag_F",
            "75rnd_762x39_AK12_Mag_F",
            "75rnd_762x39_AK12_Mag_F",
            "6Rnd_45ACP_Cylinder",
            "SmokeShell",
            "SmokeShellRed"
        };
    };
    class ghost_taliban_deserter_EXT_AK12U_lxWS: I_SFIA_deserter_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 1;
        scopeCurator = 1;
        weapons[] = {
            "arifle_AK12U_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AK12U_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "30Rnd_762x39_AK12_Mag_F",
            "30Rnd_762x39_AK12_Mag_F",
            "30Rnd_762x39_AK12_Mag_F",
            "30Rnd_762x39_AK12_Mag_F",
            "30Rnd_762x39_AK12_Mag_F",
            "30Rnd_762x39_AK12_Mag_F",
            "SmokeShellGreen",
            "SmokeShellOrange",
            "SmokeShellPurple"
        };
        respawnMagazines[] = {
            "30Rnd_762x39_AK12_Mag_F",
            "30Rnd_762x39_AK12_Mag_F",
            "30Rnd_762x39_AK12_Mag_F",
            "30Rnd_762x39_AK12_Mag_F",
            "30Rnd_762x39_AK12_Mag_F",
            "30Rnd_762x39_AK12_Mag_F",
            "SmokeShellGreen",
            "SmokeShellOrange",
            "SmokeShellPurple"
        };
    };
    class ghost_taliban_scout_EXT_DMR_Hunter_lxWS: I_SFIA_scout_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 1;
        scopeCurator = 1;
        weapons[] = {
            "srifle_DMR_06_hunter_khs_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "srifle_DMR_06_hunter_khs_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "10Rnd_Mk14_762x51_Mag",
            "10Rnd_Mk14_762x51_Mag",
            "10Rnd_Mk14_762x51_Mag",
            "10Rnd_Mk14_762x51_Mag",
            "10Rnd_Mk14_762x51_Mag",
            "MiniGrenade",
            "MiniGrenade"
        };
        respawnMagazines[] = {
            "10Rnd_Mk14_762x51_Mag",
            "10Rnd_Mk14_762x51_Mag",
            "10Rnd_Mk14_762x51_Mag",
            "10Rnd_Mk14_762x51_Mag",
            "10Rnd_Mk14_762x51_Mag",
            "MiniGrenade",
            "MiniGrenade"
        };
    };
    class ghost_taliban_medic2_EXT_HShotgun_lxWS: I_SFIA_medic2_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 1;
        scopeCurator = 1;
        weapons[] = {
            "sgun_HunterShotgun_01_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "sgun_HunterShotgun_01_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets"
        };
        respawnMagazines[] = {
            "2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets",
            "2Rnd_12Gauge_Pellets"
        };
    };
    class ghost_taliban_scout_EXT_DMR_camo_lxWS: I_SFIA_scout_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 1;
        scopeCurator = 1;
        weapons[] = {
            "srifle_DMR_06_camo_khs_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "srifle_DMR_06_camo_khs_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "MiniGrenade",
            "MiniGrenade"
        };
        respawnMagazines[] = {
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "MiniGrenade",
            "MiniGrenade"
        };
    };
    class ghost_taliban_deserter_EXT_AKM_lxWS: I_SFIA_deserter_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 1;
        scopeCurator = 1;
        weapons[] = {
            "arifle_AKM_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AKM_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "SmokeShellGreen",
            "SmokeShellOrange",
            "SmokeShellPurple"
        };
        respawnMagazines[] = {
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "SmokeShellGreen",
            "SmokeShellOrange",
            "SmokeShellPurple"
        };
    };
    class ghost_taliban_hireling_EXT_RPG7_lxWS: I_SFIA_hireling_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 1;
        scopeCurator = 1;
        weapons[] = {
            "arifle_AKS_F",
            "launch_RPG7_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AKS_F",
            "launch_RPG7_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "RPG7_F"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "RPG7_F"
        };
        backpack = "B_Kitbag_cbr_Bandit_2_F";
    };
    class ghost_taliban_watcher_EXT_AKS_lxWS: I_SFIA_watcher_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 1;
        scopeCurator = 1;
        weapons[] = {
            "arifle_AKS_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AKS_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "MiniGrenade",
            "MiniGrenade"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "MiniGrenade",
            "MiniGrenade"
        };
    };
    class ghost_taliban_watcher_EXT_AKM_lxWS: I_SFIA_watcher_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 1;
        scopeCurator = 1;
        weapons[] = {
            "arifle_AKM_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AKM_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "MiniGrenade",
            "MiniGrenade"
        };
        respawnMagazines[] = {
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "MiniGrenade",
            "MiniGrenade"
        };
    };
    class ghost_taliban_APC_Wheeled_02_hmg_lxWS: I_SFIA_APC_Wheeled_02_hmg_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        scope = 1;
        scopeCurator = 1;
        faction = "IND_TURA_lxWS";
        side = 2;
        crew = "ghost_taliban_crew_lxWS";
        typicalCargo[] = {"I_SFIA_scout_lxWS"};
        animationList[] = {
            "showBags",
            0,
            "showCanisters",
            0.5,
            "showTools",
            0.5,
            "showCamonetHull",
            0,
            "showSLATHull",
            0,
            "mg_hide_armor_front",
            0.8,
            "mg_hide_armor_rear",
            0.3,
            "mg_Hide_Rail",
            1
        };
        class Turrets
        {
            class MainTurret
            {
            };
            class mg_station
            {
                gunnerType = "ghost_taliban_HMG_gunner_lxWS";
            };
        };
    };
    class ghost_taliban_Mortar_lxWS: I_SFIA_Mortar_lxWS {
        side = 2;
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        crew = "I_SFIA_defector_lxWS";
        faction = "IND_TURA_lxWS";
    };
    class ghost_taliban_HMG_02_lxWS: I_SFIA_HMG_02_lxWS {
        side = 2;
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        faction = "IND_TURA_lxWS";
        crew = "I_SFIA_deserter_lxWS";
    };
    class ghost_taliban_HMG_02_high_lxWS: I_SFIA_HMG_02_high_lxWS {
        side = 2;
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        faction = "IND_TURA_lxWS";
        crew = "I_SFIA_deserter_lxWS";
    };
    class ghost_taliban_Offroad_armor_lxWS: Offroad_01_armor_base_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_taliban_watcher_lxWS";
        editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\ghost_taliban_Offroad_armor_lxWS.jpg";
        faction = "IND_TURA_lxWS";
        side = 2;
        typicalCargo[] = {"ghost_taliban_watcher_lxWS"};
        animationList[] = {
            "HideSnorkel",
            0,
            "HideBumper1",
            0.5,
            "HideBumper2",
            0.5,
            "HideBumper3",
            1,
            "HideBackpacks",
            0,
            "HideConstruction",
            0,
            "hideRoofLights",
            1,
            "HideDoor3",
            0.33,
            "HatchL_rot",
            0.5
        };
        hiddenSelectionsTextures[] = {
            "\lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_sfia_co.paa",
            "\lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_sfia_co.paa",
            "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
            "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_sfia_co.paa"
        };
        textureList[] = {
            "SFIA",
            0.5,
            "Beige",
            0.333,
            "SFIA2",
            0.333
        };
        class TransportMagazines
        {
            class _xx_30Rnd_762x39_Mag_F
            {
                magazine = "30Rnd_762x39_Mag_F";
                count = 3;
            };
            class _xx_MiniGrenade
            {
                magazine = "MiniGrenade";
                count = 2;
            };
        };
        class TransportWeapons
        {
            class _xx_arifle_Galat_lxWS
            {
                weapon = "arifle_Galat_lxWS";
                count = 1;
            };
        };
    };
    class ghost_taliban_Offroad_armor_AT_lxWS: Offroad_01_armor_AT_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_taliban_watcher_lxWS";
        editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\ghost_taliban_Offroad_armor_AT_lxWS.jpg";
        faction = "IND_TURA_lxWS";
        side = 2;
        typicalCargo[] = {"ghost_taliban_watcher_lxWS"};
        animationList[] = {
            "HideSnorkel",
            0,
            "HideBumper1",
            1,
            "HideBumper2",
            1,
            "HideBumper3",
            0,
            "hideRoofLights",
            0,
            "HideDoor3",
            0.33,
            "HatchL_rot",
            0.5
        };
        hiddenSelectionsTextures[] = {
            "\lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_sfia_co.paa",
            "\lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_sfia_co.paa",
            "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
            "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_sfia_co.paa"
        };
        textureList[] = {
            "SFIA",
            0.5,
            "Beige",
            0.333,
            "SFIA2",
            0.333
        };
        class TransportMagazines
        {
            class _xx_30Rnd_762x39_Mag_F
            {
                magazine = "30Rnd_762x39_Mag_F";
                count = 3;
            };
            class _xx_MiniGrenade
            {
                magazine = "MiniGrenade";
                count = 2;
            };
        };
        class TransportWeapons
        {
            class _xx_arifle_Galat_lxWS
            {
                weapon = "arifle_Galat_lxWS";
                count = 1;
            };
        };
    };
    class ghost_taliban_Offroad_armor_armed_lxWS: Offroad_01_armor_armed_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_taliban_watcher_lxWS";
        editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\ghost_taliban_Offroad_armor_armed_lxWS.jpg";
        faction = "IND_TURA_lxWS";
        side = 2;
        typicalCargo[] = {"ghost_taliban_watcher_lxWS"};
        animationList[] = {
            "HideSnorkel",
            0,
            "HideBumper1",
            1,
            "HideBumper2",
            1,
            "HideBumper3",
            0.5,
            "hideRoofLights",
            0,
            "HideDoor3",
            0.33,
            "HatchL_rot",
            0.5
        };
        hiddenSelectionsTextures[] = {
            "\lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_sfia_co.paa",
            "\lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_sfia_co.paa",
            "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
            "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_armor_sfia_co.paa"
        };
        textureList[] = {
            "SFIA",
            0.5,
            "Beige",
            0.333,
            "SFIA2",
            0.333
        };
        class TransportMagazines
        {
            class _xx_30Rnd_762x39_Mag_F
            {
                magazine = "30Rnd_762x39_Mag_F";
                count = 3;
            };
            class _xx_MiniGrenade
            {
                magazine = "MiniGrenade";
                count = 2;
            };
        };
        class TransportWeapons
        {
            class _xx_arifle_Galat_lxWS
            {
                weapon = "arifle_Galat_lxWS";
                count = 1;
            };
        };
    };
    class ghost_taliban_Offroad_armor_AA_lxWS: Offroad_01_armor_aa_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        crew = "ghost_taliban_watcher_lxWS";
        editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\ghost_taliban_Offroad_AA_lxWS.jpg";
        faction = "IND_TURA_lxWS";
        side = 2;
        typicalCargo[] = {"ghost_taliban_watcher_lxWS"};
        animationList[] = {
            "HideSnorkel",
            0,
            "HideBumper1",
            1,
            "HideBumper2",
            1,
            "HideBumper3",
            0.5,
            "hideRoofLights",
            0,
            "HideDoor3",
            0.1,
            "shield_hide",
            0.5,
            "HatchL_rot",
            0.5
        };
        hiddenSelectionsTextures[] = {
            "\lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_sfia_co.paa",
            "\lxws\vehicles_f_lxws\data\offroad_01\offroad_01_ext_sfia_co.paa",
            "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
            "lxws\vehicles_f_lxws\zu23\data\zu23_base_sfia_co.paa",
            "lxws\vehicles_f_lxws\zu23\data\zu23_sfia_co.paa",
            "lxws\vehicles_f_lxws\zu23\data\zu23_addon_1_sfia_co.paa",
            "lxws\vehicles_f_lxws\zu23\data\zu23_addon_2_sfia_co.paa"
        };
        textureList[] = {
            "SFIA",
            0.5,
            "Beige",
            0.333,
            "SFIA2",
            0.333
        };
        class TransportMagazines
        {
            class _xx_30Rnd_762x39_Mag_F
            {
                magazine = "30Rnd_762x39_Mag_F";
                count = 3;
            };
            class _xx_MiniGrenade
            {
                magazine = "MiniGrenade";
                count = 2;
            };
        };
        class TransportWeapons
        {
            class _xx_arifle_Galat_lxWS
            {
                weapon = "arifle_Galat_lxWS";
                count = 1;
            };
        };
    };
    class ghost_taliban_Truck_02_aa_lxWS: O_SFIA_Truck_02_aa_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        scope = 1;
        scopeCurator = 1;
        crew = "ghost_taliban_defector_lxWS";
        typicalCargo[] = {"ghost_taliban_defector_lxWS"};
        faction = "ghost_taliban";
        side = 2;
    };
    class ghost_taliban_ZU23_lxWS: O_SFIA_ZU23_lxWS {
        author = "Rotators Collective";
        DLC = "ws";
        crew = "I_SFIA_watcher_lxWS";
        typicalCargo[] = {"ghost_taliban_watcher_lxWS"};
        faction = "IND_TURA_lxWS";
        side = 2;
        textureList[] = {
            "SFIA",
            0.5,
            "Beige",
            0.333,
            "SFIA2",
            0.333
        };
    };
    class ghost_taliban_soldier_UAV_lxWS: ghost_taliban_deserter_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\ghost_taliban_soldier_UAV_lxWS.jpg";
        displayName = "UAV Operator (IED)";
        backpack = "ghost_taliban_UAV_02_IED_backpack_lxWS";
        role = "SpecialOperative";
        uavHacker = 1;
        linkedItems[] = {
            "V_lxWS_HarnessO_oli",
            "lxWS_H_turban_03_green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ghost_taliban_UavTerminal_lxWS"
        };
        respawnLinkedItems[] = {
            "V_lxWS_HarnessO_oli",
            "lxWS_H_turban_03_green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ghost_taliban_UavTerminal_lxWS"
        };
        magazines[] = {
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "SmokeShellGreen",
            "SmokeShellOrange",
            "SmokeShellPurple",
            "1Rnd_40mm_HE_lxWS",
            "1Rnd_40mm_HE_lxWS",
            "1Rnd_58mm_AT_lxWS",
            "1Rnd_58mm_AT_lxWS",
            "1Rnd_50mm_Smoke_lxWS",
            "1Rnd_50mm_Smoke_lxWS"
        };
        respawnMagazines[] = {
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "30Rnd_762x39_Mag_F",
            "SmokeShellGreen",
            "SmokeShellOrange",
            "SmokeShellPurple",
            "1Rnd_40mm_HE_lxWS",
            "1Rnd_40mm_HE_lxWS",
            "1Rnd_58mm_AT_lxWS",
            "1Rnd_58mm_AT_lxWS",
            "1Rnd_50mm_Smoke_lxWS",
            "1Rnd_50mm_Smoke_lxWS"
        };
        uniformClass = "U_SFIA_deserter_lxWS";
        armorStructural = 4;
        model = "lxWS\characters_1_f_lxws\uniform\djellaba_05_lxWS.p3d";
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            "lxws\characters_f_lxws\data\sfia\ig_sfia_1_2_co.paa",
            "lxws\characters_f_lxws\uniform\djellaba\data\lxWS_djellaba_shirt_green_co.paa",
            "lxWS\characters_1_f_lxws\uniform\data\lxWS_djellaba_pants_brown2_co.paa"
        };
    };
    class ghost_taliban_HeavyGunner_lxWS: ghost_taliban_deserter_lxWS {
        side = 2;
        faction = "ghost_taliban";
        author = "Rotators Collective";
        DLC = "ws";
        scope = 2;
        scopeCurator = 2;
        textSingular = "machinegunner";
        textPlural = "machinegunners";
        nameSound = "veh_infantry_MG_s";
        editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\ghost_taliban_HeavyGunner_lxWS.jpg";
        displayName = "Oppressor (Machine Gun)";
        icon = "iconManMG";
        role = "MachineGunner";
        uniformClass = "U_SFIA_deserter_lxWS";
        armorStructural = 4;
        model = "lxWS\characters_1_f_lxws\uniform\djellaba_05_lxWS.p3d";
        hiddenSelections[] = {
            "camo",
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            "lxws\characters_f_lxws\data\sfia\ig_sfia_1_2_co.paa",
            "lxws\characters_f_lxws\uniform\djellaba\data\lxWS_djellaba_shirt_green_co.paa",
            "lxWS\characters_1_f_lxws\uniform\data\lxWS_djellaba_pants_brown2_co.paa"
        };
        headgearList[] = {
            "lxWS_H_turban_03_green",
            2,
            "lxWS_H_turban_03_green_bandit",
            5,
            "lxWS_H_turban_03_red",
            0.5,
            "lxWS_H_turban_03_red_bandit",
            1
        };
        linkedItems[] = {
            "V_lxWS_HarnessO_oli",
            "lxWS_H_turban_03_green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "V_lxWS_HarnessO_oli",
            "lxWS_H_turban_03_green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "LMG_S77_Desert_lxWS",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "LMG_S77_Desert_lxWS",
            "Throw",
            "Put"
        };
        magazines[] = {
            "100Rnd_762x51_S77_Green_lxWS",
            "100Rnd_762x51_S77_Green_lxWS",
            "100Rnd_762x51_S77_Green_lxWS",
            "100Rnd_762x51_S77_Green_lxWS",
            "100Rnd_762x51_S77_Green_Tracer_lxWS",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "Chemlight_green",
            "Chemlight_green"
        };
        respawnMagazines[] = {
            "100Rnd_762x51_S77_Green_lxWS",
            "100Rnd_762x51_S77_Green_lxWS",
            "100Rnd_762x51_S77_Green_lxWS",
            "100Rnd_762x51_S77_Green_lxWS",
            "100Rnd_762x51_S77_Green_Tracer_lxWS",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen",
            "Chemlight_green",
            "Chemlight_green"
        };
        class SpeechVariants
        {
            class Default
            {
                speechSingular[] = {"veh_infantry_MG_s"};
                speechPlural[] = {"veh_infantry_MG_p"};
            };
        };
    };
    class ghost_taliban_Pickup_01_RF: Pickup_01_base_rf {
        author = "Rotators Collective";
        dlc = "rf";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\ghost_taliban_Pickup_01_RF.jpg";
        side = 2;
        faction = "IND_TURA_lxWS";
        crew = "I_SFIA_watcher_lxWS";
        typicalCargo[] = {"I_SFIA_watcher_lxWS"};
        hiddenSelectionsTextures[] = {
            "\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_fia_08_co.paa",
            "\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_fia_08_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa",
            "\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_fia_08_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_aat.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_launcher.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"
        };
        textureList[] = {
            "Guerilla_10",
            0.5,
            "Guerilla_08",
            0.333
        };
        animationList[] = {
            "hide_bullbar",
            0.5,
            "hide_fuel_tank",
            1,
            "hide_snorkel",
            0.25,
            "hide_antenna",
            1,
            "hide_trunk_cover",
            1,
            "hide_trunk_door",
            1,
            "hide_frame",
            0.5,
            "hide_armor_window_armor_top",
            0.25
        };
        class TransportMagazines
        {
            class _xx_30Rnd_762x39_Mag_F
            {
                magazine = "30Rnd_762x39_Mag_F";
                count = 3;
            };
            class _xx_MiniGrenade
            {
                magazine = "MiniGrenade";
                count = 2;
            };
        };
        class TransportWeapons
        {
            class _xx_arifle_Galat_lxWS
            {
                weapon = "arifle_Galat_lxWS";
                count = 1;
            };
        };
    };
    class ghost_taliban_Pickup_01_mmg_rf: Pickup_01_mmg_base_rf {
        author = "Rotators Collective";
        dlc = "rf";
        scope = 1;
        scopeCurator = 1;
        editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\ghost_taliban_Pickup_01_mmg_rf.jpg";
        side = 2;
        faction = "IND_TURA_lxWS";
        crew = "I_SFIA_watcher_lxWS";
        typicalCargo[] = {"I_SFIA_watcher_lxWS"};
        hiddenSelectionsTextures[] = {
            "\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_fia_08_co.paa",
            "\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_fia_08_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa",
            "\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_fia_08_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_aat.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_launcher.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"
        };
        textureList[] = {
            "Guerilla_10",
            0.5,
            "Guerilla_08",
            0.333
        };
        animationList[] = {
            "hide_bullbar",
            0.5,
            "hide_fuel_tank",
            1,
            "hide_snorkel",
            0.25,
            "hide_antenna",
            1,
            "hide_trunk_cover",
            1,
            "hide_trunk_door",
            1,
            "hide_frame",
            0.5,
            "hide_armor_window_armor_top",
            0.25
        };
        class TransportMagazines
        {
            class _xx_30Rnd_762x39_Mag_F
            {
                magazine = "30Rnd_762x39_Mag_F";
                count = 3;
            };
            class _xx_MiniGrenade
            {
                magazine = "MiniGrenade";
                count = 2;
            };
        };
        class TransportWeapons
        {
            class _xx_arifle_Galat_lxWS
            {
                weapon = "arifle_Galat_lxWS";
                count = 1;
            };
        };
    };
    class ghost_taliban_Pickup_01_hmg_rf: Pickup_01_hmg_base_rf {
        author = "Rotators Collective";
        dlc = "rf";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\ghost_taliban_Pickup_01_hmg_rf.jpg";
        side = 2;
        faction = "IND_TURA_lxWS";
        crew = "I_SFIA_watcher_lxWS";
        typicalCargo[] = {"I_SFIA_watcher_lxWS"};
        hiddenSelectionsTextures[] = {
            "\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_fia_08_co.paa",
            "\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_fia_08_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa",
            "\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_fia_08_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_aat.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_launcher.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"
        };
        textureList[] = {
            "Guerilla_10",
            0.5,
            "Guerilla_08",
            0.333
        };
        animationList[] = {
            "hide_bullbar",
            0.5,
            "hide_snorkel",
            0.25,
            "hide_antenna",
            1,
            "hide_trunk_door",
            1,
            "hide_frame",
            0.25,
            "Hide_Shield",
            0.5,
            "hide_armor_window_armor_top",
            0.25
        };
        class TransportMagazines
        {
            class _xx_30Rnd_762x39_Mag_F
            {
                magazine = "30Rnd_762x39_Mag_F";
                count = 3;
            };
            class _xx_MiniGrenade
            {
                magazine = "MiniGrenade";
                count = 2;
            };
        };
        class TransportWeapons
        {
            class _xx_arifle_Galat_lxWS
            {
                weapon = "arifle_Galat_lxWS";
                count = 1;
            };
        };
    };
    class ghost_taliban_Pickup_fuel_rf: Pickup_fuel_base_rf {
        author = "Rotators Collective";
        dlc = "rf";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "\lxRF\editorpreviews_rf\Data\CfgVehicles\ghost_taliban_Pickup_fuel_rf.jpg";
        side = 2;
        faction = "IND_TURA_lxWS";
        crew = "I_SFIA_watcher_lxWS";
        typicalCargo[] = {"I_SFIA_watcher_lxWS"};
        hiddenSelectionsTextures[] = {
            "\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_fia_08_co.paa",
            "\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_fia_08_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa",
            "\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_fia_08_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_aat.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_launcher.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"
        };
        textureList[] = {
            "Guerilla_10",
            0.5,
            "Guerilla_08",
            0.333
        };
        animationList[] = {
            "hide_bullbar",
            0.5,
            "hide_fuel_tank",
            0,
            "hide_snorkel",
            0.25,
            "hide_antenna",
            1,
            "hide_trunk_cover",
            1,
            "hide_frame",
            0.5,
            "hide_armor_window_armor_top",
            0.25
        };
        class TransportMagazines
        {
            class _xx_30Rnd_762x39_Mag_F
            {
                magazine = "30Rnd_762x39_Mag_F";
                count = 3;
            };
            class _xx_MiniGrenade
            {
                magazine = "MiniGrenade";
                count = 2;
            };
        };
        class TransportWeapons
        {
            class _xx_arifle_Galat_lxWS
            {
                weapon = "arifle_Galat_lxWS";
                count = 1;
            };
        };
    };
    class ghost_taliban_Pickup_01_Rocket_rf: Pickup_01_Rocket_base_rf {
        author = "Rotators Collective";
        dlc = "rf";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "\lxrf\editorpreviews_rf\Data\CfgVehicles\ghost_taliban_Pickup_01_Rocket_rf.jpg";
        side = 2;
        faction = "IND_TURA_lxWS";
        crew = "I_SFIA_watcher_lxWS";
        typicalCargo[] = {"I_SFIA_watcher_lxWS"};
        hiddenSelectionsTextures[] = {
            "\lxRF\vehicles_rf\pickup_01\Data\pickup_01_ext_fia_08_co.paa",
            "\lxRF\vehicles_rf\pickup_01\Data\pickup_01_adds_fia_08_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
            "\lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_gray_co.paa",
            "\lxRF\vehicles_rf\pickup_01\Data\pickup_01_service_fia_08_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext_military.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_adds.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_ext2.rvmat",
            "lxrf\weapons_rf\dynamicloadout\data\missile_tratnyr_mat.rvmat",
            "lxrf\vehicles_rf\pickup_01\Data\pickup_01_service_military.rvmat"
        };
        textureList[] = {
            "Guerilla_10",
            0.5,
            "Guerilla_08",
            0.333
        };
        animationList[] = {
            "hide_armor_window_armor_top",
            0.25,
            "hide_bullbar",
            0.5,
            "hide_snorkel",
            0.1,
            "hide_trunk_door",
            0.1,
            "trunk_door_open",
            0,
            "hide_frame",
            0.5,
            "hide_turret_cover",
            1
        };
        class TransportMagazines
        {
            class _xx_30Rnd_762x39_Mag_F
            {
                magazine = "30Rnd_762x39_Mag_F";
                count = 3;
            };
            class _xx_MiniGrenade
            {
                magazine = "MiniGrenade";
                count = 2;
            };
        };
        class TransportWeapons
        {
            class _xx_arifle_Galat_lxWS
            {
                weapon = "arifle_Galat_lxWS";
                count = 1;
            };
        };
    };
};
