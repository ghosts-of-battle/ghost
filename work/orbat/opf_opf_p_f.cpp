//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class Opf_OPF_P_F {
        displayName = "Paramilitary";
        side = 0;
        priority = 3;
        icon = "\A3_Opf\Data_F_Opf\FactionIcons\CfgFactionClasses_OPF_P_CA.paa";
        flag = "\A3_Opf\Data_F_Opf\Flags\flag_Para_CO.paa";
    };
};

class CfgVehicles {

    class zu23_base_lxWS;
    class zu23_base_lxWS_OCimport_01 : zu23_base_lxWS { scope = 0; class EventHandlers; };
    class zu23_base_lxWS_OCimport_02 : zu23_base_lxWS_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_04_export_base_F;
    class APC_Wheeled_04_export_base_F_OCimport_01 : APC_Wheeled_04_export_base_F { scope = 0; class EventHandlers; };
    class APC_Wheeled_04_export_base_F_OCimport_02 : APC_Wheeled_04_export_base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_base_F;
    class HMG_02_base_F_OCimport_01 : HMG_02_base_F { scope = 0; class EventHandlers; };
    class HMG_02_base_F_OCimport_02 : HMG_02_base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_high_base_F;
    class HMG_02_high_base_F_OCimport_01 : HMG_02_high_base_F { scope = 0; class EventHandlers; };
    class HMG_02_high_base_F_OCimport_02 : HMG_02_high_base_F_OCimport_01 { class EventHandlers; };

    class Opf_O_P_M_Soldier_Base_F;
    class Opf_O_P_M_Soldier_Base_F_OCimport_01 : Opf_O_P_M_Soldier_Base_F { scope = 0; class EventHandlers; };
    class Opf_O_P_M_Soldier_Base_F_OCimport_02 : Opf_O_P_M_Soldier_Base_F_OCimport_01 { class EventHandlers; };

    class Opf_O_P_M_Soldier_1_F;
    class Opf_O_P_M_Soldier_1_F_OCimport_01 : Opf_O_P_M_Soldier_1_F { scope = 0; class EventHandlers; };
    class Opf_O_P_M_Soldier_1_F_OCimport_02 : Opf_O_P_M_Soldier_1_F_OCimport_01 { class EventHandlers; };

    class Offroad_01_AT_lxWS;
    class Offroad_01_AT_lxWS_OCimport_01 : Offroad_01_AT_lxWS { scope = 0; class EventHandlers; };
    class Offroad_01_AT_lxWS_OCimport_02 : Offroad_01_AT_lxWS_OCimport_01 { class EventHandlers; };

    class Offroad_01_base_lxWS;
    class Offroad_01_base_lxWS_OCimport_01 : Offroad_01_base_lxWS { scope = 0; class EventHandlers; };
    class Offroad_01_base_lxWS_OCimport_02 : Offroad_01_base_lxWS_OCimport_01 { class EventHandlers; };

    class Offroad_01_armed_lxWS;
    class Offroad_01_armed_lxWS_OCimport_01 : Offroad_01_armed_lxWS { scope = 0; class EventHandlers; };
    class Offroad_01_armed_lxWS_OCimport_02 : Offroad_01_armed_lxWS_OCimport_01 { class EventHandlers; };

    class Offroad_01_armor_AT_lxWS;
    class Offroad_01_armor_AT_lxWS_OCimport_01 : Offroad_01_armor_AT_lxWS { scope = 0; class EventHandlers; };
    class Offroad_01_armor_AT_lxWS_OCimport_02 : Offroad_01_armor_AT_lxWS_OCimport_01 { class EventHandlers; };

    class Offroad_01_armor_armed_lxWS;
    class Offroad_01_armor_armed_lxWS_OCimport_01 : Offroad_01_armor_armed_lxWS { scope = 0; class EventHandlers; };
    class Offroad_01_armor_armed_lxWS_OCimport_02 : Offroad_01_armor_armed_lxWS_OCimport_01 { class EventHandlers; };

    class Offroad_01_armor_base_lxWS;
    class Offroad_01_armor_base_lxWS_OCimport_01 : Offroad_01_armor_base_lxWS { scope = 0; class EventHandlers; };
    class Offroad_01_armor_base_lxWS_OCimport_02 : Offroad_01_armor_base_lxWS_OCimport_01 { class EventHandlers; };

    class Opf_O_P_soldier_1_F;
    class Opf_O_P_soldier_1_F_OCimport_01 : Opf_O_P_soldier_1_F { scope = 0; class EventHandlers; };
    class Opf_O_P_soldier_1_F_OCimport_02 : Opf_O_P_soldier_1_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_covered_F;
    class O_Truck_02_covered_F_OCimport_01 : O_Truck_02_covered_F { scope = 0; class EventHandlers; };
    class O_Truck_02_covered_F_OCimport_02 : O_Truck_02_covered_F_OCimport_01 { class EventHandlers; };

    class Truck_02_cargo_base_lxWS;
    class Truck_02_cargo_base_lxWS_OCimport_01 : Truck_02_cargo_base_lxWS { scope = 0; class EventHandlers; };
    class Truck_02_cargo_base_lxWS_OCimport_02 : Truck_02_cargo_base_lxWS_OCimport_01 { class EventHandlers; };

    class Truck_02_flatbed_base_lxWS;
    class Truck_02_flatbed_base_lxWS_OCimport_01 : Truck_02_flatbed_base_lxWS { scope = 0; class EventHandlers; };
    class Truck_02_flatbed_base_lxWS_OCimport_02 : Truck_02_flatbed_base_lxWS_OCimport_01 { class EventHandlers; };

    class O_Truck_02_transport_F;
    class O_Truck_02_transport_F_OCimport_01 : O_Truck_02_transport_F { scope = 0; class EventHandlers; };
    class O_Truck_02_transport_F_OCimport_02 : O_Truck_02_transport_F_OCimport_01 { class EventHandlers; };

    class Opf_O_P_soldier_base_F;
    class Opf_O_P_soldier_base_F_OCimport_01 : Opf_O_P_soldier_base_F { scope = 0; class EventHandlers; };
    class Opf_O_P_soldier_base_F_OCimport_02 : Opf_O_P_soldier_base_F_OCimport_01 { class EventHandlers; };

    class OpF_O_P_ZU23_lxWS_F : zu23_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zu-23-2";
        side = 0;
        faction = "opf_opf_p_f";
        crew = "Opf_O_P_M_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_APC_Wheeled_04_export_F : APC_Wheeled_04_export_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-100A Muharib";
        side = 0;
        faction = "opf_opf_p_f";
        crew = "Opf_O_P_M_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_HMG_02_F : HMG_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 0;
        faction = "opf_opf_p_f";
        crew = "Opf_O_P_M_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_HMG_02_high_F : HMG_02_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 0;
        faction = "opf_opf_p_f";
        crew = "Opf_O_P_M_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_M_Crew_F : Opf_O_P_M_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_Uniform_03_PLR_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_blk_F","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_blk_F","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKSM_alt_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKSM_alt_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_M_Soldier_1_F : Opf_O_P_M_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_Uniform_01_PLR_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","H_PASGT_basic_black_F","Aegis_G_Armband_OPF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","H_PASGT_basic_black_F","Aegis_G_Armband_OPF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_M_Soldier_2_F : Opf_O_P_M_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Commander";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_Uniform_02_PLR_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_blk_F","H_Beret_grn","G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_alt_blk_F","H_Beret_grn","G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKSM_F","hgun_Mk26_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_AKSM_F","hgun_Mk26_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","7Rnd_127x33_Mag","7Rnd_127x33_Mag","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","7Rnd_127x33_Mag","7Rnd_127x33_Mag","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_M_Soldier_3_F : Opf_O_P_M_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_Uniform_02_PLR_F";

        backpack = "B_FieldPack_green_OSMedic_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","H_Shemag_olive","Aegis_G_Armband_OPF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","H_Shemag_olive","Aegis_G_Armband_OPF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Katiba_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_M_Soldier_4_F : Opf_O_P_M_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_Uniform_01_PLR_F";

        linkedItems[] = {"H_turban_02_mask_black_lxws","Atlas_V_OCarrierRig_Lite_blk_F","Aegis_G_Armband_OPF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_turban_02_mask_black_lxws","Atlas_V_OCarrierRig_Lite_blk_F","Aegis_G_Armband_OPF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_RPK74M_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_RPK74M_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
        respawnMagazines[] = {"Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_M_Soldier_5_F : Opf_O_P_M_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_Uniform_03_PLR_F";

        backpack = "B_FieldPack_green_OSRPG_AT_F";

        linkedItems[] = {"H_ShemagOpen_khk","V_TacChestRig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_ShemagOpen_khk","V_TacChestRig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_F","Aegis_launch_RPG7M_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_F","Aegis_launch_RPG7M_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","RPG7_F"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","30Rnd_545x39_Black_Mag_Yellow_F","RPG7_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_M_Soldier_6_F : Opf_O_P_M_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_Uniform_02_PLR_F";

        linkedItems[] = {"G_Balaclava_blk","H_PASGT_basic_black_F","Atlas_V_OCarrierRig_GL_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"G_Balaclava_blk","H_PASGT_basic_black_F","Atlas_V_OCarrierRig_GL_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Katiba_GL_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_GL_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_M_Soldier_7_F : Opf_O_P_M_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_Uniform_02_PLR_F";

        linkedItems[] = {"lxWS_H_turban_03_green","Aegis_G_Armband_OPF_F","Atlas_V_ORigLBV_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"lxWS_H_turban_03_green","Aegis_G_Armband_OPF_F","Atlas_V_ORigLBV_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_DMR_01_black_KHS_BI_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"srifle_DMR_01_black_KHS_BI_F","Throw","Put","Binocular"};

        magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag"};
        respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_M_Soldier_8_F : Opf_O_P_M_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sapper";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_Uniform_03_PLR_F";

        backpack = "B_FieldPack_green_OSExp_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","H_Watchcap_blk","G_Bandanna_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","H_Watchcap_blk","G_Bandanna_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"sgun_Mp153_black_F","Throw","Put"};
        respawnWeapons[] = {"sgun_Mp153_black_F","Throw","Put"};

        magazines[] = {"4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug"};
        respawnMagazines[] = {"4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_M_Soldier_CMort_RF : Opf_O_P_M_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_Uniform_03_PLR_F";

        backpack = "O_CommandoMortar_weapon_RF";

        linkedItems[] = {"Atlas_V_ORigLBV_blk_F","H_Watchcap_blk","G_Bandanna_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_ORigLBV_blk_F","H_Watchcap_blk","G_Bandanna_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKSM_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKSM_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_M_Soldier_unarmed_F : Opf_O_P_M_Soldier_1_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_Uniform_01_PLR_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","H_PASGT_basic_black_F","Aegis_G_Armband_OPF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","H_PASGT_basic_black_F","Aegis_G_Armband_OPF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_Offroad_01_AT_F : Offroad_01_AT_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Desert, AT)";
        side = 0;
        faction = "opf_opf_p_f";
        crew = "Opf_O_P_M_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_Offroad_01_F : Offroad_01_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Desert)";
        side = 0;
        faction = "opf_opf_p_f";
        crew = "Opf_O_P_M_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_Offroad_01_armed_F : Offroad_01_armed_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Desert, HMG)";
        side = 0;
        faction = "opf_opf_p_f";
        crew = "Opf_O_P_M_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_Offroad_01_armor_AT_F : Offroad_01_armor_AT_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (UP, AT)";
        side = 0;
        faction = "opf_opf_p_f";
        crew = "Opf_O_P_M_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_Offroad_01_armor_armed_F : Offroad_01_armor_armed_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (UP, HMG)";
        side = 0;
        faction = "opf_opf_p_f";
        crew = "Opf_O_P_M_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_Offroad_01_armor_base_F : Offroad_01_armor_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (UP)";
        side = 0;
        faction = "opf_opf_p_f";
        crew = "Opf_O_P_M_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_Soldier_unarmed_F : Opf_O_P_soldier_1_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_O_ParamilitaryBody";

        linkedItems[] = {"V_ChestrigF_rgr","lxWS_H_Turban_01_red","G_shemag_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_rgr","lxWS_H_Turban_01_red","G_shemag_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_Truck_02_F : O_Truck_02_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport (covered)";
        side = 0;
        faction = "opf_opf_p_f";
        crew = "Opf_O_P_M_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_Truck_02_cargo_F : Truck_02_cargo_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Cargo";
        side = 0;
        faction = "opf_opf_p_f";
        crew = "Opf_O_P_M_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_Truck_02_flatbed_F : Truck_02_flatbed_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Flatbed";
        side = 0;
        faction = "opf_opf_p_f";
        crew = "Opf_O_P_M_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_Truck_02_transport_F : O_Truck_02_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Transport";
        side = 0;
        faction = "opf_opf_p_f";
        crew = "Opf_O_P_M_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_medic_F : Opf_O_P_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_O_ParamilitaryBody";

        backpack = "B_TacticalPack_blk_Medic";

        linkedItems[] = {"V_TacVest_gry","lxWS_H_Turban_04_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_gry","lxWS_H_Turban_04_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKS74_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKS74_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_soldier_1_F : Opf_O_P_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_O_ParamilitaryBody";

        linkedItems[] = {"V_ChestrigF_rgr","lxWS_H_Turban_01_red","G_Shemag_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_rgr","lxWS_H_Turban_01_red","G_Shemag_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AK74_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AK74_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_soldier_AR_F : Opf_O_P_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_O_ParamilitaryBody";

        linkedItems[] = {"V_HarnessO_blk","lxWS_H_Turban_02_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_blk","lxWS_H_Turban_02_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_RPK74M_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_RPK74M_F","Throw","Put"};

        magazines[] = {"Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_soldier_GL_F : Opf_O_P_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_O_ParamilitaryBody";

        linkedItems[] = {"V_HarnessOGL_blk","lxWS_H_Turban_03_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessOGL_blk","lxWS_H_Turban_03_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SLR_GL_lxWS","Throw","Put"};
        respawnWeapons[] = {"arifle_SLR_GL_lxWS","Throw","Put"};

        magazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS"};
        respawnMagazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_soldier_LAT_F : Opf_O_P_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_O_ParamilitaryBody";

        backpack = "B_TacticalPack_blk_LAT";

        linkedItems[] = {"V_TacVest_gry","lxWS_H_Turban_02_red","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_gry","lxWS_H_Turban_02_red","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKS74_F","launch_RPG32_black_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKS74_F","launch_RPG32_black_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","RPG32_F"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","RPG32_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_soldier_M_F : Opf_O_P_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_O_ParamilitaryBody";

        linkedItems[] = {"V_ChestrigF_rgr","lxWS_H_Turban_01_red","G_Shemag_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_rgr","lxWS_H_Turban_01_red","G_Shemag_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_DMR_06_hunter_khs_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"srifle_DMR_06_hunter_khs_F","Throw","Put","Binocular"};

        magazines[] = {"10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag"};
        respawnMagazines[] = {"10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_soldier_TL_F : Opf_O_P_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_O_ParamilitaryBody";

        linkedItems[] = {"V_TacVest_gry","H_Beret_gry","G_Shemag_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_gry","H_Beret_gry","G_Shemag_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AK74_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Aegis_arifle_AK74_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_P_soldier_exp_F : Opf_O_P_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sapper";
        side = 0;
        faction = "opf_opf_p_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_PARA_default"};

        uniformClass = "Opf_U_O_ParamilitaryBody";

        backpack = "B_TacticalPack_blk_Exp";

        linkedItems[] = {"V_TacVest_gry","lxWS_H_Turban_01_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_gry","lxWS_H_Turban_01_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKS74_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKS74_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};


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
        class Opf_OPF_P_F {
            class Infantry {
                class Opf_O_P_M_InfSentry {
                    name = "Sentry";
                    side = 0;
                    faction = "Opf_OPF_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_O_P_M_soldier_6_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_O_P_M_soldier_1_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Opf_O_P_M_InfSquad {
                    name = "Rifle Squad";
                    side = 0;
                    faction = "Opf_OPF_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_O_P_M_soldier_2_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_O_P_M_soldier_1_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_O_P_M_soldier_5_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_O_P_M_soldier_7_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Opf_O_P_M_soldier_6_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Opf_O_P_M_soldier_4_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Opf_O_P_M_soldier_8_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Opf_O_P_M_Soldier_3_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Opf_O_P_M_InfTeam {
                    name = "Fire Team";
                    side = 0;
                    faction = "Opf_OPF_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_O_P_M_soldier_2_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_O_P_M_soldier_4_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_O_P_M_soldier_6_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_O_P_M_soldier_5_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class InfantryMilitants {
                class Opf_O_P_InfSentry {
                    name = "Sentry";
                    side = 0;
                    faction = "Opf_OPF_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_O_P_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_O_P_soldier_1_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Opf_O_P_InfSquad {
                    name = "Rifle Squad";
                    side = 0;
                    faction = "Opf_OPF_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_O_P_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_O_P_soldier_1_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_O_P_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_O_P_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Opf_O_P_soldier_GL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Opf_O_P_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Opf_O_P_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Opf_O_P_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Opf_O_P_InfTeam {
                    name = "Fire Team";
                    side = 0;
                    faction = "Opf_OPF_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_O_P_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_O_P_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_O_P_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_O_P_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class Opf_O_P_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 0;
                    faction = "Opf_OPF_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_O_P_APC_Wheeled_04_export_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_O_P_M_soldier_2_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_O_P_M_Soldier_5_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_O_P_M_Soldier_7_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Opf_O_P_M_Soldier_6_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Opf_O_P_M_Soldier_4_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Opf_O_P_M_Soldier_3_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                };
            };
            class Motorized_MTP {
                class Opf_O_P_MotInf_Team {
                    name = "Motorized Patrol";
                    side = 0;
                    faction = "Opf_OPF_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_O_P_Offroad_01_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_O_P_M_Soldier_2_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_O_P_M_Soldier_4_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_O_P_M_Soldier_5_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Opf_O_P_M_Soldier_3_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Opf_O_P_M_Soldier_1_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };
                };
                class Opf_O_P_Technicals {
                    name = "Technicals";
                    side = 0;
                    faction = "Opf_OPF_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_O_P_Offroad_01_armed_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_O_P_Offroad_01_armed_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_O_P_Offroad_01_AT_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };
                };
            };
        };
    };
};
