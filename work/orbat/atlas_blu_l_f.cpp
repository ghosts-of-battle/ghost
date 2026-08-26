//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class Atlas_BLU_L_F {
        displayName = "Legionnaires";
        side = 1;
        priority = 3;
        icon = "\A3_Atlas\Data_F_Atlas\FactionIcons\CfgFactionClasses_BLU_L_CA.paa";
        flag = "\A3_Atlas\Data_F_Atlas\Flags\flag_France_CO.paa";
    };
};

class CfgVehicles {

    class AFV_Wheeled_01_base_F;
    class AFV_Wheeled_01_base_F_OCimport_01 : AFV_Wheeled_01_base_F { scope = 0; class EventHandlers; };
    class AFV_Wheeled_01_base_F_OCimport_02 : AFV_Wheeled_01_base_F_OCimport_01 { class EventHandlers; };

    class AFV_Wheeled_01_up_base_F;
    class AFV_Wheeled_01_up_base_F_OCimport_01 : AFV_Wheeled_01_up_base_F { scope = 0; class EventHandlers; };
    class AFV_Wheeled_01_up_base_F_OCimport_02 : AFV_Wheeled_01_up_base_F_OCimport_01 { class EventHandlers; };

    class B_CommandoMortar_RF;
    class B_CommandoMortar_RF_OCimport_01 : B_CommandoMortar_RF { scope = 0; class EventHandlers; };
    class B_CommandoMortar_RF_OCimport_02 : B_CommandoMortar_RF_OCimport_01 { class EventHandlers; };

    class Atlas_B_L_Soldier_base_F;
    class Atlas_B_L_Soldier_base_F_OCimport_01 : Atlas_B_L_Soldier_base_F { scope = 0; class EventHandlers; };
    class Atlas_B_L_Soldier_base_F_OCimport_02 : Atlas_B_L_Soldier_base_F_OCimport_01 { class EventHandlers; };

    class B_GMG_01_A_F;
    class B_GMG_01_A_F_OCimport_01 : B_GMG_01_A_F { scope = 0; class EventHandlers; };
    class B_GMG_01_A_F_OCimport_02 : B_GMG_01_A_F_OCimport_01 { class EventHandlers; };

    class B_GMG_01_F;
    class B_GMG_01_F_OCimport_01 : B_GMG_01_F { scope = 0; class EventHandlers; };
    class B_GMG_01_F_OCimport_02 : B_GMG_01_F_OCimport_01 { class EventHandlers; };

    class B_GMG_01_high_F;
    class B_GMG_01_high_F_OCimport_01 : B_GMG_01_high_F { scope = 0; class EventHandlers; };
    class B_GMG_01_high_F_OCimport_02 : B_GMG_01_high_F_OCimport_01 { class EventHandlers; };

    class B_HMG_01_A_F;
    class B_HMG_01_A_F_OCimport_01 : B_HMG_01_A_F { scope = 0; class EventHandlers; };
    class B_HMG_01_A_F_OCimport_02 : B_HMG_01_A_F_OCimport_01 { class EventHandlers; };

    class B_HMG_01_F;
    class B_HMG_01_F_OCimport_01 : B_HMG_01_F { scope = 0; class EventHandlers; };
    class B_HMG_01_F_OCimport_02 : B_HMG_01_F_OCimport_01 { class EventHandlers; };

    class B_HMG_01_high_F;
    class B_HMG_01_high_F_OCimport_01 : B_HMG_01_high_F { scope = 0; class EventHandlers; };
    class B_HMG_01_high_F_OCimport_02 : B_HMG_01_high_F_OCimport_01 { class EventHandlers; };

    class HMG_02_base_F;
    class HMG_02_base_F_OCimport_01 : HMG_02_base_F { scope = 0; class EventHandlers; };
    class HMG_02_base_F_OCimport_02 : HMG_02_base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_high_base_F;
    class HMG_02_high_base_F_OCimport_01 : HMG_02_high_base_F { scope = 0; class EventHandlers; };
    class HMG_02_high_base_F_OCimport_02 : HMG_02_high_base_F_OCimport_01 { class EventHandlers; };

    class Heli_EC_03_base_RF;
    class Heli_EC_03_base_RF_OCimport_01 : Heli_EC_03_base_RF { scope = 0; class EventHandlers; };
    class Heli_EC_03_base_RF_OCimport_02 : Heli_EC_03_base_RF_OCimport_01 { class EventHandlers; };

    class Heli_EC_04_military_base_RF;
    class Heli_EC_04_military_base_RF_OCimport_01 : Heli_EC_04_military_base_RF { scope = 0; class EventHandlers; };
    class Heli_EC_04_military_base_RF_OCimport_02 : Heli_EC_04_military_base_RF_OCimport_01 { class EventHandlers; };

    class Heli_light_03_dynamicLoadout_base_F;
    class Heli_light_03_dynamicLoadout_base_F_OCimport_01 : Heli_light_03_dynamicLoadout_base_F { scope = 0; class EventHandlers; };
    class Heli_light_03_dynamicLoadout_base_F_OCimport_02 : Heli_light_03_dynamicLoadout_base_F_OCimport_01 { class EventHandlers; };

    class Heli_light_03_unarmed_base_F;
    class Heli_light_03_unarmed_base_F_OCimport_01 : Heli_light_03_unarmed_base_F { scope = 0; class EventHandlers; };
    class Heli_light_03_unarmed_base_F_OCimport_02 : Heli_light_03_unarmed_base_F_OCimport_01 { class EventHandlers; };

    class LSV_01_AT_base_F;
    class LSV_01_AT_base_F_OCimport_01 : LSV_01_AT_base_F { scope = 0; class EventHandlers; };
    class LSV_01_AT_base_F_OCimport_02 : LSV_01_AT_base_F_OCimport_01 { class EventHandlers; };

    class LSV_01_armed_base_F;
    class LSV_01_armed_base_F_OCimport_01 : LSV_01_armed_base_F { scope = 0; class EventHandlers; };
    class LSV_01_armed_base_F_OCimport_02 : LSV_01_armed_base_F_OCimport_01 { class EventHandlers; };

    class LSV_01_light_base_F;
    class LSV_01_light_base_F_OCimport_01 : LSV_01_light_base_F { scope = 0; class EventHandlers; };
    class LSV_01_light_base_F_OCimport_02 : LSV_01_light_base_F_OCimport_01 { class EventHandlers; };

    class LSV_01_unarmed_base_F;
    class LSV_01_unarmed_base_F_OCimport_01 : LSV_01_unarmed_base_F { scope = 0; class EventHandlers; };
    class LSV_01_unarmed_base_F_OCimport_02 : LSV_01_unarmed_base_F_OCimport_01 { class EventHandlers; };

    class MRAP_03_base_F;
    class MRAP_03_base_F_OCimport_01 : MRAP_03_base_F { scope = 0; class EventHandlers; };
    class MRAP_03_base_F_OCimport_02 : MRAP_03_base_F_OCimport_01 { class EventHandlers; };

    class MRAP_03_hmg_base_F;
    class MRAP_03_hmg_base_F_OCimport_01 : MRAP_03_hmg_base_F { scope = 0; class EventHandlers; };
    class MRAP_03_hmg_base_F_OCimport_02 : MRAP_03_hmg_base_F_OCimport_01 { class EventHandlers; };

    class MRAP_03_gmg_base_F;
    class MRAP_03_gmg_base_F_OCimport_01 : MRAP_03_gmg_base_F { scope = 0; class EventHandlers; };
    class MRAP_03_gmg_base_F_OCimport_02 : MRAP_03_gmg_base_F_OCimport_01 { class EventHandlers; };

    class B_Mortar_01_F;
    class B_Mortar_01_F_OCimport_01 : B_Mortar_01_F { scope = 0; class EventHandlers; };
    class B_Mortar_01_F_OCimport_02 : B_Mortar_01_F_OCimport_01 { class EventHandlers; };

    class Quadbike_01_base_F;
    class Quadbike_01_base_F_OCimport_01 : Quadbike_01_base_F { scope = 0; class EventHandlers; };
    class Quadbike_01_base_F_OCimport_02 : Quadbike_01_base_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_L_Soldier_F;
    class Atlas_B_L_Soldier_F_OCimport_01 : Atlas_B_L_Soldier_F { scope = 0; class EventHandlers; };
    class Atlas_B_L_Soldier_F_OCimport_02 : Atlas_B_L_Soldier_F_OCimport_01 { class EventHandlers; };

    class B_static_AA_F;
    class B_static_AA_F_OCimport_01 : B_static_AA_F { scope = 0; class EventHandlers; };
    class B_static_AA_F_OCimport_02 : B_static_AA_F_OCimport_01 { class EventHandlers; };

    class B_static_AT_F;
    class B_static_AT_F_OCimport_01 : B_static_AT_F { scope = 0; class EventHandlers; };
    class B_static_AT_F_OCimport_02 : B_static_AT_F_OCimport_01 { class EventHandlers; };

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

    class UAV_01_base_F;
    class UAV_01_base_F_OCimport_01 : UAV_01_base_F { scope = 0; class EventHandlers; };
    class UAV_01_base_F_OCimport_02 : UAV_01_base_F_OCimport_01 { class EventHandlers; };

    class Aegis_UAV_07_base_F;
    class Aegis_UAV_07_base_F_OCimport_01 : Aegis_UAV_07_base_F { scope = 0; class EventHandlers; };
    class Aegis_UAV_07_base_F_OCimport_02 : Aegis_UAV_07_base_F_OCimport_01 { class EventHandlers; };

    class UGV_01_base_F;
    class UGV_01_base_F_OCimport_01 : UGV_01_base_F { scope = 0; class EventHandlers; };
    class UGV_01_base_F_OCimport_02 : UGV_01_base_F_OCimport_01 { class EventHandlers; };

    class UGV_01_medical_base_F;
    class UGV_01_medical_base_F_OCimport_01 : UGV_01_medical_base_F { scope = 0; class EventHandlers; };
    class UGV_01_medical_base_F_OCimport_02 : UGV_01_medical_base_F_OCimport_01 { class EventHandlers; };

    class UGV_01_rcws_base_F;
    class UGV_01_rcws_base_F_OCimport_01 : UGV_01_rcws_base_F { scope = 0; class EventHandlers; };
    class UGV_01_rcws_base_F_OCimport_02 : UGV_01_rcws_base_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_L_Soldier_Exp_F;
    class Atlas_B_L_Soldier_Exp_F_OCimport_01 : Atlas_B_L_Soldier_Exp_F { scope = 0; class EventHandlers; };
    class Atlas_B_L_Soldier_Exp_F_OCimport_02 : Atlas_B_L_Soldier_Exp_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_L_Support_AMort_F;
    class Atlas_B_L_Support_AMort_F_OCimport_01 : Atlas_B_L_Support_AMort_F { scope = 0; class EventHandlers; };
    class Atlas_B_L_Support_AMort_F_OCimport_02 : Atlas_B_L_Support_AMort_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_L_AFV_Wheeled_01_cannon_F : AFV_Wheeled_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rhino MGS";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_AFV_Wheeled_01_up_cannon_F : AFV_Wheeled_01_up_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rhino MGS UP";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_CommandoMortar_RF : B_CommandoMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RSG60";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Crew_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","LanguageGRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_tropic"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl_vest";

        linkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_F","hgun_G17_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_F","hgun_G17_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Engineer_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_recon"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl_vest";

        backpack = "B_Kitbag_sgg_BLEng_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_GMG_01_A_F : B_GMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307A";
        side = 1;
        faction = "atlas_blu_l_f";
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

    class Atlas_B_L_GMG_01_F : B_GMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_GMG_01_high_F : B_GMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307 (High)";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_HMG_01_A_F : B_HMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312A";
        side = 1;
        faction = "atlas_blu_l_f";
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

    class Atlas_B_L_HMG_01_F : B_HMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_HMG_01_high_F : B_HMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312 (High)";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_HMG_02_F : HMG_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_HMG_02_high_F : HMG_02_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Heli_EC_03_RF : Heli_EC_03_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_B_L_Heli_EC_03_RF";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Heli_EC_04_military_RF : Heli_EC_04_military_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_B_L_Heli_EC_04_military_RF";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Heli_light_03_dynamicLoadout_F : Heli_light_03_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_B_L_Heli_light_03_dynamicLoadout_F";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Heli_light_03_unarmed_F : Heli_light_03_unarmed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_B_L_Heli_light_03_unarmed_F";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Helicrew_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_pilot"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

        linkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Helipilot_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_pilot"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

        linkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"SMG_03C_black","Throw","Put"};
        respawnWeapons[] = {"SMG_03C_black","Throw","Put"};

        magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_LSV_01_AT_F : LSV_01_AT_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (Mini-Spike AT)";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_LSV_01_armed_F : LSV_01_armed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (XM312)";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_LSV_01_light_F : LSV_01_light_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR (light)";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_LSV_01_unarmed_F : LSV_01_unarmed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_MRAP_03_F : MRAP_03_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Strider";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_MRAP_03_gmg_F : MRAP_03_hmg_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Strider HMG";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_MRAP_03_hmg_F : MRAP_03_gmg_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Strider GMG";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Medic_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_recon"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

        backpack = "B_AssaultPack_sgg_BLMedic_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Mortar_01_F : B_Mortar_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_B_L_Mortar_01_F";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Officer_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_casual"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

        linkedItems[] = {"V_Rangemaster_belt","H_Beret_grn","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Rangemaster_belt","H_Beret_grn","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_03C_black","hgun_G17_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"SMG_03C_black","hgun_G17_F","Throw","Put","Binocular"};

        magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Quadbike_01_F : Quadbike_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_RadioOperator_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_recon"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl_vest";

        backpack = "B_RadioBag_01_green_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Soldier_AAA_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_recon"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

        backpack = "B_Carryall_green_AAA_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Soldier_AAR_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_recon"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl_tshirt";

        backpack = "B_Kitbag_sgg_BLAAR_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Soldier_AAT_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_recon"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

        backpack = "B_Carryall_green_AAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Soldier_AA_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","LanguageGRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_tropic"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

        backpack = "B_Kitbag_sgg_BLAA_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","launch_B_Titan_olive_F","hgun_G17_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","launch_B_Titan_olive_F","hgun_G17_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Soldier_AR_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","LanguageGRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_tropic"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl_tshirt";

        linkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"LMG_03_Hamr_Pointer_F","hgun_G17_F","Throw","Put"};
        respawnWeapons[] = {"LMG_03_Hamr_Pointer_F","hgun_G17_F","Throw","Put"};

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

    class Atlas_B_L_Soldier_AT_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","LanguageGRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_tropic"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

        backpack = "B_Kitbag_sgg_BLAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","launch_I_Titan_short_F","hgun_G17_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","launch_I_Titan_short_F","hgun_G17_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Soldier_A_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_recon"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

        backpack = "B_Carryall_green_BLAmmo_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Soldier_CQ_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","LanguageGRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_tropic"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_CQB_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_CQB_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_sgun_M4_Holo_FL_F","hgun_G17_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_sgun_M4_Holo_FL_F","hgun_G17_F","Throw","Put"};

        magazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Soldier_Exp_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","LanguageGRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_tropic"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

        backpack = "B_Kitbag_sgg_IIExp_F";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Soldier_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","LanguageGRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_tropic"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

        linkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Soldier_GL_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_recon"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_GL_Holo_LP_F","hgun_G17_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_GL_Holo_LP_F","hgun_G17_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Soldier_LAT_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","LanguageGRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_tropic"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

        backpack = "B_AssaultPack_sgg_BLLAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","launch_NLAW_F","hgun_G17_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","launch_NLAW_F","hgun_G17_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","NLAW_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","NLAW_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Soldier_Lite_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_casual"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

        linkedItems[] = {"V_CarrierRigKBT_01_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"atlas_arifle_famasG4_Grip_F","hgun_G17_F","Throw","Put"};
        respawnWeapons[] = {"atlas_arifle_famasG4_Grip_F","hgun_G17_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Soldier_Repair_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_casual"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

        backpack = "B_AssaultPack_sgg_BLRepair_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Soldier_SL_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","LanguageGRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_tropic"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl_vest";

        linkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_HelmetSpecB_green","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_HelmetSpecB_green","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_RCO_LP_F","hgun_G17_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_RCO_LP_F","hgun_G17_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Soldier_TL_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","LanguageGRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_tropic"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl_vest";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_france_F","H_HelmetSpecB_green","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_france_F","H_HelmetSpecB_green","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_GL_RCO_LP_F","hgun_G17_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_GL_RCO_LP_F","hgun_G17_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Soldier_UAV_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_recon"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl_vest";

        backpack = "B_UAV_01_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Soldier_unarmed_F : Atlas_B_L_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","LanguageGRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_tropic"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

        linkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class Atlas_B_L_Static_AA_F : B_static_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AA)";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Static_AT_F : B_static_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AT)";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Support_AMG_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (HMG/GMG)";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_recon"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl_tshirt";

        backpack = "B_HMG_01_support_grn_F";

        linkedItems[] = {"V_TacChestrig_grn_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Support_AMort_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (Mk6)";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_recon"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl_tshirt";

        backpack = "B_Mortar_01_support_grn_F";

        linkedItems[] = {"V_TacChestrig_grn_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Support_GMG_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (GMG)";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_recon"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl_tshirt";

        backpack = "B_GMG_01_Weapon_grn_F";

        linkedItems[] = {"V_TacChestrig_grn_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Support_MG_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (HMG)";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_recon"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl_tshirt";

        backpack = "B_HMG_01_Weapon_grn_F";

        linkedItems[] = {"V_TacChestrig_grn_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Support_Mort_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mk6)";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_recon"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl_tshirt";

        backpack = "B_Mortar_01_Weapon_grn_F";

        linkedItems[] = {"V_TacChestrig_grn_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Survivor_F : Atlas_B_L_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","LanguageGRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_tropic"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

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

    class Atlas_B_L_Truck_01_Repair_F : B_Truck_01_Repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Repair";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Truck_01_ammo_F : B_Truck_01_ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Ammo";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Truck_01_box_F : B_Truck_01_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Container";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Truck_01_cargo_F : Truck_01_cargo_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Cargo";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Truck_01_covered_F : B_Truck_01_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport (covered)";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Truck_01_flatbed_F : Truck_01_flatbed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Flatbed";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Truck_01_fuel_F : B_Truck_01_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Fuel";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Truck_01_medical_F : B_Truck_01_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Medical";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Truck_01_mover_F : B_Truck_01_mover_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_Truck_01_transport_F : B_Truck_01_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "Atlas_B_L_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_UAV_01_F : UAV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR-2 Darter";
        side = 1;
        faction = "atlas_blu_l_f";
        crew = "B_UAV_AI_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_UAV_07_F : Aegis_UAV_07_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MQ-9A Reaper";
        side = 1;
        faction = "atlas_blu_l_f";
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

    class Atlas_B_L_UGV_01_F : UGV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper";
        side = 1;
        faction = "atlas_blu_l_f";
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

    class Atlas_B_L_UGV_01_medical_F : UGV_01_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper Medical";
        side = 1;
        faction = "atlas_blu_l_f";
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

    class Atlas_B_L_UGV_01_rcws_F : UGV_01_rcws_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper RCWS";
        side = 1;
        faction = "atlas_blu_l_f";
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

    class Atlas_B_L_soldier_M_F : Atlas_B_L_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_recon"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

        linkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_france_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_arifle_SPAR_03_blk_DMS_LP_BI_F","hgun_G17_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_SPAR_03_blk_DMS_LP_BI_F","hgun_G17_F","Throw","Put","Rangefinder"};

        magazines[] = {"20Rnd_762x51_mag","20Rnd_762x51_mag","20Rnd_762x51_mag","20Rnd_762x51_mag","20Rnd_762x51_mag","20Rnd_762x51_mag","20Rnd_762x51_mag","20Rnd_762x51_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"20Rnd_762x51_mag","20Rnd_762x51_mag","20Rnd_762x51_mag","20Rnd_762x51_mag","20Rnd_762x51_mag","20Rnd_762x51_mag","20Rnd_762x51_mag","20Rnd_762x51_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_soldier_mine_F : Atlas_B_L_Soldier_Exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mine Specialist";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","LanguageGRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_tropic"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl";

        backpack = "B_Carryall_green_Mine";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_france_F","H_HelmetB_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_L_support_CMort_RF : Atlas_B_L_Support_AMort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 1;
        faction = "atlas_blu_l_f";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Greek","Head_Tanoan","G_NATO_recon"};

        uniformClass = "Atlas_U_B_CombatUniform_ffl_tshirt";

        backpack = "B_CommandoMortar_weapon_RF";

        linkedItems[] = {"V_TacChestrig_grn_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_Arifle_FamasG4_Grip_Holo_LP_F","hgun_G17_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShell"};


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
        class Atlas_BLU_L_F {
            class Armored {
                class Atlas_B_L_TankDestrSection_Rhino {
                    name = "Tank Destroyer Section";
                    side = 1;
                    faction = "Atlas_BLU_L_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_art.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_L_AFV_Wheeled_01_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_L_AFV_Wheeled_01_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class Atlas_B_L_TankDestrSection_RhinoUP {
                    name = "Tank Destroyer Section (UP)";
                    side = 1;
                    faction = "Atlas_BLU_L_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_art.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_L_AFV_Wheeled_01_up_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_L_AFV_Wheeled_01_up_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class Atlas_B_L_InfSentry {
                    name = "Sentry";
                    side = 1;
                    faction = "Atlas_BLU_L_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_L_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_L_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Atlas_B_L_InfSquad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "Atlas_BLU_L_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_L_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_L_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_L_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_L_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_L_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_L_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_L_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_L_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Atlas_B_L_InfTeam {
                    name = "Fire Team";
                    side = 1;
                    faction = "Atlas_BLU_L_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_L_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_L_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_L_soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_L_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Motorized {
                class Atlas_B_L_MotInf_AA {
                    name = "Motorized Air-defense Team";
                    side = 1;
                    faction = "Atlas_BLU_L_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_L_LSV_01_armed_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_L_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_L_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                };
                class Atlas_B_L_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 1;
                    faction = "Atlas_BLU_L_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_L_LSV_01_armed_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_L_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_L_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                };
                class Atlas_B_L_MotInf_Reinforcements {
                    name = "Motorized Reinforcements";
                    side = 1;
                    faction = "Atlas_BLU_L_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_L_Truck_01_transport_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_L_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_L_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_L_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_L_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_L_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_L_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_L_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_B_L_medic_F";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "Atlas_B_L_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "Atlas_B_L_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "Atlas_B_L_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "Atlas_B_L_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit13 {
                        vehicle = "Atlas_B_L_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit14 {
                        vehicle = "Atlas_B_L_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit15 {
                        vehicle = "Atlas_B_L_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit16 {
                        vehicle = "Atlas_B_L_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };
                };
                class Atlas_B_L_MotInf_Team {
                    name = "Motorized Team";
                    side = 1;
                    faction = "Atlas_BLU_L_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_L_LSV_01_armed_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_L_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
            };
        };
    };
};
