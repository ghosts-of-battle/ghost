//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class Atlas_IND_UNO_F {
        displayName = "UNO";
        side = 2;
        priority = 3;
        icon = "\A3_Atlas\Data_F_Atlas\FactionIcons\icon_UNO_CA.paa";
        flag = "\A3\Data_F\Flags\flag_UNO_CO.paa";
    };
};

class CfgVehicles {

    class O_R_APC_Wheeled_04_cannon_F;
    class O_R_APC_Wheeled_04_cannon_F_OCimport_01 : O_R_APC_Wheeled_04_cannon_F { scope = 0; class EventHandlers; };
    class O_R_APC_Wheeled_04_cannon_F_OCimport_02 : O_R_APC_Wheeled_04_cannon_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_Soldier_Base_F;
    class Atlas_I_UNO_Soldier_Base_F_OCimport_01 : Atlas_I_UNO_Soldier_Base_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_Soldier_Base_F_OCimport_02 : Atlas_I_UNO_Soldier_Base_F_OCimport_01 { class EventHandlers; };

    class Heli_EC_01A_military_base_RF;
    class Heli_EC_01A_military_base_RF_OCimport_01 : Heli_EC_01A_military_base_RF { scope = 0; class EventHandlers; };
    class Heli_EC_01A_military_base_RF_OCimport_02 : Heli_EC_01A_military_base_RF_OCimport_01 { class EventHandlers; };

    class Heli_EC_02_base_RF;
    class Heli_EC_02_base_RF_OCimport_01 : Heli_EC_02_base_RF { scope = 0; class EventHandlers; };
    class Heli_EC_02_base_RF_OCimport_02 : Heli_EC_02_base_RF_OCimport_01 { class EventHandlers; };

    class O_Heli_Light_02_dynamicLoadout_F;
    class O_Heli_Light_02_dynamicLoadout_F_OCimport_01 : O_Heli_Light_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_Heli_Light_02_dynamicLoadout_F_OCimport_02 : O_Heli_Light_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Light_02_unarmed_F;
    class O_Heli_Light_02_unarmed_F_OCimport_01 : O_Heli_Light_02_unarmed_F { scope = 0; class EventHandlers; };
    class O_Heli_Light_02_unarmed_F_OCimport_02 : O_Heli_Light_02_unarmed_F_OCimport_01 { class EventHandlers; };

    class Aegis_Heli_Transport_02_Heavy_base_F;
    class Aegis_Heli_Transport_02_Heavy_base_F_OCimport_01 : Aegis_Heli_Transport_02_Heavy_base_F { scope = 0; class EventHandlers; };
    class Aegis_Heli_Transport_02_Heavy_base_F_OCimport_02 : Aegis_Heli_Transport_02_Heavy_base_F_OCimport_01 { class EventHandlers; };

    class Aegis_Heli_Transport_02_VIP_base_F;
    class Aegis_Heli_Transport_02_VIP_base_F_OCimport_01 : Aegis_Heli_Transport_02_VIP_base_F { scope = 0; class EventHandlers; };
    class Aegis_Heli_Transport_02_VIP_base_F_OCimport_02 : Aegis_Heli_Transport_02_VIP_base_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_Helipilot_F;
    class Atlas_I_UNO_Helipilot_F_OCimport_01 : Atlas_I_UNO_Helipilot_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_Helipilot_F_OCimport_02 : Atlas_I_UNO_Helipilot_F_OCimport_01 { class EventHandlers; };

    class MRAP_01_base_F;
    class MRAP_01_base_F_OCimport_01 : MRAP_01_base_F { scope = 0; class EventHandlers; };
    class MRAP_01_base_F_OCimport_02 : MRAP_01_base_F_OCimport_01 { class EventHandlers; };

    class MRAP_01_gmg_base_F;
    class MRAP_01_gmg_base_F_OCimport_01 : MRAP_01_gmg_base_F { scope = 0; class EventHandlers; };
    class MRAP_01_gmg_base_F_OCimport_02 : MRAP_01_gmg_base_F_OCimport_01 { class EventHandlers; };

    class MRAP_01_hmg_base_F;
    class MRAP_01_hmg_base_F_OCimport_01 : MRAP_01_hmg_base_F { scope = 0; class EventHandlers; };
    class MRAP_01_hmg_base_F_OCimport_02 : MRAP_01_hmg_base_F_OCimport_01 { class EventHandlers; };

    class I_G_Offroad_01_F;
    class I_G_Offroad_01_F_OCimport_01 : I_G_Offroad_01_F { scope = 0; class EventHandlers; };
    class I_G_Offroad_01_F_OCimport_02 : I_G_Offroad_01_F_OCimport_01 { class EventHandlers; };

    class Offroad_01_military_comms_base_F;
    class Offroad_01_military_comms_base_F_OCimport_01 : Offroad_01_military_comms_base_F { scope = 0; class EventHandlers; };
    class Offroad_01_military_comms_base_F_OCimport_02 : Offroad_01_military_comms_base_F_OCimport_01 { class EventHandlers; };

    class Offroad_01_military_covered_base_F;
    class Offroad_01_military_covered_base_F_OCimport_01 : Offroad_01_military_covered_base_F { scope = 0; class EventHandlers; };
    class Offroad_01_military_covered_base_F_OCimport_02 : Offroad_01_military_covered_base_F_OCimport_01 { class EventHandlers; };

    class Offroad_01_armed_base_F;
    class Offroad_01_armed_base_F_OCimport_01 : Offroad_01_armed_base_F { scope = 0; class EventHandlers; };
    class Offroad_01_armed_base_F_OCimport_02 : Offroad_01_armed_base_F_OCimport_01 { class EventHandlers; };

    class Pickup_comms_base_rf;
    class Pickup_comms_base_rf_OCimport_01 : Pickup_comms_base_rf { scope = 0; class EventHandlers; };
    class Pickup_comms_base_rf_OCimport_02 : Pickup_comms_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_base_rf;
    class Pickup_01_base_rf_OCimport_01 : Pickup_01_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_base_rf_OCimport_02 : Pickup_01_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_mmg_base_rf;
    class Pickup_01_mmg_base_rf_OCimport_01 : Pickup_01_mmg_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_mmg_base_rf_OCimport_02 : Pickup_01_mmg_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_aat_base_rf;
    class Pickup_01_aat_base_rf_OCimport_01 : Pickup_01_aat_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_aat_base_rf_OCimport_02 : Pickup_01_aat_base_rf_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_Soldier_F;
    class Atlas_I_UNO_Soldier_F_OCimport_01 : Atlas_I_UNO_Soldier_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_Soldier_F_OCimport_02 : Atlas_I_UNO_Soldier_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_Ammo_F;
    class O_Truck_02_Ammo_F_OCimport_01 : O_Truck_02_Ammo_F { scope = 0; class EventHandlers; };
    class O_Truck_02_Ammo_F_OCimport_02 : O_Truck_02_Ammo_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_covered_F;
    class O_Truck_02_covered_F_OCimport_01 : O_Truck_02_covered_F { scope = 0; class EventHandlers; };
    class O_Truck_02_covered_F_OCimport_02 : O_Truck_02_covered_F_OCimport_01 { class EventHandlers; };

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

    class O_Truck_02_transport_F;
    class O_Truck_02_transport_F_OCimport_01 : O_Truck_02_transport_F { scope = 0; class EventHandlers; };
    class O_Truck_02_transport_F_OCimport_02 : O_Truck_02_transport_F_OCimport_01 { class EventHandlers; };

    class UAV_01_base_F;
    class UAV_01_base_F_OCimport_01 : UAV_01_base_F { scope = 0; class EventHandlers; };
    class UAV_01_base_F_OCimport_02 : UAV_01_base_F_OCimport_01 { class EventHandlers; };

    class UAV_06_base_F;
    class UAV_06_base_F_OCimport_01 : UAV_06_base_F { scope = 0; class EventHandlers; };
    class UAV_06_base_F_OCimport_02 : UAV_06_base_F_OCimport_01 { class EventHandlers; };

    class UAV_06_medical_base_F;
    class UAV_06_medical_base_F_OCimport_01 : UAV_06_medical_base_F { scope = 0; class EventHandlers; };
    class UAV_06_medical_base_F_OCimport_02 : UAV_06_medical_base_F_OCimport_01 { class EventHandlers; };

    class UGV_02_Demining_Base_F;
    class UGV_02_Demining_Base_F_OCimport_01 : UGV_02_Demining_Base_F { scope = 0; class EventHandlers; };
    class UGV_02_Demining_Base_F_OCimport_02 : UGV_02_Demining_Base_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_Soldier_UAV_F;
    class Atlas_I_UNO_Soldier_UAV_F_OCimport_01 : Atlas_I_UNO_Soldier_UAV_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_Soldier_UAV_F_OCimport_02 : Atlas_I_UNO_Soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_APC_Wheeled_04_cannon_F : O_R_APC_Wheeled_04_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-100 Bogatyr";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Crew_F : Atlas_I_UNO_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_shortsleeve_UNO";

        linkedItems[] = {"V_TacVest_khk","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Aegis_arifle_M4A1_short_sand_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_M4A1_short_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Engineer_F : Atlas_I_UNO_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_UNO";

        backpack = "B_Carryall_cbr_IUEng_F";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_heavy_UNRACS_F","H_I_Helmet_canvas_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_heavy_UNRACS_F","H_I_Helmet_canvas_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","SmokeShell","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","SmokeShell","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Heli_EC_01A_military_RF : Heli_EC_01A_military_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "H215 Super Puma (Unarmed)";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Heli_EC_02_RF : Heli_EC_02_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "H225M Super Cougar SOCAT";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Heli_Light_02_dynamicLoadout_F : O_Heli_Light_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Heli_Light_02_unarmed_F : O_Heli_Light_02_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka (unarmed)";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Heli_Transport_02_Heavy_F : Aegis_Heli_Transport_02_Heavy_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH-49E Mohawk";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Heli_Transport_02_VIP_F : Aegis_Heli_Transport_02_VIP_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "EH-302 (Executive Transport)";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Helicrew_F : Atlas_I_UNO_Helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_shortsleeve_UNO";

        linkedItems[] = {"V_TacVest_khk","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Aegis_arifle_M4A1_short_sand_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_M4A1_short_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Helipilot_F : Atlas_I_UNO_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_UNO";

        linkedItems[] = {"V_TacVest_khk","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

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

    class Atlas_I_UNO_MRAP_01_F : MRAP_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hunter";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_MRAP_01_gmg_F : MRAP_01_gmg_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hunter GMG";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_MRAP_01_hmg_F : MRAP_01_hmg_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hunter HMG";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Medic_F : Atlas_I_UNO_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_shortsleeve_UNO";

        backpack = "B_AssaultPack_cbr_IUMedic_F";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","Aegis_H_Booniehat_UNO_hs_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","Aegis_H_Booniehat_UNO_hs_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Officer_F : Atlas_I_UNO_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_UNO";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_cbr_F","H_Beret_UNO_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_cbr_F","H_Beret_UNO_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class Atlas_I_UNO_Offroad_01_F : I_G_Offroad_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Offroad_01_comms_F : Offroad_01_military_comms_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Comms)";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Offroad_01_covered_F : Offroad_01_military_covered_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Covered)";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Offroad_armed_01_F : Offroad_01_armed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (HMG)";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Pickup_Comms_F : Pickup_comms_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Comms)";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Pickup_F : Pickup_01_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Pickup_MMG_F : Pickup_01_mmg_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (MMG)";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Pickup_aat_F : Pickup_01_aat_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (AA)";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Pilot_F : Atlas_I_UNO_Helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_UNO";

        backpack = "B_Parachute";

        linkedItems[] = {"V_TacVest_khk","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

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

    class Atlas_I_UNO_RadioOperator_F : Atlas_I_UNO_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_shortsleeve_UNO";

        backpack = "B_RadioBag_01_coyote_F";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","Aegis_H_MilCap_UNO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","Aegis_H_MilCap_UNO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Soldier_AR_F : Atlas_I_UNO_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_shortsleeve_UNO";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","H_I_Helmet_canvas_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","H_I_Helmet_canvas_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_lmg_03_snd_Holo_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_lmg_03_snd_Holo_FL_F","Throw","Put"};

        magazines[] = {"200Rnd_556x45_box_f","200Rnd_556x45_box_f","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"200Rnd_556x45_box_f","200Rnd_556x45_box_f","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Soldier_A_F : Atlas_I_UNO_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_shortsleeve_UNO";

        backpack = "B_Carryall_cbr_IUAmmo_F";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","H_I_Helmet_canvas_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","H_I_Helmet_canvas_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Soldier_F : Atlas_I_UNO_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_UNO";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","H_I_Helmet_canvas_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","H_I_Helmet_canvas_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Soldier_GL_F : Atlas_I_UNO_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_UNO";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_heavy_UNRACS_F","H_I_Helmet_canvas_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_heavy_UNRACS_F","H_I_Helmet_canvas_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M4A1_GL_Sand_Holo_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_GL_Sand_Holo_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","SmokeShell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","SmokeShell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Soldier_LAT_F : Atlas_I_UNO_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_UNO";

        backpack = "B_AssaultPack_cbr_ILAT_F";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","H_I_Helmet_canvas_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","H_I_Helmet_canvas_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","launch_NLAW_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","launch_NLAW_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","NLAW_F","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","NLAW_F","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Soldier_SL_F : Atlas_I_UNO_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_shortsleeve_UNO";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","H_I_Helmet_canvas_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","H_I_Helmet_canvas_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M4A1_Sand_ACOG_FL_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_Sand_ACOG_FL_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_tracer_red","30Rnd_556x45_stanag_sand_tracer_red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_tracer_red","30Rnd_556x45_stanag_sand_tracer_red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Soldier_TL_F : Atlas_I_UNO_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_UNO";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_heavy_UNRACS_F","H_I_Helmet_canvas_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_heavy_UNRACS_F","H_I_Helmet_canvas_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M4A1_GL_Sand_ACOG_FL_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_GL_Sand_ACOG_FL_F","hgun_ACPC2_black_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_tracer_red","30Rnd_556x45_stanag_sand_tracer_red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","SmokeShell","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_tracer_red","30Rnd_556x45_stanag_sand_tracer_red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","SmokeShell","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Soldier_UAV_F : Atlas_I_UNO_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_shortsleeve_UNO";

        backpack = "Atlas_I_UNO_UAV_01_backpack_F";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","H_I_Helmet_canvas_UN_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","H_I_Helmet_canvas_UN_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Truck_02_Ammo_F : O_Truck_02_Ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Ammo";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Truck_02_F : O_Truck_02_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport (covered)";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Truck_02_box_F : O_Truck_02_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Repair";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Truck_02_cargo_F : Truck_02_cargo_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Cargo";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Truck_02_flatbed_F : Truck_02_flatbed_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Flatbed";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Truck_02_fuel_F : O_Truck_02_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Fuel";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Truck_02_medical_F : O_Truck_02_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Medical";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_Truck_02_transport_F : O_Truck_02_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "Atlas_I_UNO_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_UAV_01_F : UAV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR-2 Darter";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "I_UAV_AI_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_UAV_06_F : UAV_06_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "I_UAV_AI_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_UAV_06_medical_F : UAV_06_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican (Medical)";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "I_UAV_AI_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_UGV_02_Demining_F : UGV_02_Demining_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ED-1D Pelter";
        side = 2;
        faction = "atlas_ind_uno_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_soldier_M_F : Atlas_I_UNO_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_UNO";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","Aegis_H_Booniehat_UNO_hs_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","Aegis_H_Booniehat_UNO_hs_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SR25_MR_Snd_AMS_BI_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_arifle_SR25_MR_Snd_AMS_BI_F","Throw","Put","Binocular"};

        magazines[] = {"Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","Aegis_20Rnd_762x51_Red_Sand_SMAG","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_soldier_UAV_06_F : Atlas_I_UNO_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_shortsleeve_UNO";

        backpack = "Atlas_I_UNO_UAV_06_backpack_F";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","H_I_Helmet_canvas_UN_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","H_I_Helmet_canvas_UN_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_soldier_UAV_06_medical_F : Atlas_I_UNO_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_shortsleeve_UNO";

        backpack = "Atlas_I_UNO_UAV_06_medical_backpack_F";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","Aegis_H_MilCap_UNO","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","Aegis_H_MilCap_UNO","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_soldier_UGV_02_Demining_F : Atlas_I_UNO_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1D)";
        side = 2;
        faction = "atlas_ind_uno_f";

        identityTypes[] = {"LanguageGRE_F","Head_Latino","G_HAF_default"};

        uniformClass = "Atlas_U_I_U_CombatUniform_shortsleeve_UNO";

        backpack = "Atlas_I_UNO_UGV_02_Demining_backpack_F";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","H_I_Helmet_canvas_UN_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_tac_UNRACS_F","H_I_Helmet_canvas_UN_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_Sand_Holo_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","30Rnd_556x45_stanag_sand_red","HandGrenade","SmokeShell"};


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
    class Indep {
        class Atlas_IND_UNO_F {
            class Infantry {
                class Atlas_I_UNO_InfSquad {
                    name = "Peacekeeper Squad";
                    side = 2;
                    faction = "Atlas_IND_UNO_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_UNO_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_UNO_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_UNO_Soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_UNO_Soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_I_UNO_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_I_UNO_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_I_UNO_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_I_UNO_Medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Atlas_I_UNO_InfTeam {
                    name = "Peacekeeper Team";
                    side = 2;
                    faction = "Atlas_IND_UNO_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_UNO_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_UNO_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_UNO_Soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_UNO_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
        };
    };
};
