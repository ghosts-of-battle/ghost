//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class BLU_GEN_F {
        displayName = "Gendarmerie";
        side = 1;
        priority = 5;
        icon = "\a3\Data_F_Exp\FactionIcons\icon_GEN_CA.paa";
        flag = "\a3\Data_F_Exp\Flags\flag_GEN_CO.paa";
    };
};

class CfgVehicles {

    class B_GEN_Commander_F;
    class B_GEN_Commander_F_OCimport_01 : B_GEN_Commander_F { scope = 0; class EventHandlers; };
    class B_GEN_Commander_F_OCimport_02 : B_GEN_Commander_F_OCimport_01 { class EventHandlers; };

    class O_GEN_APC_Wheeled_02_hmg_lxWS;
    class O_GEN_APC_Wheeled_02_hmg_lxWS_OCimport_01 : O_GEN_APC_Wheeled_02_hmg_lxWS { scope = 0; class EventHandlers; };
    class O_GEN_APC_Wheeled_02_hmg_lxWS_OCimport_02 : O_GEN_APC_Wheeled_02_hmg_lxWS_OCimport_01 { class EventHandlers; };

    class Boat_Transport_02_base_F;
    class Boat_Transport_02_base_F_OCimport_01 : Boat_Transport_02_base_F { scope = 0; class EventHandlers; };
    class Boat_Transport_02_base_F_OCimport_02 : Boat_Transport_02_base_F_OCimport_01 { class EventHandlers; };

    class B_GEN_Soldier_base_F;
    class B_GEN_Soldier_base_F_OCimport_01 : B_GEN_Soldier_base_F { scope = 0; class EventHandlers; };
    class B_GEN_Soldier_base_F_OCimport_02 : B_GEN_Soldier_base_F_OCimport_01 { class EventHandlers; };

    class Heli_EC_01_base_RF;
    class Heli_EC_01_base_RF_OCimport_01 : Heli_EC_01_base_RF { scope = 0; class EventHandlers; };
    class Heli_EC_01_base_RF_OCimport_02 : Heli_EC_01_base_RF_OCimport_01 { class EventHandlers; };

    class B_Helipilot_F;
    class B_Helipilot_F_OCimport_01 : B_Helipilot_F { scope = 0; class EventHandlers; };
    class B_Helipilot_F_OCimport_02 : B_Helipilot_F_OCimport_01 { class EventHandlers; };

    class Offroad_01_military_comms_base_F;
    class Offroad_01_military_comms_base_F_OCimport_01 : Offroad_01_military_comms_base_F { scope = 0; class EventHandlers; };
    class Offroad_01_military_comms_base_F_OCimport_02 : Offroad_01_military_comms_base_F_OCimport_01 { class EventHandlers; };

    class Offroad_01_military_covered_base_F;
    class Offroad_01_military_covered_base_F_OCimport_01 : Offroad_01_military_covered_base_F { scope = 0; class EventHandlers; };
    class Offroad_01_military_covered_base_F_OCimport_02 : Offroad_01_military_covered_base_F_OCimport_01 { class EventHandlers; };

    class Offroad_01_civil_base_F;
    class Offroad_01_civil_base_F_OCimport_01 : Offroad_01_civil_base_F { scope = 0; class EventHandlers; };
    class Offroad_01_civil_base_F_OCimport_02 : Offroad_01_civil_base_F_OCimport_01 { class EventHandlers; };

    class Pickup_covered_base_rf;
    class Pickup_covered_base_rf_OCimport_01 : Pickup_covered_base_rf { scope = 0; class EventHandlers; };
    class Pickup_covered_base_rf_OCimport_02 : Pickup_covered_base_rf_OCimport_01 { class EventHandlers; };

    class Quadbike_01_base_F;
    class Quadbike_01_base_F_OCimport_01 : Quadbike_01_base_F { scope = 0; class EventHandlers; };
    class Quadbike_01_base_F_OCimport_02 : Quadbike_01_base_F_OCimport_01 { class EventHandlers; };

    class B_GEN_Soldier_F;
    class B_GEN_Soldier_F_OCimport_01 : B_GEN_Soldier_F { scope = 0; class EventHandlers; };
    class B_GEN_Soldier_F_OCimport_02 : B_GEN_Soldier_F_OCimport_01 { class EventHandlers; };

    class Van_02_transport_base_F;
    class Van_02_transport_base_F_OCimport_01 : Van_02_transport_base_F { scope = 0; class EventHandlers; };
    class Van_02_transport_base_F_OCimport_02 : Van_02_transport_base_F_OCimport_01 { class EventHandlers; };

    class Van_02_vehicle_base_F;
    class Van_02_vehicle_base_F_OCimport_01 : Van_02_vehicle_base_F { scope = 0; class EventHandlers; };
    class Van_02_vehicle_base_F_OCimport_02 : Van_02_vehicle_base_F_OCimport_01 { class EventHandlers; };

    class O_GEN_crew_lxWS;
    class O_GEN_crew_lxWS_OCimport_01 : O_GEN_crew_lxWS { scope = 0; class EventHandlers; };
    class O_GEN_crew_lxWS_OCimport_02 : O_GEN_crew_lxWS_OCimport_01 { class EventHandlers; };

    class EF_CombatBoat_Unarmed_Base;
    class EF_CombatBoat_Unarmed_Base_OCimport_01 : EF_CombatBoat_Unarmed_Base { scope = 0; class EventHandlers; };
    class EF_CombatBoat_Unarmed_Base_OCimport_02 : EF_CombatBoat_Unarmed_Base_OCimport_01 { class EventHandlers; };

    class EF_Gyra_Unarmed_Base;
    class EF_Gyra_Unarmed_Base_OCimport_01 : EF_Gyra_Unarmed_Base { scope = 0; class EventHandlers; };
    class EF_Gyra_Unarmed_Base_OCimport_02 : EF_Gyra_Unarmed_Base_OCimport_01 { class EventHandlers; };

    class EF_Gyra_HMG_Base;
    class EF_Gyra_HMG_Base_OCimport_01 : EF_Gyra_HMG_Base { scope = 0; class EventHandlers; };
    class EF_Gyra_HMG_Base_OCimport_02 : EF_Gyra_HMG_Base_OCimport_01 { class EventHandlers; };

    class B_Captain_Dwarden_F : B_GEN_Commander_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Dwarden";
        side = 1;
        faction = "blu_gen_f";

        identityTypes[] = {"LanguageENGFRE_F","Dwarden"};

        uniformClass = "U_B_GEN_Commander_F";

        linkedItems[] = {"H_Beret_gen_F","V_TacVest_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_Beret_gen_F","V_TacVest_gen_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_03C_black","hgun_P07_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"SMG_03C_black","hgun_P07_F","Throw","Put","Binocular"};

        magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellYellow"};
        respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_GEN_APC_Wheeled_02_hmg_lxWS : O_GEN_APC_Wheeled_02_hmg_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar ARMA (HMG)";
        side = 1;
        faction = "blu_gen_f";
        crew = "B_GEN_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_GEN_Boat_Transport_02_F : Boat_Transport_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RHIB";
        side = 1;
        faction = "blu_gen_f";
        crew = "B_GEN_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_GEN_Commander_F : B_GEN_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gendarmerie Commander";
        side = 1;
        faction = "blu_gen_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan"};

        uniformClass = "U_B_GEN_Commander_F";

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

    class B_GEN_Heli_EC_01_RF : Heli_EC_01_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "H225 Super Puma (Transport)";
        side = 1;
        faction = "blu_gen_f";
        crew = "B_GEN_Helipilot_RF";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_GEN_Helipilot_RF : B_Helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "blu_gen_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan"};

        uniformClass = "U_B_GEN_Soldier_F";

        linkedItems[] = {"H_PilotHelmetHeli_Black_RF","V_TacVest_gen_holster_RF","TiGoggles_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_PilotHelmetHeli_Black_RF","V_TacVest_gen_holster_RF","TiGoggles_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_05_F","hgun_Glock19_RF","Throw","Put"};
        respawnWeapons[] = {"SMG_05_F","hgun_Glock19_RF","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_GEN_Offroad_01_comms_F : Offroad_01_military_comms_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Comms)";
        side = 1;
        faction = "blu_gen_f";
        crew = "B_GEN_Commander_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_GEN_Offroad_01_covered_F : Offroad_01_military_covered_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Covered)";
        side = 1;
        faction = "blu_gen_f";
        crew = "B_GEN_Commander_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_GEN_Offroad_01_gen_F : Offroad_01_civil_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 1;
        faction = "blu_gen_f";
        crew = "B_GEN_Commander_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_GEN_Pickup_covered_rf : Pickup_covered_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Covered)";
        side = 1;
        faction = "blu_gen_f";
        crew = "B_GEN_Commander_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_GEN_Quadbike_01_F : Quadbike_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 1;
        faction = "blu_gen_f";
        crew = "B_GEN_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_GEN_Soldier_AR_F : B_GEN_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gendarme (Machine Gun)";
        side = 1;
        faction = "blu_gen_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan"};

        uniformClass = "U_B_GEN_Soldier_F";

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

    class B_GEN_Soldier_F : B_GEN_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gendarme (SMG)";
        side = 1;
        faction = "blu_gen_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan"};

        uniformClass = "U_B_GEN_Soldier_F";

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

    class B_GEN_Soldier_LAT_F : B_GEN_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gendarme (AT)";
        side = 1;
        faction = "blu_gen_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan"};

        uniformClass = "U_B_GEN_Soldier_F";

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

    class B_GEN_Soldier_RF : B_GEN_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gendarme (Light)";
        side = 1;
        faction = "blu_gen_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan"};

        uniformClass = "U_B_GEN_Soldier_F";

        linkedItems[] = {"H_MilCap_gen_F","V_TacVest_gen_holster_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_MilCap_gen_F","V_TacVest_gen_holster_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_Glock19_RF","Throw","Put"};
        respawnWeapons[] = {"hgun_Glock19_RF","Throw","Put"};

        magazines[] = {"17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","17Rnd_9x19_Mag_RF","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_GEN_Soldier_Rifle_F : B_GEN_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gendarme (Rifle)";
        side = 1;
        faction = "blu_gen_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan"};

        uniformClass = "U_B_GEN_Soldier_F";

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

    class B_GEN_Soldier_SG_F : B_GEN_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gendarme (Shotgun)";
        side = 1;
        faction = "blu_gen_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan"};

        uniformClass = "U_B_GEN_Commander_F";

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

    class B_GEN_Van_02_transport_F : Van_02_transport_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van Transport";
        side = 1;
        faction = "blu_gen_f";
        crew = "B_GEN_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_GEN_Van_02_vehicle_F : Van_02_vehicle_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van (Cargo)";
        side = 1;
        faction = "blu_gen_f";
        crew = "B_GEN_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_GEN_crew_lxWS : O_GEN_crew_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "blu_gen_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan"};

        uniformClass = "U_B_GEN_Soldier_F";

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

    class EF_B_CombatBoat_Unarmed_GEN : EF_CombatBoat_Unarmed_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (Unarmed)";
        side = 1;
        faction = "blu_gen_f";
        crew = "B_GEN_Commander_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Gyra_GEN : EF_Gyra_Unarmed_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra";
        side = 1;
        faction = "blu_gen_f";
        crew = "B_GEN_Commander_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Gyra_HMG_GEN : EF_Gyra_HMG_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra HMG";
        side = 1;
        faction = "blu_gen_f";
        crew = "B_GEN_Commander_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};

class CfgGroups {
    class West {
        class BLU_GEN_F {
            class Infantry {
                class GENDARME_Inf_Patrol {
                    name = "Gendarmerie Patrol";
                    side = 1;
                    faction = "BLU_GEN_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_GEN_Commander_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_GEN_Soldier_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
            };
            class Motorized {
                class GENDARME_MotInf_Patrol {
                    name = "Motorized Gendarmerie Patrol";
                    side = 1;
                    faction = "BLU_GEN_F";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_GEN_Offroad_01_gen_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_GEN_Soldier_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
            };
        };
    };
};
