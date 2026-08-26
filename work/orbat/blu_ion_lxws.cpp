//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class BLU_ION_lxWS {
        displayName = "ION Services";
        side = 1;
        priority = 3;
        icon = "\lxws\data_f_lxws\img\ui\cfgFactionClasses_ION_ca.paa";
        flag = "\lxws\data_f_lxws\img\Flags\flag_ION_co.paa";
    };
};

class CfgVehicles {

    class Aegis_Heli_Attack_04_base_F;
    class Aegis_Heli_Attack_04_base_F_OCimport_01 : Aegis_Heli_Attack_04_base_F { scope = 0; class EventHandlers; };
    class Aegis_Heli_Attack_04_base_F_OCimport_02 : Aegis_Heli_Attack_04_base_F_OCimport_01 { class EventHandlers; };

    class Aegis_Heli_Transport_02_VIP_base_F;
    class Aegis_Heli_Transport_02_VIP_base_F_OCimport_01 : Aegis_Heli_Transport_02_VIP_base_F { scope = 0; class EventHandlers; };
    class Aegis_Heli_Transport_02_VIP_base_F_OCimport_02 : Aegis_Heli_Transport_02_VIP_base_F_OCimport_01 { class EventHandlers; };

    class Pickup_01_hmg_base_rf;
    class Pickup_01_hmg_base_rf_OCimport_01 : Pickup_01_hmg_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_hmg_base_rf_OCimport_02 : Pickup_01_hmg_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_minigun_base_rf;
    class Pickup_01_minigun_base_rf_OCimport_01 : Pickup_01_minigun_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_minigun_base_rf_OCimport_02 : Pickup_01_minigun_base_rf_OCimport_01 { class EventHandlers; };

    class B_ION_soldier_AR_lxWS;
    class B_ION_soldier_AR_lxWS_OCimport_01 : B_ION_soldier_AR_lxWS { scope = 0; class EventHandlers; };
    class B_ION_soldier_AR_lxWS_OCimport_02 : B_ION_soldier_AR_lxWS_OCimport_01 { class EventHandlers; };

    class B_ION_Soldier_GL_lxWS;
    class B_ION_Soldier_GL_lxWS_OCimport_01 : B_ION_Soldier_GL_lxWS { scope = 0; class EventHandlers; };
    class B_ION_Soldier_GL_lxWS_OCimport_02 : B_ION_Soldier_GL_lxWS_OCimport_01 { class EventHandlers; };

    class B_ION_marksman_lxWS;
    class B_ION_marksman_lxWS_OCimport_01 : B_ION_marksman_lxWS { scope = 0; class EventHandlers; };
    class B_ION_marksman_lxWS_OCimport_02 : B_ION_marksman_lxWS_OCimport_01 { class EventHandlers; };

    class B_ION_Soldier_SG_lxWS;
    class B_ION_Soldier_SG_lxWS_OCimport_01 : B_ION_Soldier_SG_lxWS { scope = 0; class EventHandlers; };
    class B_ION_Soldier_SG_lxWS_OCimport_02 : B_ION_Soldier_SG_lxWS_OCimport_01 { class EventHandlers; };

    class B_ION_TL_lxWS;
    class B_ION_TL_lxWS_OCimport_01 : B_ION_TL_lxWS { scope = 0; class EventHandlers; };
    class B_ION_TL_lxWS_OCimport_02 : B_ION_TL_lxWS_OCimport_01 { class EventHandlers; };

    class B_ION_soldier_UAV_01_lxWS;
    class B_ION_soldier_UAV_01_lxWS_OCimport_01 : B_ION_soldier_UAV_01_lxWS { scope = 0; class EventHandlers; };
    class B_ION_soldier_UAV_01_lxWS_OCimport_02 : B_ION_soldier_UAV_01_lxWS_OCimport_01 { class EventHandlers; };

    class B_ION_medic_lxWS;
    class B_ION_medic_lxWS_OCimport_01 : B_ION_medic_lxWS { scope = 0; class EventHandlers; };
    class B_ION_medic_lxWS_OCimport_02 : B_ION_medic_lxWS_OCimport_01 { class EventHandlers; };

    class B_ION_shot_lxWS;
    class B_ION_shot_lxWS_OCimport_01 : B_ION_shot_lxWS { scope = 0; class EventHandlers; };
    class B_ION_shot_lxWS_OCimport_02 : B_ION_shot_lxWS_OCimport_01 { class EventHandlers; };

    class B_ION_Soldier_lxWS;
    class B_ION_Soldier_lxWS_OCimport_01 : B_ION_Soldier_lxWS { scope = 0; class EventHandlers; };
    class B_ION_Soldier_lxWS_OCimport_02 : B_ION_Soldier_lxWS_OCimport_01 { class EventHandlers; };

    class B_ION_Survivor_lxWS;
    class B_ION_Survivor_lxWS_OCimport_01 : B_ION_Survivor_lxWS { scope = 0; class EventHandlers; };
    class B_ION_Survivor_lxWS_OCimport_02 : B_ION_Survivor_lxWS_OCimport_01 { class EventHandlers; };

    class UGV_01_base_F;
    class UGV_01_base_F_OCimport_01 : UGV_01_base_F { scope = 0; class EventHandlers; };
    class UGV_01_base_F_OCimport_02 : UGV_01_base_F_OCimport_01 { class EventHandlers; };

    class UGV_01_rcws_base_F;
    class UGV_01_rcws_base_F_OCimport_01 : UGV_01_rcws_base_F { scope = 0; class EventHandlers; };
    class UGV_01_rcws_base_F_OCimport_02 : UGV_01_rcws_base_F_OCimport_01 { class EventHandlers; };

    class B_ION_soldier_UAV_02_lxWS;
    class B_ION_soldier_UAV_02_lxWS_OCimport_01 : B_ION_soldier_UAV_02_lxWS { scope = 0; class EventHandlers; };
    class B_ION_soldier_UAV_02_lxWS_OCimport_02 : B_ION_soldier_UAV_02_lxWS_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_01_command_base_lxWS;
    class APC_Wheeled_01_command_base_lxWS_OCimport_01 : APC_Wheeled_01_command_base_lxWS { scope = 0; class EventHandlers; };
    class APC_Wheeled_01_command_base_lxWS_OCimport_02 : APC_Wheeled_01_command_base_lxWS_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_02_hmg_base_lxws;
    class APC_Wheeled_02_hmg_base_lxws_OCimport_01 : APC_Wheeled_02_hmg_base_lxws { scope = 0; class EventHandlers; };
    class APC_Wheeled_02_hmg_base_lxws_OCimport_02 : APC_Wheeled_02_hmg_base_lxws_OCimport_01 { class EventHandlers; };

    class Heli_EC_01_base_RF;
    class Heli_EC_01_base_RF_OCimport_01 : Heli_EC_01_base_RF { scope = 0; class EventHandlers; };
    class Heli_EC_01_base_RF_OCimport_02 : Heli_EC_01_base_RF_OCimport_01 { class EventHandlers; };

    class O_Heli_Light_02_dynamicLoadout_F;
    class O_Heli_Light_02_dynamicLoadout_F_OCimport_01 : O_Heli_Light_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_Heli_Light_02_dynamicLoadout_F_OCimport_02 : O_Heli_Light_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Light_02_unarmed_F;
    class O_Heli_Light_02_unarmed_F_OCimport_01 : O_Heli_Light_02_unarmed_F { scope = 0; class EventHandlers; };
    class O_Heli_Light_02_unarmed_F_OCimport_02 : O_Heli_Light_02_unarmed_F_OCimport_01 { class EventHandlers; };

    class B_ION_Helipilot_lxWS;
    class B_ION_Helipilot_lxWS_OCimport_01 : B_ION_Helipilot_lxWS { scope = 0; class EventHandlers; };
    class B_ION_Helipilot_lxWS_OCimport_02 : B_ION_Helipilot_lxWS_OCimport_01 { class EventHandlers; };

    class B_Helipilot_F;
    class B_Helipilot_F_OCimport_01 : B_Helipilot_F { scope = 0; class EventHandlers; };
    class B_Helipilot_F_OCimport_02 : B_Helipilot_F_OCimport_01 { class EventHandlers; };

    class Offroad_01_armed_lxWS;
    class Offroad_01_armed_lxWS_OCimport_01 : Offroad_01_armed_lxWS { scope = 0; class EventHandlers; };
    class Offroad_01_armed_lxWS_OCimport_02 : Offroad_01_armed_lxWS_OCimport_01 { class EventHandlers; };

    class Offroad_01_base_lxWS;
    class Offroad_01_base_lxWS_OCimport_01 : Offroad_01_base_lxWS { scope = 0; class EventHandlers; };
    class Offroad_01_base_lxWS_OCimport_02 : Offroad_01_base_lxWS_OCimport_01 { class EventHandlers; };

    class Pickup_01_aat_base_rf;
    class Pickup_01_aat_base_rf_OCimport_01 : Pickup_01_aat_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_aat_base_rf_OCimport_02 : Pickup_01_aat_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_mmg_base_rf;
    class Pickup_01_mmg_base_rf_OCimport_01 : Pickup_01_mmg_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_mmg_base_rf_OCimport_02 : Pickup_01_mmg_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_rcws_base_rf;
    class Pickup_01_rcws_base_rf_OCimport_01 : Pickup_01_rcws_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_rcws_base_rf_OCimport_02 : Pickup_01_rcws_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_base_rf;
    class Pickup_01_base_rf_OCimport_01 : Pickup_01_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_base_rf_OCimport_02 : Pickup_01_base_rf_OCimport_01 { class EventHandlers; };

    class B_Quadbike_01_F;
    class B_Quadbike_01_F_OCimport_01 : B_Quadbike_01_F { scope = 0; class EventHandlers; };
    class B_Quadbike_01_F_OCimport_02 : B_Quadbike_01_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_GL_F;
    class B_Soldier_GL_F_OCimport_01 : B_Soldier_GL_F { scope = 0; class EventHandlers; };
    class B_Soldier_GL_F_OCimport_02 : B_Soldier_GL_F_OCimport_01 { class EventHandlers; };

    class B_soldier_F;
    class B_soldier_F_OCimport_01 : B_soldier_F { scope = 0; class EventHandlers; };
    class B_soldier_F_OCimport_02 : B_soldier_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_TL_F;
    class B_Soldier_TL_F_OCimport_01 : B_Soldier_TL_F { scope = 0; class EventHandlers; };
    class B_Soldier_TL_F_OCimport_02 : B_Soldier_TL_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_covered_F;
    class O_Truck_02_covered_F_OCimport_01 : O_Truck_02_covered_F { scope = 0; class EventHandlers; };
    class O_Truck_02_covered_F_OCimport_02 : O_Truck_02_covered_F_OCimport_01 { class EventHandlers; };

    class B_crew_F;
    class B_crew_F_OCimport_01 : B_crew_F { scope = 0; class EventHandlers; };
    class B_crew_F_OCimport_02 : B_crew_F_OCimport_01 { class EventHandlers; };

    class B_soldier_M_F;
    class B_soldier_M_F_OCimport_01 : B_soldier_M_F { scope = 0; class EventHandlers; };
    class B_soldier_M_F_OCimport_02 : B_soldier_M_F_OCimport_01 { class EventHandlers; };

    class B_medic_F;
    class B_medic_F_OCimport_01 : B_medic_F { scope = 0; class EventHandlers; };
    class B_medic_F_OCimport_02 : B_medic_F_OCimport_01 { class EventHandlers; };

    class B_soldier_AR_F;
    class B_soldier_AR_F_OCimport_01 : B_soldier_AR_F { scope = 0; class EventHandlers; };
    class B_soldier_AR_F_OCimport_02 : B_soldier_AR_F_OCimport_01 { class EventHandlers; };

    class B_soldier_LAT2_F;
    class B_soldier_LAT2_F_OCimport_01 : B_soldier_LAT2_F { scope = 0; class EventHandlers; };
    class B_soldier_LAT2_F_OCimport_02 : B_soldier_LAT2_F_OCimport_01 { class EventHandlers; };

    class B_ION_soldier_LAT2_lxWS;
    class B_ION_soldier_LAT2_lxWS_OCimport_01 : B_ION_soldier_LAT2_lxWS { scope = 0; class EventHandlers; };
    class B_ION_soldier_LAT2_lxWS_OCimport_02 : B_ION_soldier_LAT2_lxWS_OCimport_01 { class EventHandlers; };

    class B_soldier_UAV_F;
    class B_soldier_UAV_F_OCimport_01 : B_soldier_UAV_F { scope = 0; class EventHandlers; };
    class B_soldier_UAV_F_OCimport_02 : B_soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class UAV_01_base_F;
    class UAV_01_base_F_OCimport_01 : UAV_01_base_F { scope = 0; class EventHandlers; };
    class UAV_01_base_F_OCimport_02 : UAV_01_base_F_OCimport_01 { class EventHandlers; };

    class UAV_02_Base_lxWS;
    class UAV_02_Base_lxWS_OCimport_01 : UAV_02_Base_lxWS { scope = 0; class EventHandlers; };
    class UAV_02_Base_lxWS_OCimport_02 : UAV_02_Base_lxWS_OCimport_01 { class EventHandlers; };

    class qav_ripsaw_Mk44;
    class qav_ripsaw_Mk44_OCimport_01 : qav_ripsaw_Mk44 { scope = 0; class EventHandlers; };
    class qav_ripsaw_Mk44_OCimport_02 : qav_ripsaw_Mk44_OCimport_01 { class EventHandlers; };

    class Aegis_B_ION_Heli_Attack_04_F : Aegis_Heli_Attack_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-35 Superhind";
        side = 1;
        faction = "blu_ion_lxws";
        crew = "B_ION_Helipilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_ION_Heli_Transport_02_VIP_F : Aegis_Heli_Transport_02_VIP_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "EH-302 (Executive Transport)";
        side = 1;
        faction = "blu_ion_lxws";
        crew = "B_ION_Helipilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_ION_Pickup_HMG_RF : Pickup_01_hmg_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (HMG)";
        side = 1;
        faction = "blu_ion_lxws";
        crew = "B_ION_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_ION_Pickup_Minigun_RF : Pickup_01_minigun_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Minigun)";
        side = 1;
        faction = "blu_ion_lxws";
        crew = "B_ION_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_ION_Soldier_AR_tna_F : B_ION_soldier_AR_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Aegis_U_lxWS_ION_Casualtna_F";

        linkedItems[] = {"V_PlateCarrier2_rgr_noflag_F","lxWS_H_CapB_rvs_blk_ION","G_Combat_lxWS","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrier2_rgr_noflag_F","lxWS_H_CapB_rvs_blk_ION","G_Combat_lxWS","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_LMG_Mk200_khk_Holo_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_LMG_Mk200_khk_Holo_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_ION_Soldier_GL_tna_F : B_ION_Soldier_GL_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","G_Competitor","G_NATO_recon"};

        uniformClass = "Aegis_U_lxWS_ION_Casual_Hawaiian_2_F";

        linkedItems[] = {"V_PlateCarrier1_rgr_noflag_F","lxWS_H_CapB_rvs_blk_ION","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrier1_rgr_noflag_F","lxWS_H_CapB_rvs_blk_ION","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_XMS_GL_khk_ACO_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_XMS_GL_khk_ACO_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_ION_Soldier_Marksman_tna_F : B_ION_marksman_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","Head_Asian","G_Competitor","G_NATO_recon"};

        uniformClass = "Aegis_U_lxWS_ION_Casualtna_F";

        linkedItems[] = {"V_TacVest_grn","H_Headset_Tactical","Aegis_G_Condor_EyePro_F","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_Headset_Tactical","Aegis_G_Condor_EyePro_F","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_SCAR_khaki_Holo_BI_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_SCAR_khaki_Holo_BI_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_ION_Soldier_SG_tna_F : B_ION_Soldier_SG_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","G_Competitor","G_NATO_recon"};

        uniformClass = "Aegis_U_lxWS_ION_Casualtna_F";

        linkedItems[] = {"V_PlateCarrier1_blk","H_Cap_headphones_ion_lxws","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrier1_blk","H_Cap_headphones_ion_lxws","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_sgun_AA40_khk_Holo_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_sgun_AA40_khk_Holo_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"Aegis_20Rnd_12Gauge_AA40_Pellets_khk_lxWS","Aegis_8Rnd_12Gauge_AA40_Pellets_khk_lxWS","Aegis_8Rnd_12Gauge_AA40_Slug_khk_lxWS","Aegis_8Rnd_12Gauge_AA40_Slug_khk_lxWS","Aegis_8Rnd_12Gauge_AA40_Slug_khk_lxWS","Aegis_20Rnd_12Gauge_AA40_HE_khk_lxWS","Aegis_8Rnd_12Gauge_AA40_HE_khk_lxWS","Aegis_8Rnd_12Gauge_AA40_Smoke_khk_lxWS","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"Aegis_20Rnd_12Gauge_AA40_Pellets_khk_lxWS","Aegis_8Rnd_12Gauge_AA40_Pellets_khk_lxWS","Aegis_8Rnd_12Gauge_AA40_Slug_khk_lxWS","Aegis_8Rnd_12Gauge_AA40_Slug_khk_lxWS","Aegis_8Rnd_12Gauge_AA40_Slug_khk_lxWS","Aegis_20Rnd_12Gauge_AA40_HE_khk_lxWS","Aegis_8Rnd_12Gauge_AA40_HE_khk_lxWS","Aegis_8Rnd_12Gauge_AA40_Smoke_khk_lxWS","16Rnd_9x21_Mag_v2","16Rnd_9x21_Mag_v2","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_ION_Soldier_TL_tna_F : B_ION_TL_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "Aegis_U_lxWS_ION_Casualtna_F";

        linkedItems[] = {"V_PlateCarrier1_rgr_noflag_F","lxWS_H_Headset","G_Tactical_Clear","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrier1_rgr_noflag_F","lxWS_H_Headset","G_Tactical_Clear","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_XMS_M_khk_Holo_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_XMS_M_khk_Holo_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_ION_Soldier_UAV_01_tna_F : B_ION_soldier_UAV_01_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","Head_Asian","G_Competitor","G_NATO_recon"};

        uniformClass = "Aegis_U_lxWS_ION_Flanneltna_F";

        backpack = "ION_UAV_01_backpack_lxWS";

        linkedItems[] = {"V_TacVest_camo","H_Cap_blk_ION","G_Tactical_Clear","B_UavTerminal","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_camo","H_Cap_blk_ION","G_Tactical_Clear","B_UavTerminal","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_XMS_base_khk_ACO_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_XMS_base_khk_ACO_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"75Rnd_556x45_Stanag_lxWS","75Rnd_556x45_Stanag_lxWS","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"75Rnd_556x45_Stanag_lxWS","75Rnd_556x45_Stanag_lxWS","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_ION_Soldier_medic_tna_F : B_ION_medic_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","G_Competitor","G_NATO_recon"};

        uniformClass = "U_lxWS_ION_Casual5";

        backpack = "B_AssaultPack_rgr_Medic";

        linkedItems[] = {"V_TacVest_grn","H_Cap_headphones_ion_lxws","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_Cap_headphones_ion_lxws","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_XMS_base_khk_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_XMS_base_khk_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_ION_Soldier_shot_tna_F : B_ION_shot_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Specialist";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","G_Competitor","G_NATO_recon"};

        uniformClass = "Aegis_U_lxWS_ION_Flanneltna_F";

        linkedItems[] = {"V_PlateCarrier2_wdl","lxWS_H_PASGT_goggles_black_F","G_Shemag_oli","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrier2_wdl","lxWS_H_PASGT_goggles_black_F","G_Shemag_oli","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_XMS_Shot_khk_ACO_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_XMS_Shot_khk_ACO_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","6rnd_HE_Mag_lxWS","6rnd_HE_Mag_lxWS","6rnd_HE_Mag_lxWS","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6rnd_Smoke_Mag_lxWS","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","MiniGrenade","MiniGrenade"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","6rnd_HE_Mag_lxWS","6rnd_HE_Mag_lxWS","6rnd_HE_Mag_lxWS","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6rnd_Smoke_Mag_lxWS","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","MiniGrenade","MiniGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_ION_Soldier_tna_F : B_ION_Soldier_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","G_Competitor","G_NATO_recon"};

        uniformClass = "Aegis_U_lxWS_ION_Casual_Hawaiian_F";

        linkedItems[] = {"V_PlateCarrier2_rgr_noflag_F","H_Cap_blk_ION","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrier2_rgr_noflag_F","H_Cap_blk_ION","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_XMS_base_khk_ACO_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_XMS_base_khk_ACO_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"75Rnd_556x45_Stanag_lxWS","75Rnd_556x45_Stanag_lxWS","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"75Rnd_556x45_Stanag_lxWS","75Rnd_556x45_Stanag_lxWS","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_ION_Soldier_unarmed_F : B_ION_Survivor_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","G_Competitor","G_NATO_recon"};

        uniformClass = "Aegis_U_lxWS_ION_Casual_Hawaiian_2_F";

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

    class Aegis_B_ION_UGV_01_F : UGV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper";
        side = 1;
        faction = "blu_ion_lxws";
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

    class Aegis_B_ION_UGV_01_rcws_F : UGV_01_rcws_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper RCWS";
        side = 1;
        faction = "blu_ion_lxws";
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

    class Aegis_B_ION_soldier_UAV_02_F : B_ION_soldier_UAV_02_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AP-5)";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","Head_Asian","G_Competitor","G_NATO_recon"};

        uniformClass = "Aegis_U_lxWS_ION_Flanneltna_F";

        backpack = "ION_UAV_02_backpack_lxWS";

        linkedItems[] = {"V_TacVest_camo","H_Cap_blk_ION","G_Tactical_Clear","B_UavTerminal","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_camo","H_Cap_blk_ION","G_Tactical_Clear","B_UavTerminal","ItemSmartPhone","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_SMG_01_khk_HAMR_F","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_SMG_01_khk_HAMR_F","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_APC_Wheeled_01_command_lxWS : APC_Wheeled_01_command_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Badger IFV (Command)";
        side = 1;
        faction = "blu_ion_lxws";
        crew = "B_ION_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_APC_Wheeled_02_hmg_lxWS : APC_Wheeled_02_hmg_base_lxws_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar ARMA (HMG)";
        side = 1;
        faction = "blu_ion_lxws";
        crew = "B_ION_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_Heli_EC_01_RF : Heli_EC_01_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "H225 Super Puma (Transport)";
        side = 1;
        faction = "blu_ion_lxws";
        crew = "B_ION_Helipilot_RF";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_Heli_Light_02_dynamicLoadout_lxWS : O_Heli_Light_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka (UP)";
        side = 1;
        faction = "blu_ion_lxws";
        crew = "B_ION_Helipilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_Heli_Light_02_unarmed_lxWS : O_Heli_Light_02_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka (UP, Unarmed)";
        side = 1;
        faction = "blu_ion_lxws";
        crew = "B_ION_Helipilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_Helipilot_RF : B_ION_Helipilot_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","G_Competitor","G_NATO_recon"};

        uniformClass = "U_lxWS_ION_Casual3";

        linkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_Black_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_Black_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_PDW2000_r1_lxWS","Throw","Put"};
        respawnWeapons[] = {"hgun_PDW2000_r1_lxWS","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_Helipilot_lxWS : B_Helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","G_Competitor","G_NATO_recon"};

        uniformClass = "U_lxWS_ION_Casual3";

        linkedItems[] = {"G_Aviator","V_TacVest_blk","H_Cap_headphones","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"G_Aviator","V_TacVest_blk","H_Cap_headphones","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_PDW2000_r1_lxWS","Throw","Put"};
        respawnWeapons[] = {"hgun_PDW2000_r1_lxWS","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_Offroad_armed_lxWS : Offroad_01_armed_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Desert, HMG)";
        side = 1;
        faction = "blu_ion_lxws";
        crew = "B_ION_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_Offroad_lxWS : Offroad_01_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Desert)";
        side = 1;
        faction = "blu_ion_lxws";
        crew = "B_ION_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_Pickup_aat_rf : Pickup_01_aat_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (AA)";
        side = 1;
        faction = "blu_ion_lxws";
        crew = "B_ION_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_Pickup_mmg_rf : Pickup_01_mmg_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (MMG)";
        side = 1;
        faction = "blu_ion_lxws";
        crew = "B_ION_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_Pickup_rcws_rf : Pickup_01_rcws_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (RCWS)";
        side = 1;
        faction = "blu_ion_lxws";
        crew = "B_ION_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_Pickup_rf : Pickup_01_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 1;
        faction = "blu_ion_lxws";
        crew = "B_ION_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_Quadbike_01_lxWS : B_Quadbike_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 1;
        faction = "blu_ion_lxws";
        crew = "B_ION_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_Soldier_GL_lxWS : B_Soldier_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","G_Competitor","G_NATO_recon"};

        uniformClass = "U_BG_Guerilla2_1";

        linkedItems[] = {"V_PlateCarrier1_blk","lxWS_H_CapB_rvs_blk_ION","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrier1_blk","lxWS_H_CapB_rvs_blk_ION","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_XMS_GL_ACO_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_XMS_GL_ACO_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_Soldier_SG_lxWS : B_ION_Soldier_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","G_Competitor","G_NATO_recon"};

        uniformClass = "U_lxWS_ION_Casual6";

        linkedItems[] = {"V_PlateCarrier1_blk","H_Cap_headphones_ion_lxws","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrier1_blk","H_Cap_headphones_ion_lxws","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"sgun_aa40_Holosight_blk_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"sgun_aa40_Holosight_blk_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"20Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Smoke_lxWS","20Rnd_12Gauge_AA40_HE_lxWS","8Rnd_12Gauge_AA40_HE_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Smoke_lxWS","20Rnd_12Gauge_AA40_HE_lxWS","8Rnd_12Gauge_AA40_HE_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_Soldier_lxWS : B_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","G_Competitor","G_NATO_recon"};

        uniformClass = "U_lxWS_ION_Casual3";

        linkedItems[] = {"V_PlateCarrier2_blk","H_Cap_blk_ION","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","H_Cap_blk_ION","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_XMS_ACO_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_XMS_ACO_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"75Rnd_556x45_Stanag_lxWS","75Rnd_556x45_Stanag_lxWS","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"75Rnd_556x45_Stanag_lxWS","75Rnd_556x45_Stanag_lxWS","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_Survivor_lxWS : B_ION_Soldier_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","G_Competitor","G_NATO_recon"};

        uniformClass = "U_lxWS_ION_Casual3";

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

    class B_ION_TL_lxWS : B_Soldier_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_ION_Casual6";

        linkedItems[] = {"V_PlateCarrier1_blk","lxWS_H_Headset","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrier1_blk","lxWS_H_Headset","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_XMS_M_Holosight_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_XMS_M_Holosight_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_Truck_02_covered_lxWS : O_Truck_02_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport (covered)";
        side = 1;
        faction = "blu_ion_lxws";
        crew = "B_ION_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_crew_lxWS : B_crew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_BG_Guerilla2_1";

        linkedItems[] = {"V_TacVest_blk","lxWS_H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_blk","lxWS_H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_03C_TR_black","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"SMG_03C_TR_black","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_marksman_lxWS : B_soldier_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","Head_Asian","G_Competitor","G_NATO_recon"};

        uniformClass = "U_lxWS_ION_Casual6";

        linkedItems[] = {"V_TacVest_khk","lxWS_H_Bandanna_blk_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","lxWS_H_Bandanna_blk_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_EBR_blk_HAMR_bpd_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"srifle_EBR_blk_HAMR_bpd_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","20Rnd_762x51_Mag_blk_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_medic_lxWS : B_medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","G_Competitor","G_NATO_recon"};

        uniformClass = "U_lxWS_ION_Casual5";

        backpack = "B_AssaultPack_rgr_Medic";

        linkedItems[] = {"V_TacVest_khk","H_Cap_blk_ION","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_Cap_blk_ION","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_XMS_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_XMS_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_shot_lxWS : B_ION_Soldier_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Specialist";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","G_Competitor","G_NATO_recon"};

        uniformClass = "U_lxWS_ION_Casual2";

        linkedItems[] = {"V_lxWS_PlateCarrier2_desert","lxWS_H_PASGT_goggles_black_F","ItemMotionSensor_lxWS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_PlateCarrier2_desert","lxWS_H_PASGT_goggles_black_F","ItemMotionSensor_lxWS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_XMS_Shot_ACO_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_XMS_Shot_ACO_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","6rnd_HE_Mag_lxWS","6rnd_HE_Mag_lxWS","6rnd_HE_Mag_lxWS","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6rnd_Smoke_Mag_lxWS","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","MiniGrenade","MiniGrenade"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","6rnd_HE_Mag_lxWS","6rnd_HE_Mag_lxWS","6rnd_HE_Mag_lxWS","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6rnd_Smoke_Mag_lxWS","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","MiniGrenade","MiniGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_soldier_AR_lxWS : B_soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_ION_Casual6";

        linkedItems[] = {"V_PlateCarrier2_blk","lxWS_H_CapB_rvs_blk_ION","G_Combat_lxWS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrier2_blk","lxWS_H_CapB_rvs_blk_ION","G_Combat_lxWS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"LMG_MK200_black_Holosight_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"LMG_MK200_black_Holosight_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_soldier_LAT2_lxWS : B_soldier_LAT2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light AT)";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","Head_Asian","G_Competitor","G_NATO_recon"};

        uniformClass = "U_lxWS_ION_Casual5";

        backpack = "B_AssaultPack_blk_LAT2_lxWS";

        linkedItems[] = {"V_PlateCarrier1_blk","lxWS_H_CapB_rvs_blk_ION","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrier1_blk","lxWS_H_CapB_rvs_blk_ION","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_XMS_lxWS","hgun_P07_blk_F","launch_MRAWS_olive_F","Throw","Put"};
        respawnWeapons[] = {"arifle_XMS_lxWS","hgun_P07_blk_F","launch_MRAWS_olive_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_soldier_LAT_RF : B_ION_soldier_LAT2_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Launcher)";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","Head_Asian","G_Competitor","G_NATO_recon"};

        uniformClass = "U_lxWS_ION_Casual5";

        backpack = "B_DuffleBag_Black_NoLogo_LAT_RF";

        linkedItems[] = {"V_PlateCarrier1_blk","lxWS_H_CapB_rvs_blk_ION","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrier1_blk","lxWS_H_CapB_rvs_blk_ION","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_XMS_Base_lxWS","hgun_Glock19_auto_RF","launch_PSRL1_PWS_black_RF","Throw","Put"};
        respawnWeapons[] = {"arifle_XMS_Base_lxWS","hgun_Glock19_auto_RF","launch_PSRL1_PWS_black_RF","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","33Rnd_9x19_Mag_RF","33Rnd_9x19_Mag_RF","33Rnd_9x19_Mag_RF","PSRL1_AT_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","33Rnd_9x19_Mag_RF","33Rnd_9x19_Mag_RF","33Rnd_9x19_Mag_RF","PSRL1_AT_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_soldier_UAV_01_lxWS : B_soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","Head_Asian","G_Competitor","G_NATO_recon"};

        uniformClass = "U_lxWS_ION_Casual4";

        backpack = "ION_UAV_01_backpack_lxWS";

        linkedItems[] = {"V_TacVest_blk","H_Cap_blk_ION","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal"};
        respawnlinkedItems[] = {"V_TacVest_blk","H_Cap_blk_ION","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal"};

        weapons[] = {"arifle_XMS_ACO_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_XMS_ACO_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"75Rnd_556x45_Stanag_lxWS","75Rnd_556x45_Stanag_lxWS","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"75Rnd_556x45_Stanag_lxWS","75Rnd_556x45_Stanag_lxWS","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_ION_soldier_UAV_02_lxWS : B_ION_soldier_UAV_01_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AP-5)";
        side = 1;
        faction = "blu_ion_lxws";

        identityTypes[] = {"LanguageENGB_F","LanguageENG_F","Head_Euro","Head_NATO","Head_Asian","G_Competitor","G_NATO_recon"};

        uniformClass = "U_lxWS_ION_Casual4";

        backpack = "ION_UAV_02_backpack_lxWS";

        linkedItems[] = {"V_TacVest_blk","H_Cap_blk_ION","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal"};
        respawnlinkedItems[] = {"V_TacVest_blk","H_Cap_blk_ION","ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal"};

        weapons[] = {"SMG_01_Hamr_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"SMG_01_Hamr_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ION_UAV_01_lxWS : UAV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR-2 Darter";
        side = 1;
        faction = "blu_ion_lxws";
        crew = "lxWS_B_ION_UAV_AI_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ION_UAV_02_lxWS : UAV_02_Base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AP-5 Bustard";
        side = 1;
        faction = "blu_ion_lxws";
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

    class qav_b_ion_ripsaw_Mk44 : qav_ripsaw_Mk44_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M6A Ripsaw (Mk44)";
        side = 1;
        faction = "blu_ion_lxws";
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
        class BLU_ION_lxWS {
            class Infantry {
                class B_ION_InfSentry_lxWS {
                    name = "Sentry";
                    side = 1;
                    faction = "BLU_ION_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_ION_Soldier_GL_lxWS";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_ION_Soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class B_ION_InfSquad_lxWS {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "BLU_ION_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_ION_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_ION_Soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_ION_soldier_LAT2_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_ION_marksman_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_ION_Soldier_GL_lxWS";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_ION_soldier_AR_lxWS";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_ION_shot_lxWS";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_ION_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class B_ION_InfTeam_lxWS {
                    name = "Fire Team";
                    side = 1;
                    faction = "BLU_ION_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_ION_TL_lxWS";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_ION_soldier_AR_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_ION_Soldier_GL_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_ION_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry_tna {
                class Aegis_B_ION_InfSentry_tna_lxWS {
                    name = "Sentry";
                    side = 1;
                    faction = "BLU_ION_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_ION_Soldier_GL_tna_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_ION_Soldier_tna_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Aegis_B_ION_InfSquad_tna_lxWS {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "BLU_ION_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_ION_Soldier_TL_tna_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_ION_Soldier_tna_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_ION_Soldier_AR_tna_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_ION_Soldier_Marksman_tna_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_ION_Soldier_GL_tna_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_ION_Soldier_tna_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_B_ION_Soldier_shot_tna_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_B_ION_Soldier_medic_tna_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Aegis_B_ION_InfTeam_tna_lxWS {
                    name = "Fire Team";
                    side = 1;
                    faction = "BLU_ION_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_B_ION_Soldier_TL_tna_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_ION_Soldier_AR_tna_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_ION_Soldier_GL_tna_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_ION_Soldier_medic_tna_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Motorized {
                class B_ION_MotInf_Reinforce_lxWS {
                    name = "Motorized Reinforcements";
                    side = 1;
                    faction = "BLU_ION_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_ION_Offroad_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_ION_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_ION_Soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_ION_soldier_AR_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_ION_marksman_lxWS";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_ION_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
                class B_ION_MotInf_Team_lxWS {
                    name = "Motorized Team";
                    side = 1;
                    faction = "BLU_ION_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_ION_Offroad_armed_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_ION_Soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
            };
            class Motorized_tna {
                class Aegis_B_ION_MotInf_Reinforce_tna_lxWS {
                    name = "Motorized Reinforcements";
                    side = 1;
                    faction = "BLU_ION_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_ION_Offroad_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_ION_Soldier_TL_tna_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_B_ION_Soldier_tna_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_B_ION_Soldier_AR_tna_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_B_ION_Soldier_Marksman_tna_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_B_ION_Soldier_medic_tna_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
                class Aegis_B_ION_MotInf_Team_tna_lxWS {
                    name = "Motorized Team";
                    side = 1;
                    faction = "BLU_ION_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_ION_Offroad_armed_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_B_ION_Soldier_tna_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
            };
        };
    };
};
