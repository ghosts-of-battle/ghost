//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class AddGis_IND_AM_F {
        displayName = "APF";
        side = 2;
        priority = 3;
    };
};

class CfgVehicles {

    class AddGis_APC_Tracked_Type63_HMG_base;
    class AddGis_APC_Tracked_Type63_HMG_base_OCimport_01 : AddGis_APC_Tracked_Type63_HMG_base { scope = 0; class EventHandlers; };
    class AddGis_APC_Tracked_Type63_HMG_base_OCimport_02 : AddGis_APC_Tracked_Type63_HMG_base_OCimport_01 { class EventHandlers; };

    class AddGis_APC_Tracked_Type63_base;
    class AddGis_APC_Tracked_Type63_base_OCimport_01 : AddGis_APC_Tracked_Type63_base { scope = 0; class EventHandlers; };
    class AddGis_APC_Tracked_Type63_base_OCimport_02 : AddGis_APC_Tracked_Type63_base_OCimport_01 { class EventHandlers; };

    class AddGis_I_AM_Soldier_Base_F;
    class AddGis_I_AM_Soldier_Base_F_OCimport_01 : AddGis_I_AM_Soldier_Base_F { scope = 0; class EventHandlers; };
    class AddGis_I_AM_Soldier_Base_F_OCimport_02 : AddGis_I_AM_Soldier_Base_F_OCimport_01 { class EventHandlers; };

    class I_G_HMG_02_F;
    class I_G_HMG_02_F_OCimport_01 : I_G_HMG_02_F { scope = 0; class EventHandlers; };
    class I_G_HMG_02_F_OCimport_02 : I_G_HMG_02_F_OCimport_01 { class EventHandlers; };

    class I_G_HMG_02_high_F;
    class I_G_HMG_02_high_F_OCimport_01 : I_G_HMG_02_high_F { scope = 0; class EventHandlers; };
    class I_G_HMG_02_high_F_OCimport_02 : I_G_HMG_02_high_F_OCimport_01 { class EventHandlers; };

    class I_Mortar_01_F;
    class I_Mortar_01_F_OCimport_01 : I_Mortar_01_F { scope = 0; class EventHandlers; };
    class I_Mortar_01_F_OCimport_02 : I_Mortar_01_F_OCimport_01 { class EventHandlers; };

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

    class I_G_Offroad_01_repair_F;
    class I_G_Offroad_01_repair_F_OCimport_01 : I_G_Offroad_01_repair_F { scope = 0; class EventHandlers; };
    class I_G_Offroad_01_repair_F_OCimport_02 : I_G_Offroad_01_repair_F_OCimport_01 { class EventHandlers; };

    class I_G_Pickup_rf;
    class I_G_Pickup_rf_OCimport_01 : I_G_Pickup_rf { scope = 0; class EventHandlers; };
    class I_G_Pickup_rf_OCimport_02 : I_G_Pickup_rf_OCimport_01 { class EventHandlers; };

    class I_G_Pickup_fuel_rf;
    class I_G_Pickup_fuel_rf_OCimport_01 : I_G_Pickup_fuel_rf { scope = 0; class EventHandlers; };
    class I_G_Pickup_fuel_rf_OCimport_02 : I_G_Pickup_fuel_rf_OCimport_01 { class EventHandlers; };

    class I_G_Pickup_hmg_rf;
    class I_G_Pickup_hmg_rf_OCimport_01 : I_G_Pickup_hmg_rf { scope = 0; class EventHandlers; };
    class I_G_Pickup_hmg_rf_OCimport_02 : I_G_Pickup_hmg_rf_OCimport_01 { class EventHandlers; };

    class I_G_Pickup_mrl_rf;
    class I_G_Pickup_mrl_rf_OCimport_01 : I_G_Pickup_mrl_rf { scope = 0; class EventHandlers; };
    class I_G_Pickup_mrl_rf_OCimport_02 : I_G_Pickup_mrl_rf_OCimport_01 { class EventHandlers; };

    class I_G_Pickup_repair_rf;
    class I_G_Pickup_repair_rf_OCimport_01 : I_G_Pickup_repair_rf { scope = 0; class EventHandlers; };
    class I_G_Pickup_repair_rf_OCimport_02 : I_G_Pickup_repair_rf_OCimport_01 { class EventHandlers; };

    class I_G_Pickup_Rocket_rf;
    class I_G_Pickup_Rocket_rf_OCimport_01 : I_G_Pickup_Rocket_rf { scope = 0; class EventHandlers; };
    class I_G_Pickup_Rocket_rf_OCimport_02 : I_G_Pickup_Rocket_rf_OCimport_01 { class EventHandlers; };

    class I_G_Quadbike_01_F;
    class I_G_Quadbike_01_F_OCimport_01 : I_G_Quadbike_01_F { scope = 0; class EventHandlers; };
    class I_G_Quadbike_01_F_OCimport_02 : I_G_Quadbike_01_F_OCimport_01 { class EventHandlers; };

    class AddGis_I_AM_Soldier_F;
    class AddGis_I_AM_Soldier_F_OCimport_01 : AddGis_I_AM_Soldier_F { scope = 0; class EventHandlers; };
    class AddGis_I_AM_Soldier_F_OCimport_02 : AddGis_I_AM_Soldier_F_OCimport_01 { class EventHandlers; };

    class I_G_UAV_02_IED_lxWS;
    class I_G_UAV_02_IED_lxWS_OCimport_01 : I_G_UAV_02_IED_lxWS { scope = 0; class EventHandlers; };
    class I_G_UAV_02_IED_lxWS_OCimport_02 : I_G_UAV_02_IED_lxWS_OCimport_01 { class EventHandlers; };

    class I_G_Van_01_fuel_F;
    class I_G_Van_01_fuel_F_OCimport_01 : I_G_Van_01_fuel_F { scope = 0; class EventHandlers; };
    class I_G_Van_01_fuel_F_OCimport_02 : I_G_Van_01_fuel_F_OCimport_01 { class EventHandlers; };

    class I_G_Van_01_transport_F;
    class I_G_Van_01_transport_F_OCimport_01 : I_G_Van_01_transport_F { scope = 0; class EventHandlers; };
    class I_G_Van_01_transport_F_OCimport_02 : I_G_Van_01_transport_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_G_APC_Wheeled_04_export_F;
    class Aegis_I_G_APC_Wheeled_04_export_F_OCimport_01 : Aegis_I_G_APC_Wheeled_04_export_F { scope = 0; class EventHandlers; };
    class Aegis_I_G_APC_Wheeled_04_export_F_OCimport_02 : Aegis_I_G_APC_Wheeled_04_export_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_G_ZU23_lxWS_F;
    class Aegis_I_G_ZU23_lxWS_F_OCimport_01 : Aegis_I_G_ZU23_lxWS_F { scope = 0; class EventHandlers; };
    class Aegis_I_G_ZU23_lxWS_F_OCimport_02 : Aegis_I_G_ZU23_lxWS_F_OCimport_01 { class EventHandlers; };

    class AddGis_I_AM_APC_Tracked_Type63_HMG : AddGis_APC_Tracked_Type63_HMG_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Type-63 Zhichi (HMG)";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_APC_Tracked_Type63_Unarmed : AddGis_APC_Tracked_Type63_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Type-63 Zhichi (Unarmed)";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Crew_F : AddGis_I_AM_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 2;
        faction = "addgis_ind_am_f";

        identityTypes[] = {"LanguageFRE_F","Head_African","G_GUERIL_default"};

        uniformClass = "AddGis_U_I_AM_Soldier_Militia_tanktop_F";

        linkedItems[] = {"V_TacVest_khk","lxWS_H_Tank_tan_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","lxWS_H_Tank_tan_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKS_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};

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

    class AddGis_I_AM_Engineer_F : AddGis_I_AM_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 2;
        faction = "addgis_ind_am_f";

        identityTypes[] = {"LanguageFRE_F","Head_African","G_GUERIL_default"};

        uniformClass = "AddGis_U_I_AM_Soldier_Militia_tanktop_F";

        backpack = "AddGis_B_I_AM_ViperHarness_eng_F";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetGora_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetGora_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"AddGis_arifle_CETME_F","Throw","Put"};
        respawnWeapons[] = {"AddGis_arifle_CETME_F","Throw","Put"};

        magazines[] = {"AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F"};
        respawnMagazines[] = {"AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_HMG_02_F : I_G_HMG_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_HMG_02_high_F : I_G_HMG_02_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Medic_F : AddGis_I_AM_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 2;
        faction = "addgis_ind_am_f";

        identityTypes[] = {"LanguageFRE_F","Head_African","G_GUERIL_default"};

        uniformClass = "AddGis_U_I_AM_Soldier_Militia_tee_wht_F";

        backpack = "B_FieldPack_green_OSMedic_F";

        linkedItems[] = {"V_TacVest_khk","H_HelmetGora_Cover_HS_apf_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_HelmetGora_Cover_HS_apf_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKS_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Mortar_01_F : I_Mortar_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AddGis_I_AM_Mortar_01_F";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Offroad_01_AT_F : I_G_Offroad_01_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (AT)";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Offroad_01_F : I_G_Offroad_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Offroad_01_armed_F : I_G_Offroad_01_armed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (HMG)";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Offroad_01_armor_AT_F : I_G_Offroad_01_armor_AT_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (UP, AT)";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Offroad_01_armor_armed_F : I_G_Offroad_01_armor_armed_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (UP, HMG)";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Offroad_01_armor_base_F : I_G_Offroad_01_armor_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (UP)";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Offroad_01_repair_F : I_G_Offroad_01_repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Repair)";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Pickup_F : I_G_Pickup_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Pickup_fuel_F : I_G_Pickup_fuel_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Fuel)";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Pickup_hmg_F : I_G_Pickup_hmg_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (HMG)";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Pickup_mrl_F : I_G_Pickup_mrl_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (MRL)";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Pickup_repair_F : I_G_Pickup_repair_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Repair)";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Pickup_rocket_F : I_G_Pickup_Rocket_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Rocket)";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Quadbike_01_F : I_G_Quadbike_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Soldier_AAR_F : AddGis_I_AM_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 2;
        faction = "addgis_ind_am_f";

        identityTypes[] = {"LanguageFRE_F","Head_African","G_GUERIL_default"};

        uniformClass = "AddGis_U_I_AM_Soldier_Militia_tanktop_F";

        backpack = "AddGis_B_I_AM_FieldPack_khk_aar_F";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetGora_Cover_HS_apf_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetGora_Cover_HS_apf_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"AddGis_arifle_CETME_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"AddGis_arifle_CETME_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Soldier_AR_F : AddGis_I_AM_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 2;
        faction = "addgis_ind_am_f";

        identityTypes[] = {"LanguageFRE_F","Head_African","G_GUERIL_default"};

        uniformClass = "AddGis_U_I_AM_Soldier_Militia_tee_wht_F";

        linkedItems[] = {"H_HelmetGora_Cover_HS_apf_F","Aegis_V_ChestrigEast_khk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetGora_Cover_HS_apf_F","Aegis_V_ChestrigEast_khk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_RPK_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_RPK_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
        respawnMagazines[] = {"75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Soldier_Equipped_F : AddGis_I_AM_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Equipped)";
        side = 2;
        faction = "addgis_ind_am_f";

        identityTypes[] = {"LanguageFRE_F","Head_African","G_GUERIL_default"};

        uniformClass = "AddGis_U_I_AM_Soldier_Militia_unif_F";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetGora_Cover_HS_apf_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetGora_Cover_HS_apf_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"AddGis_arifle_CETME_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"AddGis_arifle_CETME_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Soldier_F : AddGis_I_AM_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 2;
        faction = "addgis_ind_am_f";

        identityTypes[] = {"LanguageFRE_F","Head_African","G_GUERIL_default"};

        uniformClass = "AddGis_U_I_AM_Soldier_Militia_tee_khk_F";

        linkedItems[] = {"V_HarnessO_brn","H_HelmetGora_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_HelmetGora_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"AddGis_arifle_CETME_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"AddGis_arifle_CETME_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Soldier_GL_F : AddGis_I_AM_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 2;
        faction = "addgis_ind_am_f";

        identityTypes[] = {"LanguageFRE_F","Head_African","G_GUERIL_default"};

        uniformClass = "AddGis_U_I_AM_Soldier_Militia_tee_khk_F";

        linkedItems[] = {"H_HelmetGora_oli_F","V_HarnessOGL_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetGora_oli_F","V_HarnessOGL_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AK74_GL_oak_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AK74_GL_oak_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Soldier_LAT_F : AddGis_I_AM_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 2;
        faction = "addgis_ind_am_f";

        identityTypes[] = {"LanguageFRE_F","Head_African","G_GUERIL_default"};

        uniformClass = "AddGis_U_I_AM_Soldier_Militia_unif_F";

        backpack = "AddGis_B_I_AM_FieldPack_khk_lat_F";

        linkedItems[] = {"H_HelmetGora_Cover_HS_apf_F","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetGora_Cover_HS_apf_F","V_HarnessO_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"AddGis_arifle_CETME_F","launch_RPG7_F","Throw","Put"};
        respawnWeapons[] = {"AddGis_arifle_CETME_F","launch_RPG7_F","Throw","Put"};

        magazines[] = {"AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","RPG7_F"};
        respawnMagazines[] = {"AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","RPG7_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Soldier_MG_F : AddGis_I_AM_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machinegunner";
        side = 2;
        faction = "addgis_ind_am_f";

        identityTypes[] = {"LanguageFRE_F","Head_African","G_GUERIL_default"};

        uniformClass = "AddGis_U_I_AM_Soldier_Militia_unif_shortsleeve_F";

        backpack = "AddGis_B_I_AM_ViperHarness_mg_F";

        linkedItems[] = {"H_HelmetGora_oli_F","Aegis_V_Ammo_Bandolier_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetGora_oli_F","Aegis_V_Ammo_Bandolier_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"LMG_S77_lxWS","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"LMG_S77_lxWS","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"100Rnd_762x51_S77_Yellow_lxWS","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
        respawnMagazines[] = {"100Rnd_762x51_S77_Yellow_lxWS","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Soldier_M_F : AddGis_I_AM_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 2;
        faction = "addgis_ind_am_f";

        identityTypes[] = {"LanguageFRE_F","Head_African","G_GUERIL_default"};

        uniformClass = "AddGis_U_I_AM_Soldier_Militia_tee_khk_F";

        linkedItems[] = {"V_BandollierB_khk","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_khk","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"AddGis_srifle_SVD_DMS_f","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"AddGis_srifle_SVD_DMS_f","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
        respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Soldier_SL_F : AddGis_I_AM_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 2;
        faction = "addgis_ind_am_f";

        identityTypes[] = {"LanguageFRE_F","Head_African","G_GUERIL_default"};

        uniformClass = "AddGis_U_I_AM_Soldier_Militia_unif_shortsleeve_F";

        linkedItems[] = {"V_BandollierB_khk","H_Beret_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_khk","H_Beret_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"AddGis_arifle_CETME_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"AddGis_arifle_CETME_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","AddGis_20Rnd_762x51_G3_Mag_yellow_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Soldier_unarmed_F : AddGis_I_AM_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 2;
        faction = "addgis_ind_am_f";

        identityTypes[] = {"LanguageFRE_F","Head_African","G_GUERIL_default"};

        uniformClass = "AddGis_U_I_AM_Soldier_Militia_tee_khk_F";

        linkedItems[] = {"V_HarnessO_brn","H_Cap_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_Cap_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class AddGis_I_AM_UAV_02_IED_F : I_G_UAV_02_IED_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "IED UAV";
        side = 2;
        faction = "addgis_ind_am_f";
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

    class AddGis_I_AM_Van_01_fuel_F : I_G_Van_01_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fuel Truck";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Van_01_transport_F : I_G_Van_01_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_Wheeled_04_export_F : Aegis_I_G_APC_Wheeled_04_export_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-100A";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_I_AM_ZU23_F : Aegis_I_G_ZU23_lxWS_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zu-23-2";
        side = 2;
        faction = "addgis_ind_am_f";
        crew = "AddGis_I_AM_Soldier_F";

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
    class Indep {
        class AddGis_IND_AM_F {
            class Infantry {
                class I_AM_InfSentry {
                    name = "Sentry";
                    side = 2;
                    faction = "AddGis_IND_AM_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "AddGis_I_AM_Soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "AddGis_I_AM_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class I_AM_InfSquad {
                    name = "Rifle Squad";
                    side = 2;
                    faction = "AddGis_IND_AM_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "AddGis_I_AM_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "AddGis_I_AM_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "AddGis_I_AM_Soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "AddGis_I_AM_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "AddGis_I_AM_Soldier_GL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "AddGis_I_AM_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "AddGis_I_AM_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "AddGis_I_AM_Medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class I_AM_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 2;
                    faction = "AddGis_IND_AM_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "AddGis_I_AM_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "AddGis_I_AM_Soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "AddGis_I_AM_Soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "AddGis_I_AM_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "AddGis_I_AM_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "AddGis_I_AM_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "AddGis_I_AM_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "AddGis_I_AM_Medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class I_AM_InfTeam {
                    name = "Fire Team";
                    side = 2;
                    faction = "AddGis_IND_AM_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "AddGis_I_AM_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "AddGis_I_AM_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "AddGis_I_AM_Soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "AddGis_I_AM_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class I_AM_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 2;
                    faction = "AddGis_IND_AM_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "AddGis_I_AM_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "AddGis_I_AM_Soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "AddGis_I_AM_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "AddGis_I_AM_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Support {
                class I_AM_Support_CLS {
                    name = "Support Team (CLS)";
                    side = 2;
                    faction = "AddGis_IND_AM_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "AddGis_I_AM_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "AddGis_I_AM_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "AddGis_I_AM_Medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "AddGis_I_AM_Medic_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class I_AM_Support_ENG {
                    name = "Support Team (Engineer)";
                    side = 2;
                    faction = "AddGis_IND_AM_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "AddGis_I_AM_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "AddGis_I_AM_Engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "AddGis_I_AM_Engineer_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "AddGis_I_AM_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
        };
    };
};
