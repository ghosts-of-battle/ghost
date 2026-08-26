//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class Opf_IND_I_F {
        displayName = "Insurgents";
        side = 2;
        priority = 3;
        icon = "\A3_Opf\Data_F_Opf\FactionIcons\CfgFactionClasses_IND_I_CA.paa";
        flag = "\A3_Opf\Data_F_Opf\Flags\flag_TKM_CO.paa";
    };
};

class CfgVehicles {

    class zu23_base_lxWS;
    class zu23_base_lxWS_OCimport_01 : zu23_base_lxWS { scope = 0; class EventHandlers; };
    class zu23_base_lxWS_OCimport_02 : zu23_base_lxWS_OCimport_01 { class EventHandlers; };

    class HMG_02_base_F;
    class HMG_02_base_F_OCimport_01 : HMG_02_base_F { scope = 0; class EventHandlers; };
    class HMG_02_base_F_OCimport_02 : HMG_02_base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_high_base_F;
    class HMG_02_high_base_F_OCimport_01 : HMG_02_high_base_F { scope = 0; class EventHandlers; };
    class HMG_02_high_base_F_OCimport_02 : HMG_02_high_base_F_OCimport_01 { class EventHandlers; };

    class Opf_I_I_Soldier_Base_F;
    class Opf_I_I_Soldier_Base_F_OCimport_01 : Opf_I_I_Soldier_Base_F { scope = 0; class EventHandlers; };
    class Opf_I_I_Soldier_Base_F_OCimport_02 : Opf_I_I_Soldier_Base_F_OCimport_01 { class EventHandlers; };

    class I_G_Offroad_01_AT_F;
    class I_G_Offroad_01_AT_F_OCimport_01 : I_G_Offroad_01_AT_F { scope = 0; class EventHandlers; };
    class I_G_Offroad_01_AT_F_OCimport_02 : I_G_Offroad_01_AT_F_OCimport_01 { class EventHandlers; };

    class I_G_Offroad_01_F;
    class I_G_Offroad_01_F_OCimport_01 : I_G_Offroad_01_F { scope = 0; class EventHandlers; };
    class I_G_Offroad_01_F_OCimport_02 : I_G_Offroad_01_F_OCimport_01 { class EventHandlers; };

    class I_G_Offroad_01_armed_F;
    class I_G_Offroad_01_armed_F_OCimport_01 : I_G_Offroad_01_armed_F { scope = 0; class EventHandlers; };
    class I_G_Offroad_01_armed_F_OCimport_02 : I_G_Offroad_01_armed_F_OCimport_01 { class EventHandlers; };

    class Offroad_01_armor_AT_lxWS;
    class Offroad_01_armor_AT_lxWS_OCimport_01 : Offroad_01_armor_AT_lxWS { scope = 0; class EventHandlers; };
    class Offroad_01_armor_AT_lxWS_OCimport_02 : Offroad_01_armor_AT_lxWS_OCimport_01 { class EventHandlers; };

    class Offroad_01_armor_armed_lxWS;
    class Offroad_01_armor_armed_lxWS_OCimport_01 : Offroad_01_armor_armed_lxWS { scope = 0; class EventHandlers; };
    class Offroad_01_armor_armed_lxWS_OCimport_02 : Offroad_01_armor_armed_lxWS_OCimport_01 { class EventHandlers; };

    class Offroad_01_armor_base_lxWS;
    class Offroad_01_armor_base_lxWS_OCimport_01 : Offroad_01_armor_base_lxWS { scope = 0; class EventHandlers; };
    class Offroad_01_armor_base_lxWS_OCimport_02 : Offroad_01_armor_base_lxWS_OCimport_01 { class EventHandlers; };

    class Opf_I_I_Soldier_1_F;
    class Opf_I_I_Soldier_1_F_OCimport_01 : Opf_I_I_Soldier_1_F { scope = 0; class EventHandlers; };
    class Opf_I_I_Soldier_1_F_OCimport_02 : Opf_I_I_Soldier_1_F_OCimport_01 { class EventHandlers; };

    class UAV_02_IED_Base_lxWS;
    class UAV_02_IED_Base_lxWS_OCimport_01 : UAV_02_IED_Base_lxWS { scope = 0; class EventHandlers; };
    class UAV_02_IED_Base_lxWS_OCimport_02 : UAV_02_IED_Base_lxWS_OCimport_01 { class EventHandlers; };

    class Van_01_transport_base_F;
    class Van_01_transport_base_F_OCimport_01 : Van_01_transport_base_F { scope = 0; class EventHandlers; };
    class Van_01_transport_base_F_OCimport_02 : Van_01_transport_base_F_OCimport_01 { class EventHandlers; };

    class OpF_I_I_ZU23_lxWS_F : zu23_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zu-23-2";
        side = 2;
        faction = "opf_ind_i_f";
        crew = "Opf_I_I_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_I_I_HMG_02_F : HMG_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 2;
        faction = "opf_ind_i_f";
        crew = "Opf_I_I_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_I_I_HMG_02_high_F : HMG_02_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 2;
        faction = "opf_ind_i_f";
        crew = "Opf_I_I_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_I_I_Officer_F : Opf_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Warlord";
        side = 2;
        faction = "opf_ind_i_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};

        uniformClass = "Opf_U_O_S_Uniform_01_arid_F";

        linkedItems[] = {"H_Beret_brn","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_Beret_brn","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_GL_hex_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_GL_hex_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_mag_f","30Rnd_580x42_mag_f","30Rnd_580x42_mag_f","30Rnd_580x42_mag_f","30Rnd_580x42_mag_f","30Rnd_580x42_mag_f","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_580x42_mag_f","30Rnd_580x42_mag_f","30Rnd_580x42_mag_f","30Rnd_580x42_mag_f","30Rnd_580x42_mag_f","30Rnd_580x42_mag_f","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_I_I_Offroad_01_AT_F : I_G_Offroad_01_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (AT)";
        side = 2;
        faction = "opf_ind_i_f";
        crew = "Opf_I_I_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_I_I_Offroad_01_F : I_G_Offroad_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 2;
        faction = "opf_ind_i_f";
        crew = "Opf_I_I_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_I_I_Offroad_01_armed_F : I_G_Offroad_01_armed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (HMG)";
        side = 2;
        faction = "opf_ind_i_f";
        crew = "Opf_I_I_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_I_I_Offroad_01_armor_AT_F : Offroad_01_armor_AT_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (UP, AT)";
        side = 2;
        faction = "opf_ind_i_f";
        crew = "Opf_I_I_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_I_I_Offroad_01_armor_armed_F : Offroad_01_armor_armed_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (UP, HMG)";
        side = 2;
        faction = "opf_ind_i_f";
        crew = "Opf_I_I_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_I_I_Offroad_01_armor_base_F : Offroad_01_armor_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (UP)";
        side = 2;
        faction = "opf_ind_i_f";
        crew = "Opf_I_I_Soldier_1_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_I_I_Soldier_1_F : Opf_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militiaman (Rifle)";
        side = 2;
        faction = "opf_ind_i_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};

        uniformClass = "Opf_U_I_I_Uniform_01_tshirt_black_F";

        linkedItems[] = {"V_Pocketed_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Pocketed_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class Opf_I_I_Soldier_2_F : Opf_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militia Leader (Rifle)";
        side = 2;
        faction = "opf_ind_i_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};

        uniformClass = "Opf_U_I_I_Uniform_01_urb_F";

        linkedItems[] = {"V_TacVest_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Katiba_F","hgun_Pistol_01_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_Katiba_F","hgun_Pistol_01_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_I_I_Soldier_3_F : Opf_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Bonesetter (Medikit)";
        side = 2;
        faction = "opf_ind_i_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};

        uniformClass = "U_C_E_LooterJacket_01_F";

        backpack = "B_FieldPack_cbr_Medic_F";

        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKM_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKM_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_I_I_Soldier_4_F : Opf_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militiaman (Machine Gun)";
        side = 2;
        faction = "opf_ind_i_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};

        uniformClass = "U_I_C_Soldier_Bandit_3_F";

        backpack = "B_Kitbag_tan_AR_F";

        linkedItems[] = {"V_Pocketed_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Pocketed_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_RPK_F","Throw","Put"};
        respawnWeapons[] = {"arifle_RPK_F","Throw","Put"};

        magazines[] = {"75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F"};
        respawnMagazines[] = {"75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_I_I_Soldier_5_F : Opf_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militiaman (Launcher)";
        side = 2;
        faction = "opf_ind_i_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};

        uniformClass = "Opf_U_IG_Guerilla3_3_F";

        backpack = "B_FieldPack_cbr_RPG_F";

        linkedItems[] = {"V_BandollierB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKS_F","launch_RPG7_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKS_F","launch_RPG7_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","RPG7_F"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","RPG7_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_I_I_Soldier_6_F : Opf_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militiaman (UGL)";
        side = 2;
        faction = "opf_ind_i_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};

        uniformClass = "Opf_U_I_I_Uniform_01_hex_F";

        linkedItems[] = {"V_ChestrigF_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Katiba_GL_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_GL_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_I_I_Soldier_7_F : Opf_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Watcher (Rifle)";
        side = 2;
        faction = "opf_ind_i_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};

        uniformClass = "U_IG_Guerilla3_1";

        linkedItems[] = {"V_BandollierB_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_DMR_06_hunter_khs_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"srifle_DMR_06_hunter_khs_F","Throw","Put","Binocular"};

        magazines[] = {"10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag"};
        respawnMagazines[] = {"10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_I_I_Soldier_8_F : Opf_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Trapper (Explosives)";
        side = 2;
        faction = "opf_ind_i_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};

        uniformClass = "U_C_Mechanic_01_F";

        backpack = "B_Kitbag_tan_exp_F";

        linkedItems[] = {"V_TacChestRig_cbr_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacChestRig_cbr_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKS_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_I_I_Soldier_9_F : Opf_I_I_Soldier_1_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Operative (Rifle)";
        side = 2;
        faction = "opf_ind_i_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_C_E_LooterJacket_01_F";

        linkedItems[] = {"V_ChestrigF_blk","G_AirPurifyingRespirator_02_sand_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_blk","G_AirPurifyingRespirator_02_sand_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Katiba_C_ACO_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_Katiba_C_ACO_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Opf_I_I_Soldier_Base_unarmed_F : Opf_I_I_Soldier_1_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 2;
        faction = "opf_ind_i_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};

        uniformClass = "Opf_U_I_I_Uniform_01_tshirt_black_F";

        linkedItems[] = {"V_Pocketed_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Pocketed_wdl_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class Opf_I_I_Soldier_UAV_lxWS : Opf_I_I_Soldier_1_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (IED Drone)";
        side = 2;
        faction = "opf_ind_i_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_GUERIL_default"};

        uniformClass = "Opf_U_I_I_Uniform_01_tshirt_black_F";

        backpack = "Opf_I_I_UAV_02_IED_backpack_lxWS";

        linkedItems[] = {"H_PASGT_basic_olive_F","V_Pocketed_coyote_F","I_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_PASGT_basic_olive_F","V_Pocketed_coyote_F","I_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKS_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};

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

    class Opf_I_I_UAV_02_IED_lxWS : UAV_02_IED_Base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "IED UAV";
        side = 2;
        faction = "opf_ind_i_f";
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

    class Opf_I_I_Van_01_transport_F : Van_01_transport_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 2;
        faction = "opf_ind_i_f";
        crew = "Opf_I_I_Soldier_1_F";

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
        class Opf_IND_I_F {
            class Infantry {
                class InsurgentCombatGroup {
                    name = "Insurgent Combat Group";
                    side = 2;
                    faction = "Opf_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_I_I_Soldier_2_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_I_I_Soldier_4_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_I_I_Soldier_6_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_I_I_Soldier_1_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Opf_I_I_Soldier_7_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Opf_I_I_Soldier_5_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Opf_I_I_Soldier_8_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Opf_I_I_Soldier_3_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class InsurgentFireTeam {
                    name = "Insurgent Fire Team";
                    side = 2;
                    faction = "Opf_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_I_I_Soldier_2_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_I_I_Soldier_4_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_I_I_Soldier_1_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_I_I_Soldier_3_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class InsurgentShockTeam {
                    name = "Insurgent Shock Team";
                    side = 2;
                    faction = "Opf_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_I_I_Soldier_6_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_I_I_Soldier_5_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_I_I_Soldier_7_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_I_I_Soldier_8_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class TribalCombatGroup {
                    name = "Bandit Combat Group";
                    side = 2;
                    faction = "Opf_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_I_I_tribal_enforcer";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_I_I_tribal_scout";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_I_I_tribal_hireling";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_I_I_tribal_watcher";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Opf_I_I_tribal_deserter";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Opf_I_I_tribal_deserter";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Opf_I_I_tribal_sapper";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Opf_I_I_tribal_medic";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class TribalFireTeam {
                    name = "Bandit Fire Team";
                    side = 2;
                    faction = "Opf_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_I_I_tribal_enforcer";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_I_I_tribal_hireling";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_I_I_tribal_watcher";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_I_I_tribal_deserter";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class TribalSentry {
                    name = "Bandit Sentry";
                    side = 2;
                    faction = "Opf_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_I_I_tribal_watcher";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_I_I_tribal_deserter";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
            };
            class Motorized_MTP {
                class Opf_I_I_MotInf_Team {
                    name = "Motorized Patrol";
                    side = 2;
                    faction = "Opf_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_I_I_Offroad_01_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_I_I_Soldier_2_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_I_I_Soldier_4_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Opf_I_I_Soldier_5_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Opf_I_I_Soldier_3_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Opf_I_I_Soldier_1_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };
                };
                class Opf_I_I_Technicals {
                    name = "Technicals";
                    side = 2;
                    faction = "Opf_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Opf_I_I_Offroad_01_armed_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Opf_I_I_Offroad_01_armed_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "Opf_I_I_Offroad_01_armed_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };
                };
            };
        };
    };
};
