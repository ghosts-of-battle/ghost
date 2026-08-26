//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class Atlas_BLU_A_ard_F {
        displayName = "ADF (Arid)";
        side = 1;
        priority = 3;
        icon = "\A3_Atlas\Data_F_Atlas\FactionIcons\CfgFactionClasses_BLU_A_CA.paa";
        flag = "\A3_Atlas\Data_F_Atlas\Flags\flag_Australia_CO.paa";
    };
};

class CfgVehicles {

    class Atlas_B_A_APC_Wheeled_01_atgm_v2;
    class Atlas_B_A_APC_Wheeled_01_atgm_v2_OCimport_01 : Atlas_B_A_APC_Wheeled_01_atgm_v2 { scope = 0; class EventHandlers; };
    class Atlas_B_A_APC_Wheeled_01_atgm_v2_OCimport_02 : Atlas_B_A_APC_Wheeled_01_atgm_v2_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_APC_Wheeled_01_cannon_v2_F;
    class Atlas_B_A_APC_Wheeled_01_cannon_v2_F_OCimport_01 : Atlas_B_A_APC_Wheeled_01_cannon_v2_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_APC_Wheeled_01_cannon_v2_F_OCimport_02 : Atlas_B_A_APC_Wheeled_01_cannon_v2_F_OCimport_01 { class EventHandlers; };

    class B_CommandoMortar_RF;
    class B_CommandoMortar_RF_OCimport_01 : B_CommandoMortar_RF { scope = 0; class EventHandlers; };
    class B_CommandoMortar_RF_OCimport_02 : B_CommandoMortar_RF_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Soldier_ard_base_F;
    class Atlas_B_A_Soldier_ard_base_F_OCimport_01 : Atlas_B_A_Soldier_ard_base_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Soldier_ard_base_F_OCimport_02 : Atlas_B_A_Soldier_ard_base_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_GMG_01_A_F;
    class Atlas_B_A_GMG_01_A_F_OCimport_01 : Atlas_B_A_GMG_01_A_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_GMG_01_A_F_OCimport_02 : Atlas_B_A_GMG_01_A_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_GMG_01_F;
    class Atlas_B_A_GMG_01_F_OCimport_01 : Atlas_B_A_GMG_01_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_GMG_01_F_OCimport_02 : Atlas_B_A_GMG_01_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_GMG_01_high_F;
    class Atlas_B_A_GMG_01_high_F_OCimport_01 : Atlas_B_A_GMG_01_high_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_GMG_01_high_F_OCimport_02 : Atlas_B_A_GMG_01_high_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_HMG_01_A_F;
    class Atlas_B_A_HMG_01_A_F_OCimport_01 : Atlas_B_A_HMG_01_A_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_HMG_01_A_F_OCimport_02 : Atlas_B_A_HMG_01_A_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_HMG_01_F;
    class Atlas_B_A_HMG_01_F_OCimport_01 : Atlas_B_A_HMG_01_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_HMG_01_F_OCimport_02 : Atlas_B_A_HMG_01_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_HMG_01_high_F;
    class Atlas_B_A_HMG_01_high_F_OCimport_01 : Atlas_B_A_HMG_01_high_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_HMG_01_high_F_OCimport_02 : Atlas_B_A_HMG_01_high_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_HMG_02_F;
    class Atlas_B_A_HMG_02_F_OCimport_01 : Atlas_B_A_HMG_02_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_HMG_02_F_OCimport_02 : Atlas_B_A_HMG_02_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_HMG_02_high_F;
    class Atlas_B_A_HMG_02_high_F_OCimport_01 : Atlas_B_A_HMG_02_high_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_HMG_02_high_F_OCimport_02 : Atlas_B_A_HMG_02_high_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Heli_Attack_03_F;
    class Atlas_B_A_Heli_Attack_03_F_OCimport_01 : Atlas_B_A_Heli_Attack_03_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Heli_Attack_03_F_OCimport_02 : Atlas_B_A_Heli_Attack_03_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Heli_Transport_01_F;
    class Atlas_B_A_Heli_Transport_01_F_OCimport_01 : Atlas_B_A_Heli_Transport_01_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Heli_Transport_01_F_OCimport_02 : Atlas_B_A_Heli_Transport_01_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_MBT_03_cannon_F;
    class Atlas_B_A_MBT_03_cannon_F_OCimport_01 : Atlas_B_A_MBT_03_cannon_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_MBT_03_cannon_F_OCimport_02 : Atlas_B_A_MBT_03_cannon_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_MRAP_03_F;
    class Atlas_B_A_MRAP_03_F_OCimport_01 : Atlas_B_A_MRAP_03_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_MRAP_03_F_OCimport_02 : Atlas_B_A_MRAP_03_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_MRAP_03_gmg_F;
    class Atlas_B_A_MRAP_03_gmg_F_OCimport_01 : Atlas_B_A_MRAP_03_gmg_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_MRAP_03_gmg_F_OCimport_02 : Atlas_B_A_MRAP_03_gmg_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_MRAP_03_hmg_F;
    class Atlas_B_A_MRAP_03_hmg_F_OCimport_01 : Atlas_B_A_MRAP_03_hmg_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_MRAP_03_hmg_F_OCimport_02 : Atlas_B_A_MRAP_03_hmg_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Mortar_01_F;
    class Atlas_B_A_Mortar_01_F_OCimport_01 : Atlas_B_A_Mortar_01_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Mortar_01_F_OCimport_02 : Atlas_B_A_Mortar_01_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Plane_Fighter_05_Stealth_F;
    class Atlas_B_A_Plane_Fighter_05_Stealth_F_OCimport_01 : Atlas_B_A_Plane_Fighter_05_Stealth_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Plane_Fighter_05_Stealth_F_OCimport_02 : Atlas_B_A_Plane_Fighter_05_Stealth_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Plane_Fighter_05_F;
    class Atlas_B_A_Plane_Fighter_05_F_OCimport_01 : Atlas_B_A_Plane_Fighter_05_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Plane_Fighter_05_F_OCimport_02 : Atlas_B_A_Plane_Fighter_05_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Soldier_Recon_ard_Base_F;
    class Atlas_B_A_Soldier_Recon_ard_Base_F_OCimport_01 : Atlas_B_A_Soldier_Recon_ard_Base_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Soldier_Recon_ard_Base_F_OCimport_02 : Atlas_B_A_Soldier_Recon_ard_Base_F_OCimport_01 { class EventHandlers; };

    class B_soldier_PG_F;
    class B_soldier_PG_F_OCimport_01 : B_soldier_PG_F { scope = 0; class EventHandlers; };
    class B_soldier_PG_F_OCimport_02 : B_soldier_PG_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Soldier_ard_F;
    class Atlas_B_A_Soldier_ard_F_OCimport_01 : Atlas_B_A_Soldier_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Soldier_ard_F_OCimport_02 : Atlas_B_A_Soldier_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Static_AA_F;
    class Atlas_B_A_Static_AA_F_OCimport_01 : Atlas_B_A_Static_AA_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Static_AA_F_OCimport_02 : Atlas_B_A_Static_AA_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Static_AT_F;
    class Atlas_B_A_Static_AT_F_OCimport_01 : Atlas_B_A_Static_AT_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Static_AT_F_OCimport_02 : Atlas_B_A_Static_AT_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Truck_01_Repair_F;
    class Atlas_B_A_Truck_01_Repair_F_OCimport_01 : Atlas_B_A_Truck_01_Repair_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Truck_01_Repair_F_OCimport_02 : Atlas_B_A_Truck_01_Repair_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Truck_01_ammo_F;
    class Atlas_B_A_Truck_01_ammo_F_OCimport_01 : Atlas_B_A_Truck_01_ammo_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Truck_01_ammo_F_OCimport_02 : Atlas_B_A_Truck_01_ammo_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Truck_01_box_F;
    class Atlas_B_A_Truck_01_box_F_OCimport_01 : Atlas_B_A_Truck_01_box_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Truck_01_box_F_OCimport_02 : Atlas_B_A_Truck_01_box_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Truck_01_cargo_F;
    class Atlas_B_A_Truck_01_cargo_F_OCimport_01 : Atlas_B_A_Truck_01_cargo_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Truck_01_cargo_F_OCimport_02 : Atlas_B_A_Truck_01_cargo_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Truck_01_covered_F;
    class Atlas_B_A_Truck_01_covered_F_OCimport_01 : Atlas_B_A_Truck_01_covered_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Truck_01_covered_F_OCimport_02 : Atlas_B_A_Truck_01_covered_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Truck_01_flatbed_F;
    class Atlas_B_A_Truck_01_flatbed_F_OCimport_01 : Atlas_B_A_Truck_01_flatbed_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Truck_01_flatbed_F_OCimport_02 : Atlas_B_A_Truck_01_flatbed_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Truck_01_fuel_F;
    class Atlas_B_A_Truck_01_fuel_F_OCimport_01 : Atlas_B_A_Truck_01_fuel_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Truck_01_fuel_F_OCimport_02 : Atlas_B_A_Truck_01_fuel_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Truck_01_medical_F;
    class Atlas_B_A_Truck_01_medical_F_OCimport_01 : Atlas_B_A_Truck_01_medical_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Truck_01_medical_F_OCimport_02 : Atlas_B_A_Truck_01_medical_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Truck_01_mover_F;
    class Atlas_B_A_Truck_01_mover_F_OCimport_01 : Atlas_B_A_Truck_01_mover_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Truck_01_mover_F_OCimport_02 : Atlas_B_A_Truck_01_mover_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Truck_01_transport_F;
    class Atlas_B_A_Truck_01_transport_F_OCimport_01 : Atlas_B_A_Truck_01_transport_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Truck_01_transport_F_OCimport_02 : Atlas_B_A_Truck_01_transport_F_OCimport_01 { class EventHandlers; };

    class UAV_02_Base_lxWS;
    class UAV_02_Base_lxWS_OCimport_01 : UAV_02_Base_lxWS { scope = 0; class EventHandlers; };
    class UAV_02_Base_lxWS_OCimport_02 : UAV_02_Base_lxWS_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Soldier_sniper_ard_base;
    class Atlas_B_A_Soldier_sniper_ard_base_OCimport_01 : Atlas_B_A_Soldier_sniper_ard_base { scope = 0; class EventHandlers; };
    class Atlas_B_A_Soldier_sniper_ard_base_OCimport_02 : Atlas_B_A_Soldier_sniper_ard_base_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Soldier_Exp_ard_F;
    class Atlas_B_A_Soldier_Exp_ard_F_OCimport_01 : Atlas_B_A_Soldier_Exp_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Soldier_Exp_ard_F_OCimport_02 : Atlas_B_A_Soldier_Exp_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Soldier_UAV_ard_F;
    class Atlas_B_A_Soldier_UAV_ard_F_OCimport_01 : Atlas_B_A_Soldier_UAV_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Soldier_UAV_ard_F_OCimport_02 : Atlas_B_A_Soldier_UAV_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_Support_AMort_ard_F;
    class Atlas_B_A_Support_AMort_ard_F_OCimport_01 : Atlas_B_A_Support_AMort_ard_F { scope = 0; class EventHandlers; };
    class Atlas_B_A_Support_AMort_ard_F_OCimport_02 : Atlas_B_A_Support_AMort_ard_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_A_APC_Wheeled_01_atgm_ard_v2 : Atlas_B_A_APC_Wheeled_01_atgm_v2_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMV-7 Marshall (ATGM)";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_APC_Wheeled_01_cannon_v2_ard_F : Atlas_B_A_APC_Wheeled_01_cannon_v2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMV-7 Marshall";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_CommandoMortar_ard_RF : B_CommandoMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RSG60";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Crew_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard";

        linkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_Holo_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_Holo_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Engineer_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard";

        backpack = "B_Kitbag_aucamo_BAEng_F";

        linkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_GMG_01_A_ard_F : Atlas_B_A_GMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307A";
        side = 1;
        faction = "atlas_blu_a_ard_f";
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

    class Atlas_B_A_GMG_01_ard_F : Atlas_B_A_GMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_GMG_01_high_ard_F : Atlas_B_A_GMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307 (High)";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_HMG_01_A_ard_F : Atlas_B_A_HMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312A";
        side = 1;
        faction = "atlas_blu_a_ard_f";
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

    class Atlas_B_A_HMG_01_ard_F : Atlas_B_A_HMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_HMG_01_high_ard_F : Atlas_B_A_HMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312 (High)";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_HMG_02_ard_F : Atlas_B_A_HMG_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_HMG_02_high_ard_F : Atlas_B_A_HMG_02_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Heli_Attack_03_ard_F : Atlas_B_A_Heli_Attack_03_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-64E Guardian";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Heli_Transport_01_ard_F : Atlas_B_A_Heli_Transport_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-80 Ghost Hawk";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_helipilot_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Helicrew_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_pilot"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        linkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_B_A","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_B_A","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_Holo_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_Holo_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Helipilot_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_pilot"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        linkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_B_A","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_B_A","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"hgun_PDW2000_Holo_F","Throw","Put"};
        respawnWeapons[] = {"hgun_PDW2000_Holo_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_MBT_03_cannon_ard_F : Atlas_B_A_MBT_03_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Luchs AS3";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Crew_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_MRAP_03_ard_F : Atlas_B_A_MRAP_03_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Strider";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_MRAP_03_gmg_ard_F : Atlas_B_A_MRAP_03_gmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Strider GMG";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_MRAP_03_hmg_ard_F : Atlas_B_A_MRAP_03_hmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Strider HMG";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Medic_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "B_AssaultPack_aucamo_BAMedic_F";

        linkedItems[] = {"V_PlateCarrierGL_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrierGL_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_Holo_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_Holo_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Mortar_01_ard_F : Atlas_B_A_Mortar_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_B_A_Mortar_01_ard_F";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Officer_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_casual"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_cbr_F","H_Beret_grn","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_cbr_F","H_Beret_grn","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AUG_C_F","Aegis_hgun_P320_sand_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_AUG_C_F","Aegis_hgun_P320_sand_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Plane_Fighter_05_Stealth_ard_F : Atlas_B_A_Plane_Fighter_05_Stealth_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "F-35F Peregrine (Stealth)";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Plane_Fighter_05_ard_F : Atlas_B_A_Plane_Fighter_05_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "F-35F Peregrine";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_RadioOperator_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard";

        backpack = "B_RadioBag_01_aucamo_F";

        linkedItems[] = {"V_PlateCarrier2_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_Holo_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_Holo_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Recon_AR_ard_F : Atlas_B_A_Soldier_Recon_ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Autorifleman";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard";

        linkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_LMG_03_Hamr_IR_Snds_F","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_LMG_03_Hamr_IR_Snds_F","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put"};

        magazines[] = {"200rnd_556x45_box_red_f","200rnd_556x45_box_red_f","200rnd_556x45_box_red_f","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"200rnd_556x45_box_red_f","200rnd_556x45_box_red_f","200rnd_556x45_box_red_f","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Recon_AT_ard_F : Atlas_B_A_Soldier_Recon_ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (AT)";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "B_AssaultPack_aucamo_ReconAT_F";

        linkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_SPAR_01_blk_Hamr_IR_Snds_F","Atlas_hgun_P320_black_IR_Snds_F","launch_O_titan_short_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_01_blk_Hamr_IR_Snds_F","Atlas_hgun_P320_black_IR_Snds_F","launch_O_titan_short_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Recon_Exp_ard_F : Atlas_B_A_Soldier_Recon_ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Demo Specialist";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard";

        backpack = "B_Kitbag_aucamo_ReconExp_F";

        linkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_SPAR_01_blk_Hamr_IR_Snds_F","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_01_blk_Hamr_IR_Snds_F","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Recon_GL_ard_F : Atlas_B_A_Soldier_Recon_ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Grenadier";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        linkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_SPAR_01_GL_blk_Hamr_IR_Snds_F","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_01_GL_blk_Hamr_IR_Snds_F","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Recon_JTAC_ard_F : Atlas_B_A_Soldier_Recon_ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon JTAC";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard";

        backpack = "B_RadioBag_01_aucamo_F";

        linkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_SPAR_01_blk_Hamr_IR_Snds_F","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put","Laserdesignator_03"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_01_blk_Hamr_IR_Snds_F","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put","Laserdesignator_03"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Recon_LAT_ard_F : Atlas_B_A_Soldier_Recon_ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (LAT)";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard";

        backpack = "B_AssaultPack_aucamo_ReconLAT_F";

        linkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_SPAR_01_blk_Hamr_IR_Snds_F","Atlas_hgun_P320_black_IR_Snds_F","launch_MRAWS_coyote_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_01_blk_Hamr_IR_Snds_F","Atlas_hgun_P320_black_IR_Snds_F","launch_MRAWS_coyote_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Recon_M_ard_F : Atlas_B_A_Soldier_Recon_ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Marksman";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        linkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","G_Bandanna_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","G_Bandanna_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_SR25_MR_blk_AMS_IR_Snds_lxWS","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_SR25_MR_blk_AMS_IR_Snds_lxWS","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Recon_Medic_ard_F : Atlas_B_A_Soldier_Recon_ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Paramedic";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "B_AssaultPack_aucamo_ReconMedic_F";

        linkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_SPAR_01_blk_Hamr_IR_Snds_F","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_01_blk_Hamr_IR_Snds_F","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Recon_TL_ard_F : Atlas_B_A_Soldier_Recon_ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Team Leader";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        linkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_SPAR_01_blk_Hamr_IR_Snds_F","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_01_blk_Hamr_IR_Snds_F","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_tracer_red","30Rnd_556x45_stanag_tracer_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_tracer_red","30Rnd_556x45_stanag_tracer_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Recon_ard_F : Atlas_B_A_Soldier_Recon_ard_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard";

        linkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};
        respawnlinkedItems[] = {"Atlas_V_PlateCarrier2_alt_aucamo_ard","Atlas_H_Helmet_FASTMT_Cover_aucamo_ard_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Aegis_NVG_IVAS_01_grn_F"};

        weapons[] = {"Atlas_arifle_SPAR_01_blk_Hamr_IR_Snds_F","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_01_blk_Hamr_IR_Snds_F","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","30Rnd_556x45_stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Soldier_AAA_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "B_Carryall_aucamo_BAAAA_F";

        linkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_AUG_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Soldier_AAR_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "B_Kitbag_aucamo_BAAAR_F";

        linkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_AUG_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Soldier_AAT_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "B_Carryall_aucamo_BAAAT_F";

        linkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_AUG_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Soldier_AA_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "B_Kitbag_aucamo_BAAA_F";

        linkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_Holo_Pointer_F","launch_B_Titan_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_Holo_Pointer_F","launch_B_Titan_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Soldier_AR_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard";

        linkedItems[] = {"V_PlateCarrier2_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"LMG_03_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"LMG_03_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Soldier_AT_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "B_Kitbag_aucamo_BAAT_F";

        linkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_Holo_Pointer_F","launch_B_Titan_short_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_Holo_Pointer_F","launch_B_Titan_short_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Soldier_A_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "B_Carryall_aucamo_BAAmmo_F";

        linkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Soldier_CBRN_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Specialist";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CBRN_Suit_01_Aucamo_F";

        backpack = "B_CombinationUnitRespirator_01_F";

        linkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_Holo_FL_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_Holo_FL_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Soldier_Exp_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "B_Kitbag_aucamo_BAExp_F";

        linkedItems[] = {"V_PlateCarrierGL_aucamo_ard_F","H_HelmetHBK_aucamo_arid_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrierGL_aucamo_ard_F","H_HelmetHBK_aucamo_arid_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Soldier_GL_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        linkedItems[] = {"V_PlateCarrierGL_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrierGL_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_GL_ACO_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_GL_ACO_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Soldier_LAT_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard";

        backpack = "B_AssaultPack_aucamo_BALAT_F";

        linkedItems[] = {"V_PlateCarrier2_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_Holo_Pointer_F","launch_MRAWS_sand_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_Holo_Pointer_F","launch_MRAWS_sand_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MRAWS_HEAT_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MRAWS_HEAT_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Soldier_PG_ard_F : B_soldier_PG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Para Trooper";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "B_Parachute";

        linkedItems[] = {"V_PlateCarrier2_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Soldier_Repair_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "B_AssaultPack_aucamo_BARepair_F";

        linkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Soldier_SL_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard";

        linkedItems[] = {"V_PlateCarrierGL_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrierGL_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_MRCO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_AUG_MRCO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_Tracer_F","30Rnd_556x45_AUG_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_Tracer_F","30Rnd_556x45_AUG_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Soldier_TL_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_shortsleeve_aucamo_ard";

        linkedItems[] = {"V_PlateCarrierGL_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrierGL_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_GL_MRCO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_AUG_GL_MRCO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_Tracer_F","30Rnd_556x45_AUG_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_Tracer_F","30Rnd_556x45_AUG_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Soldier_UAV_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "Atlas_B_A_UAV_01_backpack_F";

        linkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Soldier_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        linkedItems[] = {"V_PlateCarrier2_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_Holo_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_Holo_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Soldier_lite_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_casual"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        linkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_Booniehat_aucamo_hs_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_Booniehat_aucamo_hs_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AUG_C_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Soldier_unarmed_ard_F : Atlas_B_A_Soldier_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        linkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_headset_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class Atlas_B_A_Static_AA_ard_F : Atlas_B_A_Static_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AA)";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Static_AT_ard_F : Atlas_B_A_Static_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AT)";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Support_AMG_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (HMG/GMG)";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "B_HMG_01_support_grn_F";

        linkedItems[] = {"V_ChestrigF_rgr","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_ChestrigF_rgr","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Support_AMort_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (Mk6)";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "B_Mortar_01_support_grn_F";

        linkedItems[] = {"V_ChestrigF_rgr","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_ChestrigF_rgr","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Support_GMG_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (GMG)";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "B_GMG_01_Weapon_grn_F";

        linkedItems[] = {"V_ChestrigF_rgr","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_ChestrigF_rgr","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Support_MG_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (HMG)";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "B_HMG_01_Weapon_grn_F";

        linkedItems[] = {"V_ChestrigF_rgr","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_ChestrigF_rgr","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Support_Mort_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mk6)";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "B_Mortar_01_Weapon_grn_F";

        linkedItems[] = {"V_ChestrigF_rgr","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_ChestrigF_rgr","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Survivor_ard_F : Atlas_B_A_Soldier_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

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

    class Atlas_B_A_Truck_01_Repair_ard_F : Atlas_B_A_Truck_01_Repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Repair";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Truck_01_ammo_ard_F : Atlas_B_A_Truck_01_ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Ammo";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Truck_01_box_ard_F : Atlas_B_A_Truck_01_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Container";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Truck_01_cargo_ard_F : Atlas_B_A_Truck_01_cargo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Cargo";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Truck_01_covered_ard_F : Atlas_B_A_Truck_01_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport (covered)";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Truck_01_flatbed_ard_F : Atlas_B_A_Truck_01_flatbed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Flatbed";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Truck_01_fuel_ard_F : Atlas_B_A_Truck_01_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Fuel";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Truck_01_medical_ard_F : Atlas_B_A_Truck_01_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Medical";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Truck_01_mover_ard_F : Atlas_B_A_Truck_01_mover_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_Truck_01_transport_ard_F : Atlas_B_A_Truck_01_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport";
        side = 1;
        faction = "atlas_blu_a_ard_f";
        crew = "Atlas_B_A_Soldier_ard_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_UAV_02_ard_lxWS : UAV_02_Base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AP-5 Bustard";
        side = 1;
        faction = "atlas_blu_a_ard_f";
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

    class Atlas_B_A_sniper_ard_F : Atlas_B_A_Soldier_sniper_ard_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_sniper"};

        uniformClass = "Atlas_U_B_A_GhillieSuit_Arid";

        linkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"srifle_LRR_LRPS_F","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_LRR_LRPS_F","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_soldier_M_ard_F : Atlas_B_A_Soldier_ard_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        linkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"Atlas_arifle_SR25_blk_MRCO_LP_BI_F","Aegis_hgun_P320_sand_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_SR25_blk_MRCO_LP_BI_F","Aegis_hgun_P320_sand_F","Throw","Put","Rangefinder"};

        magazines[] = {"Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","Aegis_20Rnd_762x51_Red_SMAG","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_soldier_Mine_ard_F : Atlas_B_A_Soldier_Exp_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mine Specialist";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "B_Carryall_aucamo_Mine";

        linkedItems[] = {"V_PlateCarrierGL_aucamo_ard_F","H_HelmetHBK_aucamo_arid_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrierGL_aucamo_ard_F","H_HelmetHBK_aucamo_arid_chops_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_soldier_UAV_02_ard_lxWS_F : Atlas_B_A_Soldier_UAV_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AP-5)";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "Atlas_B_A_UAV_02_backpack_lxWS";

        linkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_soldier_UAV_06_ard_F : Atlas_B_A_Soldier_UAV_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "Atlas_B_A_UAV_06_backpack_F";

        linkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_soldier_UAV_06_medical_ard_F : Atlas_B_A_Soldier_UAV_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "UAV_06_medical_backpack_base_F";

        linkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_soldier_UGV_02_Demining_ard_F : Atlas_B_A_Soldier_UAV_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1D)";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "UGV_02_Demining_backpack_base_F";

        linkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier1_aucamo_ard_F","H_HelmetHBK_aucamo_arid_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_ACO_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_spotter_ard_F : Atlas_B_A_Soldier_sniper_ard_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_sniper"};

        uniformClass = "Atlas_U_B_A_GhillieSuit_Arid";

        linkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_MRCO_Snds_IR_F","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put","Laserdesignator_03"};
        respawnWeapons[] = {"arifle_AUG_MRCO_Snds_IR_F","Atlas_hgun_P320_black_IR_Snds_F","Throw","Put","Laserdesignator_03"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_A_support_CMort_ard_RF : Atlas_B_A_Support_AMort_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 1;
        faction = "atlas_blu_a_ard_f";

        identityTypes[] = {"LanguageENGB_F","Head_Euro","Head_Enoch","Head_NZ","G_NATO_default"};

        uniformClass = "Atlas_U_B_A_CombatUniform_aucamo_ard";

        backpack = "B_CommandoMortar_weapon_RF";

        linkedItems[] = {"V_ChestrigF_rgr","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_ChestrigF_rgr","H_HelmetHBK_aucamo_arid_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AUG_C_Pointer_F","Aegis_hgun_P320_sand_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","30Rnd_556x45_AUG_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


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
        class Atlas_BLU_A_ard_F {
            class Armored {
                class Atlas_B_A_ard_TankPlatoon {
                    name = "Tank Platoon";
                    side = 1;
                    faction = "Atlas_BLU_A_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_A_MBT_03_cannon_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_A_MBT_03_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_A_MBT_03_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_A_MBT_03_cannon_ard_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class Atlas_B_A_ard_TankSection {
                    name = "Tank Section";
                    side = 1;
                    faction = "Atlas_BLU_A_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_A_MBT_03_cannon_ard_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_A_MBT_03_cannon_ard_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class Atlas_B_A_ard_InfSentry {
                    name = "Sentry";
                    side = 1;
                    faction = "Atlas_BLU_A_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_A_soldier_GL_ard_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_A_soldier_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Atlas_B_A_ard_InfSquad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "Atlas_BLU_A_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_A_soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_A_RadioOperator_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_A_soldier_LAT_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_A_soldier_M_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_A_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_A_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_A_soldier_A_ard_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_A_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Atlas_B_A_ard_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 1;
                    faction = "Atlas_BLU_A_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_A_soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_A_soldier_AR_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_A_soldier_GL_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_A_soldier_M_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_A_soldier_AT_ard_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_A_soldier_ard_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_A_soldier_A_ard_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_A_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Atlas_B_A_ard_InfTeam {
                    name = "Fire Team";
                    side = 1;
                    faction = "Atlas_BLU_A_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_A_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_A_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_A_soldier_GL_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_A_soldier_LAT_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Atlas_B_A_ard_InfTeam_AA {
                    name = "Air-defense Team";
                    side = 1;
                    faction = "Atlas_BLU_A_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_A_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_A_soldier_AA_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_A_soldier_AA_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_A_soldier_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Atlas_B_A_ard_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 1;
                    faction = "Atlas_BLU_A_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_A_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_A_soldier_AT_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_A_soldier_AT_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_A_soldier_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class Atlas_B_A_ard_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "Atlas_BLU_A_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_A_APC_Wheeled_01_atgm_ard_v2";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_A_soldier_SL_ard_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_A_RadioOperator_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_A_soldier_LAT_ard_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_A_soldier_M_ard_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_A_soldier_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_A_soldier_AR_ard_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_A_soldier_A_ard_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_B_A_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized {
                class Atlas_B_A_ard_MotInf_AA {
                    name = "Motorized Air-defense Team";
                    side = 1;
                    faction = "Atlas_BLU_A_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_A_MRAP_03_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_A_soldier_AA_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_A_soldier_AA_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                };
                class Atlas_B_A_ard_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 1;
                    faction = "Atlas_BLU_A_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_A_MRAP_03_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_A_soldier_AT_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_A_soldier_AT_ard_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                };
                class Atlas_B_A_ard_MotInf_Team {
                    name = "Motorized Team";
                    side = 1;
                    faction = "Atlas_BLU_A_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_A_MRAP_03_gmg_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_A_soldier_LAT_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
            };
            class SpecOps {
                class Atlas_B_A_ard_ReconPatrol {
                    name = "Recon Patrol";
                    side = 1;
                    faction = "Atlas_BLU_A_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_A_recon_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_A_recon_M_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_A_recon_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_A_recon_ard_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Atlas_B_A_ard_ReconSentry {
                    name = "Recon Sentry";
                    side = 1;
                    faction = "Atlas_BLU_A_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_A_recon_M_ard_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_A_recon_ard_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Atlas_B_A_ard_ReconTeam {
                    name = "Recon Team";
                    side = 1;
                    faction = "Atlas_BLU_A_ard_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_A_recon_TL_ard_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_A_recon_M_ard_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_A_recon_medic_ard_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_A_recon_LAT_ard_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_A_recon_JTAC_ard_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_A_recon_exp_ard_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
            };
        };
    };
};
