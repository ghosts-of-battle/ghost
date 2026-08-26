//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class OPF_V_tna_F {
        displayName = "Viper (Pacific)";
        side = 0;
        priority = 3;
        icon = "\A3\Data_F_Exp\FactionIcons\icon_VIPER_CA.paa";
        flag = "\A3\Data_F_Exp\Flags\flag_Viper_CO.paa";
    };
};

class CfgVehicles {

    class LSV_02_AT_base_F;
    class LSV_02_AT_base_F_OCimport_01 : LSV_02_AT_base_F { scope = 0; class EventHandlers; };
    class LSV_02_AT_base_F_OCimport_02 : LSV_02_AT_base_F_OCimport_01 { class EventHandlers; };

    class LSV_02_armed_base_F;
    class LSV_02_armed_base_F_OCimport_01 : LSV_02_armed_base_F { scope = 0; class EventHandlers; };
    class LSV_02_armed_base_F_OCimport_02 : LSV_02_armed_base_F_OCimport_01 { class EventHandlers; };

    class LSV_02_unarmed_base_F;
    class LSV_02_unarmed_base_F_OCimport_01 : LSV_02_unarmed_base_F { scope = 0; class EventHandlers; };
    class LSV_02_unarmed_base_F_OCimport_02 : LSV_02_unarmed_base_F_OCimport_01 { class EventHandlers; };

    class O_V_Soldier_Exp_hex_F;
    class O_V_Soldier_Exp_hex_F_OCimport_01 : O_V_Soldier_Exp_hex_F { scope = 0; class EventHandlers; };
    class O_V_Soldier_Exp_hex_F_OCimport_02 : O_V_Soldier_Exp_hex_F_OCimport_01 { class EventHandlers; };

    class O_V_Soldier_JTAC_hex_F;
    class O_V_Soldier_JTAC_hex_F_OCimport_01 : O_V_Soldier_JTAC_hex_F { scope = 0; class EventHandlers; };
    class O_V_Soldier_JTAC_hex_F_OCimport_02 : O_V_Soldier_JTAC_hex_F_OCimport_01 { class EventHandlers; };

    class O_V_Soldier_LAT_hex_F;
    class O_V_Soldier_LAT_hex_F_OCimport_01 : O_V_Soldier_LAT_hex_F { scope = 0; class EventHandlers; };
    class O_V_Soldier_LAT_hex_F_OCimport_02 : O_V_Soldier_LAT_hex_F_OCimport_01 { class EventHandlers; };

    class O_V_Soldier_M_hex_F;
    class O_V_Soldier_M_hex_F_OCimport_01 : O_V_Soldier_M_hex_F { scope = 0; class EventHandlers; };
    class O_V_Soldier_M_hex_F_OCimport_02 : O_V_Soldier_M_hex_F_OCimport_01 { class EventHandlers; };

    class O_V_Soldier_Medic_hex_F;
    class O_V_Soldier_Medic_hex_F_OCimport_01 : O_V_Soldier_Medic_hex_F { scope = 0; class EventHandlers; };
    class O_V_Soldier_Medic_hex_F_OCimport_02 : O_V_Soldier_Medic_hex_F_OCimport_01 { class EventHandlers; };

    class O_V_Soldier_TL_hex_F;
    class O_V_Soldier_TL_hex_F_OCimport_01 : O_V_Soldier_TL_hex_F { scope = 0; class EventHandlers; };
    class O_V_Soldier_TL_hex_F_OCimport_02 : O_V_Soldier_TL_hex_F_OCimport_01 { class EventHandlers; };

    class O_V_Soldier_hex_F;
    class O_V_Soldier_hex_F_OCimport_01 : O_V_Soldier_hex_F { scope = 0; class EventHandlers; };
    class O_V_Soldier_hex_F_OCimport_02 : O_V_Soldier_hex_F_OCimport_01 { class EventHandlers; };

    class O_V_LSV_02_AT_ghex_F : LSV_02_AT_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LSV Mk. II (Metis-M)";
        side = 0;
        faction = "opf_v_tna_f";
        crew = "O_V_Soldier_ghex_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_V_LSV_02_armed_ghex_F : LSV_02_armed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LSV Mk. II (M134)";
        side = 0;
        faction = "opf_v_tna_f";
        crew = "O_V_Soldier_ghex_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_V_LSV_02_unarmed_ghex_F : LSV_02_unarmed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LSV Mk. II";
        side = 0;
        faction = "opf_v_tna_f";
        crew = "O_V_Soldier_ghex_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_V_Soldier_Exp_ghex_F : O_V_Soldier_Exp_hex_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Viper Demo Specialist";
        side = 0;
        faction = "opf_v_tna_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_V_Soldier_Viper_F";

        backpack = "B_ViperHarness_ghex_Exp_F";

        linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x21_Mag","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x21_Mag","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_V_Soldier_JTAC_ghex_F : O_V_Soldier_JTAC_hex_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Viper JTAC";
        side = 0;
        faction = "opf_v_tna_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_V_Soldier_Viper_F";

        backpack = "B_ViperHarness_ghex_JTAC_F";

        linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02_ghex_F"};
        respawnWeapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02_ghex_F"};

        magazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x21_Mag","Laserbatteries","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x21_Mag","Laserbatteries","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_V_Soldier_LAT_ghex_F : O_V_Soldier_LAT_hex_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Viper Operative (AT)";
        side = 0;
        faction = "opf_v_tna_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_V_Soldier_Viper_F";

        backpack = "B_ViperHarness_ghex_LAT_F";

        linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","launch_RPG32_ghex_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","launch_RPG32_ghex_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x21_Mag","RPG32_F","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x21_Mag","RPG32_F","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_V_Soldier_M_ghex_F : O_V_Soldier_M_hex_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Viper Marksman";
        side = 0;
        faction = "opf_v_tna_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_V_Soldier_Viper_F";

        backpack = "B_ViperHarness_ghex_M_F";

        linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_ARX_ghex_DMS_Pointer_Snds_Bipod_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_ARX_ghex_DMS_Pointer_Snds_Bipod_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x21_Mag","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x21_Mag","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_V_Soldier_Medic_ghex_F : O_V_Soldier_Medic_hex_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Viper Paramedic";
        side = 0;
        faction = "opf_v_tna_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_V_Soldier_Viper_F";

        backpack = "B_ViperHarness_ghex_Medic_F";

        linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x21_Mag","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x21_Mag","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_V_Soldier_TL_ghex_F : O_V_Soldier_TL_hex_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Viper Team Leader";
        side = 0;
        faction = "opf_v_tna_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_V_Soldier_Viper_F";

        backpack = "B_ViperHarness_ghex_TL_F";

        linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x21_Mag","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x21_Mag","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_V_Soldier_ghex_F : O_V_Soldier_hex_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Viper Operative";
        side = 0;
        faction = "opf_v_tna_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_V_Soldier_Viper_F";

        backpack = "B_ViperHarness_ghex_M_F";

        linkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetO_ViperSP_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_ARX_ghex_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x21_Mag","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","17Rnd_9x21_Mag","Chemlight_red","Chemlight_red"};


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
    class East {
        class OPF_V_tna_F {
            class Motorized_MTP {
                class O_V_MotInf_AssaultViperTeam {
                    name = "Motorized Viper Assault Team";
                    side = 0;
                    faction = "OPF_V_tna_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_LSV_02_armed_viper_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_V_Soldier_TL_ghex_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_V_Soldier_JTAC_ghex_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_V_Soldier_M_ghex_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_V_Soldier_Exp_ghex_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_V_Soldier_LAT_ghex_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_V_Soldier_Medic_ghex_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                };
                class O_V_MotInf_ReconViperTeam {
                    name = "Motorized Viper Recon Team";
                    side = 0;
                    faction = "OPF_V_tna_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_LSV_02_unarmed_viper_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_V_Soldier_TL_ghex_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_V_Soldier_JTAC_ghex_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_V_Soldier_M_ghex_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_V_Soldier_Exp_ghex_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_V_Soldier_LAT_ghex_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_V_Soldier_Medic_ghex_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                };
            };
            class SpecOps {
                class O_V_ViperPatrol {
                    name = "Viper Patrol";
                    side = 0;
                    faction = "OPF_V_tna_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";

                    class Unit0 {
                        vehicle = "O_V_Soldier_TL_ghex_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_V_Soldier_M_ghex_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_V_Soldier_Medic_ghex_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_V_Soldier_ghex_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_V_ViperSentry {
                    name = "Viper Sentry";
                    side = 0;
                    faction = "OPF_V_tna_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";

                    class Unit0 {
                        vehicle = "O_V_Soldier_M_ghex_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_V_Soldier_ghex_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class O_V_ViperTeam {
                    name = "Viper Team";
                    side = 0;
                    faction = "OPF_V_tna_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";

                    class Unit0 {
                        vehicle = "O_V_Soldier_TL_ghex_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_V_Soldier_JTAC_ghex_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_V_Soldier_M_ghex_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_V_Soldier_Exp_ghex_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_V_Soldier_LAT_ghex_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_V_Soldier_Medic_ghex_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
            };
        };
    };
};
