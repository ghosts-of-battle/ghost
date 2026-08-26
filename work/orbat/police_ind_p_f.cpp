//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class Police_IND_P_F {
        displayName = "Police";
        side = 2;
        priority = 3;
        icon = "\A3_Police\Data_F_Police\FactionIcons\icon_Police_CA.paa";
        flag = "\A3\Data_F_Enoch\Flags\flag_Enoch_CO.paa";
    };
};

class CfgVehicles {

    class Boat_Civil_01_base_F;
    class Boat_Civil_01_base_F_OCimport_01 : Boat_Civil_01_base_F { scope = 0; class EventHandlers; };
    class Boat_Civil_01_base_F_OCimport_02 : Boat_Civil_01_base_F_OCimport_01 { class EventHandlers; };

    class Offroad_01_military_comms_base_F;
    class Offroad_01_military_comms_base_F_OCimport_01 : Offroad_01_military_comms_base_F { scope = 0; class EventHandlers; };
    class Offroad_01_military_comms_base_F_OCimport_02 : Offroad_01_military_comms_base_F_OCimport_01 { class EventHandlers; };

    class Offroad_01_military_covered_base_F;
    class Offroad_01_military_covered_base_F_OCimport_01 : Offroad_01_military_covered_base_F { scope = 0; class EventHandlers; };
    class Offroad_01_military_covered_base_F_OCimport_02 : Offroad_01_military_covered_base_F_OCimport_01 { class EventHandlers; };

    class Offroad_01_civil_base_F;
    class Offroad_01_civil_base_F_OCimport_01 : Offroad_01_civil_base_F { scope = 0; class EventHandlers; };
    class Offroad_01_civil_base_F_OCimport_02 : Offroad_01_civil_base_F_OCimport_01 { class EventHandlers; };

    class Police_I_P_PoliceOfficer_Base_F;
    class Police_I_P_PoliceOfficer_Base_F_OCimport_01 : Police_I_P_PoliceOfficer_Base_F { scope = 0; class EventHandlers; };
    class Police_I_P_PoliceOfficer_Base_F_OCimport_02 : Police_I_P_PoliceOfficer_Base_F_OCimport_01 { class EventHandlers; };

    class Quadbike_01_base_F;
    class Quadbike_01_base_F_OCimport_01 : Quadbike_01_base_F { scope = 0; class EventHandlers; };
    class Quadbike_01_base_F_OCimport_02 : Quadbike_01_base_F_OCimport_01 { class EventHandlers; };

    class Police_I_P_TacPoliceOfficer_Base_F;
    class Police_I_P_TacPoliceOfficer_Base_F_OCimport_01 : Police_I_P_TacPoliceOfficer_Base_F { scope = 0; class EventHandlers; };
    class Police_I_P_TacPoliceOfficer_Base_F_OCimport_02 : Police_I_P_TacPoliceOfficer_Base_F_OCimport_01 { class EventHandlers; };

    class UGV_02_Demining_Base_F;
    class UGV_02_Demining_Base_F_OCimport_01 : UGV_02_Demining_Base_F { scope = 0; class EventHandlers; };
    class UGV_02_Demining_Base_F_OCimport_02 : UGV_02_Demining_Base_F_OCimport_01 { class EventHandlers; };

    class Police_I_P_Boat_Civil_01_police_F : Boat_Civil_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Motorboat (Police)";
        side = 2;
        faction = "police_ind_p_f";
        crew = "Police_I_P_PoliceOfficer_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Police_I_P_Offroad_01_comms_F : Offroad_01_military_comms_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Comms)";
        side = 2;
        faction = "police_ind_p_f";
        crew = "Police_I_P_PoliceOfficer_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Police_I_P_Offroad_01_covered_F : Offroad_01_military_covered_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Covered)";
        side = 2;
        faction = "police_ind_p_f";
        crew = "Police_I_P_PoliceOfficer_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Police_I_P_Offroad_01_police_F : Offroad_01_civil_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 2;
        faction = "police_ind_p_f";
        crew = "Police_I_P_PoliceOfficer_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Police_I_P_PoliceOfficer_F : Police_I_P_PoliceOfficer_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Police Officer (SMG)";
        side = 2;
        faction = "police_ind_p_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_CIVIL_male"};

        uniformClass = "U_Marshal";

        linkedItems[] = {"V_TacVest_blk_POLICE","H_Cap_police","G_WirelessEarpiece_F","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_blk_POLICE","H_Cap_police","G_WirelessEarpiece_F","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_03C_black","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"SMG_03C_black","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Police_I_P_PoliceOfficer_Rifle_F : Police_I_P_PoliceOfficer_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Police Officer (Rifle)";
        side = 2;
        faction = "police_ind_p_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_CIVIL_male"};

        uniformClass = "U_Marshal";

        linkedItems[] = {"V_TacVest_blk_POLICE","H_Beret_blk_POLICE","G_WirelessEarpiece_F","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_blk_POLICE","H_Beret_blk_POLICE","G_WirelessEarpiece_F","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_G36C_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Police_I_P_PoliceOfficer_SG_F : Police_I_P_PoliceOfficer_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Police Officer (Shotgun)";
        side = 2;
        faction = "police_ind_p_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_CIVIL_male"};

        uniformClass = "U_Marshal";

        linkedItems[] = {"V_TacVest_blk_POLICE","H_Cap_police","G_WirelessEarpiece_F","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_blk_POLICE","H_Cap_police","G_WirelessEarpiece_F","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};

        weapons[] = {"sgun_Mp153_classic_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"sgun_Mp153_classic_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Police_I_P_Quadbike_01_F : Quadbike_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 2;
        faction = "police_ind_p_f";
        crew = "Police_I_P_PoliceOfficer_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Police_I_P_TacPoliceOfficer_F : Police_I_P_TacPoliceOfficer_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tactical Police Officer (Rifle)";
        side = 2;
        faction = "police_ind_p_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_CIVIL_male"};

        uniformClass = "Police_U_I_P_PoliceUniform_gloves_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_POLICE_F","H_HelmetSpecter_black_headset_F","G_Balaclava_light_blk_F","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_POLICE_F","H_HelmetSpecter_black_headset_F","G_Balaclava_light_blk_F","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_G36C_Holo_FL_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Holo_FL_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Police_I_P_TacPoliceOfficer_SG_F : Police_I_P_TacPoliceOfficer_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tactical Police Officer (Shotgun)";
        side = 2;
        faction = "police_ind_p_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_CIVIL_male"};

        uniformClass = "Police_U_I_P_PoliceUniform_gloves_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_POLICE_F","H_HelmetSpecter_black_headset_F","G_Balaclava_light_G_blk_F","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_POLICE_F","H_HelmetSpecter_black_headset_F","G_Balaclava_light_G_blk_F","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};

        weapons[] = {"sgun_Mp153_black_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"sgun_Mp153_black_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Police_I_P_TacPoliceOfficer_Sniper_F : Police_I_P_TacPoliceOfficer_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 2;
        faction = "police_ind_p_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_CIVIL_male"};

        uniformClass = "Police_U_I_P_PoliceUniform_F";

        linkedItems[] = {"V_TacVest_blk_POLICE","H_Cap_headphones_blk","G_Balaclava_light_blk_F","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_blk_POLICE","H_Cap_headphones_blk","G_Balaclava_light_blk_F","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_DMR_06_black_AMS_BI_F","hgun_G17_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"srifle_DMR_06_black_AMS_BI_F","hgun_G17_black_F","Throw","Put","Binocular"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Police_I_P_TacPoliceOfficer_UGV_02_F : Police_I_P_TacPoliceOfficer_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (Demining)";
        side = 2;
        faction = "police_ind_p_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_CIVIL_male"};

        uniformClass = "Police_U_I_P_PoliceUniform_F";

        backpack = "Police_I_P_UGV_02_Demining_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_POLICE_F","H_HelmetSpecter_black_headset_F","G_Balaclava_light_blk_F","I_UavTerminal","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_POLICE_F","H_HelmetSpecter_black_headset_F","G_Balaclava_light_blk_F","I_UavTerminal","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_G36C_Holo_FL_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_G36C_Holo_FL_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Police_I_P_UGV_02_Demining_F : UGV_02_Demining_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Demining UGV";
        side = 2;
        faction = "police_ind_p_f";
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

};

class CfgGroups {
    class Indep {
        class Police_IND_P_F {
            class Infantry {
                class POLICE_Inf_Patrol {
                    name = "Police Patrol";
                    side = 2;
                    faction = "Police_IND_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Police_I_P_PoliceOfficer_Rifle_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Police_I_P_PoliceOfficer_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
            };
            class Motorized {
                class POLICE_MotInf_Patrol {
                    name = "Motorized Police Patrol";
                    side = 2;
                    faction = "Police_IND_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Police_I_P_Offroad_01_police_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Police_I_P_PoliceOfficer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
            };
            class SpecOps {
                class POLICE_Spec_Team {
                    name = "Tactical Police Team";
                    side = 2;
                    faction = "Police_IND_P_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";

                    class Unit0 {
                        vehicle = "Police_I_P_TacPoliceOfficer_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Police_I_P_TacPoliceOfficer_Sniper_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Police_I_P_TacPoliceOfficer_SG_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Police_I_P_TacPoliceOfficer_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
        };
    };
};
