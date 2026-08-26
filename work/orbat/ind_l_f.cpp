//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class IND_L_F {
        displayName = "Looters";
        side = 2;
        priority = 3;
        icon = "\a3\Data_F_Enoch\FactionIcons\icon_Looters_CA.paa";
        flag = "\A3_Aegis\Data_F_Aegis\Flags\flag_Looters_CO.paa";
    };
};

class CfgVehicles {

    class I_L_Soldier_Base_F;
    class I_L_Soldier_Base_F_OCimport_01 : I_L_Soldier_Base_F { scope = 0; class EventHandlers; };
    class I_L_Soldier_Base_F_OCimport_02 : I_L_Soldier_Base_F_OCimport_01 { class EventHandlers; };

    class I_L_Deserter_base_F;
    class I_L_Deserter_base_F_OCimport_01 : I_L_Deserter_base_F { scope = 0; class EventHandlers; };
    class I_L_Deserter_base_F_OCimport_02 : I_L_Deserter_base_F_OCimport_01 { class EventHandlers; };

    class I_L_Criminal_SG_F : I_L_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Criminal (Shotgun)";
        side = 2;
        faction = "ind_l_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_LOOTER_default"};

        uniformClass = "U_C_E_LooterJacket_01_F";

        linkedItems[] = {"ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};

        weapons[] = {"sgun_HunterShotgun_01_Sawedoff_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"sgun_HunterShotgun_01_Sawedoff_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","17Rnd_9x21_Mag"};
        respawnMagazines[] = {"2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","17Rnd_9x21_Mag"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_L_Criminal_SMG_F : I_L_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Criminal (SMG)";
        side = 2;
        faction = "ind_l_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_LOOTER_default"};

        uniformClass = "U_O_R_Gorka_01_Black_F";

        backpack = "B_Messenger_Black_F";

        linkedItems[] = {"ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};

        weapons[] = {"Hgun_PDW2000_F","hgun_Pistol_heavy_02_F","Throw","Put"};
        respawnWeapons[] = {"Hgun_PDW2000_F","hgun_Pistol_heavy_02_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
        respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_L_Deserter_AR_F : I_L_Deserter_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Deserter (Machine Gun)";
        side = 2;
        faction = "ind_l_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_LOOTER_default"};

        uniformClass = "U_I_E_Uniform_01_tanktop_F";

        linkedItems[] = {"H_HelmetHBK_ear_F","V_CarrierRigKBT_01_light_EAF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetHBK_ear_F","V_CarrierRigKBT_01_light_EAF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"LMG_Mk200_black_FL_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Mk200_black_FL_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","200Rnd_65x39_cased_Box_Red","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_L_Deserter_GL_F : I_L_Deserter_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Deserter (UGL)";
        side = 2;
        faction = "ind_l_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_LOOTER_default"};

        uniformClass = "U_I_L_Uniform_01_camo_F";

        linkedItems[] = {"H_HelmetHBK_chops_F","V_CarrierRigKBT_01_heavy_EAF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetHBK_chops_F","V_CarrierRigKBT_01_heavy_EAF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_MSBS65_GL_ico_FL_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_GL_ico_FL_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_L_Deserter_Rifle_F : I_L_Deserter_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Deserter (Rifle)";
        side = 2;
        faction = "ind_l_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_LOOTER_default"};

        uniformClass = "U_I_L_Uniform_01_deserter_F";

        linkedItems[] = {"H_HelmetHBK_F","V_CarrierRigKBT_01_light_EAF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_HelmetHBK_F","V_CarrierRigKBT_01_light_EAF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_MSBS65_ico_FL_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_FL_f","hgun_Pistol_heavy_01_green_F","Throw","Put"};

        magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_L_Hunter_F : I_L_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hunter (Rifle)";
        side = 2;
        faction = "ind_l_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_LOOTER_default"};

        uniformClass = "U_IG_Guerilla3_1";

        linkedItems[] = {"ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_DMR_06_hunter_khs_F","Throw","Put"};
        respawnWeapons[] = {"srifle_DMR_06_hunter_khs_F","Throw","Put"};

        magazines[] = {"10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag"};
        respawnMagazines[] = {"10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_L_Looter_Pistol_F : I_L_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Looter (Pistol)";
        side = 2;
        faction = "ind_l_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_LOOTER_default"};

        uniformClass = "U_I_C_Soldier_Bandit_3_F";

        backpack = "B_messenger_gray_F";

        linkedItems[] = {"ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
        respawnMagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_L_Looter_Rifle_F : I_L_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Looter (Rifle)";
        side = 2;
        faction = "ind_l_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_LOOTER_default"};

        uniformClass = "U_IG_Guerilla3_2";

        linkedItems[] = {"V_LegStrapBag_black_F","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_LegStrapBag_black_F","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};

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

    class I_L_Looter_SG_F : I_L_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Looter (Shotgun)";
        side = 2;
        faction = "ind_l_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_LOOTER_default"};

        uniformClass = "U_C_Mechanic_01_F";

        backpack = "B_Kitbag_rgr";

        linkedItems[] = {"V_pocketed_coyote_F","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_pocketed_coyote_F","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};

        weapons[] = {"sgun_HunterShotgun_01_F","Throw","Put"};
        respawnWeapons[] = {"sgun_HunterShotgun_01_F","Throw","Put"};

        magazines[] = {"2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets"};
        respawnMagazines[] = {"2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_L_Looter_SMG_F : I_L_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Looter (SMG)";
        side = 2;
        faction = "ind_l_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_LOOTER_default"};

        uniformClass = "U_I_L_Uniform_01_tshirt_olive_F";

        backpack = "B_Messenger_Black_F";

        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Hgun_PDW2000_F","Throw","Put"};
        respawnWeapons[] = {"Hgun_PDW2000_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_L_Militiaman_Leader_F : I_L_Deserter_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militia Leader";
        side = 2;
        faction = "ind_l_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_LOOTER_default"};

        uniformClass = "U_I_L_Uniform_01_tshirt_skull_F";

        linkedItems[] = {"H_Cap_oli","V_BandollierB_oli","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_Cap_oli","V_BandollierB_oli","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKS_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKS_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_F","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_L_Militiaman_Rifle_F : I_L_Deserter_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militiaman (Rifle)";
        side = 2;
        faction = "ind_l_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_LOOTER_default"};

        uniformClass = "U_I_L_Uniform_01_tshirt_black_F";

        linkedItems[] = {"H_Bandanna_khk","V_TacVest_oli","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_Bandanna_khk","V_TacVest_oli","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AKM_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AKM_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_L_Militiaman_SMG_F : I_L_Deserter_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militiaman (SMG)";
        side = 2;
        faction = "ind_l_f";

        identityTypes[] = {"LanguagePOL_F","Head_Enoch","Head_Euro","G_LOOTER_default"};

        uniformClass = "U_I_L_Uniform_01_tshirt_sport_F";

        linkedItems[] = {"H_Booniehat_mgrn","V_Pocketed_coyote_F","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_Booniehat_mgrn","V_Pocketed_coyote_F","ItemSmartPhone","ItemMap","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_03_TR_black","Throw","Put"};
        respawnWeapons[] = {"SMG_03_TR_black","Throw","Put"};

        magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


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
        class IND_L_F {
            class Infantry {
                class I_L_CriminalGang {
                    name = "Criminal Gang";
                    side = 2;
                    faction = "IND_L_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_L_Looter_Pistol_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_L_Looter_SG_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_L_Looter_Rifle_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_L_Looter_SMG_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "I_L_Criminal_SG_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "I_L_Criminal_SMG_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };
                };
                class I_L_LooterGang {
                    name = "Looter Gang";
                    side = 2;
                    faction = "IND_L_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_L_Looter_Pistol_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_L_Looter_SG_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_L_Looter_Rifle_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
        };
    };
};
