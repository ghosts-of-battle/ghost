//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class Atlas_IND_UNO_wdl_F {
        displayName = "UNO (Woodland)";
        side = 2;
        priority = 3;
        icon = "\A3_Atlas\Data_F_Atlas\FactionIcons\icon_UNO_CA.paa";
        flag = "\A3\Data_F\Flags\flag_UNO_CO.paa";
    };
};

class CfgVehicles {

    class Aegis_Heli_Attack_04_base_F;
    class Aegis_Heli_Attack_04_base_F_OCimport_01 : Aegis_Heli_Attack_04_base_F { scope = 0; class EventHandlers; };
    class Aegis_Heli_Attack_04_base_F_OCimport_02 : Aegis_Heli_Attack_04_base_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_APC_Wheeled_04_cannon_F;
    class Atlas_I_UNO_APC_Wheeled_04_cannon_F_OCimport_01 : Atlas_I_UNO_APC_Wheeled_04_cannon_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_APC_Wheeled_04_cannon_F_OCimport_02 : Atlas_I_UNO_APC_Wheeled_04_cannon_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_wdl_Soldier_Base_F;
    class Atlas_I_UNO_wdl_Soldier_Base_F_OCimport_01 : Atlas_I_UNO_wdl_Soldier_Base_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_wdl_Soldier_Base_F_OCimport_02 : Atlas_I_UNO_wdl_Soldier_Base_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Light_02_dynamicLoadout_F;
    class O_Heli_Light_02_dynamicLoadout_F_OCimport_01 : O_Heli_Light_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_Heli_Light_02_dynamicLoadout_F_OCimport_02 : O_Heli_Light_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Light_02_unarmed_F;
    class O_Heli_Light_02_unarmed_F_OCimport_01 : O_Heli_Light_02_unarmed_F { scope = 0; class EventHandlers; };
    class O_Heli_Light_02_unarmed_F_OCimport_02 : O_Heli_Light_02_unarmed_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_wdl_Helipilot_F;
    class Atlas_I_UNO_wdl_Helipilot_F_OCimport_01 : Atlas_I_UNO_wdl_Helipilot_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_wdl_Helipilot_F_OCimport_02 : Atlas_I_UNO_wdl_Helipilot_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_MRAP_01_F;
    class Atlas_I_UNO_MRAP_01_F_OCimport_01 : Atlas_I_UNO_MRAP_01_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_MRAP_01_F_OCimport_02 : Atlas_I_UNO_MRAP_01_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_MRAP_01_gmg_F;
    class Atlas_I_UNO_MRAP_01_gmg_F_OCimport_01 : Atlas_I_UNO_MRAP_01_gmg_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_MRAP_01_gmg_F_OCimport_02 : Atlas_I_UNO_MRAP_01_gmg_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_MRAP_01_hmg_F;
    class Atlas_I_UNO_MRAP_01_hmg_F_OCimport_01 : Atlas_I_UNO_MRAP_01_hmg_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_MRAP_01_hmg_F_OCimport_02 : Atlas_I_UNO_MRAP_01_hmg_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_Offroad_01_F;
    class Atlas_I_UNO_Offroad_01_F_OCimport_01 : Atlas_I_UNO_Offroad_01_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_Offroad_01_F_OCimport_02 : Atlas_I_UNO_Offroad_01_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_Offroad_01_comms_F;
    class Atlas_I_UNO_Offroad_01_comms_F_OCimport_01 : Atlas_I_UNO_Offroad_01_comms_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_Offroad_01_comms_F_OCimport_02 : Atlas_I_UNO_Offroad_01_comms_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_Offroad_01_covered_F;
    class Atlas_I_UNO_Offroad_01_covered_F_OCimport_01 : Atlas_I_UNO_Offroad_01_covered_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_Offroad_01_covered_F_OCimport_02 : Atlas_I_UNO_Offroad_01_covered_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_Offroad_armed_01_F;
    class Atlas_I_UNO_Offroad_armed_01_F_OCimport_01 : Atlas_I_UNO_Offroad_armed_01_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_Offroad_armed_01_F_OCimport_02 : Atlas_I_UNO_Offroad_armed_01_F_OCimport_01 { class EventHandlers; };

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

    class Atlas_I_UNO_wdl_Soldier_F;
    class Atlas_I_UNO_wdl_Soldier_F_OCimport_01 : Atlas_I_UNO_wdl_Soldier_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_wdl_Soldier_F_OCimport_02 : Atlas_I_UNO_wdl_Soldier_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_Truck_02_Ammo_F;
    class Atlas_I_UNO_Truck_02_Ammo_F_OCimport_01 : Atlas_I_UNO_Truck_02_Ammo_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_Truck_02_Ammo_F_OCimport_02 : Atlas_I_UNO_Truck_02_Ammo_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_Truck_02_F;
    class Atlas_I_UNO_Truck_02_F_OCimport_01 : Atlas_I_UNO_Truck_02_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_Truck_02_F_OCimport_02 : Atlas_I_UNO_Truck_02_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_Truck_02_box_F;
    class Atlas_I_UNO_Truck_02_box_F_OCimport_01 : Atlas_I_UNO_Truck_02_box_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_Truck_02_box_F_OCimport_02 : Atlas_I_UNO_Truck_02_box_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_Truck_02_cargo_F;
    class Atlas_I_UNO_Truck_02_cargo_F_OCimport_01 : Atlas_I_UNO_Truck_02_cargo_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_Truck_02_cargo_F_OCimport_02 : Atlas_I_UNO_Truck_02_cargo_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_Truck_02_fuel_F;
    class Atlas_I_UNO_Truck_02_fuel_F_OCimport_01 : Atlas_I_UNO_Truck_02_fuel_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_Truck_02_fuel_F_OCimport_02 : Atlas_I_UNO_Truck_02_fuel_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_Truck_02_medical_F;
    class Atlas_I_UNO_Truck_02_medical_F_OCimport_01 : Atlas_I_UNO_Truck_02_medical_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_Truck_02_medical_F_OCimport_02 : Atlas_I_UNO_Truck_02_medical_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_Truck_02_transport_F;
    class Atlas_I_UNO_Truck_02_transport_F_OCimport_01 : Atlas_I_UNO_Truck_02_transport_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_Truck_02_transport_F_OCimport_02 : Atlas_I_UNO_Truck_02_transport_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_UAV_01_F;
    class Atlas_I_UNO_UAV_01_F_OCimport_01 : Atlas_I_UNO_UAV_01_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_UAV_01_F_OCimport_02 : Atlas_I_UNO_UAV_01_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_UAV_06_F;
    class Atlas_I_UNO_UAV_06_F_OCimport_01 : Atlas_I_UNO_UAV_06_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_UAV_06_F_OCimport_02 : Atlas_I_UNO_UAV_06_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_UAV_06_medical_F;
    class Atlas_I_UNO_UAV_06_medical_F_OCimport_01 : Atlas_I_UNO_UAV_06_medical_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_UAV_06_medical_F_OCimport_02 : Atlas_I_UNO_UAV_06_medical_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_UGV_02_Demining_F;
    class Atlas_I_UNO_UGV_02_Demining_F_OCimport_01 : Atlas_I_UNO_UGV_02_Demining_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_UGV_02_Demining_F_OCimport_02 : Atlas_I_UNO_UGV_02_Demining_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_wdl_Soldier_UAV_F;
    class Atlas_I_UNO_wdl_Soldier_UAV_F_OCimport_01 : Atlas_I_UNO_wdl_Soldier_UAV_F { scope = 0; class EventHandlers; };
    class Atlas_I_UNO_wdl_Soldier_UAV_F_OCimport_02 : Atlas_I_UNO_wdl_Soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_UNO_Heli_Attack_04_F : Aegis_Heli_Attack_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-35 Superhind";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_APC_Wheeled_04_cannon_F : Atlas_I_UNO_APC_Wheeled_04_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-100 Bogatyr";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Crew_F : Atlas_I_UNO_wdl_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_shortsleeve_UNO";

        linkedItems[] = {"V_TacVest_grn","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_FORT651_F","Throw","Put"};
        respawnWeapons[] = {"arifle_FORT651_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Engineer_F : Atlas_I_UNO_wdl_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_UNO";

        backpack = "B_Carryall_green_IUEng_F";

        linkedItems[] = {"V_CF_CarrierRig_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CF_CarrierRig_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_FORT652_F","Throw","Put"};
        respawnWeapons[] = {"arifle_FORT652_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","SmokeShell","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","SmokeShell","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Heli_Light_02_dynamicLoadout_F : O_Heli_Light_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Heli_Light_02_unarmed_F : O_Heli_Light_02_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka (unarmed)";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Helicrew_F : Atlas_I_UNO_wdl_Helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_shortsleeve_UNO";

        linkedItems[] = {"V_TacVest_grn","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_FORT651_F","Throw","Put"};
        respawnWeapons[] = {"arifle_FORT651_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Helipilot_F : Atlas_I_UNO_wdl_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_UNO";

        linkedItems[] = {"V_TacVest_grn","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"SMG_02_F","Throw","Put"};
        respawnWeapons[] = {"SMG_02_F","Throw","Put"};

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

    class Atlas_I_UNO_wdl_MRAP_01_F : Atlas_I_UNO_MRAP_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hunter";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_MRAP_01_gmg_F : Atlas_I_UNO_MRAP_01_gmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hunter GMG";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_MRAP_01_hmg_F : Atlas_I_UNO_MRAP_01_hmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hunter HMG";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Medic_F : Atlas_I_UNO_wdl_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_shortsleeve_UNO";

        backpack = "B_AssaultPack_rgr_IUMedic_F";

        linkedItems[] = {"V_CF_CarrierRig_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CF_CarrierRig_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_FORT652_F","Throw","Put"};
        respawnWeapons[] = {"arifle_FORT652_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Officer_F : Atlas_I_UNO_wdl_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_UNO";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_olive_F","H_Beret_UNO_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_olive_F","H_Beret_UNO_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_02_F","hgun_Pistol_heavy_02_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"SMG_02_F","hgun_Pistol_heavy_02_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02_Tracer_Red","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Offroad_01_F : Atlas_I_UNO_Offroad_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Offroad_01_comms_F : Atlas_I_UNO_Offroad_01_comms_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Comms)";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Offroad_01_covered_F : Atlas_I_UNO_Offroad_01_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Covered)";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Offroad_armed_01_F : Atlas_I_UNO_Offroad_armed_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (HMG)";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Pickup_Comms_F : Pickup_comms_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Comms)";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Pickup_F : Pickup_01_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Pickup_MMG_F : Pickup_01_mmg_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (MMG)";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Pickup_aat_F : Pickup_01_aat_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (AA)";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Pilot_F : Atlas_I_UNO_wdl_Helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_UNO";

        backpack = "B_Parachute";

        linkedItems[] = {"V_TacVest_grn","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"SMG_02_F","Throw","Put"};
        respawnWeapons[] = {"SMG_02_F","Throw","Put"};

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

    class Atlas_I_UNO_wdl_RadioOperator_F : Atlas_I_UNO_wdl_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_shortsleeve_UNO";

        backpack = "B_RadioBag_01_green_F";

        linkedItems[] = {"V_CF_CarrierRig_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CF_CarrierRig_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_FORT652_aco_F","Throw","Put"};
        respawnWeapons[] = {"arifle_FORT652_aco_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade_Guer","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade_Guer","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Soldier_AR_F : Atlas_I_UNO_wdl_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_shortsleeve_UNO";

        linkedItems[] = {"V_CF_CarrierRig_MG_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CF_CarrierRig_MG_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"LMG_MK200_black_cdf_F","Throw","Put"};
        respawnWeapons[] = {"LMG_MK200_black_cdf_F","Throw","Put"};

        magazines[] = {"200Rnd_65x39_cased_box_red","200Rnd_65x39_cased_box_red","200Rnd_65x39_cased_box_red","HandGrenade_Guer","SmokeShell"};
        respawnMagazines[] = {"200Rnd_65x39_cased_box_red","200Rnd_65x39_cased_box_red","200Rnd_65x39_cased_box_red","HandGrenade_Guer","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Soldier_A_F : Atlas_I_UNO_wdl_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_shortsleeve_UNO";

        backpack = "B_Carryall_green_IUAmmo_F";

        linkedItems[] = {"V_CF_CarrierRig_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CF_CarrierRig_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_FORT652_F","Throw","Put"};
        respawnWeapons[] = {"arifle_FORT652_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade_Guer","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade_Guer","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Soldier_F : Atlas_I_UNO_wdl_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_UNO";

        linkedItems[] = {"V_CF_CarrierRig_Lite_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CF_CarrierRig_Lite_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_FORT652_aco_F","Throw","Put"};
        respawnWeapons[] = {"arifle_FORT652_aco_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade_Guer","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade_Guer","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Soldier_GL_F : Atlas_I_UNO_wdl_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_UNO";

        linkedItems[] = {"V_CF_CarrierRig_Lite_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CF_CarrierRig_Lite_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_FORT652_GL_aco_F","Throw","Put"};
        respawnWeapons[] = {"arifle_FORT652_GL_aco_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_Guer","SmokeShell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_Guer","SmokeShell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Soldier_LAT_F : Atlas_I_UNO_wdl_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_UNO";

        backpack = "B_AssaultPack_rgr_ILAT_F";

        linkedItems[] = {"V_CF_CarrierRig_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CF_CarrierRig_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_FORT652_aco_F","launch_RPG32_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_FORT652_aco_F","launch_RPG32_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","RPG32_F","HandGrenade_Guer","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","RPG32_F","HandGrenade_Guer","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Soldier_SL_F : Atlas_I_UNO_wdl_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_shortsleeve_UNO";

        linkedItems[] = {"V_CF_CarrierRig_Lite_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CF_CarrierRig_Lite_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_FORT652_mrco_F","hgun_Pistol_01_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_FORT652_mrco_F","hgun_Pistol_01_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_tracer","30Rnd_65x39_caseless_msbs_mag_tracer","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","SmokeShell","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_tracer","30Rnd_65x39_caseless_msbs_mag_tracer","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","SmokeShell","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Soldier_TL_F : Atlas_I_UNO_wdl_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_UNO";

        linkedItems[] = {"V_CF_CarrierRig_Lite_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CF_CarrierRig_Lite_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_FORT652_GL_aco_F","hgun_Pistol_01_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_FORT652_GL_aco_F","hgun_Pistol_01_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_tracer","30Rnd_65x39_caseless_msbs_mag_tracer","10Rnd_9x21_Mag","10Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_Guer","SmokeShell","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_tracer","30Rnd_65x39_caseless_msbs_mag_tracer","10Rnd_9x21_Mag","10Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_Guer","SmokeShell","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Soldier_UAV_F : Atlas_I_UNO_wdl_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_UNO";

        backpack = "Atlas_I_UNO_UAV_01_backpack_F";

        linkedItems[] = {"V_CF_CarrierRig_Lite_F","H_HelmetSpecter_cover_UNO_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CF_CarrierRig_Lite_F","H_HelmetSpecter_cover_UNO_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_FORT652_aco_F","Throw","Put"};
        respawnWeapons[] = {"arifle_FORT652_aco_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade_Guer","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade_Guer","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Truck_02_Ammo_F : Atlas_I_UNO_Truck_02_Ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Ammo";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Truck_02_F : Atlas_I_UNO_Truck_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport (covered)";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Truck_02_box_F : Atlas_I_UNO_Truck_02_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Repair";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Truck_02_cargo_F : Atlas_I_UNO_Truck_02_cargo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Cargo";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Truck_02_fuel_F : Atlas_I_UNO_Truck_02_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Fuel";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Truck_02_medical_F : Atlas_I_UNO_Truck_02_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Medical";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_Truck_02_transport_F : Atlas_I_UNO_Truck_02_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
        crew = "Atlas_I_UNO_wdl_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_UAV_01_F : Atlas_I_UNO_UAV_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR-2 Darter";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
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

    class Atlas_I_UNO_wdl_UAV_06_F : Atlas_I_UNO_UAV_06_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
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

    class Atlas_I_UNO_wdl_UAV_06_medical_F : Atlas_I_UNO_UAV_06_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican (Medical)";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
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

    class Atlas_I_UNO_wdl_UGV_02_Demining_F : Atlas_I_UNO_UGV_02_Demining_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ED-1D Pelter";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";
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

    class Atlas_I_UNO_wdl_soldier_M_F : Atlas_I_UNO_wdl_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_UNO";

        linkedItems[] = {"V_CF_CarrierRig_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CF_CarrierRig_F","H_HelmetSpecter_cover_UNO_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_DMR_05_blk_AMS_BI_F","hgun_Pistol_01_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"srifle_DMR_05_blk_AMS_BI_F","hgun_Pistol_01_F","Throw","Put","Binocular"};

        magazines[] = {"10Rnd_93x64_dmr_05_mag","10Rnd_93x64_dmr_05_mag","10Rnd_93x64_dmr_05_mag","10Rnd_93x64_dmr_05_mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","SmokeShell"};
        respawnMagazines[] = {"10Rnd_93x64_dmr_05_mag","10Rnd_93x64_dmr_05_mag","10Rnd_93x64_dmr_05_mag","10Rnd_93x64_dmr_05_mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_soldier_UAV_06_F : Atlas_I_UNO_wdl_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_UNO";

        backpack = "Atlas_I_UNO_UAV_06_backpack_F";

        linkedItems[] = {"V_CF_CarrierRig_Lite_F","H_HelmetSpecter_cover_UNO_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CF_CarrierRig_Lite_F","H_HelmetSpecter_cover_UNO_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_FORT652_aco_F","Throw","Put"};
        respawnWeapons[] = {"arifle_FORT652_aco_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade_Guer","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade_Guer","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_soldier_UAV_06_medical_F : Atlas_I_UNO_wdl_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_UNO";

        backpack = "Atlas_I_UNO_UAV_06_medical_backpack_F";

        linkedItems[] = {"V_CF_CarrierRig_Lite_F","H_HelmetSpecter_cover_UNO_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CF_CarrierRig_Lite_F","H_HelmetSpecter_cover_UNO_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_FORT652_aco_F","Throw","Put"};
        respawnWeapons[] = {"arifle_FORT652_aco_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade_Guer","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade_Guer","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_UNO_wdl_soldier_UGV_02_Demining_F : Atlas_I_UNO_wdl_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1D)";
        side = 2;
        faction = "atlas_ind_uno_wdl_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_I_UW_CombatUniform_UNO";

        backpack = "Atlas_I_UNO_UGV_02_Demining_backpack_F";

        linkedItems[] = {"V_CF_CarrierRig_Lite_F","H_HelmetSpecter_cover_UNO_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CF_CarrierRig_Lite_F","H_HelmetSpecter_cover_UNO_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_FORT652_aco_F","Throw","Put"};
        respawnWeapons[] = {"arifle_FORT652_aco_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade_Guer","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade_Guer","SmokeShell"};


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
        class Atlas_IND_UNO_wdl_F {
            class Infantry {
                class Atlas_I_UNO_wdl_InfSquad {
                    name = "Peacekeeper Squad";
                    side = 2;
                    faction = "Atlas_IND_UNO_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_UNO_wdl_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_UNO_wdl_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_UNO_wdl_Soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_UNO_wdl_Soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_I_UNO_wdl_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_I_UNO_wdl_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_I_UNO_wdl_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_I_UNO_wdl_Medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Atlas_I_UNO_wdl_InfTeam {
                    name = "Peacekeeper Team";
                    side = 2;
                    faction = "Atlas_IND_UNO_wdl_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_UNO_wdl_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_UNO_wdl_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_UNO_wdl_Soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_UNO_wdl_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
        };
    };
};
