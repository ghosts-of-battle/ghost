//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class Atlas_BLU_M_F {
        displayName = "Marar";
        side = 1;
        priority = 3;
        icon = "\A3_Atlas\Data_F_Atlas\FactionIcons\CfgFactionClasses_BLU_M_CA.paa";
        flag = "\A3_Atlas\Data_F_Atlas\Flags\flag_Marar_CO.paa";
    };
};

class CfgVehicles {

    class APC_Wheeled_01_atgm_base_v2;
    class APC_Wheeled_01_atgm_base_v2_OCimport_01 : APC_Wheeled_01_atgm_base_v2 { scope = 0; class EventHandlers; };
    class APC_Wheeled_01_atgm_base_v2_OCimport_02 : APC_Wheeled_01_atgm_base_v2_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_01_base_v2_F;
    class APC_Wheeled_01_base_v2_F_OCimport_01 : APC_Wheeled_01_base_v2_F { scope = 0; class EventHandlers; };
    class APC_Wheeled_01_base_v2_F_OCimport_02 : APC_Wheeled_01_base_v2_F_OCimport_01 { class EventHandlers; };

    class Atlas_B_M_Soldier_base_F;
    class Atlas_B_M_Soldier_base_F_OCimport_01 : Atlas_B_M_Soldier_base_F { scope = 0; class EventHandlers; };
    class Atlas_B_M_Soldier_base_F_OCimport_02 : Atlas_B_M_Soldier_base_F_OCimport_01 { class EventHandlers; };

    class B_D_CTRG_CommandoMortar_RF;
    class B_D_CTRG_CommandoMortar_RF_OCimport_01 : B_D_CTRG_CommandoMortar_RF { scope = 0; class EventHandlers; };
    class B_D_CTRG_CommandoMortar_RF_OCimport_02 : B_D_CTRG_CommandoMortar_RF_OCimport_01 { class EventHandlers; };

    class Heli_Attack_03_base_F;
    class Heli_Attack_03_base_F_OCimport_01 : Heli_Attack_03_base_F { scope = 0; class EventHandlers; };
    class Heli_Attack_03_base_F_OCimport_02 : Heli_Attack_03_base_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Light_02_dynamicLoadout_F;
    class O_Heli_Light_02_dynamicLoadout_F_OCimport_01 : O_Heli_Light_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_Heli_Light_02_dynamicLoadout_F_OCimport_02 : O_Heli_Light_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Light_02_unarmed_F;
    class O_Heli_Light_02_unarmed_F_OCimport_01 : O_Heli_Light_02_unarmed_F { scope = 0; class EventHandlers; };
    class O_Heli_Light_02_unarmed_F_OCimport_02 : O_Heli_Light_02_unarmed_F_OCimport_01 { class EventHandlers; };

    class MRAP_01_base_F;
    class MRAP_01_base_F_OCimport_01 : MRAP_01_base_F { scope = 0; class EventHandlers; };
    class MRAP_01_base_F_OCimport_02 : MRAP_01_base_F_OCimport_01 { class EventHandlers; };

    class MRAP_01_gmg_base_F;
    class MRAP_01_gmg_base_F_OCimport_01 : MRAP_01_gmg_base_F { scope = 0; class EventHandlers; };
    class MRAP_01_gmg_base_F_OCimport_02 : MRAP_01_gmg_base_F_OCimport_01 { class EventHandlers; };

    class MRAP_01_hmg_base_F;
    class MRAP_01_hmg_base_F_OCimport_01 : MRAP_01_hmg_base_F { scope = 0; class EventHandlers; };
    class MRAP_01_hmg_base_F_OCimport_02 : MRAP_01_hmg_base_F_OCimport_01 { class EventHandlers; };

    class Plane_Fighter_04_Base_F;
    class Plane_Fighter_04_Base_F_OCimport_01 : Plane_Fighter_04_Base_F { scope = 0; class EventHandlers; };
    class Plane_Fighter_04_Base_F_OCimport_02 : Plane_Fighter_04_Base_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_Ammo_F;
    class O_Truck_02_Ammo_F_OCimport_01 : O_Truck_02_Ammo_F { scope = 0; class EventHandlers; };
    class O_Truck_02_Ammo_F_OCimport_02 : O_Truck_02_Ammo_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_covered_F;
    class O_Truck_02_covered_F_OCimport_01 : O_Truck_02_covered_F { scope = 0; class EventHandlers; };
    class O_Truck_02_covered_F_OCimport_02 : O_Truck_02_covered_F_OCimport_01 { class EventHandlers; };

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

    class Atlas_B_M_APC_Wheeled_01_atgm_v2 : APC_Wheeled_01_atgm_base_v2_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMV-7 Earaba (ATGM)";
        side = 1;
        faction = "atlas_blu_m_f";
        crew = "Atlas_B_M_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_APC_Wheeled_01_cannon_v2_F : APC_Wheeled_01_base_v2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMV-7 Earaba";
        side = 1;
        faction = "atlas_blu_m_f";
        crew = "Atlas_B_M_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_AR_F : Atlas_B_M_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "atlas_blu_m_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_M_CombatUniform_tee_des";

        linkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};

        weapons[] = {"lmg_03_snd_holo","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"lmg_03_snd_holo","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Red_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_A_F : Atlas_B_M_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "atlas_blu_m_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_M_CombatUniform_des";

        backpack = "B_Carryall_CBR_ammo_F";

        linkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};

        weapons[] = {"arifle_mk20_plain_holo_pointer_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_mk20_plain_holo_pointer_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_CommandoMortar_RF : B_D_CTRG_CommandoMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RSG60";
        side = 1;
        faction = "atlas_blu_m_f";
        crew = "Atlas_B_M_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Crew_F : Atlas_B_M_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "atlas_blu_m_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_M_Tank_Marar_F";

        linkedItems[] = {"V_TacVest_brn","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};
        respawnlinkedItems[] = {"V_TacVest_brn","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};

        weapons[] = {"arifle_mk20_plain_holo_pointer_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_mk20_plain_holo_pointer_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Engineer_F : Atlas_B_M_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "atlas_blu_m_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_M_CombatUniform_des";

        backpack = "B_Carryall_CBREng_F";

        linkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};

        weapons[] = {"arifle_mk20_plain_holo_pointer_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_mk20_plain_holo_pointer_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Fighter_Pilot_F : Atlas_B_M_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter Pilot";
        side = 1;
        faction = "atlas_blu_m_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_M_Tank_Marar_F";

        linkedItems[] = {"V_TacVest_brn","H_PilotHelmetFighter_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_brn","H_PilotHelmetFighter_I_E","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"hgun_G17_black_F","Throw","Put"};

        magazines[] = {"17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_GL_F : Atlas_B_M_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "atlas_blu_m_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_M_CombatUniform_des";

        linkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};

        weapons[] = {"arifle_mk20_gl_plain_holo_pointer_F","hgun_G17_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_mk20_gl_plain_holo_pointer_F","hgun_G17_black_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Heli_Attack_03_F : Heli_Attack_03_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-64 Shaytan";
        side = 1;
        faction = "atlas_blu_m_f";
        crew = "Atlas_B_M_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Heli_Light_02_dynamicLoadout_F : O_Heli_Light_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KA-60 Burāq";
        side = 1;
        faction = "atlas_blu_m_f";
        crew = "Atlas_B_M_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Heli_Light_02_unarmed_F : O_Heli_Light_02_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KA-60 Burāq (Unarmed)";
        side = 1;
        faction = "atlas_blu_m_f";
        crew = "Atlas_B_M_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Helicrew_F : Atlas_B_M_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 1;
        faction = "atlas_blu_m_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_M_Tank_Marar_F";

        linkedItems[] = {"V_TacVest_brn","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};
        respawnlinkedItems[] = {"V_TacVest_brn","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};

        weapons[] = {"arifle_mk20_plain_holo_pointer_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_mk20_plain_holo_pointer_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Helipilot_F : Atlas_B_M_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "atlas_blu_m_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_M_Tank_Marar_F";

        linkedItems[] = {"V_TacVest_brn","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};
        respawnlinkedItems[] = {"V_TacVest_brn","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};

        weapons[] = {"SMG_04_blk_F","Throw","Put"};
        respawnWeapons[] = {"SMG_04_blk_F","Throw","Put"};

        magazines[] = {"40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","40Rnd_460x30_Mag_F","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_MRAP_01_F : MRAP_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hunter";
        side = 1;
        faction = "atlas_blu_m_f";
        crew = "Atlas_B_M_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_MRAP_01_gmg_F : MRAP_01_gmg_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hunter GMG";
        side = 1;
        faction = "atlas_blu_m_f";
        crew = "Atlas_B_M_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_MRAP_01_hmg_F : MRAP_01_hmg_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hunter HMG";
        side = 1;
        faction = "atlas_blu_m_f";
        crew = "Atlas_B_M_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_M_F : Atlas_B_M_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "atlas_blu_m_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_M_CombatUniform_des";

        linkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};

        weapons[] = {"arifle_scar_SV_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_scar_SV_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","20rnd_762x51_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Officer_F : Atlas_B_M_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "atlas_blu_m_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_M_CombatUniform_des";

        linkedItems[] = {"V_Rangemaster_Belt_cbr","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Rangemaster_Belt_cbr","H_Beret_grn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_mk20_plain_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_mk20_plain_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Plane_Fighter_04_F : Plane_Fighter_04_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "A-149 Malaikah";
        side = 1;
        faction = "atlas_blu_m_f";
        crew = "Atlas_B_M_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_RadioOperator_F : Atlas_B_M_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 1;
        faction = "atlas_blu_m_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_M_CombatUniform_shortsleeve_des";

        backpack = "B_RadioBag_01_marar_F";

        linkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};

        weapons[] = {"arifle_mk20_plain_holo_pointer_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_mk20_plain_holo_pointer_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_SL_F : Atlas_B_M_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "atlas_blu_m_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_M_CombatUniform_shortsleeve_des";

        linkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};

        weapons[] = {"arifle_mk20_plain_arco_pointer_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_mk20_plain_arco_pointer_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Soldier_CBRN_F : Atlas_B_M_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Specialist";
        side = 1;
        faction = "atlas_blu_m_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_M_CBRN_Suit_01_Marar_F";

        backpack = "B_CombinationUnitRespirator_01_F";

        linkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVgoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","G_AirPurifyingRespirator_01_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVgoggles"};

        weapons[] = {"arifle_mk20_plain_holo_pointer_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_mk20_plain_holo_pointer_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Soldier_F : Atlas_B_M_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "atlas_blu_m_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_M_CombatUniform_des";

        linkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};

        weapons[] = {"arifle_mk20_plain_arco_pointer_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_mk20_plain_arco_pointer_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Soldier_LAT_F : Atlas_B_M_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "atlas_blu_m_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_M_CombatUniform_des";

        backpack = "B_AssaultPack_marar_lat";

        linkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};

        weapons[] = {"arifle_mk20_plain_holo_pointer_F","launch_MRAWS_sand_rail_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_mk20_plain_holo_pointer_F","launch_MRAWS_sand_rail_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MRAWS_HEAT55_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MRAWS_HEAT55_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Soldier_unarmed_F : Atlas_B_M_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 1;
        faction = "atlas_blu_m_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_M_CombatUniform_des";

        linkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};

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

    class Atlas_B_M_TL_F : Atlas_B_M_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "atlas_blu_m_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_M_CombatUniform_shortsleeve_des";

        linkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};

        weapons[] = {"arifle_mk20_gl_plain_arco_pointer_F","hgun_G17_black_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_mk20_gl_plain_arco_pointer_F","hgun_G17_black_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Truck_02_Ammo_F : O_Truck_02_Ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Ammo";
        side = 1;
        faction = "atlas_blu_m_f";
        crew = "Atlas_B_M_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Truck_02_F : O_Truck_02_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport (covered)";
        side = 1;
        faction = "atlas_blu_m_f";
        crew = "Atlas_B_M_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Truck_02_box_F : O_Truck_02_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Repair";
        side = 1;
        faction = "atlas_blu_m_f";
        crew = "Atlas_B_M_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Truck_02_cargo_F : Truck_02_cargo_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Cargo";
        side = 1;
        faction = "atlas_blu_m_f";
        crew = "Atlas_B_M_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Truck_02_flatbed_F : Truck_02_flatbed_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Flatbed";
        side = 1;
        faction = "atlas_blu_m_f";
        crew = "Atlas_B_M_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Truck_02_fuel_F : O_Truck_02_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Fuel";
        side = 1;
        faction = "atlas_blu_m_f";
        crew = "Atlas_B_M_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Truck_02_medical_F : O_Truck_02_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Medical";
        side = 1;
        faction = "atlas_blu_m_f";
        crew = "Atlas_B_M_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_Truck_02_transport_F : O_Truck_02_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport";
        side = 1;
        faction = "atlas_blu_m_f";
        crew = "Atlas_B_M_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_medic_F : Atlas_B_M_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 1;
        faction = "atlas_blu_m_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_M_CombatUniform_des";

        backpack = "B_AssaultPack_marar_medic";

        linkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};

        weapons[] = {"arifle_mk20_plain_holo_pointer_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_mk20_plain_holo_pointer_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_B_M_support_CMort_RF : Atlas_B_M_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 1;
        faction = "atlas_blu_m_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_B_M_CombatUniform_des";

        backpack = "B_D_CTRG_CommandoMortar_weapon_RF";

        linkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};
        respawnlinkedItems[] = {"V_PlateCarrier2_snd","H_MK7_Marar_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};

        weapons[] = {"arifle_mk20_plain_arco_pointer_F","hgun_G17_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_mk20_plain_arco_pointer_F","hgun_G17_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


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
    class West {
        class Atlas_BLU_M_F {
            class Infantry {
                class B_M_InfSentry {
                    name = "Sentry";
                    side = 1;
                    faction = "Atlas_BLU_M_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_M_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_M_Soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class B_M_InfSquad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "Atlas_BLU_M_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_M_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_M_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_M_Soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_M_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_M_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_M_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_M_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_M_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class B_M_InfTeam {
                    name = "Fire Team";
                    side = 1;
                    faction = "Atlas_BLU_M_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_M_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_M_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_M_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_M_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class B_M_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "Atlas_BLU_M_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_M_APC_Wheeled_01_cannon_v2_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_M_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_M_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_M_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_M_M_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_M_TL_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_M_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_M_A_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_B_M_medic_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized {
                class Atlas_B_M_MotInf_Reinforcements {
                    name = "Motorized Reinforcements";
                    side = 1;
                    faction = "Atlas_BLU_M_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_M_Truck_02_transport_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_M_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_M_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_B_M_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_B_M_M_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_B_M_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_B_M_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_B_M_A_F";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_B_M_medic_F";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "Atlas_B_M_SL_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "Atlas_B_M_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "Atlas_B_M_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "Atlas_B_M_M_F";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit13 {
                        vehicle = "Atlas_B_M_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit14 {
                        vehicle = "Atlas_B_M_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit15 {
                        vehicle = "Atlas_B_M_A_F";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit16 {
                        vehicle = "Atlas_B_M_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };
                };
                class B_M_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 1;
                    faction = "Atlas_BLU_M_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_M_MRAP_01_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_M_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_B_M_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                };
                class B_M_MotInf_Team {
                    name = "Motorized Team";
                    side = 1;
                    faction = "Atlas_BLU_M_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_B_M_MRAP_01_gmg_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_B_M_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
            };
        };
    };
};
