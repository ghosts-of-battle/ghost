class CfgVehicles {
    class O_APC_Tracked_02_cannon_F;
    class O_Soldier_SL_F;
    class O_Soldier_TL_F;
    class O_soldier_F;
    class O_Soldier_GL_F;
    class O_Soldier_LAT_F;
    class O_medic_F;
    class O_soldier_M_F;
    class O_Soldier_AR_F;
    class O_officer_F;
    class O_crew_F;
    class O_helipilot_F;
    class O_MBT_02_cannon_F;
    class B_MRAP_01_F;
    class B_MRAP_01_gmg_F;
    class B_MRAP_01_hmg_F;
    class O_Tura_Offroad_armor_lxWS;
    class O_Tura_Offroad_armor_armed_lxWS;
    class O_Tura_Offroad_armor_AT_lxWS;
    class O_T_LSV_02_unarmed_F;
    class O_T_LSV_02_armed_F;
    class O_T_LSV_02_AT_F;
    class O_G_Offroad_01_F;
    class O_G_Offroad_01_armed_F;
    class O_G_Offroad_01_AT_F;
    class O_Tura_ZU23_lxWS;
    class B_G_HMG_02_F;
    class B_G_HMG_02_high_F;
    class B_Heli_Light_01_F;
    class B_Heli_Light_01_dynamicLoadout_F;
    class O_SFIA_Truck_02_aa_lxWS;
    class O_Truck_02_covered_F;
    class O_Truck_02_transport_F;
    class O_SFIA_APC_Tracked_02_30mm_lxWS;
    class B_Heli_Transport_03_unarmed_F;
    class O_Heli_Light_02_unarmed_F;
    class B_ION_Heli_Light_02_unarmed_lxWS;
    class O_Heli_Light_02_dynamicLoadout_F;
    class B_ION_Heli_Light_02_dynamicLoadout_lxWS;
    class O_Heli_Attack_02_dynamicLoadout_F;
    class O_Plane_CAS_02_dynamicLoadout_F;
    class O_APC_Wheeled_02_rcws_v2_F;
    class B_UNA_APC_Wheeled_02_hmg_lxWS;
    class B_Pickup_rf;
    class B_Pickup_Comms_rf;
    class B_G_Pickup_mrl_rf;
    class B_G_Pickup_hmg_rf;

    class ghost_o_turkmenistan_CSPC_BTRT_U: O_APC_Tracked_02_cannon_F {
        author = "J.Burgess";
        side = 0;
        faction = "ghost_o_turkmenistan";
        displayName = "BTR-U Artashir";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "CamoNet",
            "CamoSlat"
        };
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\TNA_BTRK_Body.paa",
            "WOLFoT_TNA_RV\TNA\CSPC\VEH\BTRK_CSPC_B2.paa",
            "WOLFoT_TNA_RV\TNA\Veh\TNA_BTRK_Gun.paa",
            "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
            "A3\armor_f\data\cage_sand_CO.paa"
        };
        crew = "ghost_o_turkmenistan_CSPC_Crew";
        textureList[] = {
            "TNA",
            1
        };
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
        class TransportWeapons
        {
        };
        class AnimationSources
        {
            class HideTurret
            {
                initPhase = 1;
            };
        };
        class Turrets
        {
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_BTRK_Body.paa",
                    "WOLFoT_TNA_RV\TNA\CSPC\VEH\BTRK_CSPC_B2.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_BTRK_Gun.paa",
                    "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
                    "A3\armor_f\data\cage_sand_CO.paa"
                };
                factions[] = {
                    "BLU_F",
                    "BLU_G_F",
                    "OPF_F",
                    "OPF_G_F",
                    "IND_F",
                    "IND_G_F",
                    "CIV_F"
                };
            };
        };
    };
    class ghost_o_turkmenistan_SL: O_Soldier_SL_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_AK12_F",
            "hgun_Pistol_01_F",
            "Rangefinder",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AK12_F",
            "hgun_Pistol_01_F",
            "Rangefinder",
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
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        backpack = "ghost_o_turkmenistan_Radio_Bpack";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Squad Leader";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\randomize_equipment_SL.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_TL: O_Soldier_TL_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_AK12_F",
            "hgun_Pistol_01_F",
            "Rangefinder",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AK12_F",
            "hgun_Pistol_01_F",
            "Rangefinder",
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
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        backpack = "ghost_o_turkmenistan_Assault_Bpack";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Team Leader";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\randomize_equipment_SL.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_RFM: O_soldier_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_AK12_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AK12_F",
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
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Rifleman";
        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\randomize_equipment.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_BRFM: O_soldier_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_AK12_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AK12_F",
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
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "BattleRifleman";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\randomize_equipment.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_GL: O_Soldier_GL_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"};   
            respawnLinkedItems[] = {"SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_AK12_GL_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AK12_GL_F",
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
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "HandGrenade",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "HandGrenade",
            "SmokeShell"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Grenadier";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\randomize_equipment.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_LAT: O_Soldier_LAT_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_AK12_F",
            "launch_RPG7_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AK12_F",
            "launch_RPG7_F",
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
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "RPG7_F",
            "RPG7_F",
            "HandGrenade",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "RPG7_F",
            "RPG7_F",
            "HandGrenade",
            "SmokeShell"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        backpack = "ghost_o_turkmenistan_Assault_Bpack_LAT2";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Rifleman (MAAWS)";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\randomize_equipment.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_RPG: O_Soldier_LAT_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_AK12_F",
            "launch_RPG7_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AK12_F",
            "launch_RPG7_F",
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
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "RPG7_F",
            "RPG7_F",
            "HandGrenade",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "RPG7_F",
            "RPG7_F",
            "HandGrenade",
            "SmokeShell"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        backpack = "ghost_o_turkmenistan_Kitbag_Bpack_RPG";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Rifleman (RPG-7)";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\randomize_equipment.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_CLS: O_medic_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
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
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        backpack = "ghost_o_turkmenistan_Field_Bpack_CLS";
        side = 0;
        attendant = 1;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Combat Life Saver";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\randomize_equipment.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_DMR: O_soldier_M_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_SLR_V_lxWS",
            "Rangefinder",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_SLR_V_lxWS",
            "Rangefinder",
            "Throw",
            "Put"
        };
        magazines[] = {
            "20Rnd_762x51_slr_lxWS",
            "20Rnd_762x51_slr_lxWS",
            "20Rnd_762x51_slr_lxWS",
            "20Rnd_762x51_slr_lxWS",
            "20Rnd_762x51_slr_lxWS",
            "20Rnd_762x51_slr_lxWS",
            "20Rnd_762x51_slr_lxWS",
            "20Rnd_762x51_slr_lxWS",
            "HandGrenade",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "20Rnd_762x51_slr_lxWS",
            "20Rnd_762x51_slr_lxWS",
            "20Rnd_762x51_slr_lxWS",
            "20Rnd_762x51_slr_lxWS",
            "20Rnd_762x51_slr_lxWS",
            "20Rnd_762x51_slr_lxWS",
            "20Rnd_762x51_slr_lxWS",
            "20Rnd_762x51_slr_lxWS",
            "HandGrenade",
            "SmokeShell"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Marksman";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\randomize_equipment.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_AR: O_Soldier_AR_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_RPK12_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_RPK12_F",
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
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "HandGrenade",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "HandGrenade",
            "SmokeShell"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        backpack = "ghost_o_turkmenistan_Kitbag_Bpack";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Autorifleman";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\randomize_equipment.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_MG: O_Soldier_AR_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_RPK12_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_RPK12_F",
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
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "HandGrenade",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "HandGrenade",
            "SmokeShell"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        backpack = "ghost_o_turkmenistan_Kitbag_Bpack";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Machinegunner";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\randomize_equipment.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_RFM_U: O_soldier_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_AK12_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AK12_F",
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
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Rifleman (Unarmed)";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        headgearList[] = {
            "ghost_o_turkmenistan_Basichelmet",
            0.5,
            "ghost_o_turkmenistan_Basichelmet_Tan",
            0.5,
            "ghost_o_turkmenistan_Basichelmet_Camo",
            0.5,
            "ghost_o_turkmenistan_Basichelmet_Tan_Camo",
            0.5,
            "ghost_o_turkmenistan_Basichelmet_G",
            1,
            "ghost_o_turkmenistan_Basichelmet_Tan_G",
            1,
            "ghost_o_turkmenistan_Basichelmet_Camo_G",
            1,
            "ghost_o_turkmenistan_Basichelmet_Tan_Camo_G",
            1
        };
        class Extended_Init_EventHandlers {
            class ADDON {
                init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
            };
        };
    };
    class ghost_o_turkmenistan_Officer: O_officer_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_AK12_F",
            "hgun_Pistol_01_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AK12_F",
            "hgun_Pistol_01_F",
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
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "HandGrenade",
            "SmokeShell"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Officer";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\randomize_equipment_Uni.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_Crew: O_crew_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "hgun_Pistol_01_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "hgun_Pistol_01_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "SmokeShell"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Crewman";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\randomize_equipment_Uni.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_Helipilot: O_helipilot_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "hgun_Pistol_01_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "hgun_Pistol_01_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag"
        };
        respawnMagazines[] = {
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Heli Pilot";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\randomize_equipment_Uni.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_JetPilot: O_crew_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "hgun_Pistol_01_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "hgun_Pistol_01_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "SmokeShell"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Pilot";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};
    };
    class ghost_o_turkmenistan_ST_RFM: O_soldier_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_AK12_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AK12_F",
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
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        side = 0;
        editorSubcategory = "EdSubcat_Personnel_SpecialForces";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Assaulter";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\Stormtroopers\randomize_equipment.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_ST_BRFM: O_soldier_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_AK12_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AK12_F",
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
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        side = 0;
        editorSubcategory = "EdSubcat_Personnel_SpecialForces";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Assaulter (BR)";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\Stormtroopers\randomize_equipment.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_ST_DMR: O_soldier_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_AK12_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AK12_F",
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
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        side = 0;
        editorSubcategory = "EdSubcat_Personnel_SpecialForces";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Marksman";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\Stormtroopers\randomize_equipment.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_ST_GL: O_Soldier_GL_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_AK12_GL_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AK12_GL_F",
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
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "HandGrenade",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "1Rnd_HE_Grenade_shell",
            "HandGrenade",
            "SmokeShell"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        side = 0;
        editorSubcategory = "EdSubcat_Personnel_SpecialForces";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Assault Grenadier";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\Stormtroopers\randomize_equipment.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_ST_SL: O_Soldier_SL_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_AK12_F",
            "hgun_Pistol_01_F",
            "Rangefinder",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AK12_F",
            "hgun_Pistol_01_F",
            "Rangefinder",
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
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        side = 0;
        backpack = "ghost_o_turkmenistan_Radio_Bpack";
        editorSubcategory = "EdSubcat_Personnel_SpecialForces";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Squad Leader";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\Stormtroopers\randomize_equipment.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_ST_TL: O_Soldier_TL_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_AK12_F",
            "hgun_Pistol_01_F",
            "Rangefinder",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AK12_F",
            "hgun_Pistol_01_F",
            "Rangefinder",
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
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "10Rnd_9x21_Mag",
            "10Rnd_9x21_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShellGreen"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        backpack = "ghost_o_turkmenistan_Assault_Bpack";
        side = 0;
        editorSubcategory = "EdSubcat_Personnel_SpecialForces";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Team Leader";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\Stormtroopers\randomize_equipment.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_ST_RFM_RPG: O_Soldier_LAT_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_AK12_F",
            "launch_RPG7_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AK12_F",
            "launch_RPG7_F",
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
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "RPG7_F",
            "RPG7_F",
            "HandGrenade",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "RPG7_F",
            "RPG7_F",
            "HandGrenade",
            "SmokeShell"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        backpack = "ghost_o_turkmenistan_Kitbag_Bpack_RPG";
        side = 0;
        editorSubcategory = "EdSubcat_Personnel_SpecialForces";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Assaulter (RPG-7)";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\Stormtroopers\randomize_equipment.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_ST_RFM_LAT: O_Soldier_LAT_F {
        uniformClass = "SOF_U_O_SFFatigues_tghex";
        linkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SOF_V_CHPCCarrier_Rig_khk",
            "SOF_H_HelmetCSAT_Light_khk",
            "WOLFoT_TNA_203X_Shemagh",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[] = {
            "arifle_AK12_F",
            "launch_RPG7_F",
            "Throw",
            "Put"
        };
        respawnWeapons[] = {
            "arifle_AK12_F",
            "launch_RPG7_F",
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
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "RPG7_F",
            "RPG7_F",
            "HandGrenade",
            "SmokeShell"
        };
        respawnMagazines[] = {
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "30Rnd_545x39_Mag_F",
            "RPG7_F",
            "RPG7_F",
            "HandGrenade",
            "SmokeShell"
        };
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        backpack = "ghost_o_turkmenistan_Assault_Bpack_LAT2";
        side = 0;
        editorSubcategory = "EdSubcat_Personnel_SpecialForces";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Assaulter (MAAWS)";

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        class Extended_Init_EventHandlers {
            class ADDON {
                init = "(_this select 0) execVM ""\WOLFoT_TNA_RV\TNA\Units\Stormtroopers\randomize_equipment.sqf""";
            };
        };
    };
    class ghost_o_turkmenistan_T100: O_MBT_02_cannon_F {
        author = "J.Burgess";
        side = 0;
        faction = "ghost_o_turkmenistan";
        displayName = "T-100 Algharir";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "CamoNet"
        };
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\T100_TNA_Body.paa",
            "WOLFoT_TNA_RV\TNA\Veh\T100_TNA_Gun.paa",
            "WOLFoT_TNA_RV\TNA\Veh\T100_TNA_Back.paa",
            "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
        };
        crew = "ghost_o_turkmenistan_Crew";
        textureList[] = {
            "TNA",
            1
        };
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
        class TransportWeapons
        {
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "WOLFoT_TNA_RV\TNA\Veh\T100_TNA_Body.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\T100_TNA_Gun.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\T100_TNA_Back.paa",
                    "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
                };
                factions[] = {
                    "BLU_F",
                    "BLU_G_F",
                    "OPF_F",
                    "OPF_G_F",
                    "IND_F",
                    "IND_G_F",
                    "CIV_F"
                };
            };
        };
    };
    class ghost_o_turkmenistan_Hunter: B_MRAP_01_F {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "Sayaad";
        crew = "ghost_o_turkmenistan_RFM";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\TNA_MATV_B.paa",
            "WOLFoT_TNA_RV\TNA\Veh\TNA_MATV_R.paa"
        };
    };
    class ghost_o_turkmenistan_Hunter_GMG: B_MRAP_01_gmg_F {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "Sayaad (GMG)";
        crew = "ghost_o_turkmenistan_RFM";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\TNA_MATV_B.paa",
            "WOLFoT_TNA_RV\TNA\Veh\TNA_MATV_R.paa",
            "WOLFoT_TNA_RV\TNA\Veh\TNA_HMG.paa"
        };
    };
    class ghost_o_turkmenistan_Hunter_HMG: B_MRAP_01_hmg_F {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "Sayaad (HMG)";
        crew = "ghost_o_turkmenistan_RFM";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\TNA_MATV_B.paa",
            "WOLFoT_TNA_RV\TNA\Veh\TNA_MATV_R.paa",
            "WOLFoT_TNA_RV\TNA\Veh\TNA_HMG.paa"
        };
    };
    class ghost_o_turkmenistan_Offroad_UP_F: O_Tura_Offroad_armor_lxWS {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "Offroad (UP)";
        crew = "ghost_o_turkmenistan_RFM";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa",
            "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa",
            "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
            "WOLFoT_TNA_RV\TNA\Veh\Off_TNA_Arm.paa"
        };
        textureList[] = {
            "TNA",
            1
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa",
                    "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\Off_TNA_Arm.paa"
                };
                factions[] = {"WOLFoT_TNA_203X"};
            };
        };
    };
    class ghost_o_turkmenistan_Offroad_UP_HMG_F: O_Tura_Offroad_armor_armed_lxWS {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "Offroad (UP, HMG)";
        crew = "ghost_o_turkmenistan_RFM";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa",
            "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa",
            "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
            "WOLFoT_TNA_RV\TNA\Veh\Off_TNA_Arm.paa"
        };
        textureList[] = {
            "TNA",
            1
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa",
                    "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\Off_TNA_Arm.paa"
                };
                factions[] = {"WOLFoT_TNA_203X"};
            };
        };
    };
    class ghost_o_turkmenistan_Offroad_UP_AT_F: O_Tura_Offroad_armor_AT_lxWS {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "Offroad (UP, AT)";
        crew = "ghost_o_turkmenistan_RFM";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa",
            "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa",
            "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
            "WOLFoT_TNA_RV\TNA\Veh\Off_TNA_Arm.paa"
        };
        textureList[] = {
            "TNA",
            1
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa",
                    "\lxws\vehicles_f_lxws\Offroad_01\data\offroad_01_adds_black_co.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\Off_TNA_Arm.paa"
                };
                factions[] = {"WOLFoT_TNA_203X"};
            };
        };
    };
    class ghost_o_turkmenistan_LSVO_F: O_T_LSV_02_unarmed_F {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "Arnab";
        crew = "ghost_o_turkmenistan_RFM";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\LSV_O_1.paa",
            "WOLFoT_TNA_RV\TNA\Veh\LSV_O_2.paa",
            "WOLFoT_TNA_RV\TNA\Veh\LSV_O_3.paa"
        };
        textureList[] = {
            "TNA",
            1
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "WOLFoT_TNA_RV\TNA\Veh\LSV_O_1.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\LSV_O_2.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\LSV_O_3.paa"
                };
                factions[] = {"WOLFoT_TNA_203X"};
            };
        };
    };
    class ghost_o_turkmenistan_LSVO_MG_F: O_T_LSV_02_armed_F {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "Arnab (Minigun)";
        crew = "ghost_o_turkmenistan_RFM";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\LSV_O_1.paa",
            "WOLFoT_TNA_RV\TNA\Veh\LSV_O_2.paa",
            "WOLFoT_TNA_RV\TNA\Veh\LSV_O_3.paa"
        };
        textureList[] = {
            "TNA",
            1
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "WOLFoT_TNA_RV\TNA\Veh\LSV_O_1.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\LSV_O_2.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\LSV_O_3.paa"
                };
                factions[] = {"WOLFoT_TNA_203X"};
            };
        };
    };
    class ghost_o_turkmenistan_LSVO_AT_F: O_T_LSV_02_AT_F {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "Arnab (AT)";
        crew = "ghost_o_turkmenistan_RFM";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\LSV_O_1.paa",
            "WOLFoT_TNA_RV\TNA\Veh\LSV_O_2.paa",
            "WOLFoT_TNA_RV\TNA\Veh\LSV_O_3.paa",
            "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa",
            "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa"
        };
        textureList[] = {
            "TNA",
            1
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "WOLFoT_TNA_RV\TNA\Veh\LSV_O_1.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\LSV_O_2.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\LSV_O_3.paa",
                    "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa",
                    "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa"
                };
                factions[] = {"WOLFoT_TNA_203X"};
            };
        };
    };
    class ghost_o_turkmenistan_Offroad_F: O_G_Offroad_01_F {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "Offroad";
        crew = "ghost_o_turkmenistan_RFM";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa",
            "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa"
        };
        textureList[] = {
            "TNA",
            1
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa"
                };
                factions[] = {"WOLFoT_TNA_203X"};
            };
        };
    };
    class ghost_o_turkmenistan_Offroad_M2_F: O_G_Offroad_01_armed_F {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "Offroad (HMG)";
        crew = "ghost_o_turkmenistan_RFM";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa",
            "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa"
        };
        textureList[] = {
            "TNA",
            1
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa"
                };
                factions[] = {"WOLFoT_TNA_203X"};
            };
        };
    };
    class ghost_o_turkmenistan_Offroad_AT_F: O_G_Offroad_01_AT_F {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "Offroad (SPG)";
        crew = "ghost_o_turkmenistan_RFM";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa",
            "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa"
        };
        textureList[] = {
            "TNA",
            1
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\Off_TNA.paa"
                };
                factions[] = {"WOLFoT_TNA_203X"};
            };
        };
    };
    class ghost_o_turkmenistan_ZU23_F: O_Tura_ZU23_lxWS {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "Zu-23-2";
        crew = "ghost_o_turkmenistan_RFM";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\ZU_TNA_Wheels.paa",
            "WOLFoT_TNA_RV\TNA\Veh\ZU_TNA_Ammo.paa",
            "WOLFoT_TNA_RV\TNA\Veh\ZU_TNA_Shield.paa",
            "WOLFoT_TNA_RV\TNA\Veh\ZU_TNA_Gun.paa"
        };
        textureList[] = {
            "TNA",
            1
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "WOLFoT_TNA_RV\TNA\Veh\ZU_TNA_Wheels.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\ZU_TNA_Ammo.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\ZU_TNA_Shield.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\ZU_TNA_Gun.paa"
                };
                factions[] = {"WOLFoT_TNA_203X"};
            };
        };
    };
    class ghost_o_turkmenistan_M2_Low: B_G_HMG_02_F {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        side = 0;
        displayName = "M2 HMG .50";
        hiddenSelections[] = {
            "camo_1",
            "camo_2"
        };
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\M2.paa",
            "A3\Static_F\HMG_02\data\m2_combined_co.paa"
        };
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        crew = "ghost_o_turkmenistan_RFM";
    };
    class ghost_o_turkmenistan_M2_High: B_G_HMG_02_high_F {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        side = 0;
        displayName = "M2 HMG .50 (Raised)";
        hiddenSelections[] = {
            "camo_1",
            "camo_2"
        };
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\M2.paa",
            "A3\Static_F\HMG_02\data\m2_combined_co.paa"
        };
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        crew = "ghost_o_turkmenistan_RFM";
    };
    class ghost_o_turkmenistan_MH9: B_Heli_Light_01_F {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "MH-9 Hummingbird";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelectionsTextures[] = {"WOLFoT_TNA_RV\TNA\Veh\XH9_TNA.paa"};
        crew = "ghost_o_turkmenistan_Helipilot";
    };
    class ghost_o_turkmenistan_AH9: B_Heli_Light_01_dynamicLoadout_F {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "AH-9 Littlebird";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelectionsTextures[] = {"WOLFoT_TNA_RV\TNA\Veh\XH9_TNA.paa"};
        crew = "ghost_o_turkmenistan_Helipilot";
    };
    class ghost_o_turkmenistan_Zamak_ZU23: O_SFIA_Truck_02_aa_lxWS {
        author = "J.Burgess";
        side = 0;
        faction = "ghost_o_turkmenistan";
        displayName = "Zamak (Zu-23-2)";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "camo7",
            "camo8",
            "camo9"
        };
        hiddenSelectionsTextures[] = {
            "\WOLFoT_TNA_RV\TNA\Veh\Zamak_TNA_Body.paa",
            "\WOLFoT_TNA_RV\TNA\Veh\Zamak_TNA_Cover.paa",
            "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
            "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
            "WOLFoT_TNA_RV\TNA\Veh\ZU_TNA_Wheels.paa",
            "WOLFoT_TNA_RV\TNA\Veh\ZU_TNA_Ammo.paa",
            "WOLFoT_TNA_RV\TNA\Veh\ZU_TNA_Shield.paa",
            "WOLFoT_TNA_RV\TNA\Veh\ZU_TNA_Gun.paa",
            "lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
        };
        crew = "ghost_o_turkmenistan_RFM";
        textureList[] = {
            "TNA",
            1
        };
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
        class TransportWeapons
        {
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "\WOLFoT_TNA_RV\TNA\Veh\Zamak_TNA_Body.paa",
                    "\WOLFoT_TNA_RV\TNA\Veh\Zamak_TNA_Cover.paa",
                    "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
                    "\A3\Soft_F_Beta\Truck_02\Data\Truck_02_chassis_OPFOR_CO.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\ZU_TNA_Wheels.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\ZU_TNA_Ammo.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\ZU_TNA_Shield.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\ZU_TNA_Gun.paa",
                    "lxws\vehicles_f_lxws\Truck_02\data\addons_black_co.paa"
                };
                factions[] = {
                    "BLU_F",
                    "BLU_G_F",
                    "OPF_F",
                    "OPF_G_F",
                    "IND_F",
                    "IND_G_F",
                    "CIV_F"
                };
            };
        };
    };
    class ghost_o_turkmenistan_Zamak_C: O_Truck_02_covered_F {
        author = "J.Burgess";
        side = 0;
        faction = "ghost_o_turkmenistan";
        displayName = "Zamak Transport (Covered)";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "Camo1",
            "Camo2",
            "camo3"
        };
        hiddenSelectionsTextures[] = {
            "\WOLFoT_TNA_RV\TNA\Veh\Zamak_TNA_Body.paa",
            "\WOLFoT_TNA_RV\TNA\Veh\Zamak_TNA_Cover.paa",
            "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
        };
        crew = "ghost_o_turkmenistan_RFM";
        textureList[] = {
            "TNA",
            1
        };
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
        class TransportWeapons
        {
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "\WOLFoT_TNA_RV\TNA\Veh\Zamak_TNA_Body.paa",
                    "\WOLFoT_TNA_RV\TNA\Veh\Zamak_TNA_Cover.paa",
                    "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
                };
                factions[] = {
                    "BLU_F",
                    "BLU_G_F",
                    "OPF_F",
                    "OPF_G_F",
                    "IND_F",
                    "IND_G_F",
                    "CIV_F"
                };
            };
        };
    };
    class ghost_o_turkmenistan_Zamak_T: O_Truck_02_transport_F {
        author = "J.Burgess";
        side = 0;
        faction = "ghost_o_turkmenistan";
        displayName = "Zamak Transport";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "Camo1",
            "Camo2",
            "camo3"
        };
        hiddenSelectionsTextures[] = {
            "\WOLFoT_TNA_RV\TNA\Veh\Zamak_TNA_Body.paa",
            "\WOLFoT_TNA_RV\TNA\Veh\Zamak_TNA_Cover.paa",
            "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
        };
        crew = "ghost_o_turkmenistan_RFM";
        textureList[] = {
            "TNA",
            1
        };
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
        class TransportWeapons
        {
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "\WOLFoT_TNA_RV\TNA\Veh\Zamak_TNA_Body.paa",
                    "\WOLFoT_TNA_RV\TNA\Veh\Zamak_TNA_Cover.paa",
                    "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
                };
                factions[] = {
                    "BLU_F",
                    "BLU_G_F",
                    "OPF_F",
                    "OPF_G_F",
                    "IND_F",
                    "IND_G_F",
                    "CIV_F"
                };
            };
        };
    };
    class ghost_o_turkmenistan_BTRT: O_SFIA_APC_Tracked_02_30mm_lxWS {
        author = "J.Burgess";
        side = 0;
        faction = "ghost_o_turkmenistan";
        displayName = "BTR-T Artashir";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "CamoNet",
            "CamoSlat"
        };
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\TNA_BTRK_Body.paa",
            "WOLFoT_TNA_RV\TNA\Veh\TNA_BTRK_Body_2.paa",
            "WOLFoT_TNA_RV\TNA\Veh\TNA_BTRK_Iskatel_2.paa",
            "WOLFoT_TNA_RV\TNA\Veh\TNA_BTRK_Iskatel.paa",
            "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
            "A3\armor_f\data\cage_sand_CO.paa"
        };
        crew = "ghost_o_turkmenistan_Crew";
        textureList[] = {
            "TNA",
            1
        };
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
        class TransportWeapons
        {
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_BTRK_Body.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_BTRK_Body_2.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_BTRK_Iskatel_2.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_BTRK_Iskatel.paa",
                    "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
                    "A3\armor_f\data\cage_sand_CO.paa"
                };
                factions[] = {
                    "BLU_F",
                    "BLU_G_F",
                    "OPF_F",
                    "OPF_G_F",
                    "IND_F",
                    "IND_G_F",
                    "CIV_F"
                };
            };
        };
    };
    class ghost_o_turkmenistan_BTRT_U: O_APC_Tracked_02_cannon_F {
        author = "J.Burgess";
        side = 0;
        faction = "ghost_o_turkmenistan";
        displayName = "BTR-U Artashir";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "CamoNet",
            "CamoSlat"
        };
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\TNA_BTRK_Body.paa",
            "WOLFoT_TNA_RV\TNA\Veh\TNA_BTRK_Body_2.paa",
            "WOLFoT_TNA_RV\TNA\Veh\TNA_BTRK_Gun.paa",
            "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
            "A3\armor_f\data\cage_sand_CO.paa"
        };
        crew = "ghost_o_turkmenistan_Crew";
        textureList[] = {
            "TNA",
            1
        };
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
        class TransportWeapons
        {
        };
        class AnimationSources
        {
            class HideTurret
            {
                initPhase = 1;
            };
        };
        class Turrets
        {
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_BTRK_Body.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_BTRK_Body_2.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_BTRK_Gun.paa",
                    "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
                    "A3\armor_f\data\cage_sand_CO.paa"
                };
                factions[] = {
                    "BLU_F",
                    "BLU_G_F",
                    "OPF_F",
                    "OPF_G_F",
                    "IND_F",
                    "IND_G_F",
                    "CIV_F"
                };
            };
        };
    };
    class ghost_o_turkmenistan_CH67_U_F: B_Heli_Transport_03_unarmed_F {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayname = "CH-67 Simurg (Unarmed)";
        crew = "ghost_o_turkmenistan_Helipilot";
        typicalCargo[] = {"ghost_o_turkmenistan_Helipilot"};
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\TNA_Huron_A.paa",
            "WOLFoT_TNA_RV\TNA\Veh\TNA_Huron_B.paa"
        };
        textureList[] = {
            "TNA",
            1
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_Huron_A.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_Huron_B.paa"
                };
                factions[] = {"WOLFoT_TNA_203X"};
            };
        };
    };
    class ghost_o_turkmenistan_KA60_U: O_Heli_Light_02_unarmed_F {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "PO-30 Alsaqr";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"WOLFoT_TNA_RV\TNA\Veh\KA60_TNA.paa"};
        crew = "ghost_o_turkmenistan_Helipilot";
    };
    class ghost_o_turkmenistan_KA60_U_UP: B_ION_Heli_Light_02_unarmed_lxWS {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "PO-30 Alsaqr (Armored)";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\KA60_TNA.paa",
            "\a3\air_f\data\rockets_co.paa",
            "WOLFoT_TNA_RV\TNA\Veh\KA60_TNA_UP.paa"
        };
        crew = "ghost_o_turkmenistan_Helipilot";
    };
    class ghost_o_turkmenistan_KA60_A: O_Heli_Light_02_dynamicLoadout_F {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "PO-30 Alsaqr Armed";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"WOLFoT_TNA_RV\TNA\Veh\KA60_TNA.paa"};
        crew = "ghost_o_turkmenistan_Helipilot";
    };
    class ghost_o_turkmenistan_KA60_A_UP: B_ION_Heli_Light_02_dynamicLoadout_lxWS {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "PO-30 Alsaqr Armed (Armored)";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\KA60_TNA.paa",
            "\a3\air_f\data\rockets_co.paa",
            "WOLFoT_TNA_RV\TNA\Veh\KA60_TNA_UP.paa"
        };
        crew = "ghost_o_turkmenistan_Helipilot";
    };
    class ghost_o_turkmenistan_Mi48: O_Heli_Attack_02_dynamicLoadout_F {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        displayName = "Mi-48 Asad";
        side = 0;
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\Mi48_1.paa",
            "WOLFoT_TNA_RV\TNA\Veh\Mi48_2.paa"
        };
        crew = "ghost_o_turkmenistan_Helipilot";
    };
    class ghost_o_turkmenistan_To199: O_Plane_CAS_02_dynamicLoadout_F {
        author = "J.Burgess";
        faction = "ghost_o_turkmenistan";
        side = 0;
        displayName = "To-199 Shabah (CAS)";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\To199_TNA_1.paa",
            "WOLFoT_TNA_RV\TNA\Veh\To199_TNA_2.paa"
        };
        crew = "ghost_o_turkmenistan_JetPilot";
        textureList[] = {
            "TNA",
            1
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "WOLFoT_TNA_RV\TNA\Veh\To199_TNA_1.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\To199_TNA_2.paa"
                };
                factions[] = {"WOLFoT_TNA_203X"};
            };
        };
    };
    class ghost_o_turkmenistan_MSE3_RCWS: O_APC_Wheeled_02_rcws_v2_F {
        author = "J.Burgess";
        side = 0;
        faction = "ghost_o_turkmenistan";
        displayName = "MSE-3 (Armed)";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "camo1",
            "Camo2",
            "camo3",
            "CamoNet",
            "CamoSlat"
        };
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\TNA_MSE3_Body.paa",
            "WOLFoT_TNA_RV\TNA\Veh\TNA_MSE3_2.paa",
            "WOLFoT_TNA_RV\TNA\Veh\TNA_HMG.paa",
            "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
            "a3\Armor_F\Data\cage_sand_CO.paa"
        };
        crew = "ghost_o_turkmenistan_Crew";
        textureList[] = {
            "TNA",
            1
        };
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
        class TransportWeapons
        {
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_MSE3_Body.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_MSE3_2.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_HMG.paa",
                    "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
                    "a3\Armor_F\Data\cage_sand_CO.paa"
                };
                factions[] = {
                    "BLU_F",
                    "BLU_G_F",
                    "OPF_F",
                    "OPF_G_F",
                    "IND_F",
                    "IND_G_F",
                    "CIV_F"
                };
            };
        };
    };
    class ghost_o_turkmenistan_MSE3_HMG: B_UNA_APC_Wheeled_02_hmg_lxWS {
        author = "J.Burgess";
        side = 0;
        faction = "ghost_o_turkmenistan";
        displayName = "MSE-3 (HMG)";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "camo1",
            "Camo2",
            "camo3",
            "CamoNet",
            "CamoSlat",
            "Camo6"
        };
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\TNA_MSE3_Body.paa",
            "WOLFoT_TNA_RV\TNA\Veh\TNA_MSE3_2.paa",
            "WOLFoT_TNA_RV\TNA\Veh\TNA_MSE3_Turret.paa",
            "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
            "a3\Armor_F\Data\cage_sand_CO.paa",
            "WOLFoT_TNA_RV\TNA\Veh\TNA_MSE3_Com.paa"
        };
        crew = "ghost_o_turkmenistan_Crew";
        textureList[] = {
            "TNA",
            1
        };
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
        class TransportWeapons
        {
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_MSE3_Body.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_MSE3_2.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_MSE3_Turret.paa",
                    "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
                    "a3\Armor_F\Data\cage_sand_CO.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_MSE3_Com.paa"
                };
                factions[] = {
                    "BLU_F",
                    "BLU_G_F",
                    "OPF_F",
                    "OPF_G_F",
                    "IND_F",
                    "IND_G_F",
                    "CIV_F"
                };
            };
        };
    };
    class ghost_o_turkmenistan_MSE3_U: O_APC_Wheeled_02_rcws_v2_F {
        author = "J.Burgess";
        side = 0;
        faction = "ghost_o_turkmenistan";
        displayName = "MSE-U";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "camo1",
            "Camo2",
            "camo3",
            "CamoNet",
            "CamoSlat"
        };
        hiddenSelectionsTextures[] = {
            "WOLFoT_TNA_RV\TNA\Veh\TNA_MSE3_Body.paa",
            "WOLFoT_TNA_RV\TNA\Veh\TNA_MSE3_2.paa",
            "WOLFoT_TNA_RV\TNA\Veh\TNA_MSE3_Turret.paa",
            "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
            "a3\Armor_F\Data\cage_sand_CO.paa"
        };
        crew = "ghost_o_turkmenistan_Crew";
        textureList[] = {
            "TNA",
            1
        };
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
        class TransportWeapons
        {
        };
        class AnimationSources
        {
            class HideTurret
            {
                initPhase = 1;
            };
        };
        class Turrets
        {
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_MSE3_Body.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_MSE3_2.paa",
                    "WOLFoT_TNA_RV\TNA\Veh\TNA_MSE3_Turret.paa",
                    "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
                    "a3\Armor_F\Data\cage_sand_CO.paa"
                };
                factions[] = {
                    "BLU_F",
                    "BLU_G_F",
                    "OPF_F",
                    "OPF_G_F",
                    "IND_F",
                    "IND_G_F",
                    "CIV_F"
                };
            };
        };
    };
    class ghost_o_turkmenistan_Moose: B_Pickup_rf {
        author = "J.Burgess";
        side = 0;
        faction = "ghost_o_turkmenistan";
        displayName = "Pickup";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6"
        };
        hiddenSelectionsTextures[] = {
            "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Body.paa",
            "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Adds.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa",
            "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Cover.paa"
        };
        crew = "ghost_o_turkmenistan_RFM";
        textureList[] = {
            "TNA",
            1
        };
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
        class TransportWeapons
        {
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Body.paa",
                    "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Adds.paa",
                    "\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
                    "\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa",
                    "\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa",
                    "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Cover.paa"
                };
                factions[] = {
                    "BLU_F",
                    "BLU_G_F",
                    "OPF_F",
                    "OPF_G_F",
                    "IND_F",
                    "IND_G_F",
                    "CIV_F"
                };
            };
        };
    };
    class ghost_o_turkmenistan_Moose_C: B_Pickup_Comms_rf {
        author = "J.Burgess";
        side = 0;
        faction = "ghost_o_turkmenistan";
        displayName = "Pickup (Comms)";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6"
        };
        hiddenSelectionsTextures[] = {
            "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Body.paa",
            "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Adds.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa",
            "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Cover.paa"
        };
        crew = "ghost_o_turkmenistan_RFM";
        textureList[] = {
            "TNA",
            1
        };
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
        class TransportWeapons
        {
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Body.paa",
                    "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Adds.paa",
                    "\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
                    "\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa",
                    "\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa",
                    "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Cover.paa"
                };
                factions[] = {
                    "BLU_F",
                    "BLU_G_F",
                    "OPF_F",
                    "OPF_G_F",
                    "IND_F",
                    "IND_G_F",
                    "CIV_F"
                };
            };
        };
    };
    class ghost_o_turkmenistan_Moose_MRL: B_G_Pickup_mrl_rf {
        author = "J.Burgess";
        side = 0;
        faction = "ghost_o_turkmenistan";
        displayName = "Pickup (MRL)";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6"
        };
        hiddenSelectionsTextures[] = {
            "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Body.paa",
            "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Adds.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa",
            "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Cover.paa"
        };
        crew = "ghost_o_turkmenistan_RFM";
        textureList[] = {
            "TNA",
            1
        };
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
        class TransportWeapons
        {
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Body.paa",
                    "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Adds.paa",
                    "\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
                    "\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa",
                    "\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa",
                    "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Cover.paa"
                };
                factions[] = {
                    "BLU_F",
                    "BLU_G_F",
                    "OPF_F",
                    "OPF_G_F",
                    "IND_F",
                    "IND_G_F",
                    "CIV_F"
                };
            };
        };
    };
    class ghost_o_turkmenistan_Moose_M2: B_G_Pickup_hmg_rf {
        author = "J.Burgess";
        side = 0;
        faction = "ghost_o_turkmenistan";
        displayName = "Pickup (HMG)";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        hiddenSelections[] = {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6"
        };
        hiddenSelectionsTextures[] = {
            "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Body.paa",
            "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Adds.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa",
            "\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa",
            "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Cover.paa"
        };
        animationList[] = {
            "Hide_Shield",
            0,
            "Hide_Rail",
            1,
            "hide_bullbar",
            1,
            "hide_snorkel",
            0,
            "hide_antenna",
            1,
            "hide_trunk_door",
            0,
            "trunk_door_open",
            0,
            "hide_armor_window_armor_top",
            1,
            "window_armor_hatch_L_rot",
            0,
            "window_armor_hatch_R_rot",
            0,
            "door_F_L_open",
            0,
            "door_F_R_open",
            0,
            "door_R_L_open",
            0,
            "door_R_R_open",
            0,
            "hide_rack",
            0,
            "hide_rack_spotlights",
            0,
            "hide_frame",
            0,
            "hide_sidesteps",
            0
        };
        crew = "ghost_o_turkmenistan_RFM";
        textureList[] = {
            "TNA",
            1
        };
        class TransportMagazines
        {
        };
        class TransportItems
        {
        };
        class TransportWeapons
        {
        };
        class TextureSources
        {
            class TNA
            {
                displayName = "TNA";
                author = "Bohemia Interactive";
                textures[] = {
                    "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Body.paa",
                    "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Adds.paa",
                    "\lxrf\vehicles_rf\pickup_01\data\pickup_01_ext2_co.paa",
                    "\lxrf\vehicles_rf\pickup_01\data\pickup_01_aat_co.paa",
                    "\lxrf\vehicles_rf\pickup_01\data\pickup_01_launcher_co.paa",
                    "\WOLFoT_TNA_RV\TNA\Veh\RF\Moose_TNA_Cover.paa"
                };
                factions[] = {
                    "BLU_F",
                    "BLU_G_F",
                    "OPF_F",
                    "OPF_G_F",
                    "IND_F",
                    "IND_G_F",
                    "CIV_F"
                };
            };
        };
    };
};
