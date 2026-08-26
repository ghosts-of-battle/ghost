//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class Atlas_BLU_K_F {
        displayName = "Karzeghistan";
        side = 1;
        priority = 3;
        icon = "\A3_Atlas\Data_F_Atlas\FactionIcons\CfgFactionClasses_BLU_k_CA.paa";
        flag = "\A3_Atlas\Data_F_Atlas\Flags\flag_Karzeghistan_CO.paa";
    };
};

class CfgVehicles {

    class I_APC_Wheeled_03_cannon_F;
    class I_APC_Wheeled_03_cannon_F_OCimport_01 : I_APC_Wheeled_03_cannon_F { scope = 0; class EventHandlers; };
    class I_APC_Wheeled_03_cannon_F_OCimport_02 : I_APC_Wheeled_03_cannon_F_OCimport_01 { class EventHandlers; };

    class B_D_CTRG_CommandoMortar_RF;
    class B_D_CTRG_CommandoMortar_RF_OCimport_01 : B_D_CTRG_CommandoMortar_RF { scope = 0; class EventHandlers; };
    class B_D_CTRG_CommandoMortar_RF_OCimport_02 : B_D_CTRG_CommandoMortar_RF_OCimport_01 { class EventHandlers; };

    class Atlas_B_K_Soldier_base_F;
    class Atlas_B_K_Soldier_base_F_OCimport_01 : Atlas_B_K_Soldier_base_F { scope = 0; class EventHandlers; };
    class Atlas_B_K_Soldier_base_F_OCimport_02 : Atlas_B_K_Soldier_base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_base_F;
    class HMG_02_base_F_OCimport_01 : HMG_02_base_F { scope = 0; class EventHandlers; };
    class HMG_02_base_F_OCimport_02 : HMG_02_base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_high_base_F;
    class HMG_02_high_base_F_OCimport_01 : HMG_02_high_base_F { scope = 0; class EventHandlers; };
    class HMG_02_high_base_F_OCimport_02 : HMG_02_high_base_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_K_Soldier_AR_F;
    class Atlas_B_K_Soldier_AR_F_OCimport_01 : Atlas_B_K_Soldier_AR_F { scope = 0; class EventHandlers; };
    class Atlas_B_K_Soldier_AR_F_OCimport_02 : Atlas_B_K_Soldier_AR_F_OCimport_01 { class EventHandlers; };

    class Heli_EC_03_base_RF;
    class Heli_EC_03_base_RF_OCimport_01 : Heli_EC_03_base_RF { scope = 0; class EventHandlers; };
    class Heli_EC_03_base_RF_OCimport_02 : Heli_EC_03_base_RF_OCimport_01 { class EventHandlers; };

    class Heli_EC_04_military_base_RF;
    class Heli_EC_04_military_base_RF_OCimport_01 : Heli_EC_04_military_base_RF { scope = 0; class EventHandlers; };
    class Heli_EC_04_military_base_RF_OCimport_02 : Heli_EC_04_military_base_RF_OCimport_01 { class EventHandlers; };

    class Heli_light_03_dynamicLoadout_base_F;
    class Heli_light_03_dynamicLoadout_base_F_OCimport_01 : Heli_light_03_dynamicLoadout_base_F { scope = 0; class EventHandlers; };
    class Heli_light_03_dynamicLoadout_base_F_OCimport_02 : Heli_light_03_dynamicLoadout_base_F_OCimport_01 { class EventHandlers; };

    class B_Heli_light_03_dynamicLoadout_RF;
    class B_Heli_light_03_dynamicLoadout_RF_OCimport_01 : B_Heli_light_03_dynamicLoadout_RF { scope = 0; class EventHandlers; };
    class B_Heli_light_03_dynamicLoadout_RF_OCimport_02 : B_Heli_light_03_dynamicLoadout_RF_OCimport_01 { class EventHandlers; };

    class Heli_light_03_unarmed_base_F;
    class Heli_light_03_unarmed_base_F_OCimport_01 : Heli_light_03_unarmed_base_F { scope = 0; class EventHandlers; };
    class Heli_light_03_unarmed_base_F_OCimport_02 : Heli_light_03_unarmed_base_F_OCimport_01 { class EventHandlers; };

    class B_Heli_light_03_unarmed_RF;
    class B_Heli_light_03_unarmed_RF_OCimport_01 : B_Heli_light_03_unarmed_RF { scope = 0; class EventHandlers; };
    class B_Heli_light_03_unarmed_RF_OCimport_02 : B_Heli_light_03_unarmed_RF_OCimport_01 { class EventHandlers; };

    class Atlas_B_K_MBT_03_base_F;
    class Atlas_B_K_MBT_03_base_F_OCimport_01 : Atlas_B_K_MBT_03_base_F { scope = 0; class EventHandlers; };
    class Atlas_B_K_MBT_03_base_F_OCimport_02 : Atlas_B_K_MBT_03_base_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Mortar_01_F;
    class Atlas_B_G_Mortar_01_F_OCimport_01 : Atlas_B_G_Mortar_01_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Mortar_01_F_OCimport_02 : Atlas_B_G_Mortar_01_F_OCimport_01 { class EventHandlers; };

    class I_E_Offroad_01_F;
    class I_E_Offroad_01_F_OCimport_01 : I_E_Offroad_01_F { scope = 0; class EventHandlers; };
    class I_E_Offroad_01_F_OCimport_02 : I_E_Offroad_01_F_OCimport_01 { class EventHandlers; };

    class I_E_Offroad_01_armed_F;
    class I_E_Offroad_01_armed_F_OCimport_01 : I_E_Offroad_01_armed_F { scope = 0; class EventHandlers; };
    class I_E_Offroad_01_armed_F_OCimport_02 : I_E_Offroad_01_armed_F_OCimport_01 { class EventHandlers; };

    class I_E_Offroad_01_comms_F;
    class I_E_Offroad_01_comms_F_OCimport_01 : I_E_Offroad_01_comms_F { scope = 0; class EventHandlers; };
    class I_E_Offroad_01_comms_F_OCimport_02 : I_E_Offroad_01_comms_F_OCimport_01 { class EventHandlers; };

    class I_E_Offroad_01_covered_F;
    class I_E_Offroad_01_covered_F_OCimport_01 : I_E_Offroad_01_covered_F { scope = 0; class EventHandlers; };
    class I_E_Offroad_01_covered_F_OCimport_02 : I_E_Offroad_01_covered_F_OCimport_01 { class EventHandlers; };

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

    class B_Plane_Fighter_01_F;
    class B_Plane_Fighter_01_F_OCimport_01 : B_Plane_Fighter_01_F { scope = 0; class EventHandlers; };
    class B_Plane_Fighter_01_F_OCimport_02 : B_Plane_Fighter_01_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_K_Soldier_F;
    class Atlas_B_K_Soldier_F_OCimport_01 : Atlas_B_K_Soldier_F { scope = 0; class EventHandlers; };
    class Atlas_B_K_Soldier_F_OCimport_02 : Atlas_B_K_Soldier_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Static_AA_F;
    class Atlas_B_G_Static_AA_F_OCimport_01 : Atlas_B_G_Static_AA_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Static_AA_F_OCimport_02 : Atlas_B_G_Static_AA_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_G_Static_AT_F;
    class Atlas_B_G_Static_AT_F_OCimport_01 : Atlas_B_G_Static_AT_F { scope = 0; class EventHandlers; };
    class Atlas_B_G_Static_AT_F_OCimport_02 : Atlas_B_G_Static_AT_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_Repair_F;
    class B_Truck_01_Repair_F_OCimport_01 : B_Truck_01_Repair_F { scope = 0; class EventHandlers; };
    class B_Truck_01_Repair_F_OCimport_02 : B_Truck_01_Repair_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_ammo_F;
    class B_Truck_01_ammo_F_OCimport_01 : B_Truck_01_ammo_F { scope = 0; class EventHandlers; };
    class B_Truck_01_ammo_F_OCimport_02 : B_Truck_01_ammo_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_box_F;
    class B_Truck_01_box_F_OCimport_01 : B_Truck_01_box_F { scope = 0; class EventHandlers; };
    class B_Truck_01_box_F_OCimport_02 : B_Truck_01_box_F_OCimport_01 { class EventHandlers; };

    class Truck_01_cargo_base_F;
    class Truck_01_cargo_base_F_OCimport_01 : Truck_01_cargo_base_F { scope = 0; class EventHandlers; };
    class Truck_01_cargo_base_F_OCimport_02 : Truck_01_cargo_base_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_covered_F;
    class B_Truck_01_covered_F_OCimport_01 : B_Truck_01_covered_F { scope = 0; class EventHandlers; };
    class B_Truck_01_covered_F_OCimport_02 : B_Truck_01_covered_F_OCimport_01 { class EventHandlers; };

    class Truck_01_flatbed_base_F;
    class Truck_01_flatbed_base_F_OCimport_01 : Truck_01_flatbed_base_F { scope = 0; class EventHandlers; };
    class Truck_01_flatbed_base_F_OCimport_02 : Truck_01_flatbed_base_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_fuel_F;
    class B_Truck_01_fuel_F_OCimport_01 : B_Truck_01_fuel_F { scope = 0; class EventHandlers; };
    class B_Truck_01_fuel_F_OCimport_02 : B_Truck_01_fuel_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_medical_F;
    class B_Truck_01_medical_F_OCimport_01 : B_Truck_01_medical_F { scope = 0; class EventHandlers; };
    class B_Truck_01_medical_F_OCimport_02 : B_Truck_01_medical_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_mover_F;
    class B_Truck_01_mover_F_OCimport_01 : B_Truck_01_mover_F { scope = 0; class EventHandlers; };
    class B_Truck_01_mover_F_OCimport_02 : B_Truck_01_mover_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_transport_F;
    class B_Truck_01_transport_F_OCimport_01 : B_Truck_01_transport_F { scope = 0; class EventHandlers; };
    class B_Truck_01_transport_F_OCimport_02 : B_Truck_01_transport_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_K_APC_Wheeled_03_cannon_F : I_APC_Wheeled_03_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pandur II";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_CommandoMortar_RF : B_D_CTRG_CommandoMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RSG60";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Crew_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform_shortsleeve";

        linkedItems[] = {"V_TacVest_khk","Atlas_H_FieldCap_hs_kzg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","Atlas_H_FieldCap_hs_kzg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_03C_TR_Black","Aegis_hgun_P320_black_F","Throw","Put"};
        respawnWeapons[] = {"SMG_03C_TR_Black","Aegis_hgun_P320_black_F","Throw","Put"};

        magazines[] = {"50Rnd_570x28_smg_03","50Rnd_570x28_smg_03","50Rnd_570x28_smg_03","50Rnd_570x28_smg_03","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"50Rnd_570x28_smg_03","50Rnd_570x28_smg_03","50Rnd_570x28_smg_03","50Rnd_570x28_smg_03","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Engineer_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform";

        backpack = "B_Carryall_KZG_Eng_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Heavy_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","G_Combat","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Heavy_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","G_Combat","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_HMG_02_ard_F : HMG_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_HMG_02_high_ard_F : HMG_02_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_HeavyGunner_F : Atlas_B_K_Soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform";

        backpack = "B_AssaultPack_KZG_HG_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_FieldCap_hs_kzg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_FieldCap_hs_kzg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_MMG_FNMAG_ACOG_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_MMG_FNMAG_ACOG_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};

        magazines[] = {"Aegis_200Rnd_762x51_MAG_Red_F","Aegis_200Rnd_762x51_MAG_Red_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"Aegis_200Rnd_762x51_MAG_Red_F","Aegis_200Rnd_762x51_MAG_Red_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Heli_EC_03_RF : Heli_EC_03_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_B_K_Heli_EC_03_RF";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Heli_EC_04_military_RF : Heli_EC_04_military_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_B_K_Heli_EC_04_military_RF";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Heli_light_03_dynamicLoadout_F : Heli_light_03_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_B_K_Heli_light_03_dynamicLoadout_F";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Heli_light_03_dynamicLoadout_RF : B_Heli_light_03_dynamicLoadout_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AW159 Wildcat ASW";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Heli_light_03_unarmed_F : Heli_light_03_unarmed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_B_K_Heli_light_03_unarmed_F";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Heli_light_03_unarmed_RF : B_Heli_light_03_unarmed_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AW159 Wildcat ASW (Unarmed)";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Helipilot_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_HeliPilotCoveralls";

        linkedItems[] = {"V_TacVest_khk","H_PilotHelmetHeli_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_PilotHelmetHeli_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"SMG_03C_TR_Black","Aegis_hgun_P320_black_F","Throw","Put"};
        respawnWeapons[] = {"SMG_03C_TR_Black","Aegis_hgun_P320_black_F","Throw","Put"};

        magazines[] = {"50Rnd_570x28_smg_03","50Rnd_570x28_smg_03","50Rnd_570x28_smg_03","50Rnd_570x28_smg_03","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue"};
        respawnMagazines[] = {"50Rnd_570x28_smg_03","50Rnd_570x28_smg_03","50Rnd_570x28_smg_03","50Rnd_570x28_smg_03","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_MBT_03_cannon_F : Atlas_B_K_MBT_03_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Luchs 3A5";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Medic_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform";

        backpack = "B_AssaultPack_KZG_Medic_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_CQB_khk_F","Atlas_H_FieldCap_hs_kzg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_CQB_khk_F","Atlas_H_FieldCap_hs_kzg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Mortar_01_F : Atlas_B_G_Mortar_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_B_K_Mortar_01_F";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Officer_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_khk_F","Atlas_H_Milcap_nohs_kzg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_khk_F","Atlas_H_Milcap_nohs_kzg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SPAR_01_blk_F","Aegis_hgun_P320_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_F","Aegis_hgun_P320_black_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Offroad_01_F : I_E_Offroad_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Offroad_01_armed_F : I_E_Offroad_01_armed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (HMG)";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Offroad_01_comms_F : I_E_Offroad_01_comms_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Comms)";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Offroad_01_covered_F : I_E_Offroad_01_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Covered)";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Pickup_AT_F : Aegis_Pickup_01_AT_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_B_K_Pickup_AT_F";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Pickup_Comms_F : Pickup_comms_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Comms)";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Pickup_F : Pickup_01_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Pickup_HMG_F : Pickup_01_hmg_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (HMG)";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Pickup_aat_F : Pickup_01_aat_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (AA)";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Pilot_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter Pilot";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_HeliPilotCoveralls";

        backpack = "B_Parachute";

        linkedItems[] = {"V_TacVest_khk","H_PilotHelmetFighter_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_PilotHelmetFighter_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_hgun_P320_black_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_hgun_P320_black_F","Throw","Put"};

        magazines[] = {"17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellBlue","SmokeShellBlue"};
        respawnMagazines[] = {"17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellBlue","SmokeShellBlue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Plane_Fighter_01_F : B_Plane_Fighter_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "F/A-181 Black Wasp II";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_RadioOperator_F : Atlas_B_K_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform";

        backpack = "B_RadioBag_01_kzg_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_FieldCap_hs_kzg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_FieldCap_hs_kzg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Soldier_AR_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform_shortsleeve";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_CQB_khk_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_CQB_khk_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_LMG_03_Holo_SFL_F","Aegis_hgun_P320_black_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_LMG_03_Holo_SFL_F","Aegis_hgun_P320_black_F","Throw","Put"};

        magazines[] = {"200rnd_556x45_box_red_f","200rnd_556x45_box_red_f","200rnd_556x45_box_red_f","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"200rnd_556x45_box_red_f","200rnd_556x45_box_red_f","200rnd_556x45_box_red_f","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Soldier_A_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform_shortsleeve";

        backpack = "B_PatrolBackpack_KZG_Ammo_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_FieldCap_hs_kzg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_FieldCap_hs_kzg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Soldier_CBRN_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Specialist";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CBRN_Suit_01_F";

        backpack = "B_CombinationUnitRespirator_01_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_tac_khk_F","Atlas_H_PASGT_Cover_alt_KZG_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_tac_khk_F","Atlas_H_PASGT_Cover_alt_KZG_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio"};

        weapons[] = {"Atlas_arifle_SPAR_01_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_01_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Soldier_CQ_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_CQB_khk_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_CQB_khk_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"sgun_M4_F","Aegis_hgun_P320_black_F","Throw","Put"};
        respawnWeapons[] = {"sgun_M4_F","Aegis_hgun_P320_black_F","Throw","Put"};

        magazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Soldier_Exp_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform";

        backpack = "B_Carryall_KZG_Exp_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Heavy_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Heavy_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Soldier_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_ACOG_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_ACOG_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Soldier_GL_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform";

        linkedItems[] = {"V_CarrierRigKBT_01_Heavy_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Heavy_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SPAR_01_GL_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_01_GL_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Soldier_LAT_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform";

        backpack = "B_AssaultPack_KZG_AT_F";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_CQB_khk_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_CQB_khk_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Atlas_launch_Pzf3_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Atlas_launch_Pzf3_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Atlas_DM12_HEAT_F","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Atlas_DM12_HEAT_F","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Soldier_M_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform_shortsleeve";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_FieldCap_hs_kzg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_FieldCap_hs_kzg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SPAR_03_blk_ACOG_FL_F","Aegis_hgun_P320_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_03_blk_ACOG_FL_F","Aegis_hgun_P320_black_F","Throw","Put","Binocular"};

        magazines[] = {"20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Soldier_SL_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_CQB_khk_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_CQB_khk_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_ACOG_FL_F","Aegis_hgun_P320_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_ACOG_FL_F","Aegis_hgun_P320_black_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellBlue","SmokeShellBlue"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellBlue","SmokeShellBlue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Soldier_TL_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform";

        linkedItems[] = {"V_CarrierRigKBT_01_Heavy_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Heavy_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SPAR_01_GL_blk_ACOG_FL_F","Aegis_hgun_P320_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_01_GL_blk_ACOG_FL_F","Aegis_hgun_P320_black_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Soldier_UAV_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform_shortsleeve";

        backpack = "B_UAV_01_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","B_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Soldier_lite_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform";

        linkedItems[] = {"V_CarrierRigKBT_01_Khaki_F","Atlas_H_Milcap_nohs_kzg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Khaki_F","Atlas_H_Milcap_nohs_kzg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_SPAR_02_inf_blk_F","Aegis_hgun_P320_black_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_SPAR_02_inf_blk_F","Aegis_hgun_P320_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Static_AA_F : Atlas_B_G_Static_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AA)";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Static_AT_F : Atlas_B_G_Static_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AT)";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Truck_01_Repair_F : B_Truck_01_Repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Repair";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Truck_01_ammo_F : B_Truck_01_ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Ammo";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Truck_01_box_F : B_Truck_01_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Container";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Truck_01_cargo_F : Truck_01_cargo_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Cargo";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Truck_01_covered_F : B_Truck_01_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport (covered)";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Truck_01_flatbed_F : Truck_01_flatbed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Flatbed";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Truck_01_fuel_F : B_Truck_01_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Fuel";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Truck_01_medical_F : B_Truck_01_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Medical";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Truck_01_mover_F : B_Truck_01_mover_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_Truck_01_transport_F : B_Truck_01_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport";
        side = 1;
        faction = "atlas_blu_k_f";
        crew = "Atlas_B_K_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_soldier_AAA_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform_shortsleeve";

        backpack = "B_Carryall_KZG_AAA_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_soldier_AAR_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform";

        backpack = "B_AssaultPack_KZG_AAR_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_soldier_AA_F : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","launch_B_Titan_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","launch_B_Titan_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_support_CMort_RF : Atlas_B_K_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform";

        backpack = "B_D_CTRG_CommandoMortar_weapon_RF";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_FieldCap_hs_kzg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_FieldCap_hs_kzg","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_02_Inf_blk_Holo_FL_F","Aegis_hgun_P320_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_K_unarmed_F : Atlas_B_K_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 1;
        faction = "atlas_blu_k_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_K_CombatUniform";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Khaki_F","Atlas_H_PASGT_Cover_alt_KZG_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

};

class CfgGroups {
    class West {
        class Atlas_BLU_K_F {
            class Armored {
                class Atlas_B_K_TankPlatoon {
                    name = "Tank Platoon";
                    side = 1;
                    faction = "Atlas_BLU_K_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_K_MBT_03_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_K_MBT_03_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_K_MBT_03_cannon_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_K_MBT_03_cannon_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class Atlas_B_K_TankSection {
                    name = "Tank Section";
                    side = 1;
                    faction = "Atlas_BLU_K_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_K_MBT_03_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_K_MBT_03_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class Atlas_B_K_InfSentry {
                    name = "Sentry";
                    side = 1;
                    faction = "Atlas_BLU_K_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_K_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_K_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Atlas_B_K_InfSquad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "Atlas_BLU_K_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_K_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_K_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_K_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_K_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_K_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_K_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_K_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_K_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Atlas_B_K_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 1;
                    faction = "Atlas_BLU_K_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_K_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_K_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_K_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_K_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_K_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_K_HeavyGunner_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_K_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_K_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Atlas_B_K_InfTeam {
                    name = "Fire Team";
                    side = 1;
                    faction = "Atlas_BLU_K_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_K_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_K_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_K_soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_K_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class Atlas_B_K_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "Atlas_BLU_K_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_K_APC_Wheeled_03_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_K_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_K_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_K_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_K_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_K_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_K_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_K_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_B_K_medic_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class I_AR_MechInf_AT {
                    name = "Mechanized Anti-armor Squad";
                    side = 1;
                    faction = "Atlas_BLU_K_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_K_APC_Wheeled_03_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_K_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_K_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_K_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_K_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_K_soldier_LAT_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_K_soldier_A_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_K_soldier_AAR_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_B_K_soldier_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class I_AR_MechInf_Support {
                    name = "Mechanized Support Squad";
                    side = 1;
                    faction = "Atlas_BLU_K_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_K_APC_Wheeled_03_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_K_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_K_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_K_soldier_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_K_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_K_medic_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_K_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_K_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_B_K_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized {
                class Atlas_B_K_MotInf_AA {
                    name = "Motorized Air-defense Team";
                    side = 1;
                    faction = "Atlas_BLU_K_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_K_Pickup_aat_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_K_Soldier_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_K_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class Atlas_B_K_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 1;
                    faction = "Atlas_BLU_K_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_K_Offroad_01_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_A_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_A_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                };
                class Atlas_B_K_MotInf_MortTeam {
                    name = "Motorized Mortar Team";
                    side = 1;
                    faction = "Atlas_BLU_K_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_K_Pickup_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_K_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_K_Support_CMort_RF";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_K_Support_CMort_RF";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Atlas_B_K_MotInf_Reinforcements {
                    name = "Motorized Reinforcements";
                    side = 1;
                    faction = "Atlas_BLU_K_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_K_Truck_01_transport_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_K_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_K_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_K_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_K_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_K_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_K_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_K_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_B_K_medic_F";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "Atlas_B_K_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "Atlas_B_K_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "Atlas_B_K_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "Atlas_B_K_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit13 {
                        vehicle = "Atlas_B_K_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit14 {
                        vehicle = "Atlas_B_K_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit15 {
                        vehicle = "Atlas_B_K_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit16 {
                        vehicle = "Atlas_B_K_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };
                };
                class Atlas_B_K_MotInf_Team {
                    name = "Motorized Team";
                    side = 1;
                    faction = "Atlas_BLU_K_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_K_Offroad_01_armed_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_A_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
            };
            class Support {
                class Atlas_B_K_Support_CLS {
                    name = "Support Team (CLS)";
                    side = 1;
                    faction = "Atlas_BLU_K_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_K_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_K_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_K_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_K_medic_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Atlas_B_K_Support_ENG {
                    name = "Support Team (Engineer)";
                    side = 1;
                    faction = "Atlas_BLU_K_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_K_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_K_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_K_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_K_soldier_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Atlas_B_K_Support_EOD {
                    name = "Support Team (EOD)";
                    side = 1;
                    faction = "Atlas_BLU_K_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_K_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_K_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_K_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_K_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Atlas_B_K_Support_Mort {
                    name = "Mortar Team";
                    side = 1;
                    faction = "Atlas_BLU_K_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mortar.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_K_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_K_Support_CMort_RF";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_K_Support_CMort_RF";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
        };
    };
};
