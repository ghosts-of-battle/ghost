//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class Atlas_OPF_T_F {
        displayName = "Takistan";
        side = 0;
        priority = 3;
        icon = "\A3_Atlas\Data_F_Atlas\FactionIcons\icon_TKA_CA.paa";
        flag = "\A3_Atlas\Data_F_Atlas\Flags\flag_Takistan_CO.paa";
    };
};

class CfgVehicles {

    class O_APC_Tracked_02_cannon_F;
    class O_APC_Tracked_02_cannon_F_OCimport_01 : O_APC_Tracked_02_cannon_F { scope = 0; class EventHandlers; };
    class O_APC_Tracked_02_cannon_F_OCimport_02 : O_APC_Tracked_02_cannon_F_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_02_hmg_base_lxws;
    class APC_Wheeled_02_hmg_base_lxws_OCimport_01 : APC_Wheeled_02_hmg_base_lxws { scope = 0; class EventHandlers; };
    class APC_Wheeled_02_hmg_base_lxws_OCimport_02 : APC_Wheeled_02_hmg_base_lxws_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_02_base_v2_F;
    class APC_Wheeled_02_base_v2_F_OCimport_01 : APC_Wheeled_02_base_v2_F { scope = 0; class EventHandlers; };
    class APC_Wheeled_02_base_v2_F_OCimport_02 : APC_Wheeled_02_base_v2_F_OCimport_01 { class EventHandlers; };

    class O_APC_Wheeled_02_unarmed_lxWS;
    class O_APC_Wheeled_02_unarmed_lxWS_OCimport_01 : O_APC_Wheeled_02_unarmed_lxWS { scope = 0; class EventHandlers; };
    class O_APC_Wheeled_02_unarmed_lxWS_OCimport_02 : O_APC_Wheeled_02_unarmed_lxWS_OCimport_01 { class EventHandlers; };

    class B_D_CTRG_CommandoMortar_RF;
    class B_D_CTRG_CommandoMortar_RF_OCimport_01 : B_D_CTRG_CommandoMortar_RF { scope = 0; class EventHandlers; };
    class B_D_CTRG_CommandoMortar_RF_OCimport_02 : B_D_CTRG_CommandoMortar_RF_OCimport_01 { class EventHandlers; };

    class Atlas_O_T_soldier_base_F;
    class Atlas_O_T_soldier_base_F_OCimport_01 : Atlas_O_T_soldier_base_F { scope = 0; class EventHandlers; };
    class Atlas_O_T_soldier_base_F_OCimport_02 : Atlas_O_T_soldier_base_F_OCimport_01 { class EventHandlers; };

    class O_GMG_01_F;
    class O_GMG_01_F_OCimport_01 : O_GMG_01_F { scope = 0; class EventHandlers; };
    class O_GMG_01_F_OCimport_02 : O_GMG_01_F_OCimport_01 { class EventHandlers; };

    class O_GMG_01_high_F;
    class O_GMG_01_high_F_OCimport_01 : O_GMG_01_high_F { scope = 0; class EventHandlers; };
    class O_GMG_01_high_F_OCimport_02 : O_GMG_01_high_F_OCimport_01 { class EventHandlers; };

    class O_HMG_01_F;
    class O_HMG_01_F_OCimport_01 : O_HMG_01_F { scope = 0; class EventHandlers; };
    class O_HMG_01_F_OCimport_02 : O_HMG_01_F_OCimport_01 { class EventHandlers; };

    class O_HMG_01_high_F;
    class O_HMG_01_high_F_OCimport_01 : O_HMG_01_high_F { scope = 0; class EventHandlers; };
    class O_HMG_01_high_F_OCimport_02 : O_HMG_01_high_F_OCimport_01 { class EventHandlers; };

    class HMG_02_base_F;
    class HMG_02_base_F_OCimport_01 : HMG_02_base_F { scope = 0; class EventHandlers; };
    class HMG_02_base_F_OCimport_02 : HMG_02_base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_high_base_F;
    class HMG_02_high_base_F_OCimport_01 : HMG_02_high_base_F { scope = 0; class EventHandlers; };
    class HMG_02_high_base_F_OCimport_02 : HMG_02_high_base_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Attack_02_dynamicLoadout_F;
    class O_Heli_Attack_02_dynamicLoadout_F_OCimport_01 : O_Heli_Attack_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_Heli_Attack_02_dynamicLoadout_F_OCimport_02 : O_Heli_Attack_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class Aegis_Heli_Attack_04_base_F;
    class Aegis_Heli_Attack_04_base_F_OCimport_01 : Aegis_Heli_Attack_04_base_F { scope = 0; class EventHandlers; };
    class Aegis_Heli_Attack_04_base_F_OCimport_02 : Aegis_Heli_Attack_04_base_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Light_02_dynamicLoadout_F;
    class O_Heli_Light_02_dynamicLoadout_F_OCimport_01 : O_Heli_Light_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_Heli_Light_02_dynamicLoadout_F_OCimport_02 : O_Heli_Light_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Light_02_unarmed_F;
    class O_Heli_Light_02_unarmed_F_OCimport_01 : O_Heli_Light_02_unarmed_F { scope = 0; class EventHandlers; };
    class O_Heli_Light_02_unarmed_F_OCimport_02 : O_Heli_Light_02_unarmed_F_OCimport_01 { class EventHandlers; };

    class LSV_02_AT_base_F;
    class LSV_02_AT_base_F_OCimport_01 : LSV_02_AT_base_F { scope = 0; class EventHandlers; };
    class LSV_02_AT_base_F_OCimport_02 : LSV_02_AT_base_F_OCimport_01 { class EventHandlers; };

    class LSV_02_armed_base_F;
    class LSV_02_armed_base_F_OCimport_01 : LSV_02_armed_base_F { scope = 0; class EventHandlers; };
    class LSV_02_armed_base_F_OCimport_02 : LSV_02_armed_base_F_OCimport_01 { class EventHandlers; };

    class LSV_02_unarmed_base_F;
    class LSV_02_unarmed_base_F_OCimport_01 : LSV_02_unarmed_base_F { scope = 0; class EventHandlers; };
    class LSV_02_unarmed_base_F_OCimport_02 : LSV_02_unarmed_base_F_OCimport_01 { class EventHandlers; };

    class O_MBT_02_cannon_F;
    class O_MBT_02_cannon_F_OCimport_01 : O_MBT_02_cannon_F { scope = 0; class EventHandlers; };
    class O_MBT_02_cannon_F_OCimport_02 : O_MBT_02_cannon_F_OCimport_01 { class EventHandlers; };

    class O_Mortar_01_F;
    class O_Mortar_01_F_OCimport_01 : O_Mortar_01_F { scope = 0; class EventHandlers; };
    class O_Mortar_01_F_OCimport_02 : O_Mortar_01_F_OCimport_01 { class EventHandlers; };

    class O_Plane_Fighter_03_dynamicLoadout_F;
    class O_Plane_Fighter_03_dynamicLoadout_F_OCimport_01 : O_Plane_Fighter_03_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_Plane_Fighter_03_dynamicLoadout_F_OCimport_02 : O_Plane_Fighter_03_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class Quadbike_01_base_F;
    class Quadbike_01_base_F_OCimport_01 : Quadbike_01_base_F { scope = 0; class EventHandlers; };
    class Quadbike_01_base_F_OCimport_02 : Quadbike_01_base_F_OCimport_01 { class EventHandlers; };

    class Atlas_O_T_soldier_F;
    class Atlas_O_T_soldier_F_OCimport_01 : Atlas_O_T_soldier_F { scope = 0; class EventHandlers; };
    class Atlas_O_T_soldier_F_OCimport_02 : Atlas_O_T_soldier_F_OCimport_01 { class EventHandlers; };

    class Atlas_O_T_RadioOperator_F;
    class Atlas_O_T_RadioOperator_F_OCimport_01 : Atlas_O_T_RadioOperator_F { scope = 0; class EventHandlers; };
    class Atlas_O_T_RadioOperator_F_OCimport_02 : Atlas_O_T_RadioOperator_F_OCimport_01 { class EventHandlers; };

    class Atlas_O_T_soldier_GL_F;
    class Atlas_O_T_soldier_GL_F_OCimport_01 : Atlas_O_T_soldier_GL_F { scope = 0; class EventHandlers; };
    class Atlas_O_T_soldier_GL_F_OCimport_02 : Atlas_O_T_soldier_GL_F_OCimport_01 { class EventHandlers; };

    class O_static_AA_F;
    class O_static_AA_F_OCimport_01 : O_static_AA_F { scope = 0; class EventHandlers; };
    class O_static_AA_F_OCimport_02 : O_static_AA_F_OCimport_01 { class EventHandlers; };

    class O_static_AT_F;
    class O_static_AT_F_OCimport_01 : O_static_AT_F { scope = 0; class EventHandlers; };
    class O_static_AT_F_OCimport_02 : O_static_AT_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_Ammo_F;
    class O_Truck_02_Ammo_F_OCimport_01 : O_Truck_02_Ammo_F { scope = 0; class EventHandlers; };
    class O_Truck_02_Ammo_F_OCimport_02 : O_Truck_02_Ammo_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_covered_F;
    class O_Truck_02_covered_F_OCimport_01 : O_Truck_02_covered_F { scope = 0; class EventHandlers; };
    class O_Truck_02_covered_F_OCimport_02 : O_Truck_02_covered_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_MRL_F;
    class O_Truck_02_MRL_F_OCimport_01 : O_Truck_02_MRL_F { scope = 0; class EventHandlers; };
    class O_Truck_02_MRL_F_OCimport_02 : O_Truck_02_MRL_F_OCimport_01 { class EventHandlers; };

    class Truck_02_aa_base_lxWS;
    class Truck_02_aa_base_lxWS_OCimport_01 : Truck_02_aa_base_lxWS { scope = 0; class EventHandlers; };
    class Truck_02_aa_base_lxWS_OCimport_02 : Truck_02_aa_base_lxWS_OCimport_01 { class EventHandlers; };

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

    class Atlas_O_T_helipilot_F;
    class Atlas_O_T_helipilot_F_OCimport_01 : Atlas_O_T_helipilot_F { scope = 0; class EventHandlers; };
    class Atlas_O_T_helipilot_F_OCimport_02 : Atlas_O_T_helipilot_F_OCimport_01 { class EventHandlers; };

    class O_helipilot_F;
    class O_helipilot_F_OCimport_01 : O_helipilot_F { scope = 0; class EventHandlers; };
    class O_helipilot_F_OCimport_02 : O_helipilot_F_OCimport_01 { class EventHandlers; };

    class Atlas_O_T_medic_F;
    class Atlas_O_T_medic_F_OCimport_01 : Atlas_O_T_medic_F { scope = 0; class EventHandlers; };
    class Atlas_O_T_medic_F_OCimport_02 : Atlas_O_T_medic_F_OCimport_01 { class EventHandlers; };

    class Atlas_O_T_soldier_LAT_F;
    class Atlas_O_T_soldier_LAT_F_OCimport_01 : Atlas_O_T_soldier_LAT_F { scope = 0; class EventHandlers; };
    class Atlas_O_T_soldier_LAT_F_OCimport_02 : Atlas_O_T_soldier_LAT_F_OCimport_01 { class EventHandlers; };

    class Atlas_O_T_soldier_M_F;
    class Atlas_O_T_soldier_M_F_OCimport_01 : Atlas_O_T_soldier_M_F { scope = 0; class EventHandlers; };
    class Atlas_O_T_soldier_M_F_OCimport_02 : Atlas_O_T_soldier_M_F_OCimport_01 { class EventHandlers; };

    class Atlas_O_T_soldier_SL_F;
    class Atlas_O_T_soldier_SL_F_OCimport_01 : Atlas_O_T_soldier_SL_F { scope = 0; class EventHandlers; };
    class Atlas_O_T_soldier_SL_F_OCimport_02 : Atlas_O_T_soldier_SL_F_OCimport_01 { class EventHandlers; };

    class Atlas_O_T_soldier_TL_F;
    class Atlas_O_T_soldier_TL_F_OCimport_01 : Atlas_O_T_soldier_TL_F { scope = 0; class EventHandlers; };
    class Atlas_O_T_soldier_TL_F_OCimport_02 : Atlas_O_T_soldier_TL_F_OCimport_01 { class EventHandlers; };

    class Atlas_O_T_APC_Tracked_02_cannon_F : O_APC_Tracked_02_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BM-2T Stalker";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_APC_Wheeled_02_hmg_lxWS : APC_Wheeled_02_hmg_base_lxws_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar ARMA (HMG)";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_APC_Wheeled_02_rcws_v2_F : APC_Wheeled_02_base_v2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSE-3 Marid";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_APC_Wheeled_02_unarmed_lxWS : O_APC_Wheeled_02_unarmed_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar ARMA (Unarmed)";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_CommandoMortar_RF : B_D_CTRG_CommandoMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RSG60";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Fighter_Pilot_F : Atlas_O_T_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter Pilot";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "U_O_PilotCoveralls";

        linkedItems[] = {"H_PilotHelmetFighter_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_PilotHelmetFighter_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_GMG_01_F : O_GMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_GMG_01_high_F : O_GMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307 (High)";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_HMG_01_F : O_HMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_HMG_01_high_F : O_HMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312 (High)";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_HMG_02_F : HMG_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_HMG_02_high_F : HMG_02_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Heli_Attack_02_dynamicLoadout_F : O_Heli_Attack_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-48 Kajman";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Heli_Attack_04_F : Aegis_Heli_Attack_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-35 Krokodil";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Heli_Light_02_dynamicLoadout_F : O_Heli_Light_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Heli_Light_02_unarmed_F : O_Heli_Light_02_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka (unarmed)";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_LSV_02_AT_F : LSV_02_AT_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LSV Mk. II (Metis-M)";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_LSV_02_armed_F : LSV_02_armed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LSV Mk. II (M134)";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_LSV_02_unarmed_F : LSV_02_unarmed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LSV Mk. II";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_MBT_02_cannon_F : O_MBT_02_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "T100 Black Eagle";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Mortar_01_F : O_Mortar_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_O_T_Mortar_01_F";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Plane_Fighter_03_dynamicLoadout_F : O_Plane_Fighter_03_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "A-143 Buzzard";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Quadbike_01_F : Quadbike_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_RadioOperator_F : Atlas_O_T_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_LightCombatFatigues_semiarid_F";

        backpack = "B_RadioBag_01_semiarid_F";

        linkedItems[] = {"V_HarnessOSpec_tan","Atlas_H_PASGT_Cover_O_SAHex_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_HarnessOSpec_tan","Atlas_H_PASGT_Cover_O_SAHex_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"atlas_arifle_SCAR_L_FL_F","Throw","Put"};
        respawnWeapons[] = {"atlas_arifle_SCAR_L_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_RadioOperator_conscript_F : Atlas_O_T_RadioOperator_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_Afghanka_01_semiarid_F";

        backpack = "B_RadioBag_01_semiarid_F";

        linkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_headset_lxWS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_headset_lxWS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Soldier_GL_Conscript_F : Atlas_O_T_soldier_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_Afghanka_02_semiarid_F";

        linkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SLR_V_GL_lxWS","Throw","Put"};
        respawnWeapons[] = {"arifle_SLR_V_GL_lxWS","Throw","Put"};

        magazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","HandGrenade_Guer","HandGrenade_Guer","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS"};
        respawnMagazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","HandGrenade_Guer","HandGrenade_Guer","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Static_AA_F : O_static_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AA)";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Static_AT_F : O_static_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AT)";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Truck_02_Ammo_F : O_Truck_02_Ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Ammo";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Truck_02_F : O_Truck_02_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport (covered)";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Truck_02_MRL_F : O_Truck_02_MRL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak MRL";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Truck_02_aa_lxWS : Truck_02_aa_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ (Zu-23-2)";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Truck_02_box_F : O_Truck_02_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Repair";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Truck_02_cargo_F : Truck_02_cargo_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Cargo";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Truck_02_flatbed_F : Truck_02_flatbed_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Flatbed";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Truck_02_fuel_F : O_Truck_02_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Fuel";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Truck_02_medical_F : O_Truck_02_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Medical";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_Truck_02_transport_F : O_Truck_02_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport";
        side = 0;
        faction = "atlas_opf_t_f";
        crew = "Atlas_O_T_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_crew_F : Atlas_O_T_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_LightCombatFatigues_semiarid_F";

        linkedItems[] = {"V_BandollierB_tan","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_BandollierB_tan","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"hgun_PDW2000_F","Throw","Put"};
        respawnWeapons[] = {"hgun_PDW2000_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_engineer_F : Atlas_O_T_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_LightCombatFatigues_semiarid_F";

        backpack = "B_FieldPack_semiarid_Eng_F";

        linkedItems[] = {"V_HarnessOSpec_tan","H_PASGT_basic_olive_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_HarnessOSpec_tan","H_PASGT_basic_olive_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"atlas_arifle_SCAR_L_Short_FL_F","Throw","Put"};
        respawnWeapons[] = {"atlas_arifle_SCAR_L_Short_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_helicrew_F : Atlas_O_T_helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_officer_noInsignia_semiarid_F";

        linkedItems[] = {"V_TacVest_tan","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_TacVest_tan","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_SCAR_L_Short_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SCAR_L_Short_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_helipilot_F : O_helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_officer_noInsignia_semiarid_F";

        linkedItems[] = {"V_TacVest_tan","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_TacVest_tan","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"hgun_PDW2000_F","Throw","Put"};
        respawnWeapons[] = {"hgun_PDW2000_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_medic_F : Atlas_O_T_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_LightCombatFatigues_semiarid_F";

        backpack = "B_FieldPack_semiarid_Medic_F";

        linkedItems[] = {"V_HarnessOSpec_tan","Atlas_H_PASGT_Cover_O_SAHex_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_HarnessOSpec_tan","Atlas_H_PASGT_Cover_O_SAHex_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"atlas_arifle_SCAR_L_FL_F","Throw","Put"};
        respawnWeapons[] = {"atlas_arifle_SCAR_L_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_medic_conscript_F : Atlas_O_T_medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_Afghanka_02_semiarid_F";

        backpack = "B_FieldPack_semiarid_Medic_F";

        linkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_officer_F : Atlas_O_T_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_officer_noInsignia_semiarid_F";

        linkedItems[] = {"V_Rangemaster_belt_tan","H_Beret_CSAT_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Rangemaster_belt_tan","H_Beret_CSAT_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_PDW2000_F","hgun_Pistol_01_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"hgun_PDW2000_F","hgun_Pistol_01_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_soldier_1_conscript_F : Atlas_O_T_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AK-74)";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_Afghanka_01_semiarid_F";

        linkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_soldier_2_conscript_F : Atlas_O_T_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (SLR)";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_Afghanka_02_semiarid_F";

        linkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SLR_V_lxWS","Throw","Put"};
        respawnWeapons[] = {"arifle_SLR_V_lxWS","Throw","Put"};

        magazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_soldier_AA_F : Atlas_O_T_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_LightCombatFatigues_semiarid_F";

        backpack = "B_FieldPack_semiarid_AA_F";

        linkedItems[] = {"V_HarnessOSpec_tan","H_PASGT_basic_olive_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_HarnessOSpec_tan","H_PASGT_basic_olive_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"atlas_arifle_SCAR_L_Short_FL_F","launch_O_Titan_F","Throw","Put"};
        respawnWeapons[] = {"atlas_arifle_SCAR_L_Short_FL_F","launch_O_Titan_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","Titan_AA","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","Titan_AA","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_soldier_AR_F : Atlas_O_T_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_LightCombatFatigues_semiarid_F";

        linkedItems[] = {"V_HarnessOSpec_tan","Atlas_H_PASGT_Cover_O_SAHex_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_HarnessOSpec_tan","Atlas_H_PASGT_Cover_O_SAHex_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"atlas_LMG_03_Holo_blk_F","Throw","Put"};
        respawnWeapons[] = {"atlas_LMG_03_Holo_blk_F","Throw","Put"};

        magazines[] = {"200rnd_556x45_box_f","200rnd_556x45_box_f","200rnd_556x45_box_f","200rnd_556x45_box_f","HandGrenade_Guer","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"200rnd_556x45_box_f","200rnd_556x45_box_f","200rnd_556x45_box_f","200rnd_556x45_box_f","HandGrenade_Guer","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_soldier_AR_conscript_F : Atlas_O_T_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_Afghanka_02_semiarid_F";

        linkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_RPK74M_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_RPK74M_F","Throw","Put"};

        magazines[] = {"Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F"};
        respawnMagazines[] = {"Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F","Aegis_45Rnd_545x39_Mag_Green_F"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_soldier_AT_F : Atlas_O_T_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_LightCombatFatigues_semiarid_F";

        backpack = "B_FieldPack_semiarid_AT_F";

        linkedItems[] = {"V_HarnessOSpec_tan","Atlas_H_PASGT_Cover_O_SAHex_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_HarnessOSpec_tan","Atlas_H_PASGT_Cover_O_SAHex_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"atlas_arifle_SCAR_L_Short_FL_F","launch_O_Titan_short_F","Throw","Put"};
        respawnWeapons[] = {"atlas_arifle_SCAR_L_Short_FL_F","launch_O_Titan_short_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","Titan_AT","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","Titan_AT","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_soldier_A_F : Atlas_O_T_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_LightCombatFatigues_semiarid_F";

        backpack = "B_Carryall_semiarid_Ammo_F";

        linkedItems[] = {"V_HarnessOSpec_tan","H_PASGT_basic_olive_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_HarnessOSpec_tan","H_PASGT_basic_olive_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"atlas_arifle_SCAR_L_FL_F","Throw","Put"};
        respawnWeapons[] = {"atlas_arifle_SCAR_L_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_soldier_F : Atlas_O_T_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_LightCombatFatigues_semiarid_F";

        linkedItems[] = {"V_HarnessOSpec_tan","Atlas_H_PASGT_Cover_O_SAHex_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_HarnessOSpec_tan","Atlas_H_PASGT_Cover_O_SAHex_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"atlas_arifle_SCAR_L_ICO_FL_F","Throw","Put"};
        respawnWeapons[] = {"atlas_arifle_SCAR_L_ICO_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_soldier_GL_F : Atlas_O_T_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_LightCombatFatigues_semiarid_F";

        linkedItems[] = {"V_HarnessOSpec_tan","Atlas_H_PASGT_Cover_O_SAHex_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_HarnessOSpec_tan","Atlas_H_PASGT_Cover_O_SAHex_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"atlas_arifle_SCAR_L_GL_ICO_FL_F","Throw","Put"};
        respawnWeapons[] = {"atlas_arifle_SCAR_L_GL_ICO_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_soldier_LAT_F : Atlas_O_T_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_LightCombatFatigues_semiarid_F";

        backpack = "B_FieldPack_semiarid_LAT_F";

        linkedItems[] = {"V_HarnessOSpec_tan","Atlas_H_PASGT_Cover_O_SAHex_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_HarnessOSpec_tan","Atlas_H_PASGT_Cover_O_SAHex_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"atlas_arifle_SCAR_L_ICO_FL_F","launch_RPG32_F","Throw","Put"};
        respawnWeapons[] = {"atlas_arifle_SCAR_L_ICO_FL_F","launch_RPG32_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","RPG32_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","RPG32_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_soldier_LAT_conscript_F : Atlas_O_T_soldier_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_Afghanka_01_semiarid_F";

        backpack = "B_FieldPack_semiarid_LAT_conscript";

        linkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Aegis_arifle_AKM74_F","launch_RPG7_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_AKM74_F","launch_RPG7_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","RPG7_F","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","30Rnd_545x39_black_Mag_F","RPG7_F","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_soldier_M_F : Atlas_O_T_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_LightCombatFatigues_semiarid_F";

        linkedItems[] = {"V_HarnessOSpec_tan","H_PASGT_basic_olive_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_HarnessOSpec_tan","H_PASGT_basic_olive_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"atlas_arifle_SCAR_ARCO_BI_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"atlas_arifle_SCAR_ARCO_BI_F","Throw","Put","Rangefinder"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_soldier_M_conscript_F : Atlas_O_T_soldier_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_Afghanka_01_semiarid_F";

        linkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"atlas_arifle_SLR_V_KHS_old_lxWS","Throw","Put"};
        respawnWeapons[] = {"atlas_arifle_SLR_V_KHS_old_lxWS","Throw","Put"};

        magazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","HandGrenade_Guer","HandGrenade_Guer"};
        respawnMagazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","HandGrenade_Guer","HandGrenade_Guer"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_soldier_SL_F : Atlas_O_T_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_LightCombatFatigues_semiarid_F";

        linkedItems[] = {"V_HarnessOSpec_tan","Atlas_H_HelmetCCH_Cover_semiarid_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_HarnessOSpec_tan","Atlas_H_HelmetCCH_Cover_semiarid_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"atlas_arifle_SCAR_L_ARCO_FL_F","hgun_Pistol_01_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"atlas_arifle_SCAR_L_ARCO_FL_F","hgun_Pistol_01_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_tracer_green","30Rnd_556x45_stanag_sand_tracer_green","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_tracer_green","30Rnd_556x45_stanag_sand_tracer_green","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_soldier_SL_conscript_F : Atlas_O_T_soldier_SL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_Afghanka_01_semiarid_F";

        linkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SLR_V_lxWS","hgun_Pistol_01_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SLR_V_lxWS","hgun_Pistol_01_F","Throw","Put","Binocular"};

        magazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_soldier_TL_F : Atlas_O_T_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_LightCombatFatigues_semiarid_F";

        linkedItems[] = {"V_HarnessOSpec_tan","Atlas_H_HelmetCCH_Cover_semiarid_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_HarnessOSpec_tan","Atlas_H_HelmetCCH_Cover_semiarid_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"atlas_arifle_SCAR_L_GL_ARCO_FL_F","hgun_Pistol_01_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"atlas_arifle_SCAR_L_GL_ARCO_FL_F","hgun_Pistol_01_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_tracer_green","30Rnd_556x45_stanag_sand_tracer_green","10Rnd_9x21_Mag","10Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_tracer_green","30Rnd_556x45_stanag_sand_tracer_green","10Rnd_9x21_Mag","10Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_soldier_TL_conscript_F : Atlas_O_T_soldier_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_Afghanka_02_semiarid_F";

        linkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_tan","lxWS_H_ssh40_green","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SLR_V_GL_lxWS","hgun_Pistol_01_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SLR_V_GL_lxWS","hgun_Pistol_01_F","Throw","Put","Binocular"};

        magazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS"};
        respawnMagazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_T_support_CMort_RF : Atlas_O_T_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 0;
        faction = "atlas_opf_t_f";

        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};

        uniformClass = "Atlas_U_O_LightCombatFatigues_semiarid_F";

        backpack = "B_D_CTRG_CommandoMortar_weapon_RF";

        linkedItems[] = {"V_HarnessOSpec_tan","H_PASGT_basic_olive_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_HarnessOSpec_tan","H_PASGT_basic_olive_F","G_shemag_white","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"atlas_arifle_SCAR_L_FL_F","Throw","Put"};
        respawnWeapons[] = {"atlas_arifle_SCAR_L_FL_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","30Rnd_556x45_stanag_sand_green","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};


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
    class East {
        class Atlas_OPF_T_F {
            class Armored {
                class O_C_TankPlatoon {
                    name = "Tank Platoon";
                    side = 0;
                    faction = "Atlas_OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_T_MBT_02_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_T_MBT_02_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_T_MBT_02_cannon_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_T_MBT_02_cannon_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class O_C_TankSection {
                    name = "Tank Section";
                    side = 0;
                    faction = "Atlas_OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_T_MBT_02_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_T_MBT_02_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class O_C_InfSentry {
                    name = "Sentry";
                    side = 0;
                    faction = "Atlas_OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_T_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_T_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class O_C_InfSquad {
                    name = "Rifle Squad";
                    side = 0;
                    faction = "Atlas_OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_T_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_T_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_T_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_O_T_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_O_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class O_C_InfSquad_Conscript {
                    name = "Rifle Squad (Conscripts)";
                    side = 0;
                    faction = "Atlas_OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_T_soldier_SL_conscript_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_T_soldier_2_conscript_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_T_soldier_LAT_conscript_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_T_soldier_M_conscript_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_O_T_soldier_TL_conscript_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_O_T_soldier_AR_conscript_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_O_T_soldier_1_conscript_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_O_T_medic_conscript_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class O_C_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 0;
                    faction = "Atlas_OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_T_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_T_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_T_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_O_T_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_O_T_soldier_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_O_T_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_O_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class O_C_InfTeam {
                    name = "Fire Team";
                    side = 0;
                    faction = "Atlas_OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_T_soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_T_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_C_InfTeam_AA {
                    name = "Air-defense Team";
                    side = 0;
                    faction = "Atlas_OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_T_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_T_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_T_soldier_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_C_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 0;
                    faction = "Atlas_OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_T_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_T_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_T_soldier_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class O_C_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 0;
                    faction = "Atlas_OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_T_APC_Wheeled_02_rcws_v2_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_T_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_T_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_O_T_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_O_T_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_O_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class O_C_MechInf_AA {
                    name = "Mechanized Air-defense Squad";
                    side = 0;
                    faction = "Atlas_OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_T_APC_Tracked_02_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_T_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_O_T_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_O_T_soldier_AA_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_O_T_soldier_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_O_T_soldier_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_O_T_soldier_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class O_C_MechInf_AT {
                    name = "Mechanized Anti-armor Squad";
                    side = 0;
                    faction = "Atlas_OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_T_APC_Tracked_02_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_T_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_O_T_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_O_T_soldier_AT_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_O_T_soldier_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_O_T_soldier_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_O_T_soldier_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized {
                class O_C_MotInf_AA {
                    name = "Motorized Air-defense Team";
                    side = 0;
                    faction = "Atlas_OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_T_LSV_02_unarmed_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_T_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_T_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_T_soldier_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class O_C_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 0;
                    faction = "Atlas_OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_T_LSV_02_unarmed_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_T_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_T_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_T_soldier_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class O_C_MotInf_Reinforcements {
                    name = "Motorized Reinforcements";
                    side = 0;
                    faction = "Atlas_OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_T_Truck_02_transport_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_T_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_T_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_O_T_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_O_T_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_O_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "Atlas_O_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "Atlas_O_T_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "Atlas_O_T_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "Atlas_O_T_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit13 {
                        vehicle = "Atlas_O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit14 {
                        vehicle = "Atlas_O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit15 {
                        vehicle = "Atlas_O_T_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit16 {
                        vehicle = "Atlas_O_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };
                };
                class O_C_MotInf_Team {
                    name = "Motorized Team";
                    side = 0;
                    faction = "Atlas_OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_T_LSV_02_armed_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_T_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
        };
    };
};
