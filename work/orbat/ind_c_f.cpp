//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class IND_C_F {
        displayName = "Syndikat";
        side = 2;
        priority = 3;
        icon = "\a3\Data_F_Exp\FactionIcons\icon_SYND_CA.paa";
        flag = "\a3\Data_F_Exp\Flags\flag_SYND_CO.paa";
    };
};

class CfgVehicles {

    class I_C_Soldier_Para_4_F;
    class I_C_Soldier_Para_4_F_OCimport_01 : I_C_Soldier_Para_4_F { scope = 0; class EventHandlers; };
    class I_C_Soldier_Para_4_F_OCimport_02 : I_C_Soldier_Para_4_F_OCimport_01 { class EventHandlers; };

    class I_C_Sharpshooter_F;
    class I_C_Sharpshooter_F_OCimport_01 : I_C_Sharpshooter_F { scope = 0; class EventHandlers; };
    class I_C_Sharpshooter_F_OCimport_02 : I_C_Sharpshooter_F_OCimport_01 { class EventHandlers; };

    class I_C_Soldier_Para_1_F;
    class I_C_Soldier_Para_1_F_OCimport_01 : I_C_Soldier_Para_1_F { scope = 0; class EventHandlers; };
    class I_C_Soldier_Para_1_F_OCimport_02 : I_C_Soldier_Para_1_F_OCimport_01 { class EventHandlers; };

    class UAV_02_IED_Base_lxWS;
    class UAV_02_IED_Base_lxWS_OCimport_01 : UAV_02_IED_Base_lxWS { scope = 0; class EventHandlers; };
    class UAV_02_IED_Base_lxWS_OCimport_02 : UAV_02_IED_Base_lxWS_OCimport_01 { class EventHandlers; };

    class UGV_01_base_F;
    class UGV_01_base_F_OCimport_01 : UGV_01_base_F { scope = 0; class EventHandlers; };
    class UGV_01_base_F_OCimport_02 : UGV_01_base_F_OCimport_01 { class EventHandlers; };

    class UGV_01_rcws_base_F;
    class UGV_01_rcws_base_F_OCimport_01 : UGV_01_rcws_base_F { scope = 0; class EventHandlers; };
    class UGV_01_rcws_base_F_OCimport_02 : UGV_01_rcws_base_F_OCimport_01 { class EventHandlers; };

    class zu23_base_lxWS;
    class zu23_base_lxWS_OCimport_01 : zu23_base_lxWS { scope = 0; class EventHandlers; };
    class zu23_base_lxWS_OCimport_02 : zu23_base_lxWS_OCimport_01 { class EventHandlers; };

    class Rubber_duck_base_F;
    class Rubber_duck_base_F_OCimport_01 : Rubber_duck_base_F { scope = 0; class EventHandlers; };
    class Rubber_duck_base_F_OCimport_02 : Rubber_duck_base_F_OCimport_01 { class EventHandlers; };

    class Boat_Transport_02_base_F;
    class Boat_Transport_02_base_F_OCimport_01 : Boat_Transport_02_base_F { scope = 0; class EventHandlers; };
    class Boat_Transport_02_base_F_OCimport_02 : Boat_Transport_02_base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_base_F;
    class HMG_02_base_F_OCimport_01 : HMG_02_base_F { scope = 0; class EventHandlers; };
    class HMG_02_base_F_OCimport_02 : HMG_02_base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_high_base_F;
    class HMG_02_high_base_F_OCimport_01 : HMG_02_high_base_F { scope = 0; class EventHandlers; };
    class HMG_02_high_base_F_OCimport_02 : HMG_02_high_base_F_OCimport_01 { class EventHandlers; };

    class Heli_Light_01_civil_base_F;
    class Heli_Light_01_civil_base_F_OCimport_01 : Heli_Light_01_civil_base_F { scope = 0; class EventHandlers; };
    class Heli_Light_01_civil_base_F_OCimport_02 : Heli_Light_01_civil_base_F_OCimport_01 { class EventHandlers; };

    class I_C_Soldier_base_F;
    class I_C_Soldier_base_F_OCimport_01 : I_C_Soldier_base_F { scope = 0; class EventHandlers; };
    class I_C_Soldier_base_F_OCimport_02 : I_C_Soldier_base_F_OCimport_01 { class EventHandlers; };

    class I_G_Offroad_01_AT_F;
    class I_G_Offroad_01_AT_F_OCimport_01 : I_G_Offroad_01_AT_F { scope = 0; class EventHandlers; };
    class I_G_Offroad_01_AT_F_OCimport_02 : I_G_Offroad_01_AT_F_OCimport_01 { class EventHandlers; };

    class I_G_Offroad_01_F;
    class I_G_Offroad_01_F_OCimport_01 : I_G_Offroad_01_F { scope = 0; class EventHandlers; };
    class I_G_Offroad_01_F_OCimport_02 : I_G_Offroad_01_F_OCimport_01 { class EventHandlers; };

    class I_G_Offroad_01_armed_F;
    class I_G_Offroad_01_armed_F_OCimport_01 : I_G_Offroad_01_armed_F { scope = 0; class EventHandlers; };
    class I_G_Offroad_01_armed_F_OCimport_02 : I_G_Offroad_01_armed_F_OCimport_01 { class EventHandlers; };

    class Offroad_02_AT_base_F;
    class Offroad_02_AT_base_F_OCimport_01 : Offroad_02_AT_base_F { scope = 0; class EventHandlers; };
    class Offroad_02_AT_base_F_OCimport_02 : Offroad_02_AT_base_F_OCimport_01 { class EventHandlers; };

    class Offroad_02_LMG_base_F;
    class Offroad_02_LMG_base_F_OCimport_01 : Offroad_02_LMG_base_F { scope = 0; class EventHandlers; };
    class Offroad_02_LMG_base_F_OCimport_02 : Offroad_02_LMG_base_F_OCimport_01 { class EventHandlers; };

    class Offroad_02_unarmed_base_F;
    class Offroad_02_unarmed_base_F_OCimport_01 : Offroad_02_unarmed_base_F { scope = 0; class EventHandlers; };
    class Offroad_02_unarmed_base_F_OCimport_02 : Offroad_02_unarmed_base_F_OCimport_01 { class EventHandlers; };

    class Pickup_01_hmg_base_rf;
    class Pickup_01_hmg_base_rf_OCimport_01 : Pickup_01_hmg_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_hmg_base_rf_OCimport_02 : Pickup_01_hmg_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_mrl_base_rf;
    class Pickup_01_mrl_base_rf_OCimport_01 : Pickup_01_mrl_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_mrl_base_rf_OCimport_02 : Pickup_01_mrl_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_base_rf;
    class Pickup_01_base_rf_OCimport_01 : Pickup_01_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_base_rf_OCimport_02 : Pickup_01_base_rf_OCimport_01 { class EventHandlers; };

    class Plane_Civil_01_base_F;
    class Plane_Civil_01_base_F_OCimport_01 : Plane_Civil_01_base_F { scope = 0; class EventHandlers; };
    class Plane_Civil_01_base_F_OCimport_02 : Plane_Civil_01_base_F_OCimport_01 { class EventHandlers; };

    class Quadbike_01_base_F;
    class Quadbike_01_base_F_OCimport_01 : Quadbike_01_base_F { scope = 0; class EventHandlers; };
    class Quadbike_01_base_F_OCimport_02 : Quadbike_01_base_F_OCimport_01 { class EventHandlers; };

    class Van_01_transport_base_F;
    class Van_01_transport_base_F_OCimport_01 : Van_01_transport_base_F { scope = 0; class EventHandlers; };
    class Van_01_transport_base_F_OCimport_02 : Van_01_transport_base_F_OCimport_01 { class EventHandlers; };

    class Van_02_transport_base_F;
    class Van_02_transport_base_F_OCimport_01 : Van_02_transport_base_F { scope = 0; class EventHandlers; };
    class Van_02_transport_base_F_OCimport_02 : Van_02_transport_base_F_OCimport_01 { class EventHandlers; };

    class Van_02_vehicle_base_F;
    class Van_02_vehicle_base_F_OCimport_01 : Van_02_vehicle_base_F { scope = 0; class EventHandlers; };
    class Van_02_vehicle_base_F_OCimport_02 : Van_02_vehicle_base_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_C_HeavyGunner_Para_F : I_C_Soldier_Para_4_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Suppressor (GPMG)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Para_2_F";

        backpack = "Aegis_B_FieldPack_oli_C_HG";

        linkedItems[] = {"V_ChestrigF_oli","Aegis_H_Milcap_nohs_grn_F","G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_oli","Aegis_H_Milcap_nohs_grn_F","G_Aviator","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_MMG_FNMAG_240_F","hgun_pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_MMG_FNMAG_240_F","hgun_pistol_01_F","Throw","Put"};

        magazines[] = {"Aegis_200Rnd_762x51_MAG_Yellow_F","Aegis_200Rnd_762x51_MAG_Yellow_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
        respawnMagazines[] = {"Aegis_200Rnd_762x51_MAG_Yellow_F","Aegis_200Rnd_762x51_MAG_Yellow_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_C_Soldier_M_Para_F : I_C_Sharpshooter_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assassin (DMR)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Para_4_F";

        linkedItems[] = {"V_TacVest_grn","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_srifle_SVD_blk_DMS_old_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Aegis_srifle_SVD_blk_DMS_old_F","Throw","Put","Binocular"};

        magazines[] = {"Aegis_10Rnd_762x54_SVD_Yellow_Mag_F","Aegis_10Rnd_762x54_SVD_Yellow_Mag_F","Aegis_10Rnd_762x54_SVD_Yellow_Mag_F","Aegis_10Rnd_762x54_SVD_Yellow_Mag_F","Aegis_10Rnd_762x54_SVD_Yellow_Mag_F","Aegis_10Rnd_762x54_SVD_Yellow_Mag_F"};
        respawnMagazines[] = {"Aegis_10Rnd_762x54_SVD_Yellow_Mag_F","Aegis_10Rnd_762x54_SVD_Yellow_Mag_F","Aegis_10Rnd_762x54_SVD_Yellow_Mag_F","Aegis_10Rnd_762x54_SVD_Yellow_Mag_F","Aegis_10Rnd_762x54_SVD_Yellow_Mag_F","Aegis_10Rnd_762x54_SVD_Yellow_Mag_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_C_Soldier_TechSpec_F : I_C_Soldier_Para_1_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Technical Specialist";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Para_2_F";

        backpack = "B_Kitbag_rgr_G_TechSpec";

        linkedItems[] = {"Aegis_V_ChestrigEast_grn_F","I_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_ChestrigEast_grn_F","I_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKS74_oak_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Aegis_arifle_AKS74_oak_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_C_Soldier_UAV_lxWS : I_C_Soldier_Para_1_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (IED)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Para_4_F";

        backpack = "Aegis_I_C_UAV_02_IED_backpack_lxWS";

        linkedItems[] = {"Aegis_V_ChestrigEast_khk_F","I_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_ChestrigEast_khk_F","I_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKS_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_AKS_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_C_UAV_02_IED_lxWS : UAV_02_IED_Base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "IED UAV";
        side = 2;
        faction = "ind_c_f";
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

    class Aegis_I_C_UGV_01_F : UGV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Saif";
        side = 2;
        faction = "ind_c_f";
        crew = "I_UAV_AI_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_C_UGV_01_rcws_F : UGV_01_rcws_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Saif RCWS";
        side = 2;
        faction = "ind_c_f";
        crew = "I_UAV_AI_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_C_ZU23_lxWS_F : zu23_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zu-23-2";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Soldier_Bandit_7_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Boat_Transport_01_F : Rubber_duck_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Boat";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Soldier_Bandit_5_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Boat_Transport_02_F : Boat_Transport_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RHIB";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Soldier_Para_4_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_HMG_02_F : HMG_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Soldier_Para_3_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_HMG_02_high_F : HMG_02_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Soldier_Para_3_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Heli_Light_01_civil_F : Heli_Light_01_civil_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MD 500";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Helipilot_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Para_1_F";

        linkedItems[] = {"H_Cap_headphones","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_Cap_headphones","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKS_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Offroad_01_AT_F : I_G_Offroad_01_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (AT)";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Soldier_Bandit_7_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Offroad_01_F : I_G_Offroad_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Soldier_Bandit_7_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Offroad_01_armed_F : I_G_Offroad_01_armed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (HMG)";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Soldier_Bandit_7_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Offroad_02_AT_F : Offroad_02_AT_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jeep Wrangler (SPG-9)";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Soldier_Para_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Offroad_02_LMG_F : Offroad_02_LMG_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jeep Wrangler (LMG)";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Soldier_Para_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Offroad_02_unarmed_F : Offroad_02_unarmed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jeep Wrangler";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Soldier_Para_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Pickup_hmg_rf : Pickup_01_hmg_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (HMG)";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Soldier_Para_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Pickup_mrl_rf : Pickup_01_mrl_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (MRL)";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Soldier_Para_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Pickup_rf : Pickup_01_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Soldier_Para_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Pilot_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Bandit_3_F";

        linkedItems[] = {"H_Cap_marshal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_Cap_marshal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKS_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Plane_Civil_01_F : Plane_Civil_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Cessna TTx";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Quadbike_01_F : Quadbike_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Soldier_Bandit_5_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Sharpshooter_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Para_2_F";

        linkedItems[] = {"V_ChestrigF_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_DMR_06_camo_khs_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"srifle_DMR_06_camo_khs_F","Throw","Put","Binocular"};

        magazines[] = {"20Rnd_Mk14_762x51_Mag","20Rnd_Mk14_762x51_Mag","20Rnd_Mk14_762x51_Mag","20Rnd_Mk14_762x51_Mag","20Rnd_Mk14_762x51_Mag","20Rnd_Mk14_762x51_Mag"};
        respawnMagazines[] = {"20Rnd_Mk14_762x51_Mag","20Rnd_Mk14_762x51_Mag","20Rnd_Mk14_762x51_Mag","20Rnd_Mk14_762x51_Mag","20Rnd_Mk14_762x51_Mag","20Rnd_Mk14_762x51_Mag"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Soldier_Bandit_1_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Snatcher (Medikit)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Bandit_1_F";

        backpack = "B_FieldPack_khk_Bandit_1_F";

        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKS_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Soldier_Bandit_2_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hireling (Launcher)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Bandit_2_F";

        backpack = "B_Kitbag_cbr_Bandit_2_F";

        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKS_F","launch_RPG7_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKS_F","launch_RPG7_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","RPG7_F"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","RPG7_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Soldier_Bandit_3_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Guard (Machine Gun)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Bandit_3_F";

        backpack = "B_FieldPack_cb_Bandit_3_F";

        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"LMG_03_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"LMG_03_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"200Rnd_556x45_Box_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
        respawnMagazines[] = {"200Rnd_556x45_Box_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Soldier_Bandit_4_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Watcher (Rifle)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Bandit_4_F";

        linkedItems[] = {"V_BandollierB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKM_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKM_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","MiniGrenade","MiniGrenade"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","MiniGrenade","MiniGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Soldier_Bandit_5_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Scout (Rifle)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Bandit_5_F";

        linkedItems[] = {"V_ChestrigF_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKM_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKM_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","MiniGrenade","MiniGrenade"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","MiniGrenade","MiniGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Soldier_Bandit_6_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Smuggler (UGL)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Bandit_3_F";

        linkedItems[] = {"V_TacChestrig_cbr_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacChestrig_cbr_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12_GL_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_GL_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Soldier_Bandit_7_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Dealer (Rifle)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Bandit_1_F";

        linkedItems[] = {"V_BandollierB_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_rgr","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKS_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","MiniGrenade","MiniGrenade"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","MiniGrenade","MiniGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Soldier_Bandit_8_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Thug (Mines)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Bandit_5_F";

        backpack = "B_FieldPack_blk_Bandit_8_F";

        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKS_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","MiniGrenade","MiniGrenade"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","MiniGrenade","MiniGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Soldier_Camo_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Solomon Maru";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"Syndikat_Boss_F"};

        uniformClass = "U_I_C_Soldier_Camo_F";

        linkedItems[] = {"H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
        respawnMagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Soldier_Para_1_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Soldier (Rifle)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Para_1_F";

        linkedItems[] = {"V_TacChestrig_cbr_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacChestrig_cbr_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Soldier_Para_2_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Enforcer (Rifle)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Para_2_F";

        linkedItems[] = {"V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Soldier_Para_3_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militiaman (Medikit)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Para_3_F";

        backpack = "B_Kitbag_rgr_Para_3_F";

        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKM_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKM_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Soldier_Para_4_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Oppressor (Machine Gun)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Para_4_F";

        linkedItems[] = {"V_ChestrigF_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"LMG_03_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"LMG_03_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
        respawnMagazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Soldier_Para_5_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Specialist (Launcher)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Para_5_F";

        backpack = "B_Kitbag_cbr_Para_5_F";

        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKS_F","launch_RPG7_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKS_F","launch_RPG7_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","RPG7_F"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","RPG7_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Soldier_Para_6_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Raider (UGL)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Para_1_F";

        linkedItems[] = {"V_ChestrigF_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12_GL_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_GL_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Soldier_Para_7_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Deserter (Rifle)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Para_4_F";

        linkedItems[] = {"V_TacChestrig_cbr_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacChestrig_cbr_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKM_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKM_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Soldier_Para_8_F : I_C_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Saboteur (Explosives)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Para_2_F";

        backpack = "B_Kitbag_rgr_Para_8_F";

        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKM_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKM_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Soldier_base_unarmed_F : I_C_Soldier_Para_1_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 2;
        faction = "ind_c_f";

        identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};

        uniformClass = "U_I_C_Soldier_Para_1_F";

        linkedItems[] = {"V_TacChestrig_cbr_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacChestrig_cbr_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class I_C_Van_01_transport_F : Van_01_transport_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Soldier_Bandit_7_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Van_02_transport_F : Van_02_transport_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van Transport";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Soldier_Bandit_7_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_C_Van_02_vehicle_F : Van_02_vehicle_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van (Cargo)";
        side = 2;
        faction = "ind_c_f";
        crew = "I_C_Soldier_Bandit_7_F";

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
        class IND_C_F {
            class Infantry {
                class BanditCombatGroup {
                    name = "Bandit Combat Group";
                    side = 2;
                    faction = "IND_C_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_C_Soldier_Bandit_4_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_C_Soldier_Bandit_3_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_C_Soldier_Bandit_7_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_C_Soldier_Bandit_5_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "I_C_Soldier_Bandit_6_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "I_C_Soldier_Bandit_2_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "I_C_Soldier_Bandit_8_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "I_C_Soldier_Bandit_1_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class BanditFireTeam {
                    name = "Bandit Fire Team";
                    side = 2;
                    faction = "IND_C_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_C_Soldier_Bandit_4_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_C_Soldier_Bandit_3_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_C_Soldier_Bandit_5_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_C_Soldier_Bandit_1_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class BanditShockTeam {
                    name = "Bandit Shock Team";
                    side = 2;
                    faction = "IND_C_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_C_Soldier_Bandit_6_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_C_Soldier_Bandit_2_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_C_Soldier_Bandit_7_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_C_Soldier_Bandit_8_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class ParaCombatGroup {
                    name = "Paramilitary Combat Group";
                    side = 2;
                    faction = "IND_C_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_C_Soldier_Para_2_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_C_Soldier_Para_4_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_C_Soldier_Para_6_F";
                        rank = "SERGEANT";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_C_Soldier_Para_1_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "I_C_Soldier_Para_7_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "I_C_Soldier_Para_5_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "I_C_Soldier_Para_8_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "I_C_Soldier_Para_3_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class ParaFireTeam {
                    name = "Paramilitary Fire Team";
                    side = 2;
                    faction = "IND_C_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_C_Soldier_Para_2_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_C_Soldier_Para_4_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_C_Soldier_Para_1_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_C_Soldier_Para_3_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class ParaShockTeam {
                    name = "Paramilitary Shock Team";
                    side = 2;
                    faction = "IND_C_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_C_Soldier_Para_6_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_C_Soldier_Para_5_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_C_Soldier_Para_7_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_C_Soldier_Para_8_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
        };
    };
};
