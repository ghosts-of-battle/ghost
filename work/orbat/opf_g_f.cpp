//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class OPF_G_F {
        displayName = "FIA";
        side = 0;
        priority = 2;
        icon = "\a3\Data_f\cfgFactionClasses_IND_G_ca.paa";
        flag = "\a3\Data_f\Flags\flag_FIA_co.paa";
    };
};

class CfgVehicles {

    class Aegis_I_G_APC_Wheeled_04_export_F;
    class Aegis_I_G_APC_Wheeled_04_export_F_OCimport_01 : Aegis_I_G_APC_Wheeled_04_export_F { scope = 0; class EventHandlers; };
    class Aegis_I_G_APC_Wheeled_04_export_F_OCimport_02 : Aegis_I_G_APC_Wheeled_04_export_F_OCimport_01 { class EventHandlers; };

    class O_G_Soldier_AR_F;
    class O_G_Soldier_AR_F_OCimport_01 : O_G_Soldier_AR_F { scope = 0; class EventHandlers; };
    class O_G_Soldier_AR_F_OCimport_02 : O_G_Soldier_AR_F_OCimport_01 { class EventHandlers; };

    class Aegis_B_G_ZU23_lxWS_F;
    class Aegis_B_G_ZU23_lxWS_F_OCimport_01 : Aegis_B_G_ZU23_lxWS_F { scope = 0; class EventHandlers; };
    class Aegis_B_G_ZU23_lxWS_F_OCimport_02 : Aegis_B_G_ZU23_lxWS_F_OCimport_01 { class EventHandlers; };

    class I_APC_Wheeled_03_cannon_F;
    class I_APC_Wheeled_03_cannon_F_OCimport_01 : I_APC_Wheeled_03_cannon_F { scope = 0; class EventHandlers; };
    class I_APC_Wheeled_03_cannon_F_OCimport_02 : I_APC_Wheeled_03_cannon_F_OCimport_01 { class EventHandlers; };

    class I_G_Boat_Transport_01_F;
    class I_G_Boat_Transport_01_F_OCimport_01 : I_G_Boat_Transport_01_F { scope = 0; class EventHandlers; };
    class I_G_Boat_Transport_01_F_OCimport_02 : I_G_Boat_Transport_01_F_OCimport_01 { class EventHandlers; };

    class O_CommandoMortar_RF;
    class O_CommandoMortar_RF_OCimport_01 : O_CommandoMortar_RF { scope = 0; class EventHandlers; };
    class O_CommandoMortar_RF_OCimport_02 : O_CommandoMortar_RF_OCimport_01 { class EventHandlers; };

    class HMG_02_base_F;
    class HMG_02_base_F_OCimport_01 : HMG_02_base_F { scope = 0; class EventHandlers; };
    class HMG_02_base_F_OCimport_02 : HMG_02_base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_high_base_F;
    class HMG_02_high_base_F_OCimport_01 : HMG_02_high_base_F { scope = 0; class EventHandlers; };
    class HMG_02_high_base_F_OCimport_02 : HMG_02_high_base_F_OCimport_01 { class EventHandlers; };

    class I_G_Mortar_01_F;
    class I_G_Mortar_01_F_OCimport_01 : I_G_Mortar_01_F { scope = 0; class EventHandlers; };
    class I_G_Mortar_01_F_OCimport_02 : I_G_Mortar_01_F_OCimport_01 { class EventHandlers; };

    class I_G_Offroad_01_AT_F;
    class I_G_Offroad_01_AT_F_OCimport_01 : I_G_Offroad_01_AT_F { scope = 0; class EventHandlers; };
    class I_G_Offroad_01_AT_F_OCimport_02 : I_G_Offroad_01_AT_F_OCimport_01 { class EventHandlers; };

    class I_G_Offroad_01_F;
    class I_G_Offroad_01_F_OCimport_01 : I_G_Offroad_01_F { scope = 0; class EventHandlers; };
    class I_G_Offroad_01_F_OCimport_02 : I_G_Offroad_01_F_OCimport_01 { class EventHandlers; };

    class I_G_Offroad_01_armed_F;
    class I_G_Offroad_01_armed_F_OCimport_01 : I_G_Offroad_01_armed_F { scope = 0; class EventHandlers; };
    class I_G_Offroad_01_armed_F_OCimport_02 : I_G_Offroad_01_armed_F_OCimport_01 { class EventHandlers; };

    class I_G_Offroad_01_armor_AT_lxWS;
    class I_G_Offroad_01_armor_AT_lxWS_OCimport_01 : I_G_Offroad_01_armor_AT_lxWS { scope = 0; class EventHandlers; };
    class I_G_Offroad_01_armor_AT_lxWS_OCimport_02 : I_G_Offroad_01_armor_AT_lxWS_OCimport_01 { class EventHandlers; };

    class I_G_Offroad_01_armor_armed_lxWS;
    class I_G_Offroad_01_armor_armed_lxWS_OCimport_01 : I_G_Offroad_01_armor_armed_lxWS { scope = 0; class EventHandlers; };
    class I_G_Offroad_01_armor_armed_lxWS_OCimport_02 : I_G_Offroad_01_armor_armed_lxWS_OCimport_01 { class EventHandlers; };

    class I_G_Offroad_01_armor_base_lxWS;
    class I_G_Offroad_01_armor_base_lxWS_OCimport_01 : I_G_Offroad_01_armor_base_lxWS { scope = 0; class EventHandlers; };
    class I_G_Offroad_01_armor_base_lxWS_OCimport_02 : I_G_Offroad_01_armor_base_lxWS_OCimport_01 { class EventHandlers; };

    class Offroad_01_repair_military_base_F;
    class Offroad_01_repair_military_base_F_OCimport_01 : Offroad_01_repair_military_base_F { scope = 0; class EventHandlers; };
    class Offroad_01_repair_military_base_F_OCimport_02 : Offroad_01_repair_military_base_F_OCimport_01 { class EventHandlers; };

    class I_G_Offroad_AA_lxWS;
    class I_G_Offroad_AA_lxWS_OCimport_01 : I_G_Offroad_AA_lxWS { scope = 0; class EventHandlers; };
    class I_G_Offroad_AA_lxWS_OCimport_02 : I_G_Offroad_AA_lxWS_OCimport_01 { class EventHandlers; };

    class B_G_Pickup_Rocket_rf;
    class B_G_Pickup_Rocket_rf_OCimport_01 : B_G_Pickup_Rocket_rf { scope = 0; class EventHandlers; };
    class B_G_Pickup_Rocket_rf_OCimport_02 : B_G_Pickup_Rocket_rf_OCimport_01 { class EventHandlers; };

    class B_G_Pickup_fuel_rf;
    class B_G_Pickup_fuel_rf_OCimport_01 : B_G_Pickup_fuel_rf { scope = 0; class EventHandlers; };
    class B_G_Pickup_fuel_rf_OCimport_02 : B_G_Pickup_fuel_rf_OCimport_01 { class EventHandlers; };

    class B_G_Pickup_hmg_rf;
    class B_G_Pickup_hmg_rf_OCimport_01 : B_G_Pickup_hmg_rf { scope = 0; class EventHandlers; };
    class B_G_Pickup_hmg_rf_OCimport_02 : B_G_Pickup_hmg_rf_OCimport_01 { class EventHandlers; };

    class B_G_Pickup_mrl_rf;
    class B_G_Pickup_mrl_rf_OCimport_01 : B_G_Pickup_mrl_rf { scope = 0; class EventHandlers; };
    class B_G_Pickup_mrl_rf_OCimport_02 : B_G_Pickup_mrl_rf_OCimport_01 { class EventHandlers; };

    class B_G_Pickup_repair_rf;
    class B_G_Pickup_repair_rf_OCimport_01 : B_G_Pickup_repair_rf { scope = 0; class EventHandlers; };
    class B_G_Pickup_repair_rf_OCimport_02 : B_G_Pickup_repair_rf_OCimport_01 { class EventHandlers; };

    class B_G_Pickup_rf;
    class B_G_Pickup_rf_OCimport_01 : B_G_Pickup_rf { scope = 0; class EventHandlers; };
    class B_G_Pickup_rf_OCimport_02 : B_G_Pickup_rf_OCimport_01 { class EventHandlers; };

    class I_G_Quadbike_01_F;
    class I_G_Quadbike_01_F_OCimport_01 : I_G_Quadbike_01_F { scope = 0; class EventHandlers; };
    class I_G_Quadbike_01_F_OCimport_02 : I_G_Quadbike_01_F_OCimport_01 { class EventHandlers; };

    class O_G_Soldier_SL_F;
    class O_G_Soldier_SL_F_OCimport_01 : O_G_Soldier_SL_F { scope = 0; class EventHandlers; };
    class O_G_Soldier_SL_F_OCimport_02 : O_G_Soldier_SL_F_OCimport_01 { class EventHandlers; };

    class I_G_Sharpshooter_F;
    class I_G_Sharpshooter_F_OCimport_01 : I_G_Sharpshooter_F { scope = 0; class EventHandlers; };
    class I_G_Sharpshooter_F_OCimport_02 : I_G_Sharpshooter_F_OCimport_01 { class EventHandlers; };

    class I_G_Soldier_AR_F;
    class I_G_Soldier_AR_F_OCimport_01 : I_G_Soldier_AR_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_AR_F_OCimport_02 : I_G_Soldier_AR_F_OCimport_01 { class EventHandlers; };

    class I_G_Soldier_A_F;
    class I_G_Soldier_A_F_OCimport_01 : I_G_Soldier_A_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_A_F_OCimport_02 : I_G_Soldier_A_F_OCimport_01 { class EventHandlers; };

    class I_G_Soldier_CQ_F;
    class I_G_Soldier_CQ_F_OCimport_01 : I_G_Soldier_CQ_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_CQ_F_OCimport_02 : I_G_Soldier_CQ_F_OCimport_01 { class EventHandlers; };

    class I_G_Soldier_F;
    class I_G_Soldier_F_OCimport_01 : I_G_Soldier_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_F_OCimport_02 : I_G_Soldier_F_OCimport_01 { class EventHandlers; };

    class I_G_Soldier_GL_F;
    class I_G_Soldier_GL_F_OCimport_01 : I_G_Soldier_GL_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_GL_F_OCimport_02 : I_G_Soldier_GL_F_OCimport_01 { class EventHandlers; };

    class I_G_Soldier_LAT2_F;
    class I_G_Soldier_LAT2_F_OCimport_01 : I_G_Soldier_LAT2_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_LAT2_F_OCimport_02 : I_G_Soldier_LAT2_F_OCimport_01 { class EventHandlers; };

    class I_G_Soldier_LAT_F;
    class I_G_Soldier_LAT_F_OCimport_01 : I_G_Soldier_LAT_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_LAT_F_OCimport_02 : I_G_Soldier_LAT_F_OCimport_01 { class EventHandlers; };

    class O_G_Soldier_LAT2_F;
    class O_G_Soldier_LAT2_F_OCimport_01 : O_G_Soldier_LAT2_F { scope = 0; class EventHandlers; };
    class O_G_Soldier_LAT2_F_OCimport_02 : O_G_Soldier_LAT2_F_OCimport_01 { class EventHandlers; };

    class I_G_Soldier_M_F;
    class I_G_Soldier_M_F_OCimport_01 : I_G_Soldier_M_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_M_F_OCimport_02 : I_G_Soldier_M_F_OCimport_01 { class EventHandlers; };

    class I_G_Soldier_SL_F;
    class I_G_Soldier_SL_F_OCimport_01 : I_G_Soldier_SL_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_SL_F_OCimport_02 : I_G_Soldier_SL_F_OCimport_01 { class EventHandlers; };

    class I_G_Soldier_TL_F;
    class I_G_Soldier_TL_F_OCimport_01 : I_G_Soldier_TL_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_TL_F_OCimport_02 : I_G_Soldier_TL_F_OCimport_01 { class EventHandlers; };

    class I_G_Soldier_TechSpec_F;
    class I_G_Soldier_TechSpec_F_OCimport_01 : I_G_Soldier_TechSpec_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_TechSpec_F_OCimport_02 : I_G_Soldier_TechSpec_F_OCimport_01 { class EventHandlers; };

    class O_G_Soldier_F;
    class O_G_Soldier_F_OCimport_01 : O_G_Soldier_F { scope = 0; class EventHandlers; };
    class O_G_Soldier_F_OCimport_02 : O_G_Soldier_F_OCimport_01 { class EventHandlers; };

    class I_G_Soldier_exp_F;
    class I_G_Soldier_exp_F_OCimport_01 : I_G_Soldier_exp_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_exp_F_OCimport_02 : I_G_Soldier_exp_F_OCimport_01 { class EventHandlers; };

    class I_G_Soldier_lite_F;
    class I_G_Soldier_lite_F_OCimport_01 : I_G_Soldier_lite_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_lite_F_OCimport_02 : I_G_Soldier_lite_F_OCimport_01 { class EventHandlers; };

    class UAV_02_IED_Base_lxWS;
    class UAV_02_IED_Base_lxWS_OCimport_01 : UAV_02_IED_Base_lxWS { scope = 0; class EventHandlers; };
    class UAV_02_IED_Base_lxWS_OCimport_02 : UAV_02_IED_Base_lxWS_OCimport_01 { class EventHandlers; };

    class I_G_Van_01_fuel_F;
    class I_G_Van_01_fuel_F_OCimport_01 : I_G_Van_01_fuel_F { scope = 0; class EventHandlers; };
    class I_G_Van_01_fuel_F_OCimport_02 : I_G_Van_01_fuel_F_OCimport_01 { class EventHandlers; };

    class I_G_Van_01_transport_F;
    class I_G_Van_01_transport_F_OCimport_01 : I_G_Van_01_transport_F { scope = 0; class EventHandlers; };
    class I_G_Van_01_transport_F_OCimport_02 : I_G_Van_01_transport_F_OCimport_01 { class EventHandlers; };

    class Van_02_transport_base_F;
    class Van_02_transport_base_F_OCimport_01 : Van_02_transport_base_F { scope = 0; class EventHandlers; };
    class Van_02_transport_base_F_OCimport_02 : Van_02_transport_base_F_OCimport_01 { class EventHandlers; };

    class Van_02_vehicle_base_F;
    class Van_02_vehicle_base_F_OCimport_01 : Van_02_vehicle_base_F { scope = 0; class EventHandlers; };
    class Van_02_vehicle_base_F_OCimport_02 : Van_02_vehicle_base_F_OCimport_01 { class EventHandlers; };

    class I_G_crew_F;
    class I_G_crew_F_OCimport_01 : I_G_crew_F { scope = 0; class EventHandlers; };
    class I_G_crew_F_OCimport_02 : I_G_crew_F_OCimport_01 { class EventHandlers; };

    class I_G_engineer_F;
    class I_G_engineer_F_OCimport_01 : I_G_engineer_F { scope = 0; class EventHandlers; };
    class I_G_engineer_F_OCimport_02 : I_G_engineer_F_OCimport_01 { class EventHandlers; };

    class I_G_medic_F;
    class I_G_medic_F_OCimport_01 : I_G_medic_F { scope = 0; class EventHandlers; };
    class I_G_medic_F_OCimport_02 : I_G_medic_F_OCimport_01 { class EventHandlers; };

    class I_G_officer_F;
    class I_G_officer_F_OCimport_01 : I_G_officer_F { scope = 0; class EventHandlers; };
    class I_G_officer_F_OCimport_02 : I_G_officer_F_OCimport_01 { class EventHandlers; };

    class O_G_UAV_02_IED_lxWS;
    class O_G_UAV_02_IED_lxWS_OCimport_01 : O_G_UAV_02_IED_lxWS { scope = 0; class EventHandlers; };
    class O_G_UAV_02_IED_lxWS_OCimport_02 : O_G_UAV_02_IED_lxWS_OCimport_01 { class EventHandlers; };

    class ghost_insurgents_soldier_i;
    class ghost_insurgents_soldier_i_OCimport_01 : ghost_insurgents_soldier_i { scope = 0; class EventHandlers; };
    class ghost_insurgents_soldier_i_OCimport_02 : ghost_insurgents_soldier_i_OCimport_01 { class EventHandlers; };

    class Aegis_O_G_APC_Wheeled_04_export_F : Aegis_I_G_APC_Wheeled_04_export_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-100A Lokhos";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_G_HeavyGunner_F : O_G_Soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_BG_Guerrilla_6_1";

        backpack = "Aegis_B_Kitbag_rgr_G_HG";

        linkedItems[] = {"V_TacVest_oli","H_Watchcap_cbr_hs","Aegis_G_Armband_FIA_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_Watchcap_cbr_hs","Aegis_G_Armband_FIA_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_MMG_FNMAG_MRCO_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_MMG_FNMAG_MRCO_F","Throw","Put"};

        magazines[] = {"Aegis_200Rnd_762x51_MAG_Red_F","Aegis_200Rnd_762x51_MAG_Red_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"Aegis_200Rnd_762x51_MAG_Red_F","Aegis_200Rnd_762x51_MAG_Red_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_G_ZU23_lxWS_F : Aegis_B_G_ZU23_lxWS_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zu-23-2";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_APC_Wheeled_03_cannon_F : I_APC_Wheeled_03_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pandur II";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Boat_Transport_01_F : I_G_Boat_Transport_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Boat";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_CommandoMortar_RF : O_CommandoMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RSG60";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_HMG_02_F : HMG_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_HMG_02_high_F : HMG_02_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Mortar_01_F : I_G_Mortar_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "O_G_Mortar_01_F";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Offroad_01_AT_F : I_G_Offroad_01_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (AT)";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Offroad_01_F : I_G_Offroad_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Offroad_01_armed_F : I_G_Offroad_01_armed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (HMG)";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Offroad_01_armor_AT_lxWS : I_G_Offroad_01_armor_AT_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (UP, AT)";
        side = 0;
        faction = "opf_g_f";
        crew = "I_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Offroad_01_armor_armed_lxWS : I_G_Offroad_01_armor_armed_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (UP, HMG)";
        side = 0;
        faction = "opf_g_f";
        crew = "I_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Offroad_01_armor_base_lxWS : I_G_Offroad_01_armor_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (UP)";
        side = 0;
        faction = "opf_g_f";
        crew = "I_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Offroad_01_repair_F : Offroad_01_repair_military_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Repair)";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Offroad_AA_lxWS : I_G_Offroad_AA_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Zu-23-2)";
        side = 0;
        faction = "opf_g_f";
        crew = "I_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Pickup_Rocket_rf : B_G_Pickup_Rocket_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Rocket)";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Pickup_fuel_rf : B_G_Pickup_fuel_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Fuel)";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Pickup_hmg_rf : B_G_Pickup_hmg_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (HMG)";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Pickup_mrl_rf : B_G_Pickup_mrl_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (MRL)";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Pickup_repair_rf : B_G_Pickup_repair_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Repair)";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Pickup_rf : B_G_Pickup_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Quadbike_01_F : I_G_Quadbike_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Scout_RF : O_G_Soldier_SL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Scout";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_leader_RF";

        linkedItems[] = {"V_TacVest_rig_blk_RF","H_HelmetIA_sb_digital_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_rig_blk_RF","H_HelmetIA_sb_digital_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_h6_oli_vrco_snd_RF","hgun_Glock19_auto_MRD_RF","Throw","Put","Binocular"};
        respawnWeapons[] = {"srifle_h6_oli_vrco_snd_RF","hgun_Glock19_auto_MRD_RF","Throw","Put","Binocular"};

        magazines[] = {"10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","33Rnd_9x19_Yellow_Mag_RF","33Rnd_9x19_Yellow_Mag_RF","33Rnd_9x19_Yellow_Mag_RF","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","10Rnd_556x45_AP_Stanag_RF","33Rnd_9x19_Yellow_Mag_RF","33Rnd_9x19_Yellow_Mag_RF","33Rnd_9x19_Yellow_Mag_RF","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Sharpshooter_F : I_G_Sharpshooter_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerilla3_2";

        linkedItems[] = {"H_ShemagOpen_khk","V_BandollierB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_ShemagOpen_khk","V_BandollierB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_DMR_06_camo_khs_F","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_06_camo_khs_F","Throw","Put"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Soldier_AR_F : I_G_Soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerilla2_1";

        linkedItems[] = {"V_TacVest_blk","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_blk","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"LMG_Mk200_BI_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Mk200_BI_F","Throw","Put"};

        magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Soldier_A_F : I_G_Soldier_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerilla1_2_F";

        backpack = "G_Carryall_Ammo";

        linkedItems[] = {"H_Booniehat_khk","V_TacChestRig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_Booniehat_khk","V_TacChestRig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_TRG20_F","Throw","Put"};
        respawnWeapons[] = {"arifle_TRG20_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Soldier_CQ_F : I_G_Soldier_CQ_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerilla1_3";

        linkedItems[] = {"H_ShemagOpen_oli","V_ChestrigF_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_ShemagOpen_oli","V_ChestrigF_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"sgun_HunterShotgun_01_F","Throw","Put"};
        respawnWeapons[] = {"sgun_HunterShotgun_01_F","Throw","Put"};

        magazines[] = {"2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","2Rnd_12Gauge_Slug","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Soldier_F : I_G_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerilla1_1";

        linkedItems[] = {"H_ShemagOpen_khk","V_TacChestRig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_ShemagOpen_khk","V_TacChestRig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_TRG21_F","Throw","Put"};
        respawnWeapons[] = {"arifle_TRG21_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Soldier_GL_F : I_G_Soldier_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerilla2_3";

        linkedItems[] = {"H_Bandanna_khk","V_ChestrigF_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_Bandanna_khk","V_ChestrigF_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_TRG21_GL_F","Throw","Put"};
        respawnWeapons[] = {"arifle_TRG21_GL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Soldier_LAT2_F : I_G_Soldier_LAT2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light AT)";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerrilla_6_1";

        backpack = "B_Kitbag_rgr_G_LAT2";

        linkedItems[] = {"V_TacVest_blk","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_blk","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_TRG21_F","launch_RPG7_F","Throw","Put"};
        respawnWeapons[] = {"arifle_TRG21_F","launch_RPG7_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RPG7_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RPG7_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Soldier_LAT_F : I_G_Soldier_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerrilla_6_1";

        backpack = "G_FieldPack_LAT";

        linkedItems[] = {"V_TacVest_blk","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_blk","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_TRG21_F","launch_RPG32_F","Throw","Put"};
        respawnWeapons[] = {"arifle_TRG21_F","launch_RPG32_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RPG32_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","RPG32_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Soldier_LAT_RF : O_G_Soldier_LAT2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Launcher)";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerrilla_6_1";

        backpack = "G_FieldPack_LAT_RF";

        linkedItems[] = {"V_TacVest_blk","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_blk","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_TRG21_F","launch_PSRL1_olive_RF","Throw","Put"};
        respawnWeapons[] = {"arifle_TRG21_F","launch_PSRL1_olive_RF","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","PSRL1_AT_RF","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","PSRL1_AT_RF","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Soldier_M_F : I_G_Soldier_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerilla3_1";

        linkedItems[] = {"V_BandollierB_khk","H_Shemag_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_khk","H_Shemag_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Mk20_MRCO_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_Mk20_MRCO_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Soldier_SL_F : I_G_Soldier_SL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_leader";

        linkedItems[] = {"H_Watchcap_blk","V_ChestrigF_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_Watchcap_blk","V_ChestrigF_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_TRG21_MRCO_F","hgun_ACPC2_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_TRG21_MRCO_F","hgun_ACPC2_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Soldier_TL_F : I_G_Soldier_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_leader";

        linkedItems[] = {"V_TacVest_blk","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_blk","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Mk20_GL_ACO_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20_GL_ACO_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Soldier_TechSpec_F : I_G_Soldier_TechSpec_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Technical Specialist";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerilla2_2";

        backpack = "B_Kitbag_rgr_G_TechSpec";

        linkedItems[] = {"H_Cap_grn","G_Tactical_clear","V_Pocketed_olive_F","O_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_Cap_grn","G_Tactical_clear","V_Pocketed_olive_F","O_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_PDW2000_F","Throw","Put"};
        respawnWeapons[] = {"hgun_PDW2000_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag_v2","30Rnd_9x21_Mag_v2","30Rnd_9x21_Mag_v2","30Rnd_9x21_Mag_v2","30Rnd_9x21_Mag_v2","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_v2","30Rnd_9x21_Mag_v2","30Rnd_9x21_Mag_v2","30Rnd_9x21_Mag_v2","30Rnd_9x21_Mag_v2","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Soldier_UAV_lxWS : O_G_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (IED)";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerilla1_1";

        backpack = "O_G_UAV_02_IED_backpack_lxWS";

        linkedItems[] = {"V_Chestrig_oli","H_Shemag_olive","O_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_oli","H_Shemag_olive","O_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_TRG21_F","Throw","Put"};
        respawnWeapons[] = {"arifle_TRG21_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Soldier_exp_F : I_G_Soldier_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerilla2_1";

        backpack = "G_Carryall_Exp";

        linkedItems[] = {"H_Shemag_olive","V_ChestrigF_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_Shemag_olive","V_ChestrigF_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Mk20C_ACO_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_ACO_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Soldier_lite_F : I_G_Soldier_lite_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerilla1_3";

        linkedItems[] = {"V_BandollierB_blk","H_Cap_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_blk","H_Cap_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_TRG20_F","Throw","Put"};
        respawnWeapons[] = {"arifle_TRG20_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","MiniGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","MiniGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Soldier_unarmed_F : O_G_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerilla1_1";

        linkedItems[] = {"V_Chestrig_oli","H_Shemag_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_oli","H_Shemag_olive","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class O_G_Survivor_F : O_G_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerilla1_1";

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

    class O_G_UAV_02_IED_lxWS : UAV_02_IED_Base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "IED UAV";
        side = 0;
        faction = "opf_g_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Van_01_fuel_F : I_G_Van_01_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fuel Truck";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Van_01_transport_F : I_G_Van_01_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Van_02_transport_F : Van_02_transport_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van Transport";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_Van_02_vehicle_F : Van_02_vehicle_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van (Cargo)";
        side = 0;
        faction = "opf_g_f";
        crew = "O_G_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_crew_F : I_G_crew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerilla1_2_F";

        linkedItems[] = {"H_HelmetCrew_I","V_BandollierB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetCrew_I","V_BandollierB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_PDW2000_F","Throw","Put"};
        respawnWeapons[] = {"hgun_PDW2000_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_engineer_F : I_G_engineer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerilla2_2";

        backpack = "G_TacticalPack_Eng";

        linkedItems[] = {"H_Watchcap_camo","V_ChestrigF_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_Watchcap_camo","V_ChestrigF_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKS_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_medic_F : I_G_medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerilla2_3";

        backpack = "G_FieldPack_Medic";

        linkedItems[] = {"V_TacVest_blk","H_Cap_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_blk","H_Cap_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKM_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKM_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_officer_F : I_G_officer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerilla2_3";

        linkedItems[] = {"V_ChestrigF_oli","H_Watchcap_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_oli","H_Watchcap_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKS_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKS_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellRed","SmokeShellBlue"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellRed","SmokeShellBlue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_G_support_CMort_RF : O_G_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        uniformClass = "U_OG_Guerrilla_RF";

        backpack = "I_CommandoMortar_weapon_RF";

        linkedItems[] = {"H_ShemagOpen_khk","V_TacChestRig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_ShemagOpen_khk","V_TacChestRig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_TRG21_F","Throw","Put"};
        respawnWeapons[] = {"arifle_TRG21_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","MiniGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_Rev_UAV_IED : O_G_UAV_02_IED_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Deployable IED UAV";
        side = 0;
        faction = "opf_g_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ghost_insurgents_soldier_o : ghost_insurgents_soldier_i_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Insurgent (randomized)";
        side = 0;
        faction = "opf_g_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};

        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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
    class East {
        class OPF_G_F {
            class Infantry {
                class ORG_InfHQ {
                    name = "Infantry HQ";
                    side = 0;
                    rarityGroup = 0;
                    faction = "OPF_G_F";

                    class Unit0 {
                        vehicle = "O_G_Soldier_SL_F";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_medic_F";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_engineer_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };

                    class Unit4 {
                        vehicle = "O_G_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };
                };
                class ORG_InfSentry {
                    name = "Sentry";
                    side = 0;
                    rarityGroup = 0.3;
                    faction = "OPF_G_F";

                    class Unit0 {
                        vehicle = "O_G_Soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class ORG_InfSquad {
                    name = "Rifle Squad";
                    side = 0;
                    rarityGroup = 0.3;
                    faction = "OPF_G_F";

                    class Unit0 {
                        vehicle = "O_G_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_G_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_G_medic_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_G_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_G_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class ORG_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 0;
                    rarityGroup = 0.3;
                    faction = "OPF_G_F";

                    class Unit0 {
                        vehicle = "O_G_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_AR_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_Soldier_LAT_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_G_Soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_G_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_G_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_G_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class ORG_InfSupTeam {
                    name = "Support Team";
                    side = 0;
                    rarityGroup = 0.3;
                    faction = "OPF_G_F";

                    class Unit0 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_medic_F";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_Soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                };
                class ORG_InfTeam {
                    name = "Fire Team";
                    side = 0;
                    rarityGroup = 0.3;
                    faction = "OPF_G_F";

                    class Unit0 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_Soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class ORG_InfTeam_AA {
                    name = "Air-defense Team";
                    side = 0;
                    rarityGroup = 0.3;
                    faction = "OPF_G_F";

                    class Unit0 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class ORG_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 0;
                    rarityGroup = 0.3;
                    faction = "OPF_G_F";

                    class Unit0 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class ORG_InfWepTeam {
                    name = "Weapons Team";
                    side = 0;
                    rarityGroup = 0.3;
                    faction = "OPF_G_F";

                    class Unit0 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                };
                class ORG_ReconSentry {
                    name = "Recon Sentry";
                    side = 0;
                    rarityGroup = 0;
                    faction = "OPF_G_F";

                    class Unit0 {
                        vehicle = "O_G_Soldier_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class O_G_InfSentry {
                    name = "Sentry";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_G_Soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class O_G_InfSquad {
                    name = "Rifle Squad";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_G_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_Soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_G_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_G_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_G_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_G_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class O_G_InfSquad_Assault {
                    name = "Assault Squad";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_G_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_soldier_LAT2_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_G_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_G_soldier_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_G_soldier_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_G_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class O_G_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_G_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_Soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_Soldier_M_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_G_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_G_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_G_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_G_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class O_G_InfTeam {
                    name = "Fire Team";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_Soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_G_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_G_InfTeam_Light {
                    name = "Patrol Team";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_G_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_soldier_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_soldier_LAT2_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_G_ReconSentry {
                    name = "Recon Sentry";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";

                    class Unit0 {
                        vehicle = "O_G_Soldier_M_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class O_G_SniperTeam_M {
                    name = "Sniper Team";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_recon.paa";

                    class Unit0 {
                        vehicle = "O_G_Sharpshooter_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
                class ghost_insurgents_OPF_G_F_fireteam {
                    name = "Insurgent Fire Team";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "ghost_insurgents_soldier_o";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "ghost_insurgents_soldier_o";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "ghost_insurgents_soldier_o";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "ghost_insurgents_soldier_o";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class ghost_insurgents_OPF_G_F_sentry {
                    name = "Insurgent Sentry";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "ghost_insurgents_soldier_o";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "ghost_insurgents_soldier_o";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class ghost_insurgents_OPF_G_F_squad {
                    name = "Insurgent Squad";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "ghost_insurgents_soldier_o";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "ghost_insurgents_soldier_o";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "ghost_insurgents_soldier_o";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "ghost_insurgents_soldier_o";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "ghost_insurgents_soldier_o";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "ghost_insurgents_soldier_o";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "ghost_insurgents_soldier_o";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "ghost_insurgents_soldier_o";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
            };
            class Mechanized {
                class Aegis_O_G_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_O_G_APC_Wheeled_04_export_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_O_G_HeavyGunner_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_G_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_G_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_G_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_G_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_G_medic_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class Aegis_O_G_MechInf_AT {
                    name = "Mechanized Anti-armor Squad";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "O_G_APC_Wheeled_03_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_G_soldier_LAT2_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_G_soldier_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_G_soldier_A_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_G_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_G_Medic_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized_MTP {
                class IRG_MotInf_AA_RF {
                    name = "Light Motorized Air-defense Team";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_G_Pickup_aat_rf";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_Soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class IRG_MotInf_mmg_rf {
                    name = "Light Motorized MMG Team";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_G_Pickup_mmg_rf";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_Soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class ORG_MotInf_Team {
                    name = "Motorized Patrol";
                    side = 0;
                    rarityGroup = 0.2;
                    faction = "OPF_G_F";

                    class Unit0 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Offroad_01_F";
                        rank = "SERGEANT";
                        position[] = {0,-10,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_Soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit4 {
                        vehicle = "O_G_medic_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_G_Soldier_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };
                };
                class ORG_Technicals {
                    name = "Technicals";
                    side = 0;
                    rarityGroup = 0.2;
                    faction = "OPF_G_F";

                    class Unit0 {
                        vehicle = "O_G_Offroad_01_armed_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Offroad_01_armed_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_Offroad_01_armed_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };
                };
                class O_G_MotInf_Team {
                    name = "Motorized Patrol";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_G_Offroad_01_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_Soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_G_medic_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_G_Soldier_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };
                };
                class O_G_Technicals {
                    name = "Technicals";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_G_Offroad_01_armed_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Offroad_01_armed_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_Offroad_01_armed_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };
                };
            };
            class Support {
                class IRG_MRL_Team_RF {
                    name = "MRL Team";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";

                    class Unit0 {
                        vehicle = "O_G_Pickup_mrl_rf";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_Soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                };
                class IRG_Support_Mort_RF {
                    name = "Light Mortar Team";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_mortar.paa";

                    class Unit0 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_support_CMort_RF";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_support_CMort_RF";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class ORG_Support_CLS {
                    name = "Support Team (CLS)";
                    side = 0;
                    rarityGroup = 0.1;
                    faction = "OPF_G_F";

                    class Unit0 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_medic_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class ORG_Support_ENG {
                    name = "Support Team (Engineer)";
                    side = 0;
                    rarityGroup = 0.1;
                    faction = "OPF_G_F";

                    class Unit0 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_engineer_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class ORG_Support_EOD {
                    name = "Support Team (EOD)";
                    side = 0;
                    rarityGroup = 0.1;
                    faction = "OPF_G_F";

                    class Unit0 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_engineer_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_G_Support_CLS {
                    name = "Support Team (CLS)";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_medic_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_G_Support_ENG {
                    name = "Support Team (Engineer)";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_engineer_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_G_Support_EOD {
                    name = "Support Team (EOD)";
                    side = 0;
                    faction = "OPF_G_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_G_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_G_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_G_Soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_G_Soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
        };
    };
    class Indep {
        class OPF_G_F {
            class Infantry {
                class I_G_InfSquad_Assault {
                    name = "Assault Squad";
                    side = 2;
                    faction = "OPF_G_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_G_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_G_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_G_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_G_soldier_LAT2_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "I_G_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "I_G_soldier_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "I_G_soldier_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "I_G_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class I_G_InfTeam_Light {
                    name = "Patrol Team";
                    side = 2;
                    faction = "OPF_G_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_G_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_G_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_G_soldier_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_G_soldier_LAT2_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
        };
    };
};
