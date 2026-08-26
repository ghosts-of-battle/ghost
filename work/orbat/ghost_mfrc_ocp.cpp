//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class ghost_MFRC_ocp {
        displayName = "ghost MFRC (Arid)";
        author = "Ghost";
        side = 1;
        priority = 1;
        icon = "\A3\Data_F\Flags\flag_NATO_CO.paa";
        flag = "\A3\Data_F\Flags\flag_NATO_CO.paa";
    };
};

class CfgVehicles {

    class B_CTRG_Soldier_v2_F;
    class B_CTRG_Soldier_v2_F_OCimport_01 : B_CTRG_Soldier_v2_F { scope = 0; class EventHandlers; };
    class B_CTRG_Soldier_v2_F_OCimport_02 : B_CTRG_Soldier_v2_F_OCimport_01 { class EventHandlers; };

    class ghost_MFRC_ocp_ReconScout : B_CTRG_Soldier_v2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout";
        side = 1;
        faction = "ghost_mfrc_ocp";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "ghost_uniform_sof_SOF_U_B_SFFatigues_Shortsleeve_ocp";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_olive_F","ghost_headware_H_Booniehat_ocp_F","ItemMap","ItemGPS","ItemCompass"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_olive_F","ghost_headware_H_Booniehat_ocp_F","ItemMap","ItemGPS","ItemCompass"};

        weapons[] = {"hgun_Glock19_auto_khk_RF","Throw","Put"};
        respawnWeapons[] = {"hgun_Glock19_auto_khk_RF","Throw","Put"};

        magazines[] = {"17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"17Rnd_9x19_Mag_RF","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};

class CfgGroups {
    class West {
        class ghost_MFRC_ocp {
            class Infantry {
                class ghost_MFRC_ocp_Company {
                    name = "MFRC Company (64)";
                    side = 1;
                    rarityGroup = 1;
                    faction = "ghost_MFRC_ocp";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

                    class Unit0 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "CAPTAIN";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {10,0,0};
                    };

                    class Unit3 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {15,0,0};
                    };

                    class Unit4 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {20,0,0};
                    };

                    class Unit5 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {25,0,0};
                    };

                    class Unit6 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {30,0,0};
                    };

                    class Unit7 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {35,0,0};
                    };

                    class Unit8 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "SERGEANT";
                        position[] = {0,-5,0};
                    };

                    class Unit9 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit10 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {10,-5,0};
                    };

                    class Unit11 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {15,-5,0};
                    };

                    class Unit12 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {20,-5,0};
                    };

                    class Unit13 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {25,-5,0};
                    };

                    class Unit14 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {30,-5,0};
                    };

                    class Unit15 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {35,-5,0};
                    };

                    class Unit16 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "SERGEANT";
                        position[] = {0,-10,0};
                    };

                    class Unit17 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {5,-10,0};
                    };

                    class Unit18 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit19 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {15,-10,0};
                    };

                    class Unit20 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {20,-10,0};
                    };

                    class Unit21 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {25,-10,0};
                    };

                    class Unit22 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {30,-10,0};
                    };

                    class Unit23 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {35,-10,0};
                    };

                    class Unit24 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "SERGEANT";
                        position[] = {0,-15,0};
                    };

                    class Unit25 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {5,-15,0};
                    };

                    class Unit26 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {10,-15,0};
                    };

                    class Unit27 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit28 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {20,-15,0};
                    };

                    class Unit29 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {25,-15,0};
                    };

                    class Unit30 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {30,-15,0};
                    };

                    class Unit31 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {35,-15,0};
                    };

                    class Unit32 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "SERGEANT";
                        position[] = {0,-20,0};
                    };

                    class Unit33 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {5,-20,0};
                    };

                    class Unit34 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {10,-20,0};
                    };

                    class Unit35 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {15,-20,0};
                    };

                    class Unit36 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit37 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {25,-20,0};
                    };

                    class Unit38 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {30,-20,0};
                    };

                    class Unit39 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {35,-20,0};
                    };

                    class Unit40 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "SERGEANT";
                        position[] = {0,-25,0};
                    };

                    class Unit41 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {5,-25,0};
                    };

                    class Unit42 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {10,-25,0};
                    };

                    class Unit43 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {15,-25,0};
                    };

                    class Unit44 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {20,-25,0};
                    };

                    class Unit45 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {25,-25,0};
                    };

                    class Unit46 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {30,-25,0};
                    };

                    class Unit47 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {35,-25,0};
                    };

                    class Unit48 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "SERGEANT";
                        position[] = {0,-30,0};
                    };

                    class Unit49 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {5,-30,0};
                    };

                    class Unit50 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {10,-30,0};
                    };

                    class Unit51 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {15,-30,0};
                    };

                    class Unit52 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {20,-30,0};
                    };

                    class Unit53 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {25,-30,0};
                    };

                    class Unit54 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {30,-30,0};
                    };

                    class Unit55 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {35,-30,0};
                    };

                    class Unit56 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "SERGEANT";
                        position[] = {0,-35,0};
                    };

                    class Unit57 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {5,-35,0};
                    };

                    class Unit58 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {10,-35,0};
                    };

                    class Unit59 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {15,-35,0};
                    };

                    class Unit60 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {20,-35,0};
                    };

                    class Unit61 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {25,-35,0};
                    };

                    class Unit62 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {30,-35,0};
                    };

                    class Unit63 {
                        vehicle = "ghost_MFRC_ocp_ReconScout";
                        rank = "PRIVATE";
                        position[] = {35,-35,0};
                    };
                };
            };
        };
    };
};
