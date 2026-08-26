//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class OPF_A_F {
        displayName = "Argana";
        side = 0;
        priority = 3;
        icon = "\A3_Aegis\Data_F_Aegis\FactionIcons\CfgFactionClasses_OPF_A_CA.paa";
        flag = "\A3_Aegis\Data_F_Aegis\Flags\flag_Argana_CO.paa";
    };
};

class CfgVehicles {

    class AddGis_APC_Tracked_Type63_HMG_base;
    class AddGis_APC_Tracked_Type63_HMG_base_OCimport_01 : AddGis_APC_Tracked_Type63_HMG_base { scope = 0; class EventHandlers; };
    class AddGis_APC_Tracked_Type63_HMG_base_OCimport_02 : AddGis_APC_Tracked_Type63_HMG_base_OCimport_01 { class EventHandlers; };

    class AddGis_APC_Tracked_Type63_base;
    class AddGis_APC_Tracked_Type63_base_OCimport_01 : AddGis_APC_Tracked_Type63_base { scope = 0; class EventHandlers; };
    class AddGis_APC_Tracked_Type63_base_OCimport_02 : AddGis_APC_Tracked_Type63_base_OCimport_01 { class EventHandlers; };

    class O_APC_Tracked_02_30mm_lxWS;
    class O_APC_Tracked_02_30mm_lxWS_OCimport_01 : O_APC_Tracked_02_30mm_lxWS { scope = 0; class EventHandlers; };
    class O_APC_Tracked_02_30mm_lxWS_OCimport_02 : O_APC_Tracked_02_30mm_lxWS_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_02_hmg_base_lxws;
    class APC_Wheeled_02_hmg_base_lxws_OCimport_01 : APC_Wheeled_02_hmg_base_lxws { scope = 0; class EventHandlers; };
    class APC_Wheeled_02_hmg_base_lxws_OCimport_02 : APC_Wheeled_02_hmg_base_lxws_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_02_unarmed_base_lxws;
    class APC_Wheeled_02_unarmed_base_lxws_OCimport_01 : APC_Wheeled_02_unarmed_base_lxws { scope = 0; class EventHandlers; };
    class APC_Wheeled_02_unarmed_base_lxws_OCimport_02 : APC_Wheeled_02_unarmed_base_lxws_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_04_export_base_F;
    class APC_Wheeled_04_export_base_F_OCimport_01 : APC_Wheeled_04_export_base_F { scope = 0; class EventHandlers; };
    class APC_Wheeled_04_export_base_F_OCimport_02 : APC_Wheeled_04_export_base_F_OCimport_01 { class EventHandlers; };

    class O_CommandoMortar_RF;
    class O_CommandoMortar_RF_OCimport_01 : O_CommandoMortar_RF { scope = 0; class EventHandlers; };
    class O_CommandoMortar_RF_OCimport_02 : O_CommandoMortar_RF_OCimport_01 { class EventHandlers; };

    class Aegis_Heli_Attack_04_base_F;
    class Aegis_Heli_Attack_04_base_F_OCimport_01 : Aegis_Heli_Attack_04_base_F { scope = 0; class EventHandlers; };
    class Aegis_Heli_Attack_04_base_F_OCimport_02 : Aegis_Heli_Attack_04_base_F_OCimport_01 { class EventHandlers; };

    class Heli_EC_01A_military_base_RF;
    class Heli_EC_01A_military_base_RF_OCimport_01 : Heli_EC_01A_military_base_RF { scope = 0; class EventHandlers; };
    class Heli_EC_01A_military_base_RF_OCimport_02 : Heli_EC_01A_military_base_RF_OCimport_01 { class EventHandlers; };

    class Heli_EC_02_base_RF;
    class Heli_EC_02_base_RF_OCimport_01 : Heli_EC_02_base_RF { scope = 0; class EventHandlers; };
    class Heli_EC_02_base_RF_OCimport_02 : Heli_EC_02_base_RF_OCimport_01 { class EventHandlers; };

    class O_Pickup_Comms_rf;
    class O_Pickup_Comms_rf_OCimport_01 : O_Pickup_Comms_rf { scope = 0; class EventHandlers; };
    class O_Pickup_Comms_rf_OCimport_02 : O_Pickup_Comms_rf_OCimport_01 { class EventHandlers; };

    class Pickup_fuel_base_rf;
    class Pickup_fuel_base_rf_OCimport_01 : Pickup_fuel_base_rf { scope = 0; class EventHandlers; };
    class Pickup_fuel_base_rf_OCimport_02 : Pickup_fuel_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_hmg_base_rf;
    class Pickup_01_hmg_base_rf_OCimport_01 : Pickup_01_hmg_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_hmg_base_rf_OCimport_02 : Pickup_01_hmg_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_mrl_base_rf;
    class Pickup_01_mrl_base_rf_OCimport_01 : Pickup_01_mrl_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_mrl_base_rf_OCimport_02 : Pickup_01_mrl_base_rf_OCimport_01 { class EventHandlers; };

    class O_Pickup_rf;
    class O_Pickup_rf_OCimport_01 : O_Pickup_rf { scope = 0; class EventHandlers; };
    class O_Pickup_rf_OCimport_02 : O_Pickup_rf_OCimport_01 { class EventHandlers; };

    class Truck_02_aa_base_lxWS;
    class Truck_02_aa_base_lxWS_OCimport_01 : Truck_02_aa_base_lxWS { scope = 0; class EventHandlers; };
    class Truck_02_aa_base_lxWS_OCimport_02 : Truck_02_aa_base_lxWS_OCimport_01 { class EventHandlers; };

    class zu23_base_lxWS;
    class zu23_base_lxWS_OCimport_01 : zu23_base_lxWS { scope = 0; class EventHandlers; };
    class zu23_base_lxWS_OCimport_02 : zu23_base_lxWS_OCimport_01 { class EventHandlers; };

    class O_A_soldier_F;
    class O_A_soldier_F_OCimport_01 : O_A_soldier_F { scope = 0; class EventHandlers; };
    class O_A_soldier_F_OCimport_02 : O_A_soldier_F_OCimport_01 { class EventHandlers; };

    class O_APC_Tracked_02_cannon_F;
    class O_APC_Tracked_02_cannon_F_OCimport_01 : O_APC_Tracked_02_cannon_F { scope = 0; class EventHandlers; };
    class O_APC_Tracked_02_cannon_F_OCimport_02 : O_APC_Tracked_02_cannon_F_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_02_base_v2_F;
    class APC_Wheeled_02_base_v2_F_OCimport_01 : APC_Wheeled_02_base_v2_F { scope = 0; class EventHandlers; };
    class APC_Wheeled_02_base_v2_F_OCimport_02 : APC_Wheeled_02_base_v2_F_OCimport_01 { class EventHandlers; };

    class O_A_helipilot_F;
    class O_A_helipilot_F_OCimport_01 : O_A_helipilot_F { scope = 0; class EventHandlers; };
    class O_A_helipilot_F_OCimport_02 : O_A_helipilot_F_OCimport_01 { class EventHandlers; };

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

    class O_A_Soldier_AR_lxWS;
    class O_A_Soldier_AR_lxWS_OCimport_01 : O_A_Soldier_AR_lxWS { scope = 0; class EventHandlers; };
    class O_A_Soldier_AR_lxWS_OCimport_02 : O_A_Soldier_AR_lxWS_OCimport_01 { class EventHandlers; };

    class O_Heli_Attack_02_dynamicLoadout_F;
    class O_Heli_Attack_02_dynamicLoadout_F_OCimport_01 : O_Heli_Attack_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_Heli_Attack_02_dynamicLoadout_F_OCimport_02 : O_Heli_Attack_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

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

    class O_Soldier_AR_F;
    class O_Soldier_AR_F_OCimport_01 : O_Soldier_AR_F { scope = 0; class EventHandlers; };
    class O_Soldier_AR_F_OCimport_02 : O_Soldier_AR_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_GL_F;
    class O_Soldier_GL_F_OCimport_01 : O_Soldier_GL_F { scope = 0; class EventHandlers; };
    class O_Soldier_GL_F_OCimport_02 : O_Soldier_GL_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_LAT_F;
    class O_Soldier_LAT_F_OCimport_01 : O_Soldier_LAT_F { scope = 0; class EventHandlers; };
    class O_Soldier_LAT_F_OCimport_02 : O_Soldier_LAT_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_TL_F;
    class O_Soldier_TL_F_OCimport_01 : O_Soldier_TL_F { scope = 0; class EventHandlers; };
    class O_Soldier_TL_F_OCimport_02 : O_Soldier_TL_F_OCimport_01 { class EventHandlers; };

    class O_soldier_F;
    class O_soldier_F_OCimport_01 : O_soldier_F { scope = 0; class EventHandlers; };
    class O_soldier_F_OCimport_02 : O_soldier_F_OCimport_01 { class EventHandlers; };

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

    class O_Truck_02_box_F;
    class O_Truck_02_box_F_OCimport_01 : O_Truck_02_box_F { scope = 0; class EventHandlers; };
    class O_Truck_02_box_F_OCimport_02 : O_Truck_02_box_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_cargo_lxWS;
    class O_Truck_02_cargo_lxWS_OCimport_01 : O_Truck_02_cargo_lxWS { scope = 0; class EventHandlers; };
    class O_Truck_02_cargo_lxWS_OCimport_02 : O_Truck_02_cargo_lxWS_OCimport_01 { class EventHandlers; };

    class O_Truck_02_flatbed_lxWS;
    class O_Truck_02_flatbed_lxWS_OCimport_01 : O_Truck_02_flatbed_lxWS { scope = 0; class EventHandlers; };
    class O_Truck_02_flatbed_lxWS_OCimport_02 : O_Truck_02_flatbed_lxWS_OCimport_01 { class EventHandlers; };

    class O_Truck_02_fuel_F;
    class O_Truck_02_fuel_F_OCimport_01 : O_Truck_02_fuel_F { scope = 0; class EventHandlers; };
    class O_Truck_02_fuel_F_OCimport_02 : O_Truck_02_fuel_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_medical_F;
    class O_Truck_02_medical_F_OCimport_01 : O_Truck_02_medical_F { scope = 0; class EventHandlers; };
    class O_Truck_02_medical_F_OCimport_02 : O_Truck_02_medical_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_transport_F;
    class O_Truck_02_transport_F_OCimport_01 : O_Truck_02_transport_F { scope = 0; class EventHandlers; };
    class O_Truck_02_transport_F_OCimport_02 : O_Truck_02_transport_F_OCimport_01 { class EventHandlers; };

    class O_A_soldier_base_F;
    class O_A_soldier_base_F_OCimport_01 : O_A_soldier_base_F { scope = 0; class EventHandlers; };
    class O_A_soldier_base_F_OCimport_02 : O_A_soldier_base_F_OCimport_01 { class EventHandlers; };

    class O_crew_F;
    class O_crew_F_OCimport_01 : O_crew_F { scope = 0; class EventHandlers; };
    class O_crew_F_OCimport_02 : O_crew_F_OCimport_01 { class EventHandlers; };

    class O_helipilot_F;
    class O_helipilot_F_OCimport_01 : O_helipilot_F { scope = 0; class EventHandlers; };
    class O_helipilot_F_OCimport_02 : O_helipilot_F_OCimport_01 { class EventHandlers; };

    class O_medic_F;
    class O_medic_F_OCimport_01 : O_medic_F { scope = 0; class EventHandlers; };
    class O_medic_F_OCimport_02 : O_medic_F_OCimport_01 { class EventHandlers; };

    class O_officer_F;
    class O_officer_F_OCimport_01 : O_officer_F { scope = 0; class EventHandlers; };
    class O_officer_F_OCimport_02 : O_officer_F_OCimport_01 { class EventHandlers; };

    class AddGis_O_A_APC_Tracked_Type63_HMG : AddGis_APC_Tracked_Type63_HMG_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Type-63 Zhichi (HMG)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_O_A_APC_Tracked_Type63_Unarmed : AddGis_APC_Tracked_Type63_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Type-63 Zhichi (Unarmed)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_A_APC_Tracked_02_30mm_lxWS : O_APC_Tracked_02_30mm_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BM-2T Stalker (Bumerang-BM)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_A_APC_Wheeled_02_hmg_lxWS : APC_Wheeled_02_hmg_base_lxws_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar ARMA (HMG)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_A_APC_Wheeled_02_unarmed_lxWS : APC_Wheeled_02_unarmed_base_lxws_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar ARMA (Unarmed)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_A_APC_Wheeled_04_export_F : APC_Wheeled_04_export_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-100A Muharib";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_A_CommandoMortar_RF : O_CommandoMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RSG60";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_A_Heli_Attack_04_F : Aegis_Heli_Attack_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-35 Krokodil";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_A_Heli_EC_01A_military_RF : Heli_EC_01A_military_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "H215 Super Puma (Unarmed)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_A_Heli_EC_02_RF : Heli_EC_02_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "H225M Super Cougar SOCAT";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_A_Pickup_Comms_RF : O_Pickup_Comms_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Comms)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_A_Pickup_Fuel_RF : Pickup_fuel_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Fuel)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_A_Pickup_HMG_RF : Pickup_01_hmg_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (HMG)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_A_Pickup_MRL_RF : Pickup_01_mrl_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (MRL)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_A_Pickup_RF : O_Pickup_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_A_Truck_02_aa_F : Truck_02_aa_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ (Zu-23-2)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_A_ZU23_lxWS_F : zu23_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zu-23-2";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_A_support_CMort_RF : O_A_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer","G_IRAN_african"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        backpack = "O_CommandoMortar_weapon_RF";

        linkedItems[] = {"V_BandollierB_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_aco_flash_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_aco_flash_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_APC_Tracked_02_cannon_F : O_APC_Tracked_02_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BM-2T Stalker";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_APC_Wheeled_02_rcws_v2_F : APC_Wheeled_02_base_v2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSE-3 Marid";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Fighter_Pilot_F : O_A_helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter Pilot";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_default"};

        uniformClass = "U_O_PilotCoveralls";

        linkedItems[] = {"H_PilotHelmetFighter_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_PilotHelmetFighter_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"hgun_Rook40_F","Throw","Put"};

        magazines[] = {"17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_GMG_01_F : O_GMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_GMG_01_high_F : O_GMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307 (High)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_HMG_01_F : O_HMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_HMG_01_high_F : O_HMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312 (High)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_HMG_02_F : HMG_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_HMG_02_high_F : HMG_02_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_HeavyGunner_lxWS : O_A_Soldier_AR_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxws";

        linkedItems[] = {"V_HarnessO_brn","lxWS_H_ssh40_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_brn","lxWS_H_ssh40_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"LMG_S77_Hex_ARCO_lxWS","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"LMG_S77_Hex_ARCO_lxWS","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_Tracer_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_lxWS","100Rnd_762x51_S77_Green_Tracer_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Heli_Attack_02_dynamicLoadout_F : O_Heli_Attack_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-48 Kajman";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Heli_Light_02_dynamicLoadout_F : O_Heli_Light_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Heli_Light_02_unarmed_F : O_Heli_Light_02_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka (unarmed)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_LSV_02_AT_F : LSV_02_AT_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LSV Mk. II (Metis-M)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_LSV_02_armed_F : LSV_02_armed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LSV Mk. II (M134)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_LSV_02_unarmed_F : LSV_02_unarmed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LSV Mk. II";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_MBT_02_cannon_F : O_MBT_02_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "T100 Black Eagle";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Mortar_01_F : O_Mortar_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "O_A_Mortar_01_F";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Plane_Fighter_03_dynamicLoadout_F : O_Plane_Fighter_03_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "A-143 Buzzard";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Quadbike_01_F : Quadbike_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_RadioOperator_F : O_A_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer","G_IRAN_african"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        backpack = "B_RadioBag_01_hex_F";

        linkedItems[] = {"V_ChestrigF_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_flash_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_flash_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Soldier_AR_lxWS : O_Soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxws";

        linkedItems[] = {"V_HarnessO_brn","lxWS_H_ssh40_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_brn","lxWS_H_ssh40_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"LMG_Zafir_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Zafir_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Soldier_GL_lxWS : O_Soldier_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxws";

        linkedItems[] = {"V_Chestrig_khk","lxWS_H_ssh40_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_khk","lxWS_H_ssh40_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SLR_V_GL_lxWS","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SLR_V_GL_lxWS","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Soldier_LAT_lxWS : O_Soldier_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxws";

        backpack = "B_FieldPack_cbr_LAT";

        linkedItems[] = {"V_Chestrig_khk","lxWS_H_ssh40_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_khk","lxWS_H_ssh40_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_VelkoR5_lxWS","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_VelkoR5_lxWS","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Soldier_TL_lxWS : O_Soldier_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxws";

        linkedItems[] = {"V_Chestrig_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SLR_V_ACO_lxWS","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SLR_V_ACO_lxWS","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShellYellow","SmokeShellYellow","Chemlight_yellow","Chemlight_yellow"};
        respawnMagazines[] = {"30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShellYellow","SmokeShellYellow","Chemlight_yellow","Chemlight_yellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Soldier_lxWS : O_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxws";

        linkedItems[] = {"V_Chestrig_khk","lxWS_H_ssh40_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_khk","lxWS_H_ssh40_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SLR_V_ACO_lxWS","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SLR_V_ACO_lxWS","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","30Rnd_762x51_slr_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Static_AA_F : O_static_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AA)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Static_AT_F : O_static_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AT)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Truck_02_Ammo_F : O_Truck_02_Ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Ammo";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Truck_02_F : O_Truck_02_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport (covered)";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Truck_02_box_F : O_Truck_02_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Repair";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Truck_02_cargo_F : O_Truck_02_cargo_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Cargo";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Truck_02_flatbed_F : O_Truck_02_flatbed_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Flatbed";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Truck_02_fuel_F : O_Truck_02_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Fuel";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Truck_02_medical_F : O_Truck_02_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Medical";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_Truck_02_transport_F : O_Truck_02_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport";
        side = 0;
        faction = "opf_a_f";
        crew = "O_A_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_crew_F : O_A_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer","G_IRAN_african"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        linkedItems[] = {"V_BandollierB_khk","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_khk","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_PDW2000_F","Throw","Put"};
        respawnWeapons[] = {"hgun_PDW2000_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell"};
        respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_crew_lxWS : O_crew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer"};

        uniformClass = "U_O_CombatUniform_ocamo";

        linkedItems[] = {"V_BandollierB_khk","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_khk","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_VelkoR5_lxWS","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_VelkoR5_lxWS","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_engineer_F : O_A_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer","G_IRAN_african"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        backpack = "B_AssaultPack_ocamo_Eng_F";

        linkedItems[] = {"V_BandollierB_khk","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_khk","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_flash_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_flash_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_helicrew_F : O_A_helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_default"};

        uniformClass = "U_O_officer_noInsignia_hex_F";

        linkedItems[] = {"V_TacVest_khk","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

        weapons[] = {"arifle_CTAR_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_helipilot_F : O_helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_default"};

        uniformClass = "U_O_officer_noInsignia_hex_F";

        linkedItems[] = {"V_TacVest_khk","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_hex_F"};

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

    class O_A_medic_F : O_A_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer","G_IRAN_african"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        backpack = "B_AssaultPack_ocamo_Medic_F";

        linkedItems[] = {"V_BandollierB_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_flash_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_flash_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_medic_lxWS : O_medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxws";

        backpack = "B_FieldPack_ocamo_Medic";

        linkedItems[] = {"V_TacVest_khk","lxWS_H_ssh40_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","lxWS_H_ssh40_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_VelkoR5_lxWS","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_VelkoR5_lxWS","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","35Rnd_556x45_Velko_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_officer_F : O_A_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer","G_IRAN_african"};

        uniformClass = "U_O_Officer_noInsignia_hex_F";

        linkedItems[] = {"V_Rangemaster_belt_khk","H_Beret_CSAT_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Rangemaster_belt_khk","H_Beret_CSAT_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_PDW2000_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"hgun_PDW2000_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_officer_lxWS : O_officer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer"};

        uniformClass = "U_O_OfficerUniform_ocamo";

        linkedItems[] = {"V_BandollierB_khk","H_Beret_CSAT_01_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_khk","H_Beret_CSAT_01_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SLR_V_lxWS","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SLR_V_lxWS","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};

        magazines[] = {"20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_scout_RF : O_A_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pathfinder";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer","G_IRAN_african"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        linkedItems[] = {"V_TacVest_rig_khk_RF","H_HelmetB_plain_sb_hex_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_rig_khk_RF","H_HelmetB_plain_sb_hex_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_ash12_blk_snd_RF","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_ash12_blk_snd_RF","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShellYellow","SmokeShellYellow","Chemlight_yellow","Chemlight_yellow"};
        respawnMagazines[] = {"20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","20Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","10Rnd_127x55_Mag_RF","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShellYellow","SmokeShellYellow","Chemlight_yellow","Chemlight_yellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_soldier_AA_F : O_A_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer","G_IRAN_african"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        backpack = "B_TacticalPack_ocamo_AA_F";

        linkedItems[] = {"V_BandollierB_khk","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_khk","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_flash_F","launch_O_Titan_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_flash_F","launch_O_Titan_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","Titan_AA","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","Titan_AA","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_soldier_AR_F : O_A_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer","G_IRAN_african"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        linkedItems[] = {"V_ChestrigF_khk","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_khk","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTARS_blk_flash_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTARS_blk_flash_F","Throw","Put"};

        magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","HandGrenade_Guer","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","HandGrenade_Guer","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_soldier_AT_F : O_A_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer","G_IRAN_african"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        backpack = "B_TacticalPack_ocamo_AT_F";

        linkedItems[] = {"V_BandollierB_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_flash_F","launch_O_Titan_short_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_flash_F","launch_O_Titan_short_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","Titan_AT","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","Titan_AT","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_soldier_A_F : O_A_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer","G_IRAN_african"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        backpack = "B_FieldPack_cbr_Ammo_F";

        linkedItems[] = {"V_BandollierB_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_flash_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_flash_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_soldier_F : O_A_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer","G_IRAN_african"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        linkedItems[] = {"V_ChestrigF_khk","H_PASGT_basic_sand_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_khk","H_PASGT_basic_sand_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_aco_flash_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_aco_flash_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_soldier_GL_F : O_A_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer","G_IRAN_african"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        linkedItems[] = {"V_ChestrigF_khk","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_ChestrigF_khk","H_Cap_brn_SPECOPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_GL_blk_aco_flash_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_GL_blk_aco_flash_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_soldier_LAT_F : O_A_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer","G_IRAN_african"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        backpack = "B_FieldPack_ocamo_LAT_F";

        linkedItems[] = {"V_BandollierB_khk","H_PASGT_basic_sand_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_khk","H_PASGT_basic_sand_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_aco_flash_F","launch_RPG32_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_aco_flash_F","launch_RPG32_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","RPG32_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","RPG32_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_soldier_M_F : O_A_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer","G_IRAN_african"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        linkedItems[] = {"V_BandollierB_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_khk","H_MilCap_ocamo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_DMR_07_blk_F_arco_flash_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"srifle_DMR_07_blk_F_arco_flash_F","Throw","Put","Binocular"};

        magazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_soldier_SL_F : O_A_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer","G_IRAN_african"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        linkedItems[] = {"V_Chestrig_khk","H_PASGT_basic_sand_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_khk","H_PASGT_basic_sand_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_arco_flash_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_CTAR_blk_arco_flash_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_A_soldier_TL_F : O_A_soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "opf_a_f";

        identityTypes[] = {"LanguageFRE_F","Head_TK","Head_African","lxWS_Head_African","G_IRAN_officer","G_IRAN_african"};

        uniformClass = "U_O_LCF_noInsignia_hex_lxWS";

        linkedItems[] = {"V_Chestrig_khk","H_PASGT_basic_sand_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_khk","H_PASGT_basic_sand_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_GL_blk_arco_flash_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_CTAR_GL_blk_arco_flash_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_Guer","HandGrenade_Guer","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};


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
        class OPF_A_F {
            class Armored {
                class O_A_TankPlatoon {
                    name = "Tank Platoon";
                    side = 0;
                    faction = "OPF_A_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_A_MBT_02_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_A_MBT_02_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "O_A_MBT_02_cannon_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "O_A_MBT_02_cannon_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class O_A_TankSection {
                    name = "Tank Section";
                    side = 0;
                    faction = "OPF_A_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_A_MBT_02_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_A_MBT_02_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class O_A_ConscriptSquad {
                    name = "Conscript Squad";
                    side = 0;
                    faction = "OPF_A_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_A_officer_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_A_Soldier_GL_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_A_Soldier_LAT_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_A_Soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_A_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_A_Soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_A_Soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_A_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class O_A_ConscriptTeam {
                    name = "Conscript Team";
                    side = 0;
                    faction = "OPF_A_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_A_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_A_Soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_A_Soldier_GL_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_A_Soldier_LAT_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_A_InfSentry {
                    name = "Sentry";
                    side = 0;
                    faction = "OPF_A_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_A_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_A_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class O_A_InfSquad {
                    name = "Rifle Squad";
                    side = 0;
                    faction = "OPF_A_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_A_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_A_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_A_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_A_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_A_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_A_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_A_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_A_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class O_A_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 0;
                    faction = "OPF_A_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_A_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_A_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_A_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_A_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_A_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_A_soldier_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_A_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_A_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class O_A_InfTeam {
                    name = "Fire Team";
                    side = 0;
                    faction = "OPF_A_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_A_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_A_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_A_soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_A_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_A_InfTeam_AA {
                    name = "Air-defense Team";
                    side = 0;
                    faction = "OPF_A_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_A_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_A_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_A_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_A_soldier_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_A_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 0;
                    faction = "OPF_A_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_A_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_A_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_A_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_A_soldier_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class O_A_MechConSquad_A {
                    name = "Mechanized Conscript Squad (Marid)";
                    side = 0;
                    faction = "OPF_A_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_O_A_APC_Wheeled_02_hmg_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_A_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_A_Soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_A_Soldier_LAT_lxWS";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_A_HeavyGunner_lxWS";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_A_soldier_GL_lxWS";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_A_soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_A_soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_A_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class O_A_MechConSquad_B {
                    name = "Mechanized Conscript Squad (BTR-100A)";
                    side = 0;
                    faction = "OPF_A_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Aegis_O_A_APC_Wheeled_04_export_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_A_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_A_Soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_A_Soldier_LAT_lxWS";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_A_HeavyGunner_lxWS";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_A_soldier_GL_lxWS";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_A_soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_A_soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_A_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class O_A_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 0;
                    faction = "OPF_A_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "O_A_APC_Wheeled_02_rcws_v2_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_A_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_A_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_A_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_A_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_A_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_A_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_A_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_A_medic_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class O_A_MechInf_AA {
                    name = "Mechanized Air-defense Squad";
                    side = 0;
                    faction = "OPF_A_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "O_A_APC_Tracked_02_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_A_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_A_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_A_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_A_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_A_soldier_AA_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_A_soldier_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_A_soldier_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_A_soldier_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class O_A_MechInf_AT {
                    name = "Mechanized Anti-armor Squad";
                    side = 0;
                    faction = "OPF_A_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "O_A_APC_Tracked_02_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_A_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_A_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_A_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_A_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_A_soldier_AT_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_A_soldier_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_A_soldier_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_A_soldier_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized {
                class O_A_MotInf_AA {
                    name = "Motorized Air-defense Team";
                    side = 0;
                    faction = "OPF_A_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_A_LSV_02_unarmed_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_A_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_A_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_A_soldier_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class O_A_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 0;
                    faction = "OPF_A_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_A_LSV_02_unarmed_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_A_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_A_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_A_soldier_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class O_A_MotInf_Reinforcements {
                    name = "Motorized Reinforcements";
                    side = 0;
                    faction = "OPF_A_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_A_Truck_02_transport_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_A_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_A_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "O_A_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "O_A_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "O_A_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "O_A_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "O_A_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "O_A_medic_F";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "O_A_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "O_A_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "O_A_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "O_A_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit13 {
                        vehicle = "O_A_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit14 {
                        vehicle = "O_A_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit15 {
                        vehicle = "O_A_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit16 {
                        vehicle = "O_A_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };
                };
                class O_A_MotInf_Team {
                    name = "Motorized Team";
                    side = 0;
                    faction = "OPF_A_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_A_LSV_02_armed_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_A_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_A_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
        };
    };
};
