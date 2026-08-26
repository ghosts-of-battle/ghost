//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class Atlas_BLU_H_F {
        displayName = "HIMF";
        side = 1;
        priority = 3;
        icon = "\A3_Atlas\Data_F_Atlas\FactionIcons\CfgFactionClasses_BLU_H_CA.paa";
        flag = "\A3\Data_F_Exp\Flags\flag_Tanoa_CO.paa";
    };
};

class CfgVehicles {

    class APC_Wheeled_02_hmg_base_lxws;
    class APC_Wheeled_02_hmg_base_lxws_OCimport_01 : APC_Wheeled_02_hmg_base_lxws { scope = 0; class EventHandlers; };
    class APC_Wheeled_02_hmg_base_lxws_OCimport_02 : APC_Wheeled_02_hmg_base_lxws_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_02_unarmed_base_lxws;
    class APC_Wheeled_02_unarmed_base_lxws_OCimport_01 : APC_Wheeled_02_unarmed_base_lxws { scope = 0; class EventHandlers; };
    class APC_Wheeled_02_unarmed_base_lxws_OCimport_02 : APC_Wheeled_02_unarmed_base_lxws_OCimport_01 { class EventHandlers; };

    class Boat_Transport_02_base_F;
    class Boat_Transport_02_base_F_OCimport_01 : Boat_Transport_02_base_F { scope = 0; class EventHandlers; };
    class Boat_Transport_02_base_F_OCimport_02 : Boat_Transport_02_base_F_OCimport_01 { class EventHandlers; };

    class B_CommandoMortar_RF;
    class B_CommandoMortar_RF_OCimport_01 : B_CommandoMortar_RF { scope = 0; class EventHandlers; };
    class B_CommandoMortar_RF_OCimport_02 : B_CommandoMortar_RF_OCimport_01 { class EventHandlers; };

    class Atlas_B_H_Soldier_Base_F;
    class Atlas_B_H_Soldier_Base_F_OCimport_01 : Atlas_B_H_Soldier_Base_F { scope = 0; class EventHandlers; };
    class Atlas_B_H_Soldier_Base_F_OCimport_02 : Atlas_B_H_Soldier_Base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_base_F;
    class HMG_02_base_F_OCimport_01 : HMG_02_base_F { scope = 0; class EventHandlers; };
    class HMG_02_base_F_OCimport_02 : HMG_02_base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_high_base_F;
    class HMG_02_high_base_F_OCimport_01 : HMG_02_high_base_F { scope = 0; class EventHandlers; };
    class HMG_02_high_base_F_OCimport_02 : HMG_02_high_base_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_H_Soldier_AR_F;
    class Atlas_B_H_Soldier_AR_F_OCimport_01 : Atlas_B_H_Soldier_AR_F { scope = 0; class EventHandlers; };
    class Atlas_B_H_Soldier_AR_F_OCimport_02 : Atlas_B_H_Soldier_AR_F_OCimport_01 { class EventHandlers; };

    class Heli_EC_03_base_RF;
    class Heli_EC_03_base_RF_OCimport_01 : Heli_EC_03_base_RF { scope = 0; class EventHandlers; };
    class Heli_EC_03_base_RF_OCimport_02 : Heli_EC_03_base_RF_OCimport_01 { class EventHandlers; };

    class Heli_EC_04_military_base_RF;
    class Heli_EC_04_military_base_RF_OCimport_01 : Heli_EC_04_military_base_RF { scope = 0; class EventHandlers; };
    class Heli_EC_04_military_base_RF_OCimport_02 : Heli_EC_04_military_base_RF_OCimport_01 { class EventHandlers; };

    class I_Heli_Light_01_F;
    class I_Heli_Light_01_F_OCimport_01 : I_Heli_Light_01_F { scope = 0; class EventHandlers; };
    class I_Heli_Light_01_F_OCimport_02 : I_Heli_Light_01_F_OCimport_01 { class EventHandlers; };

    class Heli_Light_01_dynamicLoadout_base_F;
    class Heli_Light_01_dynamicLoadout_base_F_OCimport_01 : Heli_Light_01_dynamicLoadout_base_F { scope = 0; class EventHandlers; };
    class Heli_Light_01_dynamicLoadout_base_F_OCimport_02 : Heli_Light_01_dynamicLoadout_base_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_H_Helipilot_F;
    class Atlas_B_H_Helipilot_F_OCimport_01 : Atlas_B_H_Helipilot_F { scope = 0; class EventHandlers; };
    class Atlas_B_H_Helipilot_F_OCimport_02 : Atlas_B_H_Helipilot_F_OCimport_01 { class EventHandlers; };

    class Offroad_02_AT_base_F;
    class Offroad_02_AT_base_F_OCimport_01 : Offroad_02_AT_base_F { scope = 0; class EventHandlers; };
    class Offroad_02_AT_base_F_OCimport_02 : Offroad_02_AT_base_F_OCimport_01 { class EventHandlers; };

    class Offroad_02_LMG_base_F;
    class Offroad_02_LMG_base_F_OCimport_01 : Offroad_02_LMG_base_F { scope = 0; class EventHandlers; };
    class Offroad_02_LMG_base_F_OCimport_02 : Offroad_02_LMG_base_F_OCimport_01 { class EventHandlers; };

    class Offroad_02_unarmed_base_F;
    class Offroad_02_unarmed_base_F_OCimport_01 : Offroad_02_unarmed_base_F { scope = 0; class EventHandlers; };
    class Offroad_02_unarmed_base_F_OCimport_02 : Offroad_02_unarmed_base_F_OCimport_01 { class EventHandlers; };

    class Aegis_Pickup_01_AT_base_RF;
    class Aegis_Pickup_01_AT_base_RF_OCimport_01 : Aegis_Pickup_01_AT_base_RF { scope = 0; class EventHandlers; };
    class Aegis_Pickup_01_AT_base_RF_OCimport_02 : Aegis_Pickup_01_AT_base_RF_OCimport_01 { class EventHandlers; };

    class Pickup_comms_base_rf;
    class Pickup_comms_base_rf_OCimport_01 : Pickup_comms_base_rf { scope = 0; class EventHandlers; };
    class Pickup_comms_base_rf_OCimport_02 : Pickup_comms_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_base_rf;
    class Pickup_01_base_rf_OCimport_01 : Pickup_01_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_base_rf_OCimport_02 : Pickup_01_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_hmg_base_rf;
    class Pickup_01_hmg_base_rf_OCimport_01 : Pickup_01_hmg_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_hmg_base_rf_OCimport_02 : Pickup_01_hmg_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_aat_base_rf;
    class Pickup_01_aat_base_rf_OCimport_01 : Pickup_01_aat_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_aat_base_rf_OCimport_02 : Pickup_01_aat_base_rf_OCimport_01 { class EventHandlers; };

    class Plane_Transport_01_infantry_base_F;
    class Plane_Transport_01_infantry_base_F_OCimport_01 : Plane_Transport_01_infantry_base_F { scope = 0; class EventHandlers; };
    class Plane_Transport_01_infantry_base_F_OCimport_02 : Plane_Transport_01_infantry_base_F_OCimport_01 { class EventHandlers; };

    class Plane_Transport_01_vehicle_base_F;
    class Plane_Transport_01_vehicle_base_F_OCimport_01 : Plane_Transport_01_vehicle_base_F { scope = 0; class EventHandlers; };
    class Plane_Transport_01_vehicle_base_F_OCimport_02 : Plane_Transport_01_vehicle_base_F_OCimport_01 { class EventHandlers; };

    class Quadbike_01_base_F;
    class Quadbike_01_base_F_OCimport_01 : Quadbike_01_base_F { scope = 0; class EventHandlers; };
    class Quadbike_01_base_F_OCimport_02 : Quadbike_01_base_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_H_Soldier_F;
    class Atlas_B_H_Soldier_F_OCimport_01 : Atlas_B_H_Soldier_F { scope = 0; class EventHandlers; };
    class Atlas_B_H_Soldier_F_OCimport_02 : Atlas_B_H_Soldier_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_H_Engineer_F;
    class Atlas_B_H_Engineer_F_OCimport_01 : Atlas_B_H_Engineer_F { scope = 0; class EventHandlers; };
    class Atlas_B_H_Engineer_F_OCimport_02 : Atlas_B_H_Engineer_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_H_Soldier_Commando_Base;
    class Atlas_B_H_Soldier_Commando_Base_OCimport_01 : Atlas_B_H_Soldier_Commando_Base { scope = 0; class EventHandlers; };
    class Atlas_B_H_Soldier_Commando_Base_OCimport_02 : Atlas_B_H_Soldier_Commando_Base_OCimport_01 { class EventHandlers; };

    class O_Truck_02_Ammo_F;
    class O_Truck_02_Ammo_F_OCimport_01 : O_Truck_02_Ammo_F { scope = 0; class EventHandlers; };
    class O_Truck_02_Ammo_F_OCimport_02 : O_Truck_02_Ammo_F_OCimport_01 { class EventHandlers; };

    class Truck_02_base_F;
    class Truck_02_base_F_OCimport_01 : Truck_02_base_F { scope = 0; class EventHandlers; };
    class Truck_02_base_F_OCimport_02 : Truck_02_base_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_box_F;
    class O_Truck_02_box_F_OCimport_01 : O_Truck_02_box_F { scope = 0; class EventHandlers; };
    class O_Truck_02_box_F_OCimport_02 : O_Truck_02_box_F_OCimport_01 { class EventHandlers; };

    class Truck_02_cargo_base_lxWS;
    class Truck_02_cargo_base_lxWS_OCimport_01 : Truck_02_cargo_base_lxWS { scope = 0; class EventHandlers; };
    class Truck_02_cargo_base_lxWS_OCimport_02 : Truck_02_cargo_base_lxWS_OCimport_01 { class EventHandlers; };

    class Truck_02_flatbed_base_lxWS;
    class Truck_02_flatbed_base_lxWS_OCimport_01 : Truck_02_flatbed_base_lxWS { scope = 0; class EventHandlers; };
    class Truck_02_flatbed_base_lxWS_OCimport_02 : Truck_02_flatbed_base_lxWS_OCimport_01 { class EventHandlers; };

    class O_Truck_02_fuel_F;
    class O_Truck_02_fuel_F_OCimport_01 : O_Truck_02_fuel_F { scope = 0; class EventHandlers; };
    class O_Truck_02_fuel_F_OCimport_02 : O_Truck_02_fuel_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_medical_F;
    class O_Truck_02_medical_F_OCimport_01 : O_Truck_02_medical_F { scope = 0; class EventHandlers; };
    class O_Truck_02_medical_F_OCimport_02 : O_Truck_02_medical_F_OCimport_01 { class EventHandlers; };

    class Truck_02_transport_base_F;
    class Truck_02_transport_base_F_OCimport_01 : Truck_02_transport_base_F { scope = 0; class EventHandlers; };
    class Truck_02_transport_base_F_OCimport_02 : Truck_02_transport_base_F_OCimport_01 { class EventHandlers; };

    class I_support_CMort_RF;
    class I_support_CMort_RF_OCimport_01 : I_support_CMort_RF { scope = 0; class EventHandlers; };
    class I_support_CMort_RF_OCimport_02 : I_support_CMort_RF_OCimport_01 { class EventHandlers; };

    class Plane_Civil_01_base_F;
    class Plane_Civil_01_base_F_OCimport_01 : Plane_Civil_01_base_F { scope = 0; class EventHandlers; };
    class Plane_Civil_01_base_F_OCimport_02 : Plane_Civil_01_base_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_H_APC_Wheeled_02_hmg_lxWS : APC_Wheeled_02_hmg_base_lxws_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar ARMA (HMG)";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_APC_Wheeled_02_unarmed_lxWS : APC_Wheeled_02_unarmed_base_lxws_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar ARMA (Unarmed)";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Boat_Transport_02_F : Boat_Transport_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RHIB";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_CommandoMortar_RF : B_CommandoMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RSG60";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Engineer_F : Atlas_B_H_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_01_HI_F";

        backpack = "B_Carryall_jungle_BHEng_F";

        linkedItems[] = {"V_EOD_olive_F","Atlas_H_PASGT_Cover_HIMF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_EOD_olive_F","Atlas_H_PASGT_Cover_HIMF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M16A4_FG_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M16A4_FG_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","SmokeShell","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","SmokeShell","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_HMG_02_F : HMG_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_HMG_02_high_F : HMG_02_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_HeavyGunner_F : Atlas_B_H_Soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_02_HI_F";

        backpack = "Atlas_B_TacticalPack_oli_BHHG_F";

        linkedItems[] = {"V_TacChestrig_oli_F","Atlas_H_MilCap_tachs_Jungle","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacChestrig_oli_F","Atlas_H_MilCap_tachs_Jungle","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_MMG_FNMAG_240_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_MMG_FNMAG_240_F","Throw","Put"};

        magazines[] = {"Aegis_200Rnd_762x51_MAG_Red_F","Aegis_200Rnd_762x51_MAG_Red_F","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"Aegis_200Rnd_762x51_MAG_Red_F","Aegis_200Rnd_762x51_MAG_Red_F","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Heli_EC_03_RF : Heli_EC_03_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "H225M Super Cougar";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Heli_EC_04_military_RF : Heli_EC_04_military_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "H225M Super Cougar (Unarmed)";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Heli_Light_01_F : I_Heli_Light_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-6 Little Bird";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Heli_Light_01_dynamicLoadout_F : Heli_Light_01_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-9 Pawnee";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Helicrew_F : Atlas_B_H_Helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_02_HI_F";

        linkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"SMG_05_F","Throw","Put"};
        respawnWeapons[] = {"SMG_05_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Helipilot_F : Atlas_B_H_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_02_HI_F";

        linkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"SMG_05_F","Throw","Put"};
        respawnWeapons[] = {"SMG_05_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Medic_F : Atlas_B_H_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_02_HI_F";

        backpack = "B_TacticalPack_oli_BHMedic_F";

        linkedItems[] = {"V_PlateCarrierIA2_oli","H_Booniehat_jungle","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrierIA2_oli","H_Booniehat_jungle","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M16A4_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M16A4_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Officer_F : Atlas_B_H_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_B_H_Officer_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_olive_F","H_MilCap_jungle","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_olive_F","H_MilCap_jungle","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_05_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"SMG_05_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Offroad_02_AT_F : Offroad_02_AT_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MB 4WD (AT)";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Offroad_02_LMG_F : Offroad_02_LMG_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MB 4WD (LMG)";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Offroad_02_unarmed_F : Offroad_02_unarmed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jeep Wrangler";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Pickup_AT_F : Aegis_Pickup_01_AT_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_B_H_Pickup_AT_F";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Pickup_Comms_F : Pickup_comms_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Comms)";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Pickup_F : Pickup_01_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Pickup_HMG_F : Pickup_01_hmg_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (HMG)";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Pickup_aat_F : Pickup_01_aat_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (AA)";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Plane_Transport_01_infantry_F : Plane_Transport_01_infantry_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "C-192 Samson (Infantry Transport)";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Plane_Transport_01_vehicle_F : Plane_Transport_01_vehicle_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "C-192 Samson (Vehicle Transport)";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Quadbike_01_F : Quadbike_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_RadioOperator_F : Atlas_B_H_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_02_HI_F";

        backpack = "B_RadioBag_01_jungle_F";

        linkedItems[] = {"V_TacChestrig_oli_F","H_Booniehat_jungle","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacChestrig_oli_F","H_Booniehat_jungle","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M16A4_FG_ROS_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M16A4_FG_ROS_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Soldier_AR_F : Atlas_B_H_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_02_HI_F";

        linkedItems[] = {"V_PlateCarrierIA2_oli","Atlas_H_PASGT_Cover_HIMF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrierIA2_oli","Atlas_H_PASGT_Cover_HIMF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"LMG_03_Flash_F","Throw","Put"};
        respawnWeapons[] = {"LMG_03_Flash_F","Throw","Put"};

        magazines[] = {"200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Soldier_A_F : Atlas_B_H_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_02_HI_F";

        backpack = "B_Carryall_jungle_BHAmmo_F";

        linkedItems[] = {"V_PlateCarrierIA1_oli","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrierIA1_oli","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M16A4_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M16A4_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Soldier_Exp_F : Atlas_B_H_Engineer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_02_HI_F";

        backpack = "B_Carryall_jungle_BHExp_F";

        linkedItems[] = {"V_EOD_olive_F","H_Booniehat_jungle","","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_EOD_olive_F","H_Booniehat_jungle","","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M16A4_FG_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M16A4_FG_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Soldier_F : Atlas_B_H_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_01_HI_F";

        linkedItems[] = {"V_PlateCarrierIA1_oli","Atlas_H_PASGT_Cover_HIMF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrierIA1_oli","Atlas_H_PASGT_Cover_HIMF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M16A4_FG_ROS_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M16A4_FG_ROS_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Soldier_GL_F : Atlas_B_H_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_01_HI_F";

        linkedItems[] = {"V_PlateCarrierIAGL_oli","Atlas_H_PASGT_Cover_HIMF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrierIAGL_oli","Atlas_H_PASGT_Cover_HIMF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M16A4_GL_ROS_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M16A4_GL_ROS_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","SmokeShell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","SmokeShell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Soldier_LAT_F : Atlas_B_H_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_01_HI_F";

        backpack = "B_TacticalPack_oli_BHLAT_F";

        linkedItems[] = {"V_PlateCarrierIA2_oli","Atlas_H_PASGT_Cover_HIMF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrierIA2_oli","Atlas_H_PASGT_Cover_HIMF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M16A4_FG_ROS_FL_F","launch_MRAWS_olive_rail_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M16A4_FG_ROS_FL_F","launch_MRAWS_olive_rail_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","MRAWS_HEAT55_F","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","MRAWS_HEAT55_F","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Soldier_SL_F : Atlas_B_H_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_02_HI_F";

        linkedItems[] = {"V_PlateCarrierIA2_oli","H_I_Helmet_canvas_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrierIA2_oli","H_I_Helmet_canvas_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M16A4_FG_ACOG_FL_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_arifle_M16A4_FG_ACOG_FL_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_tracer_red","30Rnd_556x45_stanag_tracer_red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_tracer_red","30Rnd_556x45_stanag_tracer_red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Soldier_TL_F : Atlas_B_H_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_01_HI_F";

        linkedItems[] = {"V_PlateCarrierIAGL_oli","H_I_Helmet_canvas_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrierIAGL_oli","H_I_Helmet_canvas_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M16A4_GL_ACOG_FL_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_arifle_M16A4_GL_ACOG_FL_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_tracer_red","30Rnd_556x45_stanag_tracer_red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","SmokeShell","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_tracer_red","30Rnd_556x45_stanag_tracer_red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","SmokeShell","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Soldier_commando_AR_F : Atlas_B_H_Soldier_Commando_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Autorifleman";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_B_H_Soldier_commando_F";

        linkedItems[] = {"V_PlateCarrier2_oli","H_HelmetHBK_commando_F","Aegis_G_scrimNet_under_olive_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_PlateCarrier2_oli","H_HelmetHBK_commando_F","Aegis_G_scrimNet_under_olive_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"LMG_Mk200_khk_ACOG_Snds_IR_F","hgun_P07_blk_Snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"LMG_Mk200_khk_ACOG_Snds_IR_F","hgun_P07_blk_Snds_F","Throw","Put","Binocular"};

        magazines[] = {"200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Soldier_commando_F : Atlas_B_H_Soldier_Commando_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_B_H_Soldier_commando_F";

        linkedItems[] = {"V_PlateCarrier2_oli","H_HelmetHBK_commando_F","Aegis_G_scrimNet_under_olive_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_PlateCarrier2_oli","H_HelmetHBK_commando_F","Aegis_G_scrimNet_under_olive_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_XMS_Base_khk_ACOG_Snds_IR_F","hgun_P07_blk_Snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_XMS_Base_khk_ACOG_Snds_IR_F","hgun_P07_blk_Snds_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Soldier_commando_LAT_F : Atlas_B_H_Soldier_Commando_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (AT)";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_B_H_Soldier_commando_F";

        backpack = "B_TacticalPack_rgr_BALAT_F";

        linkedItems[] = {"V_PlateCarrier2_oli","H_HelmetHBK_commando_headset_F","Aegis_G_scrimNet_under_olive_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_PlateCarrier2_oli","H_HelmetHBK_commando_headset_F","Aegis_G_scrimNet_under_olive_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_XMS_Base_khk_ACOG_Snds_IR_F","launch_NLAW_F","hgun_P07_blk_Snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_XMS_Base_khk_ACOG_Snds_IR_F","launch_NLAW_F","hgun_P07_blk_Snds_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Soldier_commando_M_F : Atlas_B_H_Soldier_Commando_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Marksman";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_B_H_Soldier_commando_F";

        linkedItems[] = {"V_PlateCarrier2_oli","H_HelmetHBK_commando_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_PlateCarrier2_oli","H_HelmetHBK_commando_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_arifle_SR25_khk_ams_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_arifle_SR25_khk_ams_Pointer_Snds_F","hgun_P07_blk_Snds_F","Throw","Put","Binocular"};

        magazines[] = {"Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Soldier_commando_TL_F : Atlas_B_H_Soldier_Commando_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Team Leader";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_B_H_Soldier_commando_F";

        linkedItems[] = {"V_PlateCarrier2_oli","H_HelmetHBK_commando_headset_F","Aegis_G_scrimNet_under_olive_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_PlateCarrier2_oli","H_HelmetHBK_commando_headset_F","Aegis_G_scrimNet_under_olive_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_XMS_Base_khk_ACOG_Snds_IR_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_XMS_Base_khk_ACOG_Snds_IR_F","hgun_P07_blk_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Soldier_commando_exp_F : Atlas_B_H_Soldier_Commando_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Demo Specialist";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_B_H_Soldier_commando_F";

        backpack = "B_Kitbag_rgr_Exp";

        linkedItems[] = {"V_PlateCarrier2_oli","H_HelmetHBK_commando_F","Aegis_G_scrimNet_under_olive_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_PlateCarrier2_oli","H_HelmetHBK_commando_F","Aegis_G_scrimNet_under_olive_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_XMS_Base_khk_ACOG_Snds_IR_F","hgun_P07_blk_Snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_XMS_Base_khk_ACOG_Snds_IR_F","hgun_P07_blk_Snds_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Soldier_commando_gl_F : Atlas_B_H_Soldier_Commando_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Grenadier";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_B_H_Soldier_commando_F";

        linkedItems[] = {"V_PlateCarrier2_oli","H_HelmetHBK_commando_F","Aegis_G_scrimNet_under_olive_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_PlateCarrier2_oli","H_HelmetHBK_commando_F","Aegis_G_scrimNet_under_olive_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_XMS_GL_khk_ACOG_Snds_IR_F","hgun_P07_blk_Snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_XMS_GL_khk_ACOG_Snds_IR_F","hgun_P07_blk_Snds_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Soldier_commando_jtac_F : Atlas_B_H_Soldier_Commando_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon JTAC";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_B_H_Soldier_commando_F";

        backpack = "B_RadioBag_01_commando_F";

        linkedItems[] = {"V_PlateCarrier2_oli","H_HelmetHBK_commando_F","Aegis_G_scrimNet_under_olive_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_PlateCarrier2_oli","H_HelmetHBK_commando_F","Aegis_G_scrimNet_under_olive_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_XMS_Base_khk_ACOG_Snds_IR_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator_01_khk_F"};
        respawnWeapons[] = {"arifle_XMS_Base_khk_ACOG_Snds_IR_F","hgun_P07_blk_Snds_F","Throw","Put","Laserdesignator_01_khk_F"};

        magazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Soldier_commando_medic_F : Atlas_B_H_Soldier_Commando_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Paramedic";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_B_H_Soldier_commando_F";

        backpack = "B_TacticalPack_rgr_BAReconMedic_F";

        linkedItems[] = {"V_PlateCarrier2_oli","H_HelmetHBK_commando_F","Aegis_G_scrimNet_under_olive_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_PlateCarrier2_oli","H_HelmetHBK_commando_F","Aegis_G_scrimNet_under_olive_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_XMS_Base_khk_ACOG_Snds_IR_F","hgun_P07_blk_Snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_XMS_Base_khk_ACOG_Snds_IR_F","hgun_P07_blk_Snds_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Soldier_unarmed_F : Atlas_B_H_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_01_HI_F";

        linkedItems[] = {"V_PlateCarrierIA1_oli","Atlas_H_PASGT_Cover_HIMF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrierIA1_oli","Atlas_H_PASGT_Cover_HIMF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class Atlas_B_H_Truck_02_Ammo_F : O_Truck_02_Ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Ammo";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Truck_02_F : Truck_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Transport (Covered)";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Truck_02_box_F : O_Truck_02_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Repair";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Truck_02_cargo_F : Truck_02_cargo_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Cargo";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Truck_02_flatbed_F : Truck_02_flatbed_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Flatbed";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Truck_02_fuel_F : O_Truck_02_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Fuel";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Truck_02_medical_F : O_Truck_02_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Medical";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_Truck_02_transport_F : Truck_02_transport_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Transport";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_soldier_M_F : Atlas_B_H_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_01_HI_F";

        linkedItems[] = {"V_TacChestrig_oli_F","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacChestrig_oli_F","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_srifle_DMR_06_black_khs_bipod_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_srifle_DMR_06_black_khs_bipod_F","Throw","Put","Binocular"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_H_support_CMort_RF : I_support_CMort_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 1;
        faction = "atlas_blu_h_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan","G_HAF_default"};

        uniformClass = "Atlas_U_UniformBDU_02_HI_F";

        backpack = "B_CommandoMortar_weapon_RF";

        linkedItems[] = {"V_TacChestrig_oli_F","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacChestrig_oli_F","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M16A4_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M16A4_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Plane_Civil_01_HIMF_F : Plane_Civil_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Caesar BTT";
        side = 1;
        faction = "atlas_blu_h_f";
        crew = "Atlas_B_H_Helipilot_F";

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
        class Atlas_BLU_H_F {
            class Infantry {
                class B_H_InfSentry {
                    name = "Sentry";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class B_H_InfSquad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_H_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_H_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_H_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_H_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_H_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_H_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class B_H_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_H_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_H_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_H_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_H_HeavyGunner_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_H_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_H_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class B_H_InfTeam {
                    name = "Fire Team";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_H_soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_H_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_H_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_H_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_H_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class Atlas_B_H_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_APC_Wheeled_02_hmg_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_H_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_H_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_H_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_H_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_H_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_H_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_B_H_medic_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class Atlas_B_H_MechInf_Support {
                    name = "Mechanized Support Squad";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_APC_Wheeled_02_hmg_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_H_Soldier_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_H_engineer_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_H_medic_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_H_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_H_Soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_H_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
            };
            class Motorized {
                class Atlas_B_H_MotInf_AA {
                    name = "Motorized Air-defense Team";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_Pickup_aat_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_Soldier_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_H_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class Atlas_B_H_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_Pickup_AT_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_Soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_H_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class Atlas_B_H_MotInf_MortTeam {
                    name = "Motorized Mortar Team";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_Pickup_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_H_Support_CMort_RF";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_H_Support_CMort_RF";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Atlas_B_H_MotInf_Reinforcements {
                    name = "Motorized Reinforcements";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_Truck_02_transport_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_H_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_H_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_H_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_H_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_H_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_H_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_B_H_medic_F";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "Atlas_B_H_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "Atlas_B_H_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "Atlas_B_H_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "Atlas_B_H_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit13 {
                        vehicle = "Atlas_B_H_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit14 {
                        vehicle = "Atlas_B_H_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit15 {
                        vehicle = "Atlas_B_H_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit16 {
                        vehicle = "Atlas_B_H_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };
                };
                class B_H_MotInf_Squad {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_Truck_02_transport_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_H_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_H_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_H_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_H_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_H_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_H_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_B_H_medic_F";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };
                };
                class B_H_MotInf_Team {
                    name = "Motorized Team";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_Offroad_02_LMG_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
            };
            class SpecOps {
                class B_H_ReconPatrol {
                    name = "Recon Patrol";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_Soldier_commando_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_Soldier_commando_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_H_Soldier_commando_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_H_Soldier_commando_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class B_H_ReconSentry {
                    name = "Recon Sentry";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_Soldier_commando_M_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_Soldier_commando_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class B_H_ReconTeam {
                    name = "Recon Team";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_Soldier_commando_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_Soldier_commando_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_H_Soldier_commando_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_H_Soldier_commando_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_H_Soldier_commando_jtac_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_H_Soldier_commando_exp_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
            };
            class Support {
                class Atlas_B_H_Support_CLS {
                    name = "Support Team (CLS)";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_H_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_H_medic_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Atlas_B_H_Support_ENG {
                    name = "Support Team (Engineer)";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_H_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_H_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Atlas_B_H_Support_EOD {
                    name = "Support Team (EOD)";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_H_Soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_H_Soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Atlas_B_H_Support_Mort {
                    name = "Mortar Team";
                    side = 1;
                    faction = "Atlas_BLU_H_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mortar.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_H_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_H_Support_CMort_RF";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_H_Support_CMort_RF";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
        };
    };
};
