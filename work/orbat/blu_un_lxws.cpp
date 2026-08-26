//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class BLU_UN_lxWS {
        displayName = "UNA";
        side = 1;
        priority = 3;
        icon = "\lxws\data_f_lxws\img\ui\cfgFactionClasses_UN_ca.paa";
        flag = "\a3\data_f\Flags\flag_uno_co.paa";
    };
};

class CfgVehicles {

    class B_UN_Helipilot_lxWS;
    class B_UN_Helipilot_lxWS_OCimport_01 : B_UN_Helipilot_lxWS { scope = 0; class EventHandlers; };
    class B_UN_Helipilot_lxWS_OCimport_02 : B_UN_Helipilot_lxWS_OCimport_01 { class EventHandlers; };

    class Aegis_Heli_Transport_02_Heavy_base_F;
    class Aegis_Heli_Transport_02_Heavy_base_F_OCimport_01 : Aegis_Heli_Transport_02_Heavy_base_F { scope = 0; class EventHandlers; };
    class Aegis_Heli_Transport_02_Heavy_base_F_OCimport_02 : Aegis_Heli_Transport_02_Heavy_base_F_OCimport_01 { class EventHandlers; };

    class Aegis_Heli_Transport_02_VIP_base_F;
    class Aegis_Heli_Transport_02_VIP_base_F_OCimport_01 : Aegis_Heli_Transport_02_VIP_base_F { scope = 0; class EventHandlers; };
    class Aegis_Heli_Transport_02_VIP_base_F_OCimport_02 : Aegis_Heli_Transport_02_VIP_base_F_OCimport_01 { class EventHandlers; };

    class I_MBT_03_cannon_F;
    class I_MBT_03_cannon_F_OCimport_01 : I_MBT_03_cannon_F { scope = 0; class EventHandlers; };
    class I_MBT_03_cannon_F_OCimport_02 : I_MBT_03_cannon_F_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_02_hmg_base_lxws;
    class APC_Wheeled_02_hmg_base_lxws_OCimport_01 : APC_Wheeled_02_hmg_base_lxws { scope = 0; class EventHandlers; };
    class APC_Wheeled_02_hmg_base_lxws_OCimport_02 : APC_Wheeled_02_hmg_base_lxws_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_02_unarmed_base_lxws;
    class APC_Wheeled_02_unarmed_base_lxws_OCimport_01 : APC_Wheeled_02_unarmed_base_lxws { scope = 0; class EventHandlers; };
    class APC_Wheeled_02_unarmed_base_lxws_OCimport_02 : APC_Wheeled_02_unarmed_base_lxws_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_01_command_base_lxWS;
    class APC_Wheeled_01_command_base_lxWS_OCimport_01 : APC_Wheeled_01_command_base_lxWS { scope = 0; class EventHandlers; };
    class APC_Wheeled_01_command_base_lxWS_OCimport_02 : APC_Wheeled_01_command_base_lxWS_OCimport_01 { class EventHandlers; };

    class B_UN_soldier_AR_lxWS;
    class B_UN_soldier_AR_lxWS_OCimport_01 : B_UN_soldier_AR_lxWS { scope = 0; class EventHandlers; };
    class B_UN_soldier_AR_lxWS_OCimport_02 : B_UN_soldier_AR_lxWS_OCimport_01 { class EventHandlers; };

    class Heli_EC_01A_military_base_RF;
    class Heli_EC_01A_military_base_RF_OCimport_01 : Heli_EC_01A_military_base_RF { scope = 0; class EventHandlers; };
    class Heli_EC_01A_military_base_RF_OCimport_02 : Heli_EC_01A_military_base_RF_OCimport_01 { class EventHandlers; };

    class Heli_Transport_02_base_F;
    class Heli_Transport_02_base_F_OCimport_01 : Heli_Transport_02_base_F { scope = 0; class EventHandlers; };
    class Heli_Transport_02_base_F_OCimport_02 : Heli_Transport_02_base_F_OCimport_01 { class EventHandlers; };

    class B_Helipilot_F;
    class B_Helipilot_F_OCimport_01 : B_Helipilot_F { scope = 0; class EventHandlers; };
    class B_Helipilot_F_OCimport_02 : B_Helipilot_F_OCimport_01 { class EventHandlers; };

    class B_MRAP_01_F;
    class B_MRAP_01_F_OCimport_01 : B_MRAP_01_F { scope = 0; class EventHandlers; };
    class B_MRAP_01_F_OCimport_02 : B_MRAP_01_F_OCimport_01 { class EventHandlers; };

    class Offroad_01_armor_base_lxWS;
    class Offroad_01_armor_base_lxWS_OCimport_01 : Offroad_01_armor_base_lxWS { scope = 0; class EventHandlers; };
    class Offroad_01_armor_base_lxWS_OCimport_02 : Offroad_01_armor_base_lxWS_OCimport_01 { class EventHandlers; };

    class Offroad_01_base_lxWS;
    class Offroad_01_base_lxWS_OCimport_01 : Offroad_01_base_lxWS { scope = 0; class EventHandlers; };
    class Offroad_01_base_lxWS_OCimport_02 : Offroad_01_base_lxWS_OCimport_01 { class EventHandlers; };

    class Pickup_01_mmg_base_rf;
    class Pickup_01_mmg_base_rf_OCimport_01 : Pickup_01_mmg_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_mmg_base_rf_OCimport_02 : Pickup_01_mmg_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_base_rf;
    class Pickup_01_base_rf_OCimport_01 : Pickup_01_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_base_rf_OCimport_02 : Pickup_01_base_rf_OCimport_01 { class EventHandlers; };

    class B_Soldier_GL_F;
    class B_Soldier_GL_F_OCimport_01 : B_Soldier_GL_F { scope = 0; class EventHandlers; };
    class B_Soldier_GL_F_OCimport_02 : B_Soldier_GL_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_TL_F;
    class B_Soldier_TL_F_OCimport_01 : B_Soldier_TL_F { scope = 0; class EventHandlers; };
    class B_Soldier_TL_F_OCimport_02 : B_Soldier_TL_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_lite_F;
    class B_Soldier_lite_F_OCimport_01 : B_Soldier_lite_F { scope = 0; class EventHandlers; };
    class B_Soldier_lite_F_OCimport_02 : B_Soldier_lite_F_OCimport_01 { class EventHandlers; };

    class B_soldier_F;
    class B_soldier_F_OCimport_01 : B_soldier_F { scope = 0; class EventHandlers; };
    class B_soldier_F_OCimport_02 : B_soldier_F_OCimport_01 { class EventHandlers; };

    class B_UN_Soldier_lxWS;
    class B_UN_Soldier_lxWS_OCimport_01 : B_UN_Soldier_lxWS { scope = 0; class EventHandlers; };
    class B_UN_Soldier_lxWS_OCimport_02 : B_UN_Soldier_lxWS_OCimport_01 { class EventHandlers; };

    class B_Truck_01_Repair_F;
    class B_Truck_01_Repair_F_OCimport_01 : B_Truck_01_Repair_F { scope = 0; class EventHandlers; };
    class B_Truck_01_Repair_F_OCimport_02 : B_Truck_01_Repair_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_ammo_F;
    class B_Truck_01_ammo_F_OCimport_01 : B_Truck_01_ammo_F { scope = 0; class EventHandlers; };
    class B_Truck_01_ammo_F_OCimport_02 : B_Truck_01_ammo_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_box_F;
    class B_Truck_01_box_F_OCimport_01 : B_Truck_01_box_F { scope = 0; class EventHandlers; };
    class B_Truck_01_box_F_OCimport_02 : B_Truck_01_box_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_covered_F;
    class B_Truck_01_covered_F_OCimport_01 : B_Truck_01_covered_F { scope = 0; class EventHandlers; };
    class B_Truck_01_covered_F_OCimport_02 : B_Truck_01_covered_F_OCimport_01 { class EventHandlers; };

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

    class B_crew_F;
    class B_crew_F_OCimport_01 : B_crew_F { scope = 0; class EventHandlers; };
    class B_crew_F_OCimport_02 : B_crew_F_OCimport_01 { class EventHandlers; };

    class B_engineer_F;
    class B_engineer_F_OCimport_01 : B_engineer_F { scope = 0; class EventHandlers; };
    class B_engineer_F_OCimport_02 : B_engineer_F_OCimport_01 { class EventHandlers; };

    class B_medic_F;
    class B_medic_F_OCimport_01 : B_medic_F { scope = 0; class EventHandlers; };
    class B_medic_F_OCimport_02 : B_medic_F_OCimport_01 { class EventHandlers; };

    class B_officer_F;
    class B_officer_F_OCimport_01 : B_officer_F { scope = 0; class EventHandlers; };
    class B_officer_F_OCimport_02 : B_officer_F_OCimport_01 { class EventHandlers; };

    class B_soldier_AR_F;
    class B_soldier_AR_F_OCimport_01 : B_soldier_AR_F { scope = 0; class EventHandlers; };
    class B_soldier_AR_F_OCimport_02 : B_soldier_AR_F_OCimport_01 { class EventHandlers; };

    class B_soldier_LAT2_F;
    class B_soldier_LAT2_F_OCimport_01 : B_soldier_LAT2_F { scope = 0; class EventHandlers; };
    class B_soldier_LAT2_F_OCimport_02 : B_soldier_LAT2_F_OCimport_01 { class EventHandlers; };

    class B_UN_soldier_LAT2_lxWS;
    class B_UN_soldier_LAT2_lxWS_OCimport_01 : B_UN_soldier_LAT2_lxWS { scope = 0; class EventHandlers; };
    class B_UN_soldier_LAT2_lxWS_OCimport_02 : B_UN_soldier_LAT2_lxWS_OCimport_01 { class EventHandlers; };

    class B_soldier_repair_F;
    class B_soldier_repair_F_OCimport_01 : B_soldier_repair_F { scope = 0; class EventHandlers; };
    class B_soldier_repair_F_OCimport_02 : B_soldier_repair_F_OCimport_01 { class EventHandlers; };

    class EF_Gyra_Antiair_Base;
    class EF_Gyra_Antiair_Base_OCimport_01 : EF_Gyra_Antiair_Base { scope = 0; class EventHandlers; };
    class EF_Gyra_Antiair_Base_OCimport_02 : EF_Gyra_Antiair_Base_OCimport_01 { class EventHandlers; };

    class EF_Gyra_Armed_Base;
    class EF_Gyra_Armed_Base_OCimport_01 : EF_Gyra_Armed_Base { scope = 0; class EventHandlers; };
    class EF_Gyra_Armed_Base_OCimport_02 : EF_Gyra_Armed_Base_OCimport_01 { class EventHandlers; };

    class EF_Gyra_HMG_Base;
    class EF_Gyra_HMG_Base_OCimport_01 : EF_Gyra_HMG_Base { scope = 0; class EventHandlers; };
    class EF_Gyra_HMG_Base_OCimport_02 : EF_Gyra_HMG_Base_OCimport_01 { class EventHandlers; };

    class EF_Gyra_Mortar_Base;
    class EF_Gyra_Mortar_Base_OCimport_01 : EF_Gyra_Mortar_Base { scope = 0; class EventHandlers; };
    class EF_Gyra_Mortar_Base_OCimport_02 : EF_Gyra_Mortar_Base_OCimport_01 { class EventHandlers; };

    class EF_Gyra_Unarmed_Base;
    class EF_Gyra_Unarmed_Base_OCimport_01 : EF_Gyra_Unarmed_Base { scope = 0; class EventHandlers; };
    class EF_Gyra_Unarmed_Base_OCimport_02 : EF_Gyra_Unarmed_Base_OCimport_01 { class EventHandlers; };

    class Aegis_B_UN_Pilot_lxWS : B_UN_Helipilot_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 1;
        faction = "blu_un_lxws";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Tanoan","Head_African","G_NATO_default"};

        uniformClass = "U_lxWS_UN_Pilot";

        backpack = "B_Parachute";

        linkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_01_Holo_F","Throw","Put"};
        respawnWeapons[] = {"SMG_01_Holo_F","Throw","Put"};

        magazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_UN_lxWS_Heli_Transport_02_Heavy_F : Aegis_Heli_Transport_02_Heavy_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH-49E Mohawk";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_Helipilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_B_UN_lxWS_Heli_Transport_02_VIP_F : Aegis_Heli_Transport_02_VIP_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "EH-302 (Executive Transport)";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_Helipilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_MBT_03_cannon_lxWS : I_MBT_03_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Leopard 2SG";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNA_APC_Wheeled_02_hmg_lxWS : APC_Wheeled_02_hmg_base_lxws_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar ARMA (HMG)";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNA_APC_Wheeled_02_unarmed_lxWS : APC_Wheeled_02_unarmed_base_lxws_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar ARMA (Unarmed)";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_APC_Wheeled_01_command_lxWS : APC_Wheeled_01_command_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Badger IFV (Command)";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_HeavyGunner_lxWS : B_UN_soldier_AR_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 1;
        faction = "blu_un_lxws";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Tanoan","Head_African"};

        uniformClass = "U_lxWS_UN_Camo3";

        linkedItems[] = {"V_lxWS_UN_Vest_F","lxWS_H_PASGT_goggles_UN_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Bandanna_tan"};
        respawnlinkedItems[] = {"V_lxWS_UN_Vest_F","lxWS_H_PASGT_goggles_UN_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Bandanna_tan"};

        weapons[] = {"LMG_S77_Compact_MRCO_lxWS","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"LMG_S77_Compact_MRCO_lxWS","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_Tracer_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_lxWS","100Rnd_762x51_S77_Red_Tracer_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_Heli_EC_01A_military_RF : Heli_EC_01A_military_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "H215 Super Puma (Unarmed)";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_Helipilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_Heli_Transport_02_lxWS : Heli_Transport_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AW101 Merlin";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_Helipilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_Helipilot_lxWS : B_Helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "blu_un_lxws";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Tanoan","Head_African","G_NATO_default"};

        uniformClass = "U_lxWS_UN_Pilot";

        linkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_blk","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_01_Holo_F","Throw","Put"};
        respawnWeapons[] = {"SMG_01_Holo_F","Throw","Put"};

        magazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_MRAP_01_lxWS : B_MRAP_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_Offroad_Armor_lxWS : Offroad_01_armor_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (UP)";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_Soldier_lite_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_Offroad_lxWS : Offroad_01_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Desert)";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_Soldier_lite_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_Pickup_mmg_rf : Pickup_01_mmg_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (MMG)";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_Soldier_lite_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_Pickup_rf : Pickup_01_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_Soldier_lite_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_Soldier_GL_lxWS : B_Soldier_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "blu_un_lxws";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Tanoan","Head_African"};

        uniformClass = "U_lxWS_UN_Camo2";

        linkedItems[] = {"V_lxWS_UN_Vest_F","lxWS_H_PASGT_goggles_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_UN_Vest_F","lxWS_H_PASGT_goggles_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_VelkoR5_GL_lxWS","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_VelkoR5_GL_lxWS","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_Soldier_TL_lxWS : B_Soldier_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "blu_un_lxws";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Tanoan","Head_African"};

        uniformClass = "U_lxWS_UN_Camo3";

        linkedItems[] = {"V_lxWS_UN_Vest_F","lxWS_H_PASGT_goggles_UN_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_UN_Vest_F","lxWS_H_PASGT_goggles_UN_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Velko_50rnd_MRCO_lxWS","hgun_ACPC2_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_Velko_50rnd_MRCO_lxWS","hgun_ACPC2_F","Throw","Put","Binocular"};

        magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","50Rnd_556x45_Velko_reload_tracer_red_lxWS","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","50Rnd_556x45_Velko_reload_tracer_red_lxWS","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_Soldier_lite_lxWS : B_Soldier_lite_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 1;
        faction = "blu_un_lxws";

        identityTypes[] = {"LanguageENG_F","Head_NATO","G_NATO_default"};

        uniformClass = "U_lxWS_UN_Camo3";

        linkedItems[] = {"V_TacVest_khk","lxWS_H_ssh40_un","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","lxWS_H_ssh40_un","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Velko_50rnd_lxWS","Throw","Put"};
        respawnWeapons[] = {"arifle_Velko_50rnd_lxWS","Throw","Put"};

        magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","50Rnd_556x45_Velko_reload_tracer_red_lxWS","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","50Rnd_556x45_Velko_reload_tracer_red_lxWS","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_Soldier_lxWS : B_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "blu_un_lxws";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Tanoan","Head_African"};

        uniformClass = "U_lxWS_UN_Camo3";

        linkedItems[] = {"V_lxWS_UN_Vest_F","lxWS_H_ssh40_un","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_UN_Vest_F","lxWS_H_ssh40_un","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Velko_50rnd_ACO_lxWS","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Velko_50rnd_ACO_lxWS","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","50Rnd_556x45_Velko_reload_tracer_red_lxWS","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","50Rnd_556x45_Velko_reload_tracer_red_lxWS","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_Soldier_unarmed_lxWS : B_UN_Soldier_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 1;
        faction = "blu_un_lxws";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Tanoan","Head_African"};

        uniformClass = "U_lxWS_UN_Camo3";

        linkedItems[] = {"V_lxWS_UN_Vest_F","lxWS_H_ssh40_un","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_UN_Vest_F","lxWS_H_ssh40_un","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class B_UN_Truck_01_Repair_lxWS : B_Truck_01_Repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Repair";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_Truck_01_ammo_lxWS : B_Truck_01_ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Ammo";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_Truck_01_box_lxWS : B_Truck_01_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Container";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_Truck_01_covered_lxWS : B_Truck_01_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport (covered)";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_Truck_01_fuel_lxWS : B_Truck_01_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Fuel";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_Truck_01_medical_lxWS : B_Truck_01_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Medical";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_Truck_01_mover_lxWS : B_Truck_01_mover_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_Truck_01_transport_lxWS : B_Truck_01_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_Soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_crew_lxWS : B_crew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "blu_un_lxws";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Tanoan","Head_African","G_NATO_default"};

        uniformClass = "U_lxWS_UN_Camo2";

        linkedItems[] = {"V_lxWS_UN_Vest_F","lxWS_H_HelmetCrew_Blue","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_UN_Vest_F","lxWS_H_HelmetCrew_Blue","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_VelkoR5_lxWS","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_VelkoR5_lxWS","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_engineer_lxWS : B_engineer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "blu_un_lxws";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Tanoan","Head_African"};

        uniformClass = "U_lxWS_UN_Camo2";

        backpack = "B_Kitbag_mcamo_Eng";

        linkedItems[] = {"V_lxWS_UN_Vest_Lite_F","lxWS_H_PASGT_goggles_UN_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_UN_Vest_Lite_F","lxWS_H_PASGT_goggles_UN_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Velko_50rnd_ACO_lxWS","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Velko_50rnd_ACO_lxWS","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"50Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"50Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_medic_lxWS : B_medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "blu_un_lxws";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Tanoan","Head_African"};

        uniformClass = "U_lxWS_UN_Camo3";

        backpack = "B_AssaultPack_rgr_Medic";

        linkedItems[] = {"V_lxWS_UN_Vest_Lite_F","lxWS_H_ssh40_un","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_UN_Vest_Lite_F","lxWS_H_ssh40_un","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Velko_lxWS","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Velko_lxWS","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_officer_lxWS : B_officer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "blu_un_lxws";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Tanoan","Head_African"};

        uniformClass = "U_lxWS_UN_Camo1";

        linkedItems[] = {"V_lxWS_UN_Vest_Lite_F","lxWS_H_Beret_Colonel","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_UN_Vest_Lite_F","lxWS_H_Beret_Colonel","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_VelkoR5_lxWS","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_VelkoR5_lxWS","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_soldier_AR_lxWS : B_soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "blu_un_lxws";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Tanoan","Head_African"};

        uniformClass = "U_lxWS_UN_Camo3";

        linkedItems[] = {"V_lxWS_UN_Vest_F","lxWS_H_PASGT_goggles_UN_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_UN_Vest_F","lxWS_H_PASGT_goggles_UN_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"LMG_Mk200_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Mk200_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_soldier_LAT2_lxWS : B_soldier_LAT2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light AT)";
        side = 1;
        faction = "blu_un_lxws";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Tanoan","Head_African"};

        uniformClass = "U_lxWS_UN_Camo3";

        backpack = "B_FieldPack_cbr_LAT2_lxWS";

        linkedItems[] = {"V_lxWS_UN_Vest_F","lxWS_H_ssh40_un","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_UN_Vest_F","lxWS_H_ssh40_un","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Velko_50rnd_ACO_lxWS","hgun_ACPC2_F","launch_RPG32_tan_lxWS","Throw","Put"};
        respawnWeapons[] = {"arifle_Velko_50rnd_ACO_lxWS","hgun_ACPC2_F","launch_RPG32_tan_lxWS","Throw","Put"};

        magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","50Rnd_556x45_Velko_reload_tracer_red_lxWS","RPG32_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","50Rnd_556x45_Velko_reload_tracer_red_lxWS","RPG32_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_soldier_LAT_rf : B_UN_soldier_LAT2_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Launcher)";
        side = 1;
        faction = "blu_un_lxws";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Tanoan","Head_African"};

        uniformClass = "U_lxWS_UN_Camo3";

        backpack = "B_Kitbag_LAT_cbr_RF";

        linkedItems[] = {"V_lxWS_UN_Vest_F","lxWS_H_ssh40_un","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_UN_Vest_F","lxWS_H_ssh40_un","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Velko_50rnd_ACO_lxWS","hgun_ACPC2_F","launch_PSRL1_sand_RF","Throw","Put"};
        respawnWeapons[] = {"arifle_Velko_50rnd_ACO_lxWS","hgun_ACPC2_F","launch_PSRL1_sand_RF","Throw","Put"};

        magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","50Rnd_556x45_Velko_reload_tracer_red_lxWS","PSRL1_AT_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","50Rnd_556x45_Velko_reload_tracer_red_lxWS","PSRL1_AT_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_soldier_repair_lxWS : B_soldier_repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 1;
        faction = "blu_un_lxws";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Tanoan","Head_African","G_NATO_default"};

        uniformClass = "U_lxWS_UN_Camo3";

        backpack = "B_AssaultPack_rgr_Repair";

        linkedItems[] = {"V_lxWS_UN_Vest_Lite_F","lxWS_H_PASGT_basic_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_UN_Vest_Lite_F","lxWS_H_PASGT_basic_UN_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_VelkoR5_Holosight_blk_lxWS","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_VelkoR5_Holosight_blk_lxWS","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","35Rnd_556x45_Velko_reload_tracer_red_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UN_survivor_lxWS : B_UN_Soldier_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";
        side = 1;
        faction = "blu_un_lxws";

        identityTypes[] = {"LanguageENGFRE_F","Head_NATO","Head_Tanoan","Head_African"};

        uniformClass = "U_lxWS_UN_Camo3";

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

    class EF_B_Gyra_Antiair_UNA : EF_Gyra_Antiair_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra AA";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Gyra_Armed_UNA : EF_Gyra_Armed_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra IFV";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Gyra_HMG_UNA : EF_Gyra_HMG_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra HMG";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Gyra_Mortar_UNA : EF_Gyra_Mortar_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra Mortar";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_B_Gyra_UNA : EF_Gyra_Unarmed_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra";
        side = 1;
        faction = "blu_un_lxws";
        crew = "B_UN_crew_lxWS";

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
        class BLU_UN_lxWS {
            class Armored {
                class BUNA_TankPlatoon {
                    name = "Tank Platoon";
                    side = 1;
                    faction = "BLU_UN_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

                    class Unit0 {
                        vehicle = "B_MBT_03_cannon_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_MBT_03_cannon_lxWS";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "B_MBT_03_cannon_lxWS";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "B_MBT_03_cannon_lxWS";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class BUNA_TankSection {
                    name = "Tank Section";
                    side = 1;
                    faction = "BLU_UN_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

                    class Unit0 {
                        vehicle = "B_MBT_03_cannon_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_MBT_03_cannon_lxWS";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class BUNA_InfSentry_lxWS {
                    name = "Sentry";
                    side = 1;
                    faction = "BLU_UN_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_UN_Soldier_lxWS";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_UN_Soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class BUNA_InfSquad_lxWS {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "BLU_UN_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 {
                        vehicle = "B_UN_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_UN_Soldier_GL_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_UN_soldier_LAT2_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_UN_Soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_UN_Soldier_lxWS";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_UN_soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_UN_HeavyGunner_lxWS";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_UN_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
            };
            class Mechanized {
                class BUNA_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "BLU_UN_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "B_UN_APC_Wheeled_01_command_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_UN_officer_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_UN_Soldier_GL_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_UN_Soldier_lxWS";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_UN_Soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_UN_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_UN_soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_UN_HeavyGunner_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "B_UN_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class BUNA_MechInf_Support {
                    name = "Mechanized Support Squad";
                    side = 1;
                    faction = "BLU_UN_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "B_UN_APC_Wheeled_01_command_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_UN_officer_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_UN_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "B_UN_soldier_repair_lxWS";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "B_UN_engineer_lxWS";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "B_UN_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "B_UN_soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "B_UN_Soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "B_UN_HeavyGunner_lxWS";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized {
                class BUNA_MotInf_Reinforce {
                    name = "Motorized Reinforcements";
                    side = 1;
                    faction = "BLU_UN_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_UN_Truck_01_covered_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_UN_officer_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "B_UN_Soldier_GL_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "B_UN_Soldier_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "B_UN_Soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "B_UN_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "B_UN_soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "B_UN_soldier_LAT2_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "B_UN_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "B_UN_officer_lxWS";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "B_UN_Soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "B_UN_Soldier_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "B_UN_Soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit13 {
                        vehicle = "B_UN_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit14 {
                        vehicle = "B_UN_soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit15 {
                        vehicle = "B_UN_HeavyGunner_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit16 {
                        vehicle = "B_UN_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };
                };
                class BUNA_MotInf_Team {
                    name = "Motorized Team";
                    side = 1;
                    faction = "BLU_UN_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "B_UN_MRAP_01_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "B_UN_soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "B_UN_Soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
        };
    };
};
