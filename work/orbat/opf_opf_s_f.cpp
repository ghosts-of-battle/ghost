//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class Opf_OPF_S_F {
        displayName = "Separatists";
        side = 0;
        priority = 3;
        icon = "\A3_Opf\Data_F_Opf\FactionIcons\CfgFactionClasses_OPF_S_CA.paa";
        flag = "\A3_Opf\Data_F_Opf\Flags\flag_ChDKZ_CO.paa";
    };
};

class CfgVehicles {

    class zu23_base_lxWS;
    class zu23_base_lxWS_OCimport_01 : zu23_base_lxWS { scope = 0; class EventHandlers; };
    class zu23_base_lxWS_OCimport_02 : zu23_base_lxWS_OCimport_01 { class EventHandlers; };

    class O_APC_Tracked_02_30mm_lxWS;
    class O_APC_Tracked_02_30mm_lxWS_OCimport_01 : O_APC_Tracked_02_30mm_lxWS { scope = 0; class EventHandlers; };
    class O_APC_Tracked_02_30mm_lxWS_OCimport_02 : O_APC_Tracked_02_30mm_lxWS_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_04_export_base_F;
    class APC_Wheeled_04_export_base_F_OCimport_01 : APC_Wheeled_04_export_base_F { scope = 0; class EventHandlers; };
    class APC_Wheeled_04_export_base_F_OCimport_02 : APC_Wheeled_04_export_base_F_OCimport_01 { class EventHandlers; };

    class Opf_O_S_Soldier_Base_F;
    class Opf_O_S_Soldier_Base_F_OCimport_01 : Opf_O_S_Soldier_Base_F { scope = 0; class EventHandlers; };
    class Opf_O_S_Soldier_Base_F_OCimport_02 : Opf_O_S_Soldier_Base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_base_F;
    class HMG_02_base_F_OCimport_01 : HMG_02_base_F { scope = 0; class EventHandlers; };
    class HMG_02_base_F_OCimport_02 : HMG_02_base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_high_base_F;
    class HMG_02_high_base_F_OCimport_01 : HMG_02_high_base_F { scope = 0; class EventHandlers; };
    class HMG_02_high_base_F_OCimport_02 : HMG_02_high_base_F_OCimport_01 { class EventHandlers; };

    class Aegis_Heli_Attack_04_base_F;
    class Aegis_Heli_Attack_04_base_F_OCimport_01 : Aegis_Heli_Attack_04_base_F { scope = 0; class EventHandlers; };
    class Aegis_Heli_Attack_04_base_F_OCimport_02 : Aegis_Heli_Attack_04_base_F_OCimport_01 { class EventHandlers; };

    class O_MBT_02_cannon_F;
    class O_MBT_02_cannon_F_OCimport_01 : O_MBT_02_cannon_F { scope = 0; class EventHandlers; };
    class O_MBT_02_cannon_F_OCimport_02 : O_MBT_02_cannon_F_OCimport_01 { class EventHandlers; };

    class O_G_Offroad_01_AT_F;
    class O_G_Offroad_01_AT_F_OCimport_01 : O_G_Offroad_01_AT_F { scope = 0; class EventHandlers; };
    class O_G_Offroad_01_AT_F_OCimport_02 : O_G_Offroad_01_AT_F_OCimport_01 { class EventHandlers; };

    class O_G_Offroad_01_F;
    class O_G_Offroad_01_F_OCimport_01 : O_G_Offroad_01_F { scope = 0; class EventHandlers; };
    class O_G_Offroad_01_F_OCimport_02 : O_G_Offroad_01_F_OCimport_01 { class EventHandlers; };

    class O_G_Offroad_01_armed_F;
    class O_G_Offroad_01_armed_F_OCimport_01 : O_G_Offroad_01_armed_F { scope = 0; class EventHandlers; };
    class O_G_Offroad_01_armed_F_OCimport_02 : O_G_Offroad_01_armed_F_OCimport_01 { class EventHandlers; };

    class Quadbike_01_base_F;
    class Quadbike_01_base_F_OCimport_01 : Quadbike_01_base_F { scope = 0; class EventHandlers; };
    class Quadbike_01_base_F_OCimport_02 : Quadbike_01_base_F_OCimport_01 { class EventHandlers; };

    class Opf_O_S_Soldier_1_F;
    class Opf_O_S_Soldier_1_F_OCimport_01 : Opf_O_S_Soldier_1_F { scope = 0; class EventHandlers; };
    class Opf_O_S_Soldier_1_F_OCimport_02 : Opf_O_S_Soldier_1_F_OCimport_01 { class EventHandlers; };

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

    class OpF_O_S_ZU23_lxWS_F : zu23_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zu-23-2";
        side = 0;
        faction = "opf_opf_s_f";
        crew = "Opf_O_S_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_APC_Tracked_02_30mm_lxWS : O_APC_Tracked_02_30mm_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BM-2T Stalker (Bumerang-BM)";
        side = 0;
        faction = "opf_opf_s_f";
        crew = "Opf_O_S_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_APC_Wheeled_04_export_F : APC_Wheeled_04_export_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-100A Vityaz";
        side = 0;
        faction = "opf_opf_s_f";
        crew = "Opf_O_S_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Crew_F : Opf_O_S_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 0;
        faction = "opf_opf_s_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Opf_U_O_S_Uniform_01_sweater_F";

        linkedItems[] = {"V_BandollierB_taiga_F","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_taiga_F","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKSM_alt_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKSM_alt_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_HMG_02_F : HMG_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 0;
        faction = "opf_opf_s_f";
        crew = "Opf_O_S_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_HMG_02_high_F : HMG_02_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 0;
        faction = "opf_opf_s_f";
        crew = "Opf_O_S_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_HeliPilot_F : Opf_O_S_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 0;
        faction = "opf_opf_s_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Afghanka_01_grn_F";

        linkedItems[] = {"V_TacVest_blk","Aegis_H_MilCap_tachs_grn_F","Aegis_G_Condor_EyePro_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_blk","Aegis_H_MilCap_tachs_grn_F","Aegis_G_Condor_EyePro_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKSM_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKSM_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Heli_Attack_04_F : Aegis_Heli_Attack_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-35 Krokodil";
        side = 0;
        faction = "opf_opf_s_f";
        crew = "Opf_O_S_HeliPilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_MBT_02_cannon_F : O_MBT_02_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "T100 Black Eagle";
        side = 0;
        faction = "opf_opf_s_f";
        crew = "Opf_O_S_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Offroad_01_AT_F : O_G_Offroad_01_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (AT)";
        side = 0;
        faction = "opf_opf_s_f";
        crew = "Opf_O_S_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Offroad_01_F : O_G_Offroad_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 0;
        faction = "opf_opf_s_f";
        crew = "Opf_O_S_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Offroad_01_armed_F : O_G_Offroad_01_armed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (HMG)";
        side = 0;
        faction = "opf_opf_s_f";
        crew = "Opf_O_S_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Quadbike_01_F : Quadbike_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 0;
        faction = "opf_opf_s_f";
        crew = "Opf_O_S_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Soldier_1_F : Opf_O_S_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "opf_opf_s_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Opf_U_O_S_Gorka_01_summer_F";

        linkedItems[] = {"Aegis_V_ChestRigEast_grn_F","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_ChestRigEast_grn_F","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_plum_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_plum_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Soldier_2_F : Opf_O_S_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Commander";
        side = 0;
        faction = "opf_opf_s_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Opf_U_O_S_Uniform_01_taiga_F";

        linkedItems[] = {"Aegis_V_ChestRigEast_grn_F","H_MilCap_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_ChestRigEast_grn_F","H_MilCap_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_plum_F","hgun_Pistol_01_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_plum_F","hgun_Pistol_01_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Soldier_3_F : Opf_O_S_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 0;
        faction = "opf_opf_s_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Opf_U_O_S_Uniform_01_sweater_F";

        backpack = "B_FieldPack_green_OSMedic_F";

        linkedItems[] = {"V_TacVest_grn","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_plum_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_plum_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Soldier_4_F : Opf_O_S_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "opf_opf_s_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Opf_U_O_S_Gorka_01_autumn_F";

        linkedItems[] = {"lxWS_H_ssh40_green","Aegis_V_ChestRigEast_grn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"lxWS_H_ssh40_green","Aegis_V_ChestRigEast_grn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_RPK74M_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_RPK74M_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
        respawnMagazines[] = {"Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","Aegis_45Rnd_545x39_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Soldier_5_F : Opf_O_S_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 0;
        faction = "opf_opf_s_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "U_O_R_Gorka_01_F";

        backpack = "B_FieldPack_green_OSRPG_AT_F";

        linkedItems[] = {"G_Balaclava_blk","V_TacChestRig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"G_Balaclava_blk","V_TacChestRig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKSM_alt_F","launch_RPG32_camo_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKSM_alt_F","launch_RPG32_camo_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","RPG32_F"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","RPG32_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Soldier_6_F : Opf_O_S_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "opf_opf_s_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Opf_U_O_S_Uniform_01_taiga_F";

        linkedItems[] = {"G_Balaclava_blk","V_TacChestRig_grn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"G_Balaclava_blk","V_TacChestRig_grn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_GL_plum_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_GL_plum_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Soldier_7_F : Opf_O_S_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 0;
        faction = "opf_opf_s_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Opf_U_O_S_Gorka_01_autumn_F";

        linkedItems[] = {"H_Booniehat_mgrn","V_TacChestRig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_Booniehat_mgrn","V_TacChestRig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_DMR_01_black_KHS_BI_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"srifle_DMR_01_black_KHS_BI_F","Throw","Put","Binocular"};

        magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag"};
        respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Soldier_8_F : Opf_O_S_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sapper";
        side = 0;
        faction = "opf_opf_s_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "U_C_E_LooterJacket_01_F";

        backpack = "B_FieldPack_green_OSExp_F";

        linkedItems[] = {"V_ChestrigF_rgr","H_Watchcap_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_rgr","H_Watchcap_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"sgun_Mp153_classic_F","Throw","Put"};
        respawnWeapons[] = {"sgun_Mp153_classic_F","Throw","Put"};

        magazines[] = {"4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug"};
        respawnMagazines[] = {"4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Soldier_9_F : Opf_O_S_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Partisan";
        side = 0;
        faction = "opf_opf_s_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Opf_U_O_S_Uniform_01_sweater_F";

        linkedItems[] = {"V_TacChestRig_oli_F","H_Beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacChestRig_oli_F","H_Beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Opf_arifle_SKS_oak_F","Throw","Put"};
        respawnWeapons[] = {"Opf_arifle_SKS_oak_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Green_F","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Soldier_Base_unarmed_F : Opf_O_S_Soldier_1_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 0;
        faction = "opf_opf_s_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Opf_U_O_S_Gorka_01_summer_F";

        linkedItems[] = {"Aegis_V_ChestRigEast_grn_F","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_ChestRigEast_grn_F","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class Opf_O_S_Soldier_CMort_RF : Opf_O_S_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 0;
        faction = "opf_opf_s_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Opf_U_O_S_Uniform_01_taiga_F";

        backpack = "I_CommandoMortar_weapon_RF";

        linkedItems[] = {"V_ChestrigF_rgr","H_Watchcap_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_rgr","H_Watchcap_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKSM_alt_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKSM_alt_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Soldier_CQ_RF : Opf_O_S_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 0;
        displayName = "Rifleman (Heavy)";
        side = 0;
        faction = "opf_opf_s_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Opf_U_O_S_Gorka_01_autumn_F";

        linkedItems[] = {"H_HelmetHeavy_olive_RF","Aegis_V_ChestRigEast_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetHeavy_olive_RF","Aegis_V_ChestRigEast_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_ash12_wood_RF","Throw","Put"};
        respawnWeapons[] = {"arifle_ash12_wood_RF","Throw","Put"};

        magazines[] = {"10rnd_127x55_mag_wood_rf","10rnd_127x55_mag_wood_rf","10rnd_127x55_mag_wood_rf","10rnd_127x55_mag_wood_rf","10rnd_127x55_mag_wood_rf","10rnd_127x55_mag_wood_rf","HandGrenade_Guer","SmokeShell"};
        respawnMagazines[] = {"10rnd_127x55_mag_wood_rf","10rnd_127x55_mag_wood_rf","10rnd_127x55_mag_wood_rf","10rnd_127x55_mag_wood_rf","10rnd_127x55_mag_wood_rf","10rnd_127x55_mag_wood_rf","HandGrenade_Guer","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Soldier_UAV_lxWS : Opf_O_S_Soldier_1_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (IED Drone)";
        side = 0;
        faction = "opf_opf_s_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Opf_U_O_S_Gorka_01_summer_F";

        backpack = "Opf_O_S_UAV_02_IED_backpack_lxWS";

        weapons[] = {"arifle_AKSM_alt_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKSM_alt_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Green_F","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Truck_02_AA_F : Truck_02_aa_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ (Zu-23-2)";
        side = 0;
        faction = "opf_opf_s_f";
        crew = "Opf_O_S_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Truck_02_F : O_Truck_02_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport (covered)";
        side = 0;
        faction = "opf_opf_s_f";
        crew = "Opf_O_S_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Truck_02_cargo_F : Truck_02_cargo_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Cargo";
        side = 0;
        faction = "opf_opf_s_f";
        crew = "Opf_O_S_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Truck_02_flatbed_F : Truck_02_flatbed_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Flatbed";
        side = 0;
        faction = "opf_opf_s_f";
        crew = "Opf_O_S_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_Truck_02_transport_F : O_Truck_02_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Transport";
        side = 0;
        faction = "opf_opf_s_f";
        crew = "Opf_O_S_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_O_S_UAV_02_IED_lxWS : UAV_02_IED_Base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "IED UAV";
        side = 0;
        faction = "opf_opf_s_f";
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

};

class CfgGroups {
    class East {
        class Opf_OPF_S_F {
            class Infantry {
                class SeparatistCombatGroup {
                    name = "Separatist Combat Group";
                    side = 0;
                    faction = "Opf_OPF_S_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_O_S_Soldier_2_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_O_S_Soldier_4_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_O_S_Soldier_6_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_O_S_Soldier_1_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Opf_O_S_Soldier_7_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Opf_O_S_Soldier_5_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Opf_O_S_Soldier_8_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Opf_O_S_Soldier_3_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class SeparatistFireTeam {
                    name = "Separatist Fire Team";
                    side = 0;
                    faction = "Opf_OPF_S_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_O_S_Soldier_2_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_O_S_Soldier_4_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_O_S_Soldier_1_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_O_S_Soldier_3_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class SeparatistShockTeam {
                    name = "Separatist Shock Team";
                    side = 0;
                    faction = "Opf_OPF_S_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_O_S_Soldier_6_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_O_S_Soldier_5_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_O_S_Soldier_7_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_O_S_Soldier_8_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class Opf_O_P_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 0;
                    faction = "Opf_OPF_S_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_O_S_APC_Wheeled_04_export_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_O_S_Soldier_2_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_O_S_Soldier_5_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_O_S_Soldier_7_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Opf_O_S_Soldier_6_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Opf_O_S_Soldier_4_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Opf_O_S_Soldier_3_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                };
            };
            class Motorized_MTP {
                class Opf_O_S_MotInf_Team {
                    name = "Motorized Patrol";
                    side = 0;
                    faction = "Opf_OPF_S_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_O_S_Offroad_01_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_O_S_Soldier_2_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_O_S_Soldier_4_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_O_S_Soldier_5_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Opf_O_S_Soldier_3_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Opf_O_S_Soldier_1_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };
                };
                class Opf_O_S_Technicals {
                    name = "Technicals";
                    side = 0;
                    faction = "Opf_OPF_S_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_O_S_Offroad_01_armed_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_O_S_Offroad_01_armed_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_O_S_Offroad_01_armed_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };
                };
            };
        };
    };
};
