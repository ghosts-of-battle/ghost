//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class Marine_BLU_USMC_F {
        displayName = "USMC";
        side = 1;
        priority = 3;
        icon = "\A3_Marine\Data_F_Marine\FactionIcons\icon_USMC_CA.paa";
        flag = "\A3_Marine\Data_F_Marine\Flags\flag_USMC_CO.paa";
    };
};

class CfgVehicles {

    class Boat_Transport_02_base_F;
    class Boat_Transport_02_base_F_OCimport_01 : Boat_Transport_02_base_F { scope = 0; class EventHandlers; };
    class Boat_Transport_02_base_F_OCimport_02 : Boat_Transport_02_base_F_OCimport_01 { class EventHandlers; };

    class B_Heli_Attack_01_dynamicLoadout_F;
    class B_Heli_Attack_01_dynamicLoadout_F_OCimport_01 : B_Heli_Attack_01_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class B_Heli_Attack_01_dynamicLoadout_F_OCimport_02 : B_Heli_Attack_01_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class B_Heli_Transport_01_F;
    class B_Heli_Transport_01_F_OCimport_01 : B_Heli_Transport_01_F { scope = 0; class EventHandlers; };
    class B_Heli_Transport_01_F_OCimport_02 : B_Heli_Transport_01_F_OCimport_01 { class EventHandlers; };

    class Marine_B_USMC_Soldier_F;
    class Marine_B_USMC_Soldier_F_OCimport_01 : Marine_B_USMC_Soldier_F { scope = 0; class EventHandlers; };
    class Marine_B_USMC_Soldier_F_OCimport_02 : Marine_B_USMC_Soldier_F_OCimport_01 { class EventHandlers; };

    class Marine_B_USMC_Soldier_wdl_F;
    class Marine_B_USMC_Soldier_wdl_F_OCimport_01 : Marine_B_USMC_Soldier_wdl_F { scope = 0; class EventHandlers; };
    class Marine_B_USMC_Soldier_wdl_F_OCimport_02 : Marine_B_USMC_Soldier_wdl_F_OCimport_01 { class EventHandlers; };

    class Marine_B_USMC_Soldier_Base_F;
    class Marine_B_USMC_Soldier_Base_F_OCimport_01 : Marine_B_USMC_Soldier_Base_F { scope = 0; class EventHandlers; };
    class Marine_B_USMC_Soldier_Base_F_OCimport_02 : Marine_B_USMC_Soldier_Base_F_OCimport_01 { class EventHandlers; };

    class Marine_B_USMC_Soldier_AR_F;
    class Marine_B_USMC_Soldier_AR_F_OCimport_01 : Marine_B_USMC_Soldier_AR_F { scope = 0; class EventHandlers; };
    class Marine_B_USMC_Soldier_AR_F_OCimport_02 : Marine_B_USMC_Soldier_AR_F_OCimport_01 { class EventHandlers; };

    class Marine_B_USMC_Soldier_A_F;
    class Marine_B_USMC_Soldier_A_F_OCimport_01 : Marine_B_USMC_Soldier_A_F { scope = 0; class EventHandlers; };
    class Marine_B_USMC_Soldier_A_F_OCimport_02 : Marine_B_USMC_Soldier_A_F_OCimport_01 { class EventHandlers; };

    class Marine_B_USMC_Soldier_GL_F;
    class Marine_B_USMC_Soldier_GL_F_OCimport_01 : Marine_B_USMC_Soldier_GL_F { scope = 0; class EventHandlers; };
    class Marine_B_USMC_Soldier_GL_F_OCimport_02 : Marine_B_USMC_Soldier_GL_F_OCimport_01 { class EventHandlers; };

    class Marine_B_USMC_Soldier_LAT_F;
    class Marine_B_USMC_Soldier_LAT_F_OCimport_01 : Marine_B_USMC_Soldier_LAT_F { scope = 0; class EventHandlers; };
    class Marine_B_USMC_Soldier_LAT_F_OCimport_02 : Marine_B_USMC_Soldier_LAT_F_OCimport_01 { class EventHandlers; };

    class Marine_B_USMC_Soldier_SL_F;
    class Marine_B_USMC_Soldier_SL_F_OCimport_01 : Marine_B_USMC_Soldier_SL_F { scope = 0; class EventHandlers; };
    class Marine_B_USMC_Soldier_SL_F_OCimport_02 : Marine_B_USMC_Soldier_SL_F_OCimport_01 { class EventHandlers; };

    class Marine_B_USMC_Soldier_TL_F;
    class Marine_B_USMC_Soldier_TL_F_OCimport_01 : Marine_B_USMC_Soldier_TL_F { scope = 0; class EventHandlers; };
    class Marine_B_USMC_Soldier_TL_F_OCimport_02 : Marine_B_USMC_Soldier_TL_F_OCimport_01 { class EventHandlers; };

    class Marine_B_USMC_engineer_F;
    class Marine_B_USMC_engineer_F_OCimport_01 : Marine_B_USMC_engineer_F { scope = 0; class EventHandlers; };
    class Marine_B_USMC_engineer_F_OCimport_02 : Marine_B_USMC_engineer_F_OCimport_01 { class EventHandlers; };

    class Marine_B_USMC_medic_F;
    class Marine_B_USMC_medic_F_OCimport_01 : Marine_B_USMC_medic_F { scope = 0; class EventHandlers; };
    class Marine_B_USMC_medic_F_OCimport_02 : Marine_B_USMC_medic_F_OCimport_01 { class EventHandlers; };

    class Marine_B_USMC_officer_F;
    class Marine_B_USMC_officer_F_OCimport_01 : Marine_B_USMC_officer_F { scope = 0; class EventHandlers; };
    class Marine_B_USMC_officer_F_OCimport_02 : Marine_B_USMC_officer_F_OCimport_01 { class EventHandlers; };

    class Marine_B_USMC_soldier_AA_F;
    class Marine_B_USMC_soldier_AA_F_OCimport_01 : Marine_B_USMC_soldier_AA_F { scope = 0; class EventHandlers; };
    class Marine_B_USMC_soldier_AA_F_OCimport_02 : Marine_B_USMC_soldier_AA_F_OCimport_01 { class EventHandlers; };

    class Marine_B_USMC_soldier_AT_F;
    class Marine_B_USMC_soldier_AT_F_OCimport_01 : Marine_B_USMC_soldier_AT_F { scope = 0; class EventHandlers; };
    class Marine_B_USMC_soldier_AT_F_OCimport_02 : Marine_B_USMC_soldier_AT_F_OCimport_01 { class EventHandlers; };

    class Marine_B_USMC_soldier_M_F;
    class Marine_B_USMC_soldier_M_F_OCimport_01 : Marine_B_USMC_soldier_M_F { scope = 0; class EventHandlers; };
    class Marine_B_USMC_soldier_M_F_OCimport_02 : Marine_B_USMC_soldier_M_F_OCimport_01 { class EventHandlers; };

    class Marine_B_USMC_Boat_Transport_02_F : Boat_Transport_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RHIB";
        side = 1;
        faction = "marine_blu_usmc_f";
        crew = "Marine_B_USMC_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_Heli_Attack_01_dynamicLoadout_F : B_Heli_Attack_01_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RAH-66 Comanche";
        side = 1;
        faction = "marine_blu_usmc_f";
        crew = "B_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_Heli_Transport_01_F : B_Heli_Transport_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-80 Ghost Hawk";
        side = 1;
        faction = "marine_blu_usmc_f";
        crew = "B_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_RadioOperator_F : Marine_B_USMC_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Marine_U_B_MCU_vest_desert_F";

        backpack = "B_RadioBag_01_coyote_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_Holo_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Holo_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_RadioOperator_wdl_F : Marine_B_USMC_Soldier_wdl_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "Marine_U_B_MCU_vest_wdl_F";

        backpack = "B_RadioBag_01_coyote_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_MX_Black_Holo_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Holo_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_Soldier_AR_F : Marine_B_USMC_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Marine_U_B_MCU_tshirt_desert_F";

        linkedItems[] = {"V_PlateCarrier2_khk","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_khk","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_SW_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_SW_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","100Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_Soldier_AR_wdl_F : Marine_B_USMC_Soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "Marine_U_B_MCU_tshirt_wdl_F";

        linkedItems[] = {"V_PlateCarrier2_khk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_PlateCarrier2_khk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_MX_SW_Black_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_SW_Black_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_Soldier_A_F : Marine_B_USMC_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Marine_U_B_MCU_desert_F";

        backpack = "B_Carryall_cbr_USMCAmmo_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_Soldier_A_wdl_F : Marine_B_USMC_Soldier_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "Marine_U_B_MCU_wdl_F";

        backpack = "B_Carryall_khk_USMCAmmo_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_MX_Black_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_ACO_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_Soldier_F : Marine_B_USMC_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Marine_U_B_MCU_desert_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetSpecB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetSpecB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_Holo_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Holo_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_Soldier_GL_F : Marine_B_USMC_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Marine_U_B_MCU_desert_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_GL_ACO_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_Soldier_GL_wdl_F : Marine_B_USMC_Soldier_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "Marine_U_B_MCU_wdl_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_MX_GL_Black_ACO_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_GL_Black_ACO_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_Soldier_LAT_F : Marine_B_USMC_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Marine_U_B_MCU_desert_F";

        backpack = "B_AssaultPack_cbr_USMCLAT_F";

        linkedItems[] = {"V_PlateCarrier2_khk","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_khk","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_Holo_pointer_F","launch_MRAWS_sand_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Holo_pointer_F","launch_MRAWS_sand_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_Soldier_LAT_wdl_F : Marine_B_USMC_Soldier_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "Marine_U_B_MCU_wdl_F";

        backpack = "B_AssaultPack_cbr_USMCLAT_F";

        linkedItems[] = {"V_PlateCarrier2_khk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_PlateCarrier2_khk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_MX_Black_Holo_Pointer_F","launch_MRAWS_green_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Holo_Pointer_F","launch_MRAWS_green_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_Soldier_SL_F : Marine_B_USMC_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Marine_U_B_MCU_vest_desert_F";

        linkedItems[] = {"V_PlateCarrier2_khk","H_HelmetSpecB_light_desert","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_khk","H_HelmetSpecB_light_desert","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MX_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_Soldier_SL_wdl_F : Marine_B_USMC_Soldier_SL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "Marine_U_B_MCU_vest_wdl_F";

        linkedItems[] = {"V_PlateCarrier2_khk","H_HelmetSpecB_light","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_PlateCarrier2_khk","H_HelmetSpecB_light","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MX_Black_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_Soldier_TL_F : Marine_B_USMC_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Marine_U_B_MCU_vest_desert_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetSpecB_light_desert","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetSpecB_light_desert","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_GL_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MX_GL_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_Soldier_TL_wdl_F : Marine_B_USMC_Soldier_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "Marine_U_B_MCU_vest_wdl_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetSpecB_light","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetSpecB_light","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag_Tracer","30Rnd_65x39_caseless_black_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","3Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_Soldier_wdl_F : Marine_B_USMC_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "Marine_U_B_MCU_wdl_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetSpecB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetSpecB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_MX_Black_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Holo_pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_engineer_F : Marine_B_USMC_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Marine_U_B_MCU_vest_desert_F";

        backpack = "B_Kitbag_cbr_USMCEng_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_engineer_wdl_F : Marine_B_USMC_engineer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "Marine_U_B_MCU_vest_wdl_F";

        backpack = "B_Kitbag_cbr_USMCEng_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_MXC_Black_Holo_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_Black_Holo_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_medic_F : Marine_B_USMC_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Marine_U_B_MCU_desert_F";

        backpack = "B_AssaultPack_cbr_USMCMedic_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetSpecB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetSpecB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MX_pointer_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_pointer_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_medic_wdl_F : Marine_B_USMC_medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "Marine_U_B_MCU_wdl_F";

        backpack = "B_AssaultPack_cbr_USMCMedic_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetSpecB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetSpecB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_MX_Black_Pointer_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MX_Black_Pointer_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_officer_F : Marine_B_USMC_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_casual"};

        uniformClass = "Marine_U_B_MCU_desert_F";

        linkedItems[] = {"V_Rangemaster_belt_khk","H_MilCap_desert","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Rangemaster_belt_khk","H_MilCap_desert","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_MXC_F","hgun_ACPC2_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MXC_F","hgun_ACPC2_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_officer_wdl_F : Marine_B_USMC_officer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_casual"};

        uniformClass = "Marine_U_B_MCU_wdl_F";

        linkedItems[] = {"V_Rangemaster_belt_khk","H_MilCap_mwdl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Rangemaster_belt_khk","H_MilCap_mwdl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_MXC_Black_F","hgun_ACPC2_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MXC_Black_F","hgun_ACPC2_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_soldier_AA_F : Marine_B_USMC_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Marine_U_B_MCU_desert_F";

        backpack = "B_AssaultPack_cbr_USMCAA_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_soldier_AA_wdl_F : Marine_B_USMC_soldier_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "Marine_U_B_MCU_wdl_F";

        backpack = "B_AssaultPack_cbr_USMCAA_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_MXC_Black_Holo_Pointer_F","launch_B_Titan_olive_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_Black_Holo_Pointer_F","launch_B_Titan_olive_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_soldier_AT_F : Marine_B_USMC_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Marine_U_B_MCU_desert_F";

        backpack = "B_AssaultPack_cbr_USMCAT_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_soldier_AT_wdl_F : Marine_B_USMC_soldier_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "Marine_U_B_MCU_wdl_F";

        backpack = "B_AssaultPack_cbr_USMCAT_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_MXC_Black_Holo_Pointer_F","launch_I_Titan_short_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_Black_Holo_Pointer_F","launch_I_Titan_short_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_soldier_M_F : Marine_B_USMC_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Marine_U_B_MCU_desert_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MXM_Hamr_LP_BI_F","hgun_P07_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Marine_B_USMC_soldier_M_wdl_F : Marine_B_USMC_soldier_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "marine_blu_usmc_f";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_tropic"};

        uniformClass = "Marine_U_B_MCU_wdl_F";

        linkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_PlateCarrier1_khk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_MXM_Black_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_MXM_Black_Hamr_pointer_F","hgun_P07_blk_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


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
        class Marine_BLU_USMC_F {
            class Infantry {
                class B_USMC_InfSentry {
                    name = "Sentry";
                    side = 1;
                    faction = "Marine_BLU_USMC_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Marine_B_USMC_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Marine_B_USMC_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class B_USMC_InfSquad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "Marine_BLU_USMC_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Marine_B_USMC_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Marine_B_USMC_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Marine_B_USMC_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Marine_B_USMC_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Marine_B_USMC_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Marine_B_USMC_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Marine_B_USMC_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Marine_B_USMC_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class B_USMC_InfTeam {
                    name = "Fire Team";
                    side = 1;
                    faction = "Marine_BLU_USMC_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Marine_B_USMC_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Marine_B_USMC_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Marine_B_USMC_soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Marine_B_USMC_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry_W {
                class B_USMC_InfSentry_W {
                    name = "Sentry";
                    side = 1;
                    faction = "Marine_BLU_USMC_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Marine_B_USMC_soldier_GL_wdl_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Marine_B_USMC_soldier_wdl_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class B_USMC_InfSquad_W {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "Marine_BLU_USMC_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Marine_B_USMC_soldier_SL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Marine_B_USMC_RadioOperator_wdl_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Marine_B_USMC_soldier_LAT_wdl_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Marine_B_USMC_soldier_M_wdl_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Marine_B_USMC_soldier_TL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Marine_B_USMC_soldier_AR_wdl_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Marine_B_USMC_soldier_A_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Marine_B_USMC_medic_wdl_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class B_USMC_InfTeam_W {
                    name = "Fire Team";
                    side = 1;
                    faction = "Marine_BLU_USMC_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Marine_B_USMC_soldier_TL_wdl_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Marine_B_USMC_soldier_AR_wdl_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Marine_B_USMC_soldier_GL_wdl_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Marine_B_USMC_soldier_LAT_wdl_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
        };
    };
};
