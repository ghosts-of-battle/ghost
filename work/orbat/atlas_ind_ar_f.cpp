//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class Atlas_IND_AR_F {
        displayName = "Ardistan";
        side = 2;
        priority = 3;
        icon = "\A3_Atlas\Data_F_Atlas\FactionIcons\CfgFactionClasses_BLU_k_CA.paa";
        flag = "\A3_Atlas\Data_F_Atlas\Flags\flag_Karzeghistan_CO.paa";
    };
};

class CfgVehicles {

    class O_T_APC_Tracked_02_30mm_lxWS;
    class O_T_APC_Tracked_02_30mm_lxWS_OCimport_01 : O_T_APC_Tracked_02_30mm_lxWS { scope = 0; class EventHandlers; };
    class O_T_APC_Tracked_02_30mm_lxWS_OCimport_02 : O_T_APC_Tracked_02_30mm_lxWS_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_04_base_v2_F;
    class APC_Wheeled_04_base_v2_F_OCimport_01 : APC_Wheeled_04_base_v2_F { scope = 0; class EventHandlers; };
    class APC_Wheeled_04_base_v2_F_OCimport_02 : APC_Wheeled_04_base_v2_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_AR_Soldier_base_F;
    class Atlas_I_AR_Soldier_base_F_OCimport_01 : Atlas_I_AR_Soldier_base_F { scope = 0; class EventHandlers; };
    class Atlas_I_AR_Soldier_base_F_OCimport_02 : Atlas_I_AR_Soldier_base_F_OCimport_01 { class EventHandlers; };

    class O_HMG_01_F;
    class O_HMG_01_F_OCimport_01 : O_HMG_01_F { scope = 0; class EventHandlers; };
    class O_HMG_01_F_OCimport_02 : O_HMG_01_F_OCimport_01 { class EventHandlers; };

    class O_HMG_01_high_F;
    class O_HMG_01_high_F_OCimport_01 : O_HMG_01_high_F { scope = 0; class EventHandlers; };
    class O_HMG_01_high_F_OCimport_02 : O_HMG_01_high_F_OCimport_01 { class EventHandlers; };

    class Aegis_Heli_Attack_04_base_F;
    class Aegis_Heli_Attack_04_base_F_OCimport_01 : Aegis_Heli_Attack_04_base_F { scope = 0; class EventHandlers; };
    class Aegis_Heli_Attack_04_base_F_OCimport_02 : Aegis_Heli_Attack_04_base_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Light_02_dynamicLoadout_F;
    class O_Heli_Light_02_dynamicLoadout_F_OCimport_01 : O_Heli_Light_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_Heli_Light_02_dynamicLoadout_F_OCimport_02 : O_Heli_Light_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Light_02_unarmed_F;
    class O_Heli_Light_02_unarmed_F_OCimport_01 : O_Heli_Light_02_unarmed_F { scope = 0; class EventHandlers; };
    class O_Heli_Light_02_unarmed_F_OCimport_02 : O_Heli_Light_02_unarmed_F_OCimport_01 { class EventHandlers; };

    class O_MBT_02_cannon_F;
    class O_MBT_02_cannon_F_OCimport_01 : O_MBT_02_cannon_F { scope = 0; class EventHandlers; };
    class O_MBT_02_cannon_F_OCimport_02 : O_MBT_02_cannon_F_OCimport_01 { class EventHandlers; };

    class O_MRAP_02_F;
    class O_MRAP_02_F_OCimport_01 : O_MRAP_02_F { scope = 0; class EventHandlers; };
    class O_MRAP_02_F_OCimport_02 : O_MRAP_02_F_OCimport_01 { class EventHandlers; };

    class O_MRAP_02_gmg_F;
    class O_MRAP_02_gmg_F_OCimport_01 : O_MRAP_02_gmg_F { scope = 0; class EventHandlers; };
    class O_MRAP_02_gmg_F_OCimport_02 : O_MRAP_02_gmg_F_OCimport_01 { class EventHandlers; };

    class O_MRAP_02_hmg_F;
    class O_MRAP_02_hmg_F_OCimport_01 : O_MRAP_02_hmg_F { scope = 0; class EventHandlers; };
    class O_MRAP_02_hmg_F_OCimport_02 : O_MRAP_02_hmg_F_OCimport_01 { class EventHandlers; };

    class O_R_Mortar_01_F;
    class O_R_Mortar_01_F_OCimport_01 : O_R_Mortar_01_F { scope = 0; class EventHandlers; };
    class O_R_Mortar_01_F_OCimport_02 : O_R_Mortar_01_F_OCimport_01 { class EventHandlers; };

    class O_Plane_CAS_02_dynamicLoadout_F;
    class O_Plane_CAS_02_dynamicLoadout_F_OCimport_01 : O_Plane_CAS_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_Plane_CAS_02_dynamicLoadout_F_OCimport_02 : O_Plane_CAS_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_AR_Soldier_F;
    class Atlas_I_AR_Soldier_F_OCimport_01 : Atlas_I_AR_Soldier_F { scope = 0; class EventHandlers; };
    class Atlas_I_AR_Soldier_F_OCimport_02 : Atlas_I_AR_Soldier_F_OCimport_01 { class EventHandlers; };

    class O_R_Static_AA_F;
    class O_R_Static_AA_F_OCimport_01 : O_R_Static_AA_F { scope = 0; class EventHandlers; };
    class O_R_Static_AA_F_OCimport_02 : O_R_Static_AA_F_OCimport_01 { class EventHandlers; };

    class O_R_Static_AT_F;
    class O_R_Static_AT_F_OCimport_01 : O_R_Static_AT_F { scope = 0; class EventHandlers; };
    class O_R_Static_AT_F_OCimport_02 : O_R_Static_AT_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_Ammo_F;
    class O_Truck_02_Ammo_F_OCimport_01 : O_Truck_02_Ammo_F { scope = 0; class EventHandlers; };
    class O_Truck_02_Ammo_F_OCimport_02 : O_Truck_02_Ammo_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_covered_F;
    class O_Truck_02_covered_F_OCimport_01 : O_Truck_02_covered_F { scope = 0; class EventHandlers; };
    class O_Truck_02_covered_F_OCimport_02 : O_Truck_02_covered_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_MRL_F;
    class O_Truck_02_MRL_F_OCimport_01 : O_Truck_02_MRL_F { scope = 0; class EventHandlers; };
    class O_Truck_02_MRL_F_OCimport_02 : O_Truck_02_MRL_F_OCimport_01 { class EventHandlers; };

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

    class APC_Wheeled_04_export_base_F;
    class APC_Wheeled_04_export_base_F_OCimport_01 : APC_Wheeled_04_export_base_F { scope = 0; class EventHandlers; };
    class APC_Wheeled_04_export_base_F_OCimport_02 : APC_Wheeled_04_export_base_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_AR_APC_Tracked_02_30mm_lxWS : O_T_APC_Tracked_02_30mm_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-T Okhotnik";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_APC_Wheeled_04_cannon_v2_F : APC_Wheeled_04_base_v2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "2S90M Nosorog";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Crew_F : Atlas_I_AR_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_01_ardi_full_F";

        linkedItems[] = {"Atlas_V_OCarrierGora_ardi_F","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierGora_ardi_F","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKSM_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKSM_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Engineer_F : Atlas_I_AR_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_01_ardi_full_F";

        backpack = "Atlas_B_Carryall_Ardi_Eng_F";

        linkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_khk_F","G_Combat_lxWS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_khk_F","G_Combat_lxWS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_HMG_01_F : O_HMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_HMG_01_high_F : O_HMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312 (High)";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Heli_Attack_04_F : Aegis_Heli_Attack_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-35 Krokodil";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Heli_Light_02_dynamicLoadout_F : O_Heli_Light_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Heli_Light_02_unarmed_F : O_Heli_Light_02_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka (unarmed)";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Helipilot_F : Atlas_I_AR_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_02_ardi_half_F";

        linkedItems[] = {"Atlas_Tacvest_Ard_F","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnlinkedItems[] = {"Atlas_Tacvest_Ard_F","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};

        weapons[] = {"arifle_AKSM_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKSM_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_MBT_02_cannon_F : O_MBT_02_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "T100 Black Eagle";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_MRAP_02_F : O_MRAP_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Galkin";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_MRAP_02_gmg_F : O_MRAP_02_gmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Galkin GMG";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_MRAP_02_hmg_F : O_MRAP_02_hmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Galkin HMG";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Medic_F : Atlas_I_AR_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_02_ardi_half_F";

        backpack = "Atlas_B_FieldPack_Ardi_Medic_F";

        linkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Mortar_01_F : O_R_Mortar_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_I_AR_Mortar_01_F";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Officer_F : Atlas_I_AR_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_01_ardi_half_F";

        linkedItems[] = {"V_BandollierB_cbr","H_Hat_Pakol_brn_F","G_Headset_lxWS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_cbr","H_Hat_Pakol_brn_F","G_Headset_lxWS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKSM_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_AKSM_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShellBlue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Pilot_F : Atlas_I_AR_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_A_PilotCoveralls";

        backpack = "B_Parachute";

        linkedItems[] = {"H_PilotHelmetFighter_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_PilotHelmetFighter_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"hgun_Rook40_F","Throw","Put"};

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

    class Atlas_I_AR_Plane_CAS_02_dynamicLoadout_ghex_F : O_Plane_CAS_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Yak-130";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_RadioOperator_F : Atlas_I_AR_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_02_ardi_half_F";

        backpack = "B_RadioBag_01_ardi_F";

        linkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Soldier_AR_F : Atlas_I_AR_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_02_ardi_full_F";

        linkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_RPK74M_BVO_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_RPK74M_BVO_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Soldier_A_F : Atlas_I_AR_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_02_ardi_half_F";

        backpack = "Atlas_B_Carryall_ardi_Ammo_F";

        linkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKSM_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKSM_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Soldier_Exp_F : Atlas_I_AR_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_01_ardi_full_F";

        backpack = "Atlas_B_Carryall_Ardi_Exp_F";

        linkedItems[] = {"Atlas_V_OCarrierGora_CQB_ardi_F","H_HelmetLuchnik_khk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierGora_CQB_ardi_F","H_HelmetLuchnik_khk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Soldier_F : Atlas_I_AR_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_01_ardi_full_F";

        linkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_ROS_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_ROS_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Soldier_GL_F : Atlas_I_AR_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_01_ardi_full_F";

        linkedItems[] = {"Atlas_V_OCarrierGora_CQB_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierGora_CQB_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_GL_ROS_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_GL_ROS_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Soldier_LAT_F : Atlas_I_AR_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_01_ardi_full_F";

        backpack = "Atlas_B_FieldPack_Ardi_LAT_F";

        linkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_F","Aegis_launch_RPG7M_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_F","Aegis_launch_RPG7M_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","RPG7_F","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","RPG7_F","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Soldier_M_F : Atlas_I_AR_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_01_ardi_half_F";

        linkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_srifle_SVD_blk_DMS_FL_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_srifle_SVD_blk_DMS_FL_F","Throw","Put","Binocular"};

        magazines[] = {"Aegis_10Rnd_762x54_SVD_Green_Mag_F","Aegis_10Rnd_762x54_SVD_Green_Mag_F","Aegis_10Rnd_762x54_SVD_Green_Mag_F","Aegis_10Rnd_762x54_SVD_Green_Mag_F","Aegis_10Rnd_762x54_SVD_Green_Mag_F","Aegis_10Rnd_762x54_SVD_Green_Mag_F","Aegis_10Rnd_762x54_SVD_Green_Mag_F","Aegis_10Rnd_762x54_SVD_Green_Mag_F","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"Aegis_10Rnd_762x54_SVD_Green_Mag_F","Aegis_10Rnd_762x54_SVD_Green_Mag_F","Aegis_10Rnd_762x54_SVD_Green_Mag_F","Aegis_10Rnd_762x54_SVD_Green_Mag_F","Aegis_10Rnd_762x54_SVD_Green_Mag_F","Aegis_10Rnd_762x54_SVD_Green_Mag_F","Aegis_10Rnd_762x54_SVD_Green_Mag_F","Aegis_10Rnd_762x54_SVD_Green_Mag_F","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Soldier_SL_F : Atlas_I_AR_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_01_ardi_full_F";

        linkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_MRCO_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_MRCO_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellBlue","SmokeShellBlue"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellBlue","SmokeShellBlue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Soldier_TL_F : Atlas_I_AR_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_01_ardi_full_F";

        linkedItems[] = {"Atlas_V_OCarrierGora_CQB_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierGora_CQB_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_GL_MRCO_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_GL_MRCO_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Soldier_lite_F : Atlas_I_AR_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_01_ardi_full_F";

        linkedItems[] = {"Atlas_Tacvest_Ard_F","H_Hat_Pakol_brn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_Tacvest_Ard_F","H_Hat_Pakol_brn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Static_AA_F : O_R_Static_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Static Titan Launcher (AA)";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Static_AT_F : O_R_Static_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Static Titan Launcher (AT)";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Truck_02_Ammo_F : O_Truck_02_Ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Ammo";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Truck_02_F : O_Truck_02_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport (covered)";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Truck_02_MRL_F : O_Truck_02_MRL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak MRL";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Truck_02_box_F : O_Truck_02_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Repair";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Truck_02_cargo_F : Truck_02_cargo_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Cargo";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Truck_02_flatbed_F : Truck_02_flatbed_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Flatbed";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Truck_02_fuel_F : O_Truck_02_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Fuel";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Truck_02_medical_F : O_Truck_02_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Medical";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Truck_02_transport_F : O_Truck_02_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_Wheeled_04_export_F : APC_Wheeled_04_export_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-100A Vityaz";
        side = 2;
        faction = "atlas_ind_ar_f";
        crew = "Atlas_I_AR_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_soldier_AAA_F : Atlas_I_AR_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_02_ardi_full_F";

        backpack = "Atlas_B_Carryall_Ardi_AAA_F";

        linkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_soldier_AAR_F : Atlas_I_AR_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_01_ardi_full_F";

        backpack = "Atlas_B_FieldPack_Ardi_AAR_F";

        linkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_soldier_AA_F : Atlas_I_AR_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_01_ardi_full_F";

        backpack = "Atlas_B_FieldPack_Ardi_AA_F";

        linkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierGora_Lite_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_F","launch_O_Titan_camo_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_F","launch_O_Titan_camo_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","30Rnd_545x39_Black_Mag_F","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_AR_unarmed_F : Atlas_I_AR_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 2;
        faction = "atlas_ind_ar_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_I_Afghanka_01_ardi_full_F";

        linkedItems[] = {"Atlas_V_OCarrierGora_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierGora_ardi_F","H_HelmetLuchnik_cover_ardi_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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
    class Indep {
        class Atlas_IND_AR_F {
            class Armored {
                class I_AR_TankDestrSection_Nosorog {
                    name = "Tank Destroyer Section";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_APC_Wheeled_04_cannon_v2_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_APC_Wheeled_04_cannon_v2_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class I_AR_TankPlatoon {
                    name = "Tank Platoon";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_MBT_02_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_MBT_02_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_AR_MBT_02_cannon_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_AR_MBT_02_cannon_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class I_AR_TankSection {
                    name = "Tank Section";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_MBT_02_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_MBT_02_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class I_AR_InfSentry {
                    name = "Sentry";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class I_AR_InfSquad {
                    name = "Rifle Squad";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_AR_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_AR_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_I_AR_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_I_AR_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_I_AR_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_I_AR_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class I_AR_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_AR_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_AR_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_I_AR_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_I_AR_soldier_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_I_AR_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_I_AR_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class I_AR_InfTeam {
                    name = "Fire Team";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_AR_soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_AR_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class I_AR_InfTeam_AA {
                    name = "Air-defense Team";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_AR_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_AR_soldier_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class I_AR_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_AR_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_AR_soldier_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class I_AR_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_Wheeled_04_export_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_AR_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_AR_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_I_AR_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_I_AR_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_I_AR_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_I_AR_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_I_AR_medic_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class I_AR_MechInf_AA {
                    name = "Mechanized Air-defense Squad";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_Wheeled_04_export_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_AR_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_AR_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_I_AR_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_I_AR_soldier_AA_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_I_AR_soldier_AAA_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_I_AR_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_I_AR_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class I_AR_MechInf_AT {
                    name = "Mechanized Anti-armor Squad";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_APC_Tracked_02_30mm_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_AR_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_AR_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_I_AR_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_I_AR_soldier_LAT_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_I_AR_soldier_A_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_I_AR_soldier_AAR_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_I_AR_soldier_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class I_AR_MechInf_Support {
                    name = "Mechanized Support Squad";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_APC_Tracked_02_30mm_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_AR_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_AR_soldier_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_I_AR_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_I_AR_medic_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_I_AR_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_I_AR_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_I_AR_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized {
                class I_AR_MotInf_AA {
                    name = "Motorized Air-defense Team";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_MRAP_02_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_AR_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_AR_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class I_AR_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_MRAP_02_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_Soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_AR_Soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_AR_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class I_AR_MotInf_Reinforcements {
                    name = "Motorized Reinforcements";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_Truck_02_transport_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_AR_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_AR_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_I_AR_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_I_AR_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_I_AR_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_I_AR_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_I_AR_medic_F";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "Atlas_I_AR_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "Atlas_I_AR_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "Atlas_I_AR_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "Atlas_I_AR_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit13 {
                        vehicle = "Atlas_I_AR_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit14 {
                        vehicle = "Atlas_I_AR_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit15 {
                        vehicle = "Atlas_I_AR_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit16 {
                        vehicle = "Atlas_I_AR_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };
                };
                class I_AR_MotInf_Team {
                    name = "Motorized Team";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_MRAP_02_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_AR_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
            class Support {
                class I_AR_Support_CLS {
                    name = "Support Team (CLS)";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_AR_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_AR_medic_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class I_AR_Support_ENG {
                    name = "Support Team (Engineer)";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_AR_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_AR_soldier_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class I_AR_Support_EOD {
                    name = "Support Team (EOD)";
                    side = 2;
                    faction = "Atlas_IND_AR_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_AR_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_AR_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_AR_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_AR_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
        };
    };
};
