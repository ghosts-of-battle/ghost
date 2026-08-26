//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class OPF_GEN_F {
        displayName = "Gendarmerie";
        side = 0;
        priority = 5;
        icon = "\a3\Data_F_Exp\FactionIcons\icon_GEN_CA.paa";
        flag = "\a3\Data_F_Exp\Flags\flag_GEN_CO.paa";
    };
};

class CfgVehicles {

    class EF_B_Gyra_GEN;
    class EF_B_Gyra_GEN_OCimport_01 : EF_B_Gyra_GEN { scope = 0; class EventHandlers; };
    class EF_B_Gyra_GEN_OCimport_02 : EF_B_Gyra_GEN_OCimport_01 { class EventHandlers; };

    class EF_B_Gyra_HMG_GEN;
    class EF_B_Gyra_HMG_GEN_OCimport_01 : EF_B_Gyra_HMG_GEN { scope = 0; class EventHandlers; };
    class EF_B_Gyra_HMG_GEN_OCimport_02 : EF_B_Gyra_HMG_GEN_OCimport_01 { class EventHandlers; };

    class O_SFIA_APC_Wheeled_02_hmg_lxWS;
    class O_SFIA_APC_Wheeled_02_hmg_lxWS_OCimport_01 : O_SFIA_APC_Wheeled_02_hmg_lxWS { scope = 0; class EventHandlers; };
    class O_SFIA_APC_Wheeled_02_hmg_lxWS_OCimport_02 : O_SFIA_APC_Wheeled_02_hmg_lxWS_OCimport_01 { class EventHandlers; };

    class B_GEN_Commander_F;
    class B_GEN_Commander_F_OCimport_01 : B_GEN_Commander_F { scope = 0; class EventHandlers; };
    class B_GEN_Commander_F_OCimport_02 : B_GEN_Commander_F_OCimport_01 { class EventHandlers; };

    class B_GEN_Soldier_AR_F;
    class B_GEN_Soldier_AR_F_OCimport_01 : B_GEN_Soldier_AR_F { scope = 0; class EventHandlers; };
    class B_GEN_Soldier_AR_F_OCimport_02 : B_GEN_Soldier_AR_F_OCimport_01 { class EventHandlers; };

    class B_GEN_Soldier_F;
    class B_GEN_Soldier_F_OCimport_01 : B_GEN_Soldier_F { scope = 0; class EventHandlers; };
    class B_GEN_Soldier_F_OCimport_02 : B_GEN_Soldier_F_OCimport_01 { class EventHandlers; };

    class B_GEN_Soldier_LAT_F;
    class B_GEN_Soldier_LAT_F_OCimport_01 : B_GEN_Soldier_LAT_F { scope = 0; class EventHandlers; };
    class B_GEN_Soldier_LAT_F_OCimport_02 : B_GEN_Soldier_LAT_F_OCimport_01 { class EventHandlers; };

    class B_GEN_Soldier_Rifle_F;
    class B_GEN_Soldier_Rifle_F_OCimport_01 : B_GEN_Soldier_Rifle_F { scope = 0; class EventHandlers; };
    class B_GEN_Soldier_Rifle_F_OCimport_02 : B_GEN_Soldier_Rifle_F_OCimport_01 { class EventHandlers; };

    class B_GEN_Soldier_SG_F;
    class B_GEN_Soldier_SG_F_OCimport_01 : B_GEN_Soldier_SG_F { scope = 0; class EventHandlers; };
    class B_GEN_Soldier_SG_F_OCimport_02 : B_GEN_Soldier_SG_F_OCimport_01 { class EventHandlers; };

    class O_crew_F;
    class O_crew_F_OCimport_01 : O_crew_F { scope = 0; class EventHandlers; };
    class O_crew_F_OCimport_02 : O_crew_F_OCimport_01 { class EventHandlers; };

    class EF_O_Gyra_GEN : EF_B_Gyra_GEN_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra";
        side = 0;
        faction = "opf_gen_f";
        crew = "O_GEN_Commander_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_Gyra_HMG_GEN : EF_B_Gyra_HMG_GEN_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra HMG";
        side = 0;
        faction = "opf_gen_f";
        crew = "O_GEN_Commander_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_GEN_APC_Wheeled_02_hmg_lxWS : O_SFIA_APC_Wheeled_02_hmg_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar ARMA (HMG)";
        side = 0;
        faction = "opf_gen_f";
        crew = "O_GEN_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_GEN_Commander_F : B_GEN_Commander_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gendarmerie Commander";
        side = 0;
        faction = "opf_gen_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan"};

        uniformClass = "U_O_GEN_Commander_F";

        linkedItems[] = {"H_Beret_gen_F","V_TacVest_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_Beret_gen_F","V_TacVest_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_05_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"SMG_05_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_GEN_Soldier_AR_F : B_GEN_Soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gendarme (Machine Gun)";
        side = 0;
        faction = "opf_gen_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan"};

        uniformClass = "U_O_GEN_Soldier_F";

        linkedItems[] = {"V_TacVest_gen_F","H_MilCap_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_gen_F","H_MilCap_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"LMG_03_F","hgun_ACPC2_black_F","Throw","Put"};
        respawnWeapons[] = {"LMG_03_F","hgun_ACPC2_black_F","Throw","Put"};

        magazines[] = {"200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_GEN_Soldier_F : B_GEN_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gendarme (SMG)";
        side = 0;
        faction = "opf_gen_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan"};

        uniformClass = "U_O_GEN_Soldier_F";

        linkedItems[] = {"H_MilCap_gen_F","V_TacVest_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_MilCap_gen_F","V_TacVest_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_05_F","hgun_ACPC2_black_F","Throw","Put"};
        respawnWeapons[] = {"SMG_05_F","hgun_ACPC2_black_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_GEN_Soldier_LAT_F : B_GEN_Soldier_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gendarme (AT)";
        side = 0;
        faction = "opf_gen_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan"};

        uniformClass = "U_O_GEN_Soldier_F";

        backpack = "B_AssaultPack_blk_GENLAT_F";

        linkedItems[] = {"V_TacVest_gen_F","H_MilCap_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_gen_F","H_MilCap_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKS_F","Aegis_launch_RPG7M_F","hgun_ACPC2_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKS_F","Aegis_launch_RPG7M_F","hgun_ACPC2_black_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","RPG7_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","RPG7_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_GEN_Soldier_Rifle_F : B_GEN_Soldier_Rifle_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gendarme (Rifle)";
        side = 0;
        faction = "opf_gen_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan"};

        uniformClass = "U_O_GEN_Soldier_F";

        linkedItems[] = {"V_TacVest_gen_F","H_MilCap_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_gen_F","H_MilCap_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKM_F","hgun_ACPC2_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKM_F","hgun_ACPC2_black_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_GEN_Soldier_SG_F : B_GEN_Soldier_SG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gendarme (Shotgun)";
        side = 0;
        faction = "opf_gen_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan"};

        uniformClass = "U_O_GEN_Commander_F";

        linkedItems[] = {"V_TacVest_gen_F","H_MilCap_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_gen_F","H_MilCap_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"sgun_M4_F","hgun_ACPC2_black_F","Throw","Put"};
        respawnWeapons[] = {"sgun_M4_F","hgun_ACPC2_black_F","Throw","Put"};

        magazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_GEN_crew_lxWS : O_crew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 0;
        faction = "opf_gen_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan"};

        uniformClass = "U_O_GEN_Soldier_F";

        linkedItems[] = {"lxWS_H_HelmetCrew_I","V_BandollierB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"lxWS_H_HelmetCrew_I","V_BandollierB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_05_F","hgun_P07_F","Throw","Put"};
        respawnWeapons[] = {"SMG_05_F","hgun_P07_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};


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
