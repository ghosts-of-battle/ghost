//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class Opf_BLU_P_F {
        displayName = "Partisans";
        side = 1;
        priority = 3;
        icon = "\A3_Opf\Data_F_Opf\FactionIcons\CfgFactionClasses_BLU_P_CA.paa";
        flag = "\A3_Opf\Data_F_Opf\Flags\flag_Partisan_CO.paa";
    };
};

class CfgVehicles {

    class I_APC_Wheeled_03_cannon_F;
    class I_APC_Wheeled_03_cannon_F_OCimport_01 : I_APC_Wheeled_03_cannon_F { scope = 0; class EventHandlers; };
    class I_APC_Wheeled_03_cannon_F_OCimport_02 : I_APC_Wheeled_03_cannon_F_OCimport_01 { class EventHandlers; };

    class Opf_B_P_Soldier_Base_F;
    class Opf_B_P_Soldier_Base_F_OCimport_01 : Opf_B_P_Soldier_Base_F { scope = 0; class EventHandlers; };
    class Opf_B_P_Soldier_Base_F_OCimport_02 : Opf_B_P_Soldier_Base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_base_F;
    class HMG_02_base_F_OCimport_01 : HMG_02_base_F { scope = 0; class EventHandlers; };
    class HMG_02_base_F_OCimport_02 : HMG_02_base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_high_base_F;
    class HMG_02_high_base_F_OCimport_01 : HMG_02_high_base_F { scope = 0; class EventHandlers; };
    class HMG_02_high_base_F_OCimport_02 : HMG_02_high_base_F_OCimport_01 { class EventHandlers; };

    class Opf_B_P_Soldier_AR_F;
    class Opf_B_P_Soldier_AR_F_OCimport_01 : Opf_B_P_Soldier_AR_F { scope = 0; class EventHandlers; };
    class Opf_B_P_Soldier_AR_F_OCimport_02 : Opf_B_P_Soldier_AR_F_OCimport_01 { class EventHandlers; };

    class O_G_Offroad_01_AT_F;
    class O_G_Offroad_01_AT_F_OCimport_01 : O_G_Offroad_01_AT_F { scope = 0; class EventHandlers; };
    class O_G_Offroad_01_AT_F_OCimport_02 : O_G_Offroad_01_AT_F_OCimport_01 { class EventHandlers; };

    class O_G_Offroad_01_F;
    class O_G_Offroad_01_F_OCimport_01 : O_G_Offroad_01_F { scope = 0; class EventHandlers; };
    class O_G_Offroad_01_F_OCimport_02 : O_G_Offroad_01_F_OCimport_01 { class EventHandlers; };

    class O_G_Offroad_01_armed_F;
    class O_G_Offroad_01_armed_F_OCimport_01 : O_G_Offroad_01_armed_F { scope = 0; class EventHandlers; };
    class O_G_Offroad_01_armed_F_OCimport_02 : O_G_Offroad_01_armed_F_OCimport_01 { class EventHandlers; };

    class I_E_Offroad_01_covered_F;
    class I_E_Offroad_01_covered_F_OCimport_01 : I_E_Offroad_01_covered_F { scope = 0; class EventHandlers; };
    class I_E_Offroad_01_covered_F_OCimport_02 : I_E_Offroad_01_covered_F_OCimport_01 { class EventHandlers; };

    class B_G_Offroad_01_repair_F;
    class B_G_Offroad_01_repair_F_OCimport_01 : B_G_Offroad_01_repair_F { scope = 0; class EventHandlers; };
    class B_G_Offroad_01_repair_F_OCimport_02 : B_G_Offroad_01_repair_F_OCimport_01 { class EventHandlers; };

    class Pickup_01_aat_base_rf;
    class Pickup_01_aat_base_rf_OCimport_01 : Pickup_01_aat_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_aat_base_rf_OCimport_02 : Pickup_01_aat_base_rf_OCimport_01 { class EventHandlers; };

    class Aegis_Pickup_01_AT_base_RF;
    class Aegis_Pickup_01_AT_base_RF_OCimport_01 : Aegis_Pickup_01_AT_base_RF { scope = 0; class EventHandlers; };
    class Aegis_Pickup_01_AT_base_RF_OCimport_02 : Aegis_Pickup_01_AT_base_RF_OCimport_01 { class EventHandlers; };

    class Pickup_fuel_base_rf;
    class Pickup_fuel_base_rf_OCimport_01 : Pickup_fuel_base_rf { scope = 0; class EventHandlers; };
    class Pickup_fuel_base_rf_OCimport_02 : Pickup_fuel_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_hmg_base_rf;
    class Pickup_01_hmg_base_rf_OCimport_01 : Pickup_01_hmg_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_hmg_base_rf_OCimport_02 : Pickup_01_hmg_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_mmg_base_rf;
    class Pickup_01_mmg_base_rf_OCimport_01 : Pickup_01_mmg_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_mmg_base_rf_OCimport_02 : Pickup_01_mmg_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_mrl_base_rf;
    class Pickup_01_mrl_base_rf_OCimport_01 : Pickup_01_mrl_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_mrl_base_rf_OCimport_02 : Pickup_01_mrl_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_repair_ig_base_rf;
    class Pickup_repair_ig_base_rf_OCimport_01 : Pickup_repair_ig_base_rf { scope = 0; class EventHandlers; };
    class Pickup_repair_ig_base_rf_OCimport_02 : Pickup_repair_ig_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_base_rf;
    class Pickup_01_base_rf_OCimport_01 : Pickup_01_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_base_rf_OCimport_02 : Pickup_01_base_rf_OCimport_01 { class EventHandlers; };

    class O_Quadbike_01_F;
    class O_Quadbike_01_F_OCimport_01 : O_Quadbike_01_F { scope = 0; class EventHandlers; };
    class O_Quadbike_01_F_OCimport_02 : O_Quadbike_01_F_OCimport_01 { class EventHandlers; };

    class Opf_B_P_Soldier_F;
    class Opf_B_P_Soldier_F_OCimport_01 : Opf_B_P_Soldier_F { scope = 0; class EventHandlers; };
    class Opf_B_P_Soldier_F_OCimport_02 : Opf_B_P_Soldier_F_OCimport_01 { class EventHandlers; };

    class Opf_B_P_Engineer_F;
    class Opf_B_P_Engineer_F_OCimport_01 : Opf_B_P_Engineer_F { scope = 0; class EventHandlers; };
    class Opf_B_P_Engineer_F_OCimport_02 : Opf_B_P_Engineer_F_OCimport_01 { class EventHandlers; };

    class Truck_02_aa_base_lxWS;
    class Truck_02_aa_base_lxWS_OCimport_01 : Truck_02_aa_base_lxWS { scope = 0; class EventHandlers; };
    class Truck_02_aa_base_lxWS_OCimport_02 : Truck_02_aa_base_lxWS_OCimport_01 { class EventHandlers; };

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

    class UAV_02_IED_Base_lxWS;
    class UAV_02_IED_Base_lxWS_OCimport_01 : UAV_02_IED_Base_lxWS { scope = 0; class EventHandlers; };
    class UAV_02_IED_Base_lxWS_OCimport_02 : UAV_02_IED_Base_lxWS_OCimport_01 { class EventHandlers; };

    class Opf_B_P_APC_Wheeled_03_cannon_F : I_APC_Wheeled_03_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pandur II";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Crew_F : Opf_B_P_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_O_S_Uniform_01_Sweater_F";

        linkedItems[] = {"V_TacChestRig_grn_F","H_Tank_Black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacChestRig_grn_F","H_Tank_Black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_04_blk_F","Throw","Put"};
        respawnWeapons[] = {"SMG_04_blk_F","Throw","Put"};

        magazines[] = {"20rnd_460x30_mag_F","20rnd_460x30_mag_F","20rnd_460x30_mag_F","20rnd_460x30_mag_F","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"20rnd_460x30_mag_F","20rnd_460x30_mag_F","20rnd_460x30_mag_F","20rnd_460x30_mag_F","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Engineer_F : Opf_B_P_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_FieldJacket_02_F";

        backpack = "B_Carryall_green_Partisan_Eng_F";

        linkedItems[] = {"V_TacVest_oli","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_04_blk_F","Throw","Put"};
        respawnWeapons[] = {"SMG_04_blk_F","Throw","Put"};

        magazines[] = {"20rnd_460x30_mag_F","20rnd_460x30_mag_F","20rnd_460x30_mag_F","20rnd_460x30_mag_F","20rnd_460x30_mag_F","20rnd_460x30_mag_F","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"20rnd_460x30_mag_F","20rnd_460x30_mag_F","20rnd_460x30_mag_F","20rnd_460x30_mag_F","20rnd_460x30_mag_F","20rnd_460x30_mag_F","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_HMG_02_F : HMG_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_HMG_02_high_F : HMG_02_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_HeavyGunner_F : Opf_B_P_Soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_Uniform_01_F";

        backpack = "Opf_B_AssaultPack_flecktarn_Partisan_HG_F";

        linkedItems[] = {"V_TacChestRig_grn_F","H_Booniehat_flecktarn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacChestRig_grn_F","H_Booniehat_flecktarn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Opf_MMG_FNMAG_RDSH_FL_F","Throw","Put"};
        respawnWeapons[] = {"Opf_MMG_FNMAG_RDSH_FL_F","Throw","Put"};

        magazines[] = {"Aegis_200Rnd_762x51_MAG_Yellow_F","Aegis_200Rnd_762x51_MAG_Yellow_F","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"Aegis_200Rnd_762x51_MAG_Yellow_F","Aegis_200Rnd_762x51_MAG_Yellow_F","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Medic_F : Opf_B_P_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_FieldJacket_01_F";

        backpack = "B_FieldPack_green_Partisan_Medic_F";

        linkedItems[] = {"V_TacVest_grn","H_Booniehat_oli_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_Booniehat_oli_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_M4A1_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_M4A1_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Officer_F : Opf_B_P_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_FieldJacket_03_F";

        linkedItems[] = {"V_TacChestRig_grn_F","H_Beret_brn","G_headset_light","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacChestRig_grn_F","H_Beret_brn","G_headset_light","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_M4A1_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Aegis_arifle_M4A1_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};

        magazines[] = {"30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","9rnd_45acp_mag","9rnd_45acp_mag","SmokeShell","SmokeShell","SmokeShellGreen"};
        respawnMagazines[] = {"30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","9rnd_45acp_mag","9rnd_45acp_mag","SmokeShell","SmokeShell","SmokeShellGreen"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Offroad_01_AT_F : O_G_Offroad_01_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (AT)";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_Lite_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Offroad_01_F : O_G_Offroad_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_Lite_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Offroad_01_armed_F : O_G_Offroad_01_armed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (HMG)";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_Lite_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Offroad_01_covered_F : I_E_Offroad_01_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Covered)";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_Lite_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Offroad_01_repair_F : B_G_Offroad_01_repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Repair)";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_Lite_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Pickup_aat_rf : Pickup_01_aat_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (AA)";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_Lite_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Pickup_at_rf : Aegis_Pickup_01_AT_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Opf_B_P_Pickup_at_rf";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_Lite_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Pickup_fuel_rf : Pickup_fuel_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Fuel)";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_Lite_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Pickup_hmg_rf : Pickup_01_hmg_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (HMG)";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_Lite_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Pickup_mmg_rf : Pickup_01_mmg_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (MMG)";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_Lite_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Pickup_mrl_rf : Pickup_01_mrl_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (MRL)";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_Lite_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Pickup_repair_rf : Pickup_repair_ig_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Repair)";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_Lite_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Pickup_rf : Pickup_01_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_Lite_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Quadbike_01_F : O_Quadbike_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Sharpshooter_F : Opf_B_P_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_FieldJacket_01_F";

        linkedItems[] = {"V_TacChestRig_grn_F","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacChestRig_grn_F","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Opf_arifle_SLR_V_KHS_lxWS","Throw","Put","Binocular"};
        respawnWeapons[] = {"Opf_arifle_SLR_V_KHS_lxWS","Throw","Put","Binocular"};

        magazines[] = {"20rnd_762x51_slr_lxWS","20rnd_762x51_slr_lxWS","20rnd_762x51_slr_lxWS","20rnd_762x51_slr_lxWS","20rnd_762x51_slr_lxWS","20rnd_762x51_slr_lxWS","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"20rnd_762x51_slr_lxWS","20rnd_762x51_slr_lxWS","20rnd_762x51_slr_lxWS","20rnd_762x51_slr_lxWS","20rnd_762x51_slr_lxWS","20rnd_762x51_slr_lxWS","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Soldier_AR_F : Opf_B_P_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_Uniform_01_F";

        linkedItems[] = {"V_TacChestRig_grn_F","H_Watchcap_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacChestRig_grn_F","H_Watchcap_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Opf_LMG_Negev_black_RDSH_FL_F","Throw","Put"};
        respawnWeapons[] = {"Opf_LMG_Negev_black_RDSH_FL_F","Throw","Put"};

        magazines[] = {"Atlas_150Rnd_762x51_Box_Yellow","Atlas_150Rnd_762x51_Box_Yellow","Atlas_150Rnd_762x51_Box_Yellow","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"Atlas_150Rnd_762x51_Box_Yellow","Atlas_150Rnd_762x51_Box_Yellow","Atlas_150Rnd_762x51_Box_Yellow","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Soldier_AT_F : Opf_B_P_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_Uniform_01_Shortsleeve_F";

        backpack = "B_FieldPack_green_F_Partisan_AT_F";

        linkedItems[] = {"V_TacChestRig_grn_F","H_MK7_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacChestRig_grn_F","H_MK7_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_M4A1_F","launch_MRAWS_Green_rail_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_M4A1_F","launch_MRAWS_Green_rail_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","MRAWS_HEAT55_F","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","MRAWS_HEAT55_F","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Soldier_A_F : Opf_B_P_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_Uniform_01_Shortsleeve_F";

        backpack = "Opf_B_patrolBackpack_grn_Partisan_Ammo_F";

        linkedItems[] = {"V_TacChestRig_grn_F","H_Booniehat_mgrn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacChestRig_grn_F","H_Booniehat_mgrn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_M4A1_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_M4A1_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Soldier_Advisor_F : Opf_B_P_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Advisor";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_Uniform_Advisor_F";

        backpack = "B_Radiobag_01_wdl_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_olive_F","H_HelmetB_Green","NVGoggles_INDEP","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_olive_F","H_HelmetB_Green","NVGoggles_INDEP","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Opf_arifle_SPAR_01_blk_RCO_IRFL_F","hgun_G17_black_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Opf_arifle_SPAR_01_blk_RCO_IRFL_F","hgun_G17_black_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","17rnd_9x21_mag","17rnd_9x21_mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","17rnd_9x21_mag","17rnd_9x21_mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Soldier_CQ_F : Opf_B_P_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_FieldJacket_03_F";

        linkedItems[] = {"V_BandollierB_rgr","H_PASGT_basic_olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_rgr","H_PASGT_basic_olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"sgun_Mp153_black_F","Throw","Put"};
        respawnWeapons[] = {"sgun_Mp153_black_F","Throw","Put"};

        magazines[] = {"4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Soldier_Cmort_RF : Opf_B_P_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_Uniform_01_F";

        backpack = "I_E_CommandoMortar_weapon_RF";

        linkedItems[] = {"H_PASGT_basic_olive_F","V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_PASGT_basic_olive_F","V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_M4A1_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_M4A1_F","Throw","Put"};

        magazines[] = {"30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","HandGrenade","HandGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Soldier_Exp_F : Opf_B_P_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Saboteur";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_FieldJacket_03_F";

        backpack = "B_Carryall_green_Partisan_Exp_F";

        linkedItems[] = {"V_ChestrigF_oli","H_PASGT_basic_olive_F","G_Combat","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_oli","H_PASGT_basic_olive_F","G_Combat","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_M4A1_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_M4A1_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Soldier_F : Opf_B_P_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_Uniform_01_F";

        linkedItems[] = {"V_TacVest_oli","H_MK7_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_MK7_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Opf_arifle_M4A1_RDSH_FL_F","Throw","Put"};
        respawnWeapons[] = {"Opf_arifle_M4A1_RDSH_FL_F","Throw","Put"};

        magazines[] = {"30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Soldier_GL_F : Opf_B_P_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_FieldJacket_01_F";

        linkedItems[] = {"V_TacVest_grn","H_Booniehat_atacs_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_Booniehat_atacs_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Opf_arifle_M4A1_GL_RDSH_FL_F","Throw","Put"};
        respawnWeapons[] = {"Opf_arifle_M4A1_GL_RDSH_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Soldier_LAT_F : Opf_B_P_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light AT)";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_FieldJacket_02_F";

        backpack = "B_FieldPack_green_F_Partisan_LAT_F";

        linkedItems[] = {"V_TacVest_camo","H_Cap_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_camo","H_Cap_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_M4A1_F","Aegis_launch_RPG7M_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_M4A1_F","Aegis_launch_RPG7M_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RPG7_F","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RPG7_F","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Soldier_M_F : Opf_B_P_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_FieldJacket_01_F";

        linkedItems[] = {"V_TacVest_camo","H_cap_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_camo","H_cap_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Opf_srifle_DMR_03_MRCO_FL_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Opf_srifle_DMR_03_MRCO_FL_F","Throw","Put","Binocular"};

        magazines[] = {"20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Soldier_SL_F : Opf_B_P_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_Uniform_01_F";

        linkedItems[] = {"V_TacVest_Camo","H_PASGT_basic_olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_Camo","H_PASGT_basic_olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Opf_arifle_M4A1_MRCO_FL_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Opf_arifle_M4A1_MRCO_FL_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9rnd_45acp_mag","9rnd_45acp_mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9rnd_45acp_mag","9rnd_45acp_mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Soldier_TL_F : Opf_B_P_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_FieldJacket_03_F";

        linkedItems[] = {"V_TacVest_grn","H_Booniehat_eaf_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_Booniehat_eaf_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Opf_arifle_M4A1_01_GL_MRCO_FL_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Opf_arifle_M4A1_01_GL_MRCO_FL_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9rnd_45acp_mag","9rnd_45acp_mag","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9rnd_45acp_mag","9rnd_45acp_mag","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Soldier_TechSpec_F : Opf_B_P_Engineer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Technical Specialist";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_FieldJacket_02_F";

        backpack = "B_Kitbag_rgr_G_TechSpec";

        linkedItems[] = {"H_MK7_oli_F","G_Bandanna_oli","V_TacVest_camo","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_MK7_oli_F","G_Bandanna_oli","V_TacVest_camo","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_04_blk_F","Throw","Put"};
        respawnWeapons[] = {"SMG_04_blk_F","Throw","Put"};

        magazines[] = {"20rnd_460x30_mag_F","20rnd_460x30_mag_F","20rnd_460x30_mag_F","20rnd_460x30_mag_F","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"20rnd_460x30_mag_F","20rnd_460x30_mag_F","20rnd_460x30_mag_F","20rnd_460x30_mag_F","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Soldier_UAV_lxWS : Opf_B_P_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (IED Drone)";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_Uniform_01_F";

        backpack = "Opf_B_P_UAV_02_IED_backpack_lxWS";

        linkedItems[] = {"H_PASGT_basic_olive_F","V_TacVest_camo","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_PASGT_basic_olive_F","V_TacVest_camo","B_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_M4A1_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_M4A1_F","Throw","Put"};

        magazines[] = {"30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","HandGrenade","HandGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Soldier_lite_F : Opf_B_P_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_Uniform_01_Shortsleeve_F";

        linkedItems[] = {"V_BandollierB_rgr","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_rgr","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_M4A1_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_M4A1_F","Throw","Put"};

        magazines[] = {"30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","30rnd_556x45_Stanag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Soldier_unarmed_F : Opf_B_P_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 1;
        faction = "opf_blu_p_f";

        identityTypes[] = {"LanguagePOL_F","LanguageGRE_F","Head_Enoch","Head_Euro","Head_Russian","G_GUERIL_default"};

        uniformClass = "Opf_U_B_P_Uniform_01_F";

        linkedItems[] = {"V_TacVest_oli","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class Opf_B_P_Truck_02_AA_F : Truck_02_aa_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ (Zu-23-2)";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_lite_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Truck_02_F : O_Truck_02_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport (covered)";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_lite_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Truck_02_cargo_F : Truck_02_cargo_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Cargo";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_lite_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Truck_02_flatbed_F : Truck_02_flatbed_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Flatbed";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_lite_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_Truck_02_transport_F : O_Truck_02_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Transport";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "Opf_B_P_Soldier_lite_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_B_P_UAV_02_IED_lxWS : UAV_02_IED_Base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "IED UAV";
        side = 1;
        faction = "opf_blu_p_f";
        crew = "B_UAV_AI";

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
        class Opf_BLU_P_F {
            class Infantry {
                class Opf_B_P_InfSentry {
                    name = "Sentry";
                    side = 1;
                    faction = "Opf_BLU_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_B_P_Soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_B_P_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Opf_B_P_InfSquad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "Opf_BLU_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_B_P_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_B_P_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_B_P_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_B_P_Soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Opf_B_P_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Opf_B_P_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Opf_B_P_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Opf_B_P_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Opf_B_P_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 1;
                    faction = "Opf_BLU_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_B_P_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_B_P_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_B_P_Soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_B_P_Soldier_M_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Opf_B_P_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Opf_B_P_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Opf_B_P_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Opf_B_P_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Opf_B_P_InfTeam {
                    name = "Fire Team";
                    side = 1;
                    faction = "Opf_BLU_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_B_P_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_B_P_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_B_P_Soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_B_P_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Opf_B_P_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 1;
                    faction = "Opf_BLU_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_B_P_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_B_P_Soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_B_P_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_B_P_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Opf_B_P_ReconSentry {
                    name = "Recon Sentry";
                    side = 1;
                    faction = "Opf_BLU_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";

                    class Unit0 {
                        vehicle = "Opf_B_P_Soldier_M_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_B_P_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Opf_B_P_SniperTeam_M {
                    name = "Sniper Team";
                    side = 1;
                    faction = "Opf_BLU_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";

                    class Unit0 {
                        vehicle = "Opf_B_P_Sharpshooter_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_B_P_Soldier_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
            };
            class Mechanized {
                class Opf_B_P_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "Opf_BLU_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_B_P_APC_Wheeled_03_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_B_P_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_B_P_Soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_B_P_Soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Opf_B_P_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Opf_B_P_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Opf_B_P_medic_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                };
            };
            class Motorized_MTP {
                class Opf_B_P_MotInf_Team {
                    name = "Motorized Patrol";
                    side = 1;
                    faction = "Opf_BLU_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_B_P_Offroad_01_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_B_P_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_B_P_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_B_P_Soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Opf_B_P_medic_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Opf_B_P_Soldier_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };
                };
                class Opf_B_P_Technicals {
                    name = "Technicals";
                    side = 1;
                    faction = "Opf_BLU_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_B_P_Offroad_01_armed_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_B_P_Offroad_01_armed_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_B_P_Offroad_01_AT_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };
                };
            };
            class Support {
                class Opf_B_P_Support_CLS {
                    name = "Support Team (CLS)";
                    side = 1;
                    faction = "Opf_BLU_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_B_P_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_B_P_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_B_P_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_B_P_medic_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Opf_B_P_Support_ENG {
                    name = "Support Team (Engineer)";
                    side = 1;
                    faction = "Opf_BLU_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_B_P_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_B_P_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_B_P_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_B_P_engineer_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Opf_B_P_Support_EOD {
                    name = "Support Team (EOD)";
                    side = 1;
                    faction = "Opf_BLU_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_B_P_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_B_P_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_B_P_Soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_B_P_Soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
        };
    };
};
