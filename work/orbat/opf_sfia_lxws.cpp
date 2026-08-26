//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class OPF_SFIA_lxWS {
        displayName = "SFIA";
        side = 0;
        priority = 3;
        icon = "\lxws\data_f_lxws\img\ui\cfgFactionClasses_SFIA_ca.paa";
        flag = "\lxws\data_f_lxws\img\Flags\flag_SFIA_CO.paa";
    };
};

class CfgVehicles {

    class AddGis_APC_Tracked_Type63_HMG_base;
    class AddGis_APC_Tracked_Type63_HMG_base_OCimport_01 : AddGis_APC_Tracked_Type63_HMG_base { scope = 0; class EventHandlers; };
    class AddGis_APC_Tracked_Type63_HMG_base_OCimport_02 : AddGis_APC_Tracked_Type63_HMG_base_OCimport_01 { class EventHandlers; };

    class AddGis_APC_Tracked_Type63_base;
    class AddGis_APC_Tracked_Type63_base_OCimport_01 : AddGis_APC_Tracked_Type63_base { scope = 0; class EventHandlers; };
    class AddGis_APC_Tracked_Type63_base_OCimport_02 : AddGis_APC_Tracked_Type63_base_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_04_base_v2_F;
    class APC_Wheeled_04_base_v2_F_OCimport_01 : APC_Wheeled_04_base_v2_F { scope = 0; class EventHandlers; };
    class APC_Wheeled_04_base_v2_F_OCimport_02 : APC_Wheeled_04_base_v2_F_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_04_export_base_F;
    class APC_Wheeled_04_export_base_F_OCimport_01 : APC_Wheeled_04_export_base_F { scope = 0; class EventHandlers; };
    class APC_Wheeled_04_export_base_F_OCimport_02 : APC_Wheeled_04_export_base_F_OCimport_01 { class EventHandlers; };

    class O_CommandoMortar_RF;
    class O_CommandoMortar_RF_OCimport_01 : O_CommandoMortar_RF { scope = 0; class EventHandlers; };
    class O_CommandoMortar_RF_OCimport_02 : O_CommandoMortar_RF_OCimport_01 { class EventHandlers; };

    class Aegis_I_SFIA_EC_01A_Military_RF;
    class Aegis_I_SFIA_EC_01A_Military_RF_OCimport_01 : Aegis_I_SFIA_EC_01A_Military_RF { scope = 0; class EventHandlers; };
    class Aegis_I_SFIA_EC_01A_Military_RF_OCimport_02 : Aegis_I_SFIA_EC_01A_Military_RF_OCimport_01 { class EventHandlers; };

    class Aegis_Heli_Attack_04_base_F;
    class Aegis_Heli_Attack_04_base_F_OCimport_01 : Aegis_Heli_Attack_04_base_F { scope = 0; class EventHandlers; };
    class Aegis_Heli_Attack_04_base_F_OCimport_02 : Aegis_Heli_Attack_04_base_F_OCimport_01 { class EventHandlers; };

    class O_SFIA_soldier_lite_lxWS;
    class O_SFIA_soldier_lite_lxWS_OCimport_01 : O_SFIA_soldier_lite_lxWS { scope = 0; class EventHandlers; };
    class O_SFIA_soldier_lite_lxWS_OCimport_02 : O_SFIA_soldier_lite_lxWS_OCimport_01 { class EventHandlers; };

    class EF_Gyra_Antiair_Base;
    class EF_Gyra_Antiair_Base_OCimport_01 : EF_Gyra_Antiair_Base { scope = 0; class EventHandlers; };
    class EF_Gyra_Antiair_Base_OCimport_02 : EF_Gyra_Antiair_Base_OCimport_01 { class EventHandlers; };

    class EF_Gyra_Armed_Base;
    class EF_Gyra_Armed_Base_OCimport_01 : EF_Gyra_Armed_Base { scope = 0; class EventHandlers; };
    class EF_Gyra_Armed_Base_OCimport_02 : EF_Gyra_Armed_Base_OCimport_01 { class EventHandlers; };

    class EF_Gyra_HMG_Base;
    class EF_Gyra_HMG_Base_OCimport_01 : EF_Gyra_HMG_Base { scope = 0; class EventHandlers; };
    class EF_Gyra_HMG_Base_OCimport_02 : EF_Gyra_HMG_Base_OCimport_01 { class EventHandlers; };

    class EF_Gyra_Mortar_Base;
    class EF_Gyra_Mortar_Base_OCimport_01 : EF_Gyra_Mortar_Base { scope = 0; class EventHandlers; };
    class EF_Gyra_Mortar_Base_OCimport_02 : EF_Gyra_Mortar_Base_OCimport_01 { class EventHandlers; };

    class EF_Gyra_Unarmed_Base;
    class EF_Gyra_Unarmed_Base_OCimport_01 : EF_Gyra_Unarmed_Base { scope = 0; class EventHandlers; };
    class EF_Gyra_Unarmed_Base_OCimport_02 : EF_Gyra_Unarmed_Base_OCimport_01 { class EventHandlers; };

    class I_SFIA_APC_Tracked_02_30mm_lxWS;
    class I_SFIA_APC_Tracked_02_30mm_lxWS_OCimport_01 : I_SFIA_APC_Tracked_02_30mm_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_APC_Tracked_02_30mm_lxWS_OCimport_02 : I_SFIA_APC_Tracked_02_30mm_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_APC_Tracked_02_AA_lxWS;
    class I_SFIA_APC_Tracked_02_AA_lxWS_OCimport_01 : I_SFIA_APC_Tracked_02_AA_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_APC_Tracked_02_AA_lxWS_OCimport_02 : I_SFIA_APC_Tracked_02_AA_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_APC_Tracked_02_cannon_lxWS;
    class I_SFIA_APC_Tracked_02_cannon_lxWS_OCimport_01 : I_SFIA_APC_Tracked_02_cannon_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_APC_Tracked_02_cannon_lxWS_OCimport_02 : I_SFIA_APC_Tracked_02_cannon_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_APC_Wheeled_02_hmg_lxWS;
    class I_SFIA_APC_Wheeled_02_hmg_lxWS_OCimport_01 : I_SFIA_APC_Wheeled_02_hmg_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_APC_Wheeled_02_hmg_lxWS_OCimport_02 : I_SFIA_APC_Wheeled_02_hmg_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_APC_Wheeled_02_unarmed_lxWS;
    class I_SFIA_APC_Wheeled_02_unarmed_lxWS_OCimport_01 : I_SFIA_APC_Wheeled_02_unarmed_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_APC_Wheeled_02_unarmed_lxWS_OCimport_02 : I_SFIA_APC_Wheeled_02_unarmed_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_HMG_02_high_lxWS;
    class I_SFIA_HMG_02_high_lxWS_OCimport_01 : I_SFIA_HMG_02_high_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_HMG_02_high_lxWS_OCimport_02 : I_SFIA_HMG_02_high_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_HMG_02_lxWS;
    class I_SFIA_HMG_02_lxWS_OCimport_01 : I_SFIA_HMG_02_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_HMG_02_lxWS_OCimport_02 : I_SFIA_HMG_02_lxWS_OCimport_01 { class EventHandlers; };

    class O_SFIA_Soldier_AR_lxWS;
    class O_SFIA_Soldier_AR_lxWS_OCimport_01 : O_SFIA_Soldier_AR_lxWS { scope = 0; class EventHandlers; };
    class O_SFIA_Soldier_AR_lxWS_OCimport_02 : O_SFIA_Soldier_AR_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Heli_Attack_02_dynamicLoadout_lxWS;
    class I_SFIA_Heli_Attack_02_dynamicLoadout_lxWS_OCimport_01 : I_SFIA_Heli_Attack_02_dynamicLoadout_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_Heli_Attack_02_dynamicLoadout_lxWS_OCimport_02 : I_SFIA_Heli_Attack_02_dynamicLoadout_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Heli_EC_02_RF;
    class I_SFIA_Heli_EC_02_RF_OCimport_01 : I_SFIA_Heli_EC_02_RF { scope = 0; class EventHandlers; };
    class I_SFIA_Heli_EC_02_RF_OCimport_02 : I_SFIA_Heli_EC_02_RF_OCimport_01 { class EventHandlers; };

    class I_SFIA_MBT_02_cannon_lxWS;
    class I_SFIA_MBT_02_cannon_lxWS_OCimport_01 : I_SFIA_MBT_02_cannon_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_MBT_02_cannon_lxWS_OCimport_02 : I_SFIA_MBT_02_cannon_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Mortar_lxWS;
    class I_SFIA_Mortar_lxWS_OCimport_01 : I_SFIA_Mortar_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_Mortar_lxWS_OCimport_02 : I_SFIA_Mortar_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Offroad_AT_lxWS;
    class I_SFIA_Offroad_AT_lxWS_OCimport_01 : I_SFIA_Offroad_AT_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_Offroad_AT_lxWS_OCimport_02 : I_SFIA_Offroad_AT_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Offroad_armed_lxWS;
    class I_SFIA_Offroad_armed_lxWS_OCimport_01 : I_SFIA_Offroad_armed_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_Offroad_armed_lxWS_OCimport_02 : I_SFIA_Offroad_armed_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Offroad_lxWS;
    class I_SFIA_Offroad_lxWS_OCimport_01 : I_SFIA_Offroad_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_Offroad_lxWS_OCimport_02 : I_SFIA_Offroad_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Soldier_AAA_lxWS;
    class I_SFIA_Soldier_AAA_lxWS_OCimport_01 : I_SFIA_Soldier_AAA_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_Soldier_AAA_lxWS_OCimport_02 : I_SFIA_Soldier_AAA_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Soldier_AAT_lxWS;
    class I_SFIA_Soldier_AAT_lxWS_OCimport_01 : I_SFIA_Soldier_AAT_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_Soldier_AAT_lxWS_OCimport_02 : I_SFIA_Soldier_AAT_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Soldier_AR_lxWS;
    class I_SFIA_Soldier_AR_lxWS_OCimport_01 : I_SFIA_Soldier_AR_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_Soldier_AR_lxWS_OCimport_02 : I_SFIA_Soldier_AR_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Soldier_GL_lxWS;
    class I_SFIA_Soldier_GL_lxWS_OCimport_01 : I_SFIA_Soldier_GL_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_Soldier_GL_lxWS_OCimport_02 : I_SFIA_Soldier_GL_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Soldier_TL_lxWS;
    class I_SFIA_Soldier_TL_lxWS_OCimport_01 : I_SFIA_Soldier_TL_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_Soldier_TL_lxWS_OCimport_02 : I_SFIA_Soldier_TL_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Truck_02_Ammo_lxWS;
    class I_SFIA_Truck_02_Ammo_lxWS_OCimport_01 : I_SFIA_Truck_02_Ammo_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_Truck_02_Ammo_lxWS_OCimport_02 : I_SFIA_Truck_02_Ammo_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Truck_02_MRL_lxWS;
    class I_SFIA_Truck_02_MRL_lxWS_OCimport_01 : I_SFIA_Truck_02_MRL_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_Truck_02_MRL_lxWS_OCimport_02 : I_SFIA_Truck_02_MRL_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Truck_02_aa_lxWS;
    class I_SFIA_Truck_02_aa_lxWS_OCimport_01 : I_SFIA_Truck_02_aa_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_Truck_02_aa_lxWS_OCimport_02 : I_SFIA_Truck_02_aa_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Truck_02_box_lxWS;
    class I_SFIA_Truck_02_box_lxWS_OCimport_01 : I_SFIA_Truck_02_box_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_Truck_02_box_lxWS_OCimport_02 : I_SFIA_Truck_02_box_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Truck_02_cargo_lxWS;
    class I_SFIA_Truck_02_cargo_lxWS_OCimport_01 : I_SFIA_Truck_02_cargo_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_Truck_02_cargo_lxWS_OCimport_02 : I_SFIA_Truck_02_cargo_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Truck_02_covered_lxWS;
    class I_SFIA_Truck_02_covered_lxWS_OCimport_01 : I_SFIA_Truck_02_covered_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_Truck_02_covered_lxWS_OCimport_02 : I_SFIA_Truck_02_covered_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Truck_02_flatbed_lxWS;
    class I_SFIA_Truck_02_flatbed_lxWS_OCimport_01 : I_SFIA_Truck_02_flatbed_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_Truck_02_flatbed_lxWS_OCimport_02 : I_SFIA_Truck_02_flatbed_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Truck_02_fuel_lxWS;
    class I_SFIA_Truck_02_fuel_lxWS_OCimport_01 : I_SFIA_Truck_02_fuel_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_Truck_02_fuel_lxWS_OCimport_02 : I_SFIA_Truck_02_fuel_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_Truck_02_transport_lxWS;
    class I_SFIA_Truck_02_transport_lxWS_OCimport_01 : I_SFIA_Truck_02_transport_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_Truck_02_transport_lxWS_OCimport_02 : I_SFIA_Truck_02_transport_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_ZU23_lxWS;
    class I_SFIA_ZU23_lxWS_OCimport_01 : I_SFIA_ZU23_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_ZU23_lxWS_OCimport_02 : I_SFIA_ZU23_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_crew_lxWS;
    class I_SFIA_crew_lxWS_OCimport_01 : I_SFIA_crew_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_crew_lxWS_OCimport_02 : I_SFIA_crew_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_exp_lxWS;
    class I_SFIA_exp_lxWS_OCimport_01 : I_SFIA_exp_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_exp_lxWS_OCimport_02 : I_SFIA_exp_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_medic_lxWS;
    class I_SFIA_medic_lxWS_OCimport_01 : I_SFIA_medic_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_medic_lxWS_OCimport_02 : I_SFIA_medic_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_officer_lxWS;
    class I_SFIA_officer_lxWS_OCimport_01 : I_SFIA_officer_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_officer_lxWS_OCimport_02 : I_SFIA_officer_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_pilot_lxWS;
    class I_SFIA_pilot_lxWS_OCimport_01 : I_SFIA_pilot_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_pilot_lxWS_OCimport_02 : I_SFIA_pilot_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_repair_lxWS;
    class I_SFIA_repair_lxWS_OCimport_01 : I_SFIA_repair_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_repair_lxWS_OCimport_02 : I_SFIA_repair_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_sharpshooter_lxWS;
    class I_SFIA_sharpshooter_lxWS_OCimport_01 : I_SFIA_sharpshooter_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_sharpshooter_lxWS_OCimport_02 : I_SFIA_sharpshooter_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_soldier_aa_lxWS;
    class I_SFIA_soldier_aa_lxWS_OCimport_01 : I_SFIA_soldier_aa_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_soldier_aa_lxWS_OCimport_02 : I_SFIA_soldier_aa_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_soldier_at_lxWS;
    class I_SFIA_soldier_at_lxWS_OCimport_01 : I_SFIA_soldier_at_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_soldier_at_lxWS_OCimport_02 : I_SFIA_soldier_at_lxWS_OCimport_01 { class EventHandlers; };

    class O_SFIA_soldier_lxWS;
    class O_SFIA_soldier_lxWS_OCimport_01 : O_SFIA_soldier_lxWS { scope = 0; class EventHandlers; };
    class O_SFIA_soldier_lxWS_OCimport_02 : O_SFIA_soldier_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_soldier_lxWS;
    class I_SFIA_soldier_lxWS_OCimport_01 : I_SFIA_soldier_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_soldier_lxWS_OCimport_02 : I_SFIA_soldier_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_soldier_unarmed_lxWS;
    class I_SFIA_soldier_unarmed_lxWS_OCimport_01 : I_SFIA_soldier_unarmed_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_soldier_unarmed_lxWS_OCimport_02 : I_SFIA_soldier_unarmed_lxWS_OCimport_01 { class EventHandlers; };

    class I_SFIA_survivor_lxWS;
    class I_SFIA_survivor_lxWS_OCimport_01 : I_SFIA_survivor_lxWS { scope = 0; class EventHandlers; };
    class I_SFIA_survivor_lxWS_OCimport_02 : I_SFIA_survivor_lxWS_OCimport_01 { class EventHandlers; };

    class AddGis_O_SFIA_APC_Tracked_Type63_HMG : AddGis_APC_Tracked_Type63_HMG_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Type-63 Zhichi (HMG)";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class AddGis_O_SFIA_APC_Tracked_Type63_Unarmed : AddGis_APC_Tracked_Type63_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Type-63 Zhichi (Unarmed)";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_SFIA_APC_Wheeled_04_cannon_v2_F : APC_Wheeled_04_base_v2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "2S90M Almiraj";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_SFIA_APC_Wheeled_04_export_F : APC_Wheeled_04_export_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-100A Muharib";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_SFIA_CommandoMortar_RF : O_CommandoMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RSG60";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_SFIA_EC_01A_Military_RF : Aegis_I_SFIA_EC_01A_Military_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "H215 Super Puma (Unarmed)";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_pilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_SFIA_Heli_Attack_04_F : Aegis_Heli_Attack_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-35 Krokodil";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_pilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_SFIA_support_CMort_RF : O_SFIA_soldier_lite_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_soldier_1_O";

        backpack = "O_CommandoMortar_weapon_RF";

        linkedItems[] = {"V_TacVest_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Bandanna_khk"};
        respawnlinkedItems[] = {"V_TacVest_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Bandanna_khk"};

        weapons[] = {"arifle_Galat_lxWS","Throw","Put"};
        respawnWeapons[] = {"arifle_Galat_lxWS","Throw","Put"};

        magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_Gyra_Antiair_SFIA : EF_Gyra_Antiair_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra AA";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_Gyra_Armed_SFIA : EF_Gyra_Armed_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra IFV";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_Gyra_HMG_SFIA : EF_Gyra_HMG_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra HMG";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_Gyra_Mortar_SFIA : EF_Gyra_Mortar_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra Mortar";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_Gyra_SFIA : EF_Gyra_Unarmed_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_APC_Tracked_02_30mm_lxWS : I_SFIA_APC_Tracked_02_30mm_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BM-2T Stalker (Bumerang-BM)";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_APC_Tracked_02_AA_lxWS : I_SFIA_APC_Tracked_02_AA_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZSU-35 Tigris";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_APC_Tracked_02_cannon_lxWS : I_SFIA_APC_Tracked_02_cannon_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BM-2T Stalker";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_APC_Wheeled_02_hmg_lxWS : I_SFIA_APC_Wheeled_02_hmg_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar ARMA (HMG)";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_APC_Wheeled_02_unarmed_lxWS : I_SFIA_APC_Wheeled_02_unarmed_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar ARMA (Unarmed)";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_HMG_02_high_lxWS : I_SFIA_HMG_02_high_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_HMG_02_lxWS : I_SFIA_HMG_02_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_HeavyGunner_lxWS : O_SFIA_Soldier_AR_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_soldier_1_O";

        linkedItems[] = {"V_lxWS_HarnessO_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Bandanna_khk"};
        respawnlinkedItems[] = {"V_lxWS_HarnessO_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Bandanna_khk"};

        weapons[] = {"LMG_S77_ACO_lxWS","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"LMG_S77_ACO_lxWS","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_Tracer_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_lxWS","100Rnd_762x51_S77_Yellow_Tracer_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Heli_Attack_02_dynamicLoadout_lxWS : I_SFIA_Heli_Attack_02_dynamicLoadout_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-48 Kajman";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_pilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Heli_EC_02_RF : I_SFIA_Heli_EC_02_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "H225M Super Cougar SOCAT";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_pilot_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_MBT_02_cannon_lxWS : I_SFIA_MBT_02_cannon_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "T100 Black Eagle";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_crew_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Mortar_lxWS : I_SFIA_Mortar_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "O_SFIA_Mortar_lxWS";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Offroad_AT_lxWS : I_SFIA_Offroad_AT_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Desert, AT)";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Offroad_armed_lxWS : I_SFIA_Offroad_armed_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Desert, HMG)";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Offroad_lxWS : I_SFIA_Offroad_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Desert)";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Soldier_AAA_lxWS : I_SFIA_Soldier_AAA_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_soldier_1_O";

        backpack = "I_Carryall_oli_AAA";

        linkedItems[] = {"V_lxWS_HarnessO_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_HarnessO_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Galat_ACO_lxWS","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_Galat_ACO_lxWS","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Soldier_AAT_lxWS : I_SFIA_Soldier_AAT_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_soldier_1_O";

        backpack = "I_Carryall_oli_AAT_lxWS";

        linkedItems[] = {"V_lxWS_HarnessO_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_HarnessO_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Galat_ACO_lxWS","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_Galat_ACO_lxWS","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Soldier_AR_lxWS : I_SFIA_Soldier_AR_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_soldier_1_O";

        linkedItems[] = {"V_lxWS_HarnessO_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Bandanna_Oli"};
        respawnlinkedItems[] = {"V_lxWS_HarnessO_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Bandanna_Oli"};

        weapons[] = {"arifle_Galat_lxWS","Throw","Put"};
        respawnWeapons[] = {"arifle_Galat_lxWS","Throw","Put"};

        magazines[] = {"75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","75Rnd_762x39_Mag_F","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Soldier_GL_lxWS : I_SFIA_Soldier_GL_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_soldier_2_O";

        linkedItems[] = {"V_lxWS_TacVestIR_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_TacVestIR_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SLR_GL_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SLR_GL_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","MiniGrenade","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","MiniGrenade","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_40mm_HE_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_58mm_AT_lxWS","1Rnd_50mm_Smoke_lxWS","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Soldier_TL_lxWS : I_SFIA_Soldier_TL_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_soldier_2_O";

        linkedItems[] = {"V_lxWS_TacVestIR_oli","lxWS_H_ssh40_green","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_TacVestIR_oli","lxWS_H_ssh40_green","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SLR_ARCO_lxWS","hgun_P07_blk_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SLR_ARCO_lxWS","hgun_P07_blk_F","Throw","Put","Binocular"};

        magazines[] = {"20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Truck_02_Ammo_lxWS : I_SFIA_Truck_02_Ammo_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Ammo";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Truck_02_MRL_lxWS : I_SFIA_Truck_02_MRL_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ MRL";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Truck_02_aa_lxWS : I_SFIA_Truck_02_aa_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ (Zu-23-2)";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Truck_02_box_lxWS : I_SFIA_Truck_02_box_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Repair";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Truck_02_cargo_lxWS : I_SFIA_Truck_02_cargo_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Cargo";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Truck_02_covered_lxWS : I_SFIA_Truck_02_covered_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport (covered)";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Truck_02_flatbed_lxWS : I_SFIA_Truck_02_flatbed_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Flatbed";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Truck_02_fuel_lxWS : I_SFIA_Truck_02_fuel_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Fuel";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_Truck_02_transport_lxWS : I_SFIA_Truck_02_transport_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_ZU23_lxWS : I_SFIA_ZU23_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zu-23-2";
        side = 0;
        faction = "opf_sfia_lxws";
        crew = "O_SFIA_soldier_lxWS";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_crew_lxWS : I_SFIA_crew_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_Tanker_O";

        linkedItems[] = {"V_BandollierB_blk","lxWS_H_Tank_tan_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Lowprofile","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_BandollierB_blk","lxWS_H_Tank_tan_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Lowprofile","NVGoggles_OPFOR"};

        weapons[] = {"arifle_VelkoR5_lxWS","Throw","Put"};
        respawnWeapons[] = {"arifle_VelkoR5_lxWS","Throw","Put"};

        magazines[] = {"35Rnd_556x45_Velko_lxWS","35Rnd_556x45_Velko_lxWS","35Rnd_556x45_Velko_lxWS","35Rnd_556x45_Velko_lxWS","35Rnd_556x45_Velko_lxWS","35Rnd_556x45_Velko_lxWS","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"35Rnd_556x45_Velko_lxWS","35Rnd_556x45_Velko_lxWS","35Rnd_556x45_Velko_lxWS","35Rnd_556x45_Velko_lxWS","35Rnd_556x45_Velko_lxWS","35Rnd_556x45_Velko_lxWS","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_exp_lxWS : I_SFIA_exp_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_Officer_1_O";

        backpack = "G_Carryall_Exp";

        linkedItems[] = {"V_lxWS_HarnessO_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Bandanna_Oli"};
        respawnlinkedItems[] = {"V_lxWS_HarnessO_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Bandanna_Oli"};

        weapons[] = {"arifle_Galat_ACO_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Galat_ACO_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_medic_lxWS : I_SFIA_medic_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_soldier_2_O";

        backpack = "G_FieldPack_Medic";

        linkedItems[] = {"V_lxWS_HarnessO_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_HarnessO_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Galat_lxWS","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Galat_lxWS","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_officer_lxWS : I_SFIA_officer_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_Officer_1_O";

        linkedItems[] = {"V_BandollierB_oli","lxWS_H_turban_04_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_oli","lxWS_H_turban_04_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SLR_lxWS","hgun_P07_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SLR_lxWS","hgun_P07_blk_F","Throw","Put"};

        magazines[] = {"20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_pilot_lxWS : I_SFIA_pilot_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_pilot_O";

        linkedItems[] = {"V_BandollierB_oli","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_oli","H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"SMG_02_F","Throw","Put"};
        respawnWeapons[] = {"SMG_02_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_repair_lxWS : I_SFIA_repair_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_soldier_1_O";

        backpack = "I_AssaultPack_dgtl_Repair";

        linkedItems[] = {"V_lxWS_HarnessO_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_HarnessO_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Galat_ACO_lxWS","Throw","Put"};
        respawnWeapons[] = {"arifle_Galat_ACO_lxWS","Throw","Put"};

        magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_sharpshooter_lxWS : I_SFIA_sharpshooter_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_Officer_1_O";

        linkedItems[] = {"V_Chestrig_rgr","lxWS_H_turban_03_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_rgr","lxWS_H_turban_03_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SLR_KHS_old_lxWS","Throw","Put"};
        respawnWeapons[] = {"arifle_SLR_KHS_old_lxWS","Throw","Put"};

        magazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","20Rnd_762x51_slr_lxWS","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_soldier_aa_lxWS : I_SFIA_soldier_aa_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_soldier_2_O";

        backpack = "B_Kitbag_rgr_aa_1_lxWS";

        linkedItems[] = {"V_BandollierB_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Galat_lxWS","launch_B_Titan_olive_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Galat_lxWS","launch_B_Titan_olive_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_soldier_at_lxWS : I_SFIA_soldier_at_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_soldier_1_O";

        backpack = "B_Kitbag_rgr_at_1_lxWS";

        linkedItems[] = {"V_BandollierB_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Galat_lxWS","launch_RPG32_green_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Galat_lxWS","launch_RPG32_green_F","Throw","Put"};

        magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","RPG32_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","RPG32_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_soldier_lite_lxWS : O_SFIA_soldier_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_soldier_1_O";

        linkedItems[] = {"V_TacVest_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Bandanna_khk"};
        respawnlinkedItems[] = {"V_TacVest_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Bandanna_khk"};

        weapons[] = {"arifle_Galat_lxWS","Throw","Put"};
        respawnWeapons[] = {"arifle_Galat_lxWS","Throw","Put"};

        magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_F","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_soldier_lxWS : I_SFIA_soldier_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_soldier_1_O";

        linkedItems[] = {"V_lxWS_HarnessO_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_HarnessO_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SLR_lxWS","Throw","Put"};
        respawnWeapons[] = {"arifle_SLR_lxWS","Throw","Put"};

        magazines[] = {"20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
        respawnMagazines[] = {"20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","20Rnd_762x51_slr_reload_tracer_green_lxWS","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SFIA_soldier_unarmed_lxWS : I_SFIA_soldier_unarmed_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_soldier_1_O";

        linkedItems[] = {"V_lxWS_HarnessO_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_lxWS_HarnessO_oli","lxWS_H_ssh40_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class O_SFIA_survivor_lxWS : I_SFIA_survivor_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";
        side = 0;
        faction = "opf_sfia_lxws";

        identityTypes[] = {"LanguageFRE_F","Head_African","Head_TK","lxWS_Head_African"};

        uniformClass = "U_lxWS_SFIA_soldier_1_O";

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
    class East {
        class OPF_SFIA_lxWS {
            class Armored {
                class OSFIA_HAF_TankPlatoon_AA_lxWS {
                    name = "Tank Platoon (Combined)";
                    side = 0;
                    faction = "OPF_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_SFIA_MBT_02_cannon_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_SFIA_MBT_02_cannon_lxWS";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "O_SFIA_MBT_02_cannon_lxWS";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "O_SFIA_APC_Tracked_02_30mm_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,-15,0};
                    };

                    class Unit4 {
                        vehicle = "O_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,-20,0};
                    };

                    class Unit5 {
                        vehicle = "O_SFIA_soldier_aa_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-25,0};
                    };

                    class Unit6 {
                        vehicle = "O_SFIA_soldier_aa_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-25,0};
                    };

                    class Unit7 {
                        vehicle = "O_SFIA_soldier_aa_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-30,0};
                    };

                    class Unit8 {
                        vehicle = "O_SFIA_Soldier_AAA_lxWS";
                        rank = "PRIVATE";
                        position[] = {-10,-30,0};
                    };

                    class Unit9 {
                        vehicle = "O_SFIA_Soldier_AAA_lxWS";
                        rank = "PRIVATE";
                        position[] = {15,-35,0};
                    };

                    class Unit10 {
                        vehicle = "O_SFIA_Soldier_AAA_lxWS";
                        rank = "PRIVATE";
                        position[] = {-15,-35,0};
                    };
                };
                class OSFIA_HAF_TankPlatoon_lxWS {
                    name = "Tank Platoon";
                    side = 0;
                    faction = "OPF_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_SFIA_MBT_02_cannon_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_SFIA_MBT_02_cannon_lxWS";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "O_SFIA_MBT_02_cannon_lxWS";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "O_SFIA_MBT_02_cannon_lxWS";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class OSFIA_HAF_TankSection_lxWS {
                    name = "Tank Section";
                    side = 0;
                    faction = "OPF_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_SFIA_MBT_02_cannon_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_SFIA_MBT_02_cannon_lxWS";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class OSFIA_TankDestrSection_Nosorog {
                    name = "Tank Destroyer Section";
                    side = 0;
                    faction = "OPF_SFIA_lxWS";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";

                    class Unit0 {
                        vehicle = "Aegis_O_SFIA_APC_Wheeled_04_cannon_v2_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_O_SFIA_APC_Wheeled_04_cannon_v2_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class OSFIA_HAF_InfTeam_AA_lxWS {
                    name = "Air-defense Team";
                    side = 0;
                    faction = "OPF_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_SFIA_soldier_aa_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_SFIA_soldier_aa_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_SFIA_Soldier_AAA_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class OSFIA_HAF_InfTeam_AT_lxWS {
                    name = "Anti-armor Team";
                    side = 0;
                    faction = "OPF_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_SFIA_soldier_at_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_SFIA_soldier_at_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_SFIA_Soldier_AAT_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class OSFIA_InfSentry_lxWS {
                    name = "Sentry";
                    side = 0;
                    faction = "OPF_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_SFIA_Soldier_GL_lxWS";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_SFIA_soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class OSFIA_InfSquad_Weapons_lxWS {
                    name = "Weapons Squad";
                    side = 0;
                    faction = "OPF_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_SFIA_Soldier_AR_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_SFIA_Soldier_GL_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_SFIA_sharpshooter_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_SFIA_soldier_at_lxWS";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_SFIA_soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_SFIA_Soldier_AAT_lxWS";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_SFIA_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class OSFIA_InfSquad_lxWS {
                    name = "Rifle Squad";
                    side = 0;
                    faction = "OPF_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_SFIA_soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_SFIA_soldier_at_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_SFIA_sharpshooter_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_SFIA_soldier_lxWS";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_SFIA_Soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_SFIA_soldier_aa_lxWS";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_SFIA_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class OSFIA_InfTeam_lxWS {
                    name = "Fire Team";
                    side = 0;
                    faction = "OPF_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_SFIA_Soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_SFIA_Soldier_GL_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_SFIA_soldier_at_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class OSFIA_MechInf_AA {
                    name = "Mechanized Air-defense Squad";
                    side = 0;
                    faction = "OPF_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "O_SFIA_APC_Tracked_02_30mm_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_SFIA_Soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_SFIA_soldier_aa_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_SFIA_soldier_aa_lxWS";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_SFIA_soldier_aa_lxWS";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_SFIA_Soldier_AAA_lxWS";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_SFIA_Soldier_AAA_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_SFIA_Soldier_AAA_lxWS";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class OSFIA_MechInf_AT {
                    name = "Mechanized Anti-armor Squad";
                    side = 0;
                    faction = "OPF_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "O_SFIA_APC_Tracked_02_30mm_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_SFIA_Soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_SFIA_soldier_at_lxWS";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_SFIA_soldier_at_lxWS";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_SFIA_soldier_at_lxWS";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_SFIA_Soldier_AAT_lxWS";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_SFIA_Soldier_AAT_lxWS";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_SFIA_Soldier_AAT_lxWS";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized {
                class OSFIA_MotInf_AA_lxWS {
                    name = "Motorized Air-defense Team";
                    side = 0;
                    faction = "OPF_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_SFIA_Offroad_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_SFIA_soldier_aa_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_SFIA_soldier_aa_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class OSFIA_MotInf_AT_lxWS {
                    name = "Motorized Anti-armor Team";
                    side = 0;
                    faction = "OPF_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_SFIA_Offroad_AT_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_SFIA_soldier_at_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
                class OSFIA_MotInf_Reinforce_lxWS {
                    name = "Motorized Reinforcements";
                    side = 0;
                    faction = "OPF_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_SFIA_Truck_02_transport_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_SFIA_officer_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_SFIA_soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "O_SFIA_soldier_at_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "O_SFIA_sharpshooter_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "O_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "O_SFIA_Soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "O_SFIA_soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "O_SFIA_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "O_SFIA_officer_lxWS";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "O_SFIA_soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "O_SFIA_soldier_at_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "O_SFIA_sharpshooter_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit13 {
                        vehicle = "O_SFIA_Soldier_TL_lxWS";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit14 {
                        vehicle = "O_SFIA_Soldier_AR_lxWS";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit15 {
                        vehicle = "O_SFIA_soldier_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit16 {
                        vehicle = "O_SFIA_medic_lxWS";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };
                };
                class OSFIA_MotInf_Team_lxWS {
                    name = "Motorized Team";
                    side = 0;
                    faction = "OPF_SFIA_lxWS";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_SFIA_Offroad_armed_lxWS";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_SFIA_soldier_at_lxWS";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
            };
        };
    };
};
