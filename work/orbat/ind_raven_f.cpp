//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class IND_Raven_F {
        displayName = "Raven Security";
        side = 2;
        priority = 3;
        icon = "\A3_Aegis\Data_F_Aegis\FactionIcons\CfgFactionClasses_IND_R_CA.paa";
        flag = "\A3_Aegis\Data_F_Aegis\Flags\flag_RUS_CO.paa";
    };
};

class CfgVehicles {

    class APC_Wheeled_04_export_base_F;
    class APC_Wheeled_04_export_base_F_OCimport_01 : APC_Wheeled_04_export_base_F { scope = 0; class EventHandlers; };
    class APC_Wheeled_04_export_base_F_OCimport_02 : APC_Wheeled_04_export_base_F_OCimport_01 { class EventHandlers; };

    class Aegis_Heli_Attack_04_base_F;
    class Aegis_Heli_Attack_04_base_F_OCimport_01 : Aegis_Heli_Attack_04_base_F { scope = 0; class EventHandlers; };
    class Aegis_Heli_Attack_04_base_F_OCimport_02 : Aegis_Heli_Attack_04_base_F_OCimport_01 { class EventHandlers; };

    class Aegis_O_Raven_Truck_02_F;
    class Aegis_O_Raven_Truck_02_F_OCimport_01 : Aegis_O_Raven_Truck_02_F { scope = 0; class EventHandlers; };
    class Aegis_O_Raven_Truck_02_F_OCimport_02 : Aegis_O_Raven_Truck_02_F_OCimport_01 { class EventHandlers; };

    class UAV_02_Base_lxWS;
    class UAV_02_Base_lxWS_OCimport_01 : UAV_02_Base_lxWS { scope = 0; class EventHandlers; };
    class UAV_02_Base_lxWS_OCimport_02 : UAV_02_Base_lxWS_OCimport_01 { class EventHandlers; };

    class I_Raven_soldier_base_F;
    class I_Raven_soldier_base_F_OCimport_01 : I_Raven_soldier_base_F { scope = 0; class EventHandlers; };
    class I_Raven_soldier_base_F_OCimport_02 : I_Raven_soldier_base_F_OCimport_01 { class EventHandlers; };

    class O_R_Heli_Light_02_dynamicLoadout_ard_F;
    class O_R_Heli_Light_02_dynamicLoadout_ard_F_OCimport_01 : O_R_Heli_Light_02_dynamicLoadout_ard_F { scope = 0; class EventHandlers; };
    class O_R_Heli_Light_02_dynamicLoadout_ard_F_OCimport_02 : O_R_Heli_Light_02_dynamicLoadout_ard_F_OCimport_01 { class EventHandlers; };

    class O_R_Heli_Light_02_unarmed_ard_F;
    class O_R_Heli_Light_02_unarmed_ard_F_OCimport_01 : O_R_Heli_Light_02_unarmed_ard_F { scope = 0; class EventHandlers; };
    class O_R_Heli_Light_02_unarmed_ard_F_OCimport_02 : O_R_Heli_Light_02_unarmed_ard_F_OCimport_01 { class EventHandlers; };

    class O_R_MRAP_02_ard_F;
    class O_R_MRAP_02_ard_F_OCimport_01 : O_R_MRAP_02_ard_F { scope = 0; class EventHandlers; };
    class O_R_MRAP_02_ard_F_OCimport_02 : O_R_MRAP_02_ard_F_OCimport_01 { class EventHandlers; };

    class O_R_MRAP_02_gmg_ard_F;
    class O_R_MRAP_02_gmg_ard_F_OCimport_01 : O_R_MRAP_02_gmg_ard_F { scope = 0; class EventHandlers; };
    class O_R_MRAP_02_gmg_ard_F_OCimport_02 : O_R_MRAP_02_gmg_ard_F_OCimport_01 { class EventHandlers; };

    class O_R_MRAP_02_hmg_ard_F;
    class O_R_MRAP_02_hmg_ard_F_OCimport_01 : O_R_MRAP_02_hmg_ard_F { scope = 0; class EventHandlers; };
    class O_R_MRAP_02_hmg_ard_F_OCimport_02 : O_R_MRAP_02_hmg_ard_F_OCimport_01 { class EventHandlers; };

    class I_Raven_soldier_F;
    class I_Raven_soldier_F_OCimport_01 : I_Raven_soldier_F { scope = 0; class EventHandlers; };
    class I_Raven_soldier_F_OCimport_02 : I_Raven_soldier_F_OCimport_01 { class EventHandlers; };

    class UAV_01_base_F;
    class UAV_01_base_F_OCimport_01 : UAV_01_base_F { scope = 0; class EventHandlers; };
    class UAV_01_base_F_OCimport_02 : UAV_01_base_F_OCimport_01 { class EventHandlers; };

    class UAV_06_base_F;
    class UAV_06_base_F_OCimport_01 : UAV_06_base_F { scope = 0; class EventHandlers; };
    class UAV_06_base_F_OCimport_02 : UAV_06_base_F_OCimport_01 { class EventHandlers; };

    class UAV_06_medical_base_F;
    class UAV_06_medical_base_F_OCimport_01 : UAV_06_medical_base_F { scope = 0; class EventHandlers; };
    class UAV_06_medical_base_F_OCimport_02 : UAV_06_medical_base_F_OCimport_01 { class EventHandlers; };

    class I_Raven_Soldier_UAV_F;
    class I_Raven_Soldier_UAV_F_OCimport_01 : I_Raven_Soldier_UAV_F { scope = 0; class EventHandlers; };
    class I_Raven_Soldier_UAV_F_OCimport_02 : I_Raven_Soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_Raven_APC_Wheeled_04_export_F : APC_Wheeled_04_export_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-100A Vityaz";
        side = 2;
        faction = "ind_raven_f";
        crew = "I_Raven_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_Raven_Heli_Attack_04_F : Aegis_Heli_Attack_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-35 Krokodil";
        side = 2;
        faction = "ind_raven_f";
        crew = "I_Raven_Soldier_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_Raven_Truck_02_F : Aegis_O_Raven_Truck_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport (covered)";
        side = 2;
        faction = "ind_raven_f";
        crew = "I_Raven_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_Raven_UAV_02_lxWS : UAV_02_Base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drofa AP-5";
        side = 2;
        faction = "ind_raven_f";
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

    class I_Raven_Crew_F : I_Raven_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 2;
        faction = "ind_raven_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_ION_default"};

        uniformClass = "Aegis_U_O_Luchnik_arid_F";

        linkedItems[] = {"V_TacVest_grn","H_tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12U_545_lush_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_lush_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Raven_Heli_Light_02_dynamicLoadout_ard_F : O_R_Heli_Light_02_dynamicLoadout_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka";
        side = 2;
        faction = "ind_raven_f";
        crew = "I_Raven_Soldier_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Raven_Heli_Light_02_unarmed_ard_F : O_R_Heli_Light_02_unarmed_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka (unarmed)";
        side = 2;
        faction = "ind_raven_f";
        crew = "I_Raven_Soldier_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Raven_MRAP_02_F : O_R_MRAP_02_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Galkin";
        side = 2;
        faction = "ind_raven_f";
        crew = "I_Raven_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Raven_MRAP_02_GMG_F : O_R_MRAP_02_gmg_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Galkin GMG";
        side = 2;
        faction = "ind_raven_f";
        crew = "I_Raven_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Raven_MRAP_02_HMG_F : O_R_MRAP_02_hmg_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Galkin HMG";
        side = 2;
        faction = "ind_raven_f";
        crew = "I_Raven_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Raven_Soldier_CQ_RF : I_Raven_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Heavy)";
        side = 2;
        faction = "ind_raven_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_ION_default"};

        uniformClass = "Aegis_U_O_Luchnik_RolledUp_Arid_F";

        linkedItems[] = {"H_HelmetHeavy_black_RF","Aegis_V_OCarrierLuchnik_CQB_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetHeavy_black_RF","Aegis_V_OCarrierLuchnik_CQB_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_ash12_blk_ACO_FL_RF","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_ash12_blk_ACO_FL_RF","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"20rnd_127x55_mag_rf","20rnd_127x55_mag_rf","20rnd_127x55_mag_rf","20rnd_127x55_mag_rf","20rnd_127x55_mag_rf","20rnd_127x55_mag_rf","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"20rnd_127x55_mag_rf","20rnd_127x55_mag_rf","20rnd_127x55_mag_rf","20rnd_127x55_mag_rf","20rnd_127x55_mag_rf","20rnd_127x55_mag_rf","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Raven_Soldier_UAV_F : I_Raven_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 2;
        faction = "ind_raven_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_ION_default"};

        uniformClass = "Aegis_U_O_Luchnik_RolledUp_Arid_F";

        backpack = "I_Raven_UAV_01_backpack_F";

        linkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_Lite_blk_F","G_Tactical_Clear","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UAVTerminal"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_Lite_blk_F","G_Tactical_Clear","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UAVTerminal"};

        weapons[] = {"Aegis_SMG_Gepard_blk_ACO_FL_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_SMG_Gepard_blk_ACO_FL_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Raven_Soldier_helipilot_F : I_Raven_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 2;
        faction = "ind_raven_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_ION_default"};

        uniformClass = "Aegis_U_O_Luchnik_arid_F";

        linkedItems[] = {"H_PilotHelmetHeli_O","V_TacVest_grn","O_NVGoggles_grn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_PilotHelmetHeli_O","V_TacVest_grn","O_NVGoggles_grn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_SMG_Gepard_blk_ACO_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_SMG_Gepard_blk_ACO_F","Throw","Put"};

        magazines[] = {"Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Raven_Soldier_unarmed_F : I_Raven_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 2;
        faction = "ind_raven_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_ION_default"};

        uniformClass = "Aegis_U_O_Luchnik_Arid_F";

        linkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class I_Raven_UAV_01_F : UAV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Shukhov AR-2";
        side = 2;
        faction = "ind_raven_f";
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

    class I_Raven_UAV_06_F : UAV_06_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Katun AL-6";
        side = 2;
        faction = "ind_raven_f";
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

    class I_Raven_UAV_06_medical_F : UAV_06_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Katun AL-6 (Medical)";
        side = 2;
        faction = "ind_raven_f";
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

    class I_Raven_engineer_F : I_Raven_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 2;
        faction = "ind_raven_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_ION_default"};

        uniformClass = "Aegis_U_O_Luchnik_Arid_F";

        backpack = "B_Carryall_green_eng_F";

        linkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_GL_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_GL_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12U_545_lush_aco_flash_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_lush_aco_flash_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Raven_medic_F : I_Raven_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramedic";
        side = 2;
        faction = "ind_raven_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_ION_default"};

        uniformClass = "Aegis_U_O_Luchnik_Arid_F";

        backpack = "B_FieldPack_green_Medic_F";

        linkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_CQB_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_CQB_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12U_545_lush_aco_flash_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_lush_aco_flash_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Raven_soldier_F : I_Raven_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 2;
        faction = "ind_raven_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_ION_default"};

        uniformClass = "Aegis_U_O_Luchnik_Arid_F";

        linkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_Lite_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_Lite_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12_545_lush_aco_flash_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_545_lush_aco_flash_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Raven_soldier_GL_F : I_Raven_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 2;
        faction = "ind_raven_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_ION_default"};

        uniformClass = "U_O_R_Gorka_01_F";

        linkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_GL_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_GL_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12_GL_545_aco_flash_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_GL_545_aco_flash_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Raven_soldier_LAT_F : I_Raven_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 2;
        faction = "ind_raven_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_ION_default"};

        uniformClass = "U_O_R_CombatUniform_tshirt_arid_F";

        backpack = "B_FieldPack_green_RPG_AT_F";

        linkedItems[] = {"H_HelmetSpecter_black_F","Aegis_V_OCarrierLuchnik_Lite_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetSpecter_black_F","Aegis_V_OCarrierLuchnik_Lite_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12U_545_lush_aco_flash_F","launch_RPG32_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_lush_aco_flash_F","launch_RPG32_black_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","RPG32_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","RPG32_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Raven_soldier_MG_F : I_Raven_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 2;
        faction = "ind_raven_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_ION_default"};

        uniformClass = "Aegis_U_O_Luchnik_RolledUp_Arid_F";

        linkedItems[] = {"H_HelmetSpecter_black_F","Aegis_V_OCarrierLuchnik_CQB_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetSpecter_black_F","Aegis_V_OCarrierLuchnik_CQB_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_RPK12_lush_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_RPK12_lush_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"75Rnd_762x39_AK12_Lush_Mag_F","75Rnd_762x39_AK12_Lush_Mag_F","75Rnd_762x39_AK12_Lush_Mag_F","75Rnd_762x39_AK12_Lush_Mag_F","75Rnd_762x39_AK12_Lush_Mag_F","75Rnd_762x39_AK12_Lush_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"75Rnd_762x39_AK12_Lush_Mag_F","75Rnd_762x39_AK12_Lush_Mag_F","75Rnd_762x39_AK12_Lush_Mag_F","75Rnd_762x39_AK12_Lush_Mag_F","75Rnd_762x39_AK12_Lush_Mag_F","75Rnd_762x39_AK12_Lush_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Raven_soldier_M_F : I_Raven_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 2;
        faction = "ind_raven_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_ION_default"};

        uniformClass = "Aegis_U_O_Luchnik_RolledUp_Arid_F";

        linkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_Lite_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_Lite_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_DMR_01_black_ARCO_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_01_black_ARCO_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_762x54_mag","10Rnd_762x54_mag","10Rnd_762x54_mag","10Rnd_762x54_mag","10Rnd_762x54_mag","10Rnd_762x54_mag","10Rnd_762x54_mag","10Rnd_762x54_mag","10Rnd_762x54_mag","10Rnd_762x54_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"10Rnd_762x54_mag","10Rnd_762x54_mag","10Rnd_762x54_mag","10Rnd_762x54_mag","10Rnd_762x54_mag","10Rnd_762x54_mag","10Rnd_762x54_mag","10Rnd_762x54_mag","10Rnd_762x54_mag","10Rnd_762x54_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Raven_soldier_TL_F : I_Raven_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 2;
        faction = "ind_raven_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_ION_default"};

        uniformClass = "U_O_R_Gorka_01_F";

        linkedItems[] = {"H_HelmetSpecter_black_headset_F","Aegis_V_OCarrierLuchnik_Lite_blk_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetSpecter_black_headset_F","Aegis_V_OCarrierLuchnik_Lite_blk_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12_545_lush_arco_flash_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_AK12_545_lush_arco_flash_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_Tracer_F","30Rnd_545x39_AK12_lush_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_F","30Rnd_545x39_AK12_lush_Mag_Tracer_F","30Rnd_545x39_AK12_lush_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Raven_soldier_UAV_02_lxWS_F : I_Raven_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AP-5)";
        side = 2;
        faction = "ind_raven_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_ION_default"};

        uniformClass = "Aegis_U_O_Luchnik_RolledUp_Arid_F";

        backpack = "Aegis_I_Raven_UAV_02_backpack_lxWS";

        linkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_Lite_blk_F","G_Tactical_Clear","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UAVTerminal"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_Lite_blk_F","G_Tactical_Clear","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UAVTerminal"};

        weapons[] = {"Aegis_SMG_Gepard_blk_ACO_FL_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_SMG_Gepard_blk_ACO_FL_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Raven_soldier_UAV_06_F : I_Raven_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 2;
        faction = "ind_raven_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_ION_default"};

        uniformClass = "Aegis_U_O_Luchnik_RolledUp_Arid_F";

        backpack = "I_Raven_UAV_06_backpack_F";

        linkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_Lite_blk_F","G_Tactical_Clear","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UAVTerminal"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_Lite_blk_F","G_Tactical_Clear","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UAVTerminal"};

        weapons[] = {"Aegis_SMG_Gepard_blk_ACO_FL_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_SMG_Gepard_blk_ACO_FL_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Raven_soldier_UAV_06_medical_F : I_Raven_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 2;
        faction = "ind_raven_f";

        identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro","Head_Enoch","Head_Asian","G_ION_default"};

        uniformClass = "Aegis_U_O_Luchnik_RolledUp_Arid_F";

        backpack = "I_Raven_UAV_06_medical_backpack_F";

        linkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_Lite_blk_F","G_Tactical_Clear","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UAVTerminal"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_khaki_F","Aegis_V_OCarrierLuchnik_Lite_blk_F","G_Tactical_Clear","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UAVTerminal"};

        weapons[] = {"Aegis_SMG_Gepard_blk_ACO_FL_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_SMG_Gepard_blk_ACO_FL_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","Aegis_40Rnd_9x21_Gepard_Green_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};


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
        class IND_Raven_F {
            class Infantry {
                class I_Raven_InfSentry {
                    name = "Sentry";
                    side = 2;
                    faction = "IND_Raven_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "I_Raven_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_Raven_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class I_Raven_InfSquad {
                    name = "Rifle Squad";
                    side = 2;
                    faction = "IND_Raven_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "I_Raven_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_Raven_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_Raven_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_Raven_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "I_Raven_soldier_GL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "I_Raven_soldier_MG_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "I_Raven_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "I_Raven_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class I_Raven_InfTeam {
                    name = "Fire Team";
                    side = 2;
                    faction = "IND_Raven_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "I_Raven_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_Raven_soldier_MG_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_Raven_soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_Raven_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class I_Raven_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 2;
                    faction = "IND_Raven_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_I_Raven_APC_Wheeled_04_export_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_Raven_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_Raven_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_Raven_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "I_Raven_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "I_Raven_soldier_MG_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "I_Raven_medic_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                };
            };
            class Motorized_MTP {
                class I_Raven_MotInf_Reinforcements {
                    name = "Motorized Reinforcements";
                    side = 2;
                    faction = "IND_Raven_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_I_Raven_Truck_02_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_Raven_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "I_Raven_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "I_Raven_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "I_Raven_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "I_Raven_soldier_GL_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "I_Raven_soldier_MG_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "I_Raven_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-5,-8,0};
                    };

                    class Unit8 {
                        vehicle = "I_Raven_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-10,0};
                    };

                    class Unit9 {
                        vehicle = "I_Raven_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "I_Raven_soldier_MG_F";
                        rank = "CORPORAL";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "I_Raven_soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "I_Raven_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };
                };
                class I_Raven_MotInf_Team {
                    name = "Motorized Team";
                    side = 2;
                    faction = "IND_Raven_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "I_Raven_MRAP_02_HMG_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_Raven_soldier_MG_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_Raven_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
        };
    };
};
