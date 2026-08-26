//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class Atlas_IND_I_F {
        displayName = "Israel";
        side = 2;
        priority = 3;
        icon = "\A3_Atlas\Data_F_Atlas\FactionIcons\icon_IDF_CA.paa";
        flag = "\A3_Atlas\Data_F_Atlas\Flags\flag_IDF_CO.paa";
    };
};

class CfgVehicles {

    class O_MBT_02_cannon_F;
    class O_MBT_02_cannon_F_OCimport_01 : O_MBT_02_cannon_F { scope = 0; class EventHandlers; };
    class O_MBT_02_cannon_F_OCimport_02 : O_MBT_02_cannon_F_OCimport_01 { class EventHandlers; };

    class B_APC_Tracked_01_AA_F;
    class B_APC_Tracked_01_AA_F_OCimport_01 : B_APC_Tracked_01_AA_F { scope = 0; class EventHandlers; };
    class B_APC_Tracked_01_AA_F_OCimport_02 : B_APC_Tracked_01_AA_F_OCimport_01 { class EventHandlers; };

    class B_APC_Tracked_01_CRV_F;
    class B_APC_Tracked_01_CRV_F_OCimport_01 : B_APC_Tracked_01_CRV_F { scope = 0; class EventHandlers; };
    class B_APC_Tracked_01_CRV_F_OCimport_02 : B_APC_Tracked_01_CRV_F_OCimport_01 { class EventHandlers; };

    class B_APC_Tracked_01_rcws_F;
    class B_APC_Tracked_01_rcws_F_OCimport_01 : B_APC_Tracked_01_rcws_F { scope = 0; class EventHandlers; };
    class B_APC_Tracked_01_rcws_F_OCimport_02 : B_APC_Tracked_01_rcws_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_I_Soldier_Base_F;
    class Atlas_I_I_Soldier_Base_F_OCimport_01 : Atlas_I_I_Soldier_Base_F { scope = 0; class EventHandlers; };
    class Atlas_I_I_Soldier_Base_F_OCimport_02 : Atlas_I_I_Soldier_Base_F_OCimport_01 { class EventHandlers; };

    class I_GMG_01_A_F;
    class I_GMG_01_A_F_OCimport_01 : I_GMG_01_A_F { scope = 0; class EventHandlers; };
    class I_GMG_01_A_F_OCimport_02 : I_GMG_01_A_F_OCimport_01 { class EventHandlers; };

    class I_GMG_01_F;
    class I_GMG_01_F_OCimport_01 : I_GMG_01_F { scope = 0; class EventHandlers; };
    class I_GMG_01_F_OCimport_02 : I_GMG_01_F_OCimport_01 { class EventHandlers; };

    class I_GMG_01_high_F;
    class I_GMG_01_high_F_OCimport_01 : I_GMG_01_high_F { scope = 0; class EventHandlers; };
    class I_GMG_01_high_F_OCimport_02 : I_GMG_01_high_F_OCimport_01 { class EventHandlers; };

    class I_HMG_01_A_F;
    class I_HMG_01_A_F_OCimport_01 : I_HMG_01_A_F { scope = 0; class EventHandlers; };
    class I_HMG_01_A_F_OCimport_02 : I_HMG_01_A_F_OCimport_01 { class EventHandlers; };

    class I_HMG_01_F;
    class I_HMG_01_F_OCimport_01 : I_HMG_01_F { scope = 0; class EventHandlers; };
    class I_HMG_01_F_OCimport_02 : I_HMG_01_F_OCimport_01 { class EventHandlers; };

    class I_HMG_01_high_F;
    class I_HMG_01_high_F_OCimport_01 : I_HMG_01_high_F { scope = 0; class EventHandlers; };
    class I_HMG_01_high_F_OCimport_02 : I_HMG_01_high_F_OCimport_01 { class EventHandlers; };

    class HMG_02_base_F;
    class HMG_02_base_F_OCimport_01 : HMG_02_base_F { scope = 0; class EventHandlers; };
    class HMG_02_base_F_OCimport_02 : HMG_02_base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_high_base_F;
    class HMG_02_high_base_F_OCimport_01 : HMG_02_high_base_F { scope = 0; class EventHandlers; };
    class HMG_02_high_base_F_OCimport_02 : HMG_02_high_base_F_OCimport_01 { class EventHandlers; };

    class Heli_Attack_01_dynamicLoadout_base_F;
    class Heli_Attack_01_dynamicLoadout_base_F_OCimport_01 : Heli_Attack_01_dynamicLoadout_base_F { scope = 0; class EventHandlers; };
    class Heli_Attack_01_dynamicLoadout_base_F_OCimport_02 : Heli_Attack_01_dynamicLoadout_base_F_OCimport_01 { class EventHandlers; };

    class Heli_Light_01_unarmed_base_F;
    class Heli_Light_01_unarmed_base_F_OCimport_01 : Heli_Light_01_unarmed_base_F { scope = 0; class EventHandlers; };
    class Heli_Light_01_unarmed_base_F_OCimport_02 : Heli_Light_01_unarmed_base_F_OCimport_01 { class EventHandlers; };

    class Heli_Light_01_dynamicLoadout_base_F;
    class Heli_Light_01_dynamicLoadout_base_F_OCimport_01 : Heli_Light_01_dynamicLoadout_base_F { scope = 0; class EventHandlers; };
    class Heli_Light_01_dynamicLoadout_base_F_OCimport_02 : Heli_Light_01_dynamicLoadout_base_F_OCimport_01 { class EventHandlers; };

    class Heli_Transport_01_base_F;
    class Heli_Transport_01_base_F_OCimport_01 : Heli_Transport_01_base_F { scope = 0; class EventHandlers; };
    class Heli_Transport_01_base_F_OCimport_02 : Heli_Transport_01_base_F_OCimport_01 { class EventHandlers; };

    class B_MBT_01_arty_F;
    class B_MBT_01_arty_F_OCimport_01 : B_MBT_01_arty_F { scope = 0; class EventHandlers; };
    class B_MBT_01_arty_F_OCimport_02 : B_MBT_01_arty_F_OCimport_01 { class EventHandlers; };

    class B_MBT_01_cannon_F;
    class B_MBT_01_cannon_F_OCimport_01 : B_MBT_01_cannon_F { scope = 0; class EventHandlers; };
    class B_MBT_01_cannon_F_OCimport_02 : B_MBT_01_cannon_F_OCimport_01 { class EventHandlers; };

    class MRAP_01_base_F;
    class MRAP_01_base_F_OCimport_01 : MRAP_01_base_F { scope = 0; class EventHandlers; };
    class MRAP_01_base_F_OCimport_02 : MRAP_01_base_F_OCimport_01 { class EventHandlers; };

    class MRAP_01_gmg_base_F;
    class MRAP_01_gmg_base_F_OCimport_01 : MRAP_01_gmg_base_F { scope = 0; class EventHandlers; };
    class MRAP_01_gmg_base_F_OCimport_02 : MRAP_01_gmg_base_F_OCimport_01 { class EventHandlers; };

    class MRAP_01_hmg_base_F;
    class MRAP_01_hmg_base_F_OCimport_01 : MRAP_01_hmg_base_F { scope = 0; class EventHandlers; };
    class MRAP_01_hmg_base_F_OCimport_02 : MRAP_01_hmg_base_F_OCimport_01 { class EventHandlers; };

    class I_Mortar_01_F;
    class I_Mortar_01_F_OCimport_01 : I_Mortar_01_F { scope = 0; class EventHandlers; };
    class I_Mortar_01_F_OCimport_02 : I_Mortar_01_F_OCimport_01 { class EventHandlers; };

    class Aegis_Pickup_01_AT_base_RF;
    class Aegis_Pickup_01_AT_base_RF_OCimport_01 : Aegis_Pickup_01_AT_base_RF { scope = 0; class EventHandlers; };
    class Aegis_Pickup_01_AT_base_RF_OCimport_02 : Aegis_Pickup_01_AT_base_RF_OCimport_01 { class EventHandlers; };

    class Pickup_comms_base_rf;
    class Pickup_comms_base_rf_OCimport_01 : Pickup_comms_base_rf { scope = 0; class EventHandlers; };
    class Pickup_comms_base_rf_OCimport_02 : Pickup_comms_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_base_rf;
    class Pickup_01_base_rf_OCimport_01 : Pickup_01_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_base_rf_OCimport_02 : Pickup_01_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_hmg_base_rf;
    class Pickup_01_hmg_base_rf_OCimport_01 : Pickup_01_hmg_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_hmg_base_rf_OCimport_02 : Pickup_01_hmg_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_aat_base_rf;
    class Pickup_01_aat_base_rf_OCimport_01 : Pickup_01_aat_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_aat_base_rf_OCimport_02 : Pickup_01_aat_base_rf_OCimport_01 { class EventHandlers; };

    class Plane_Fighter_05_Base_F;
    class Plane_Fighter_05_Base_F_OCimport_01 : Plane_Fighter_05_Base_F { scope = 0; class EventHandlers; };
    class Plane_Fighter_05_Base_F_OCimport_02 : Plane_Fighter_05_Base_F_OCimport_01 { class EventHandlers; };

    class Quadbike_01_base_F;
    class Quadbike_01_base_F_OCimport_01 : Quadbike_01_base_F { scope = 0; class EventHandlers; };
    class Quadbike_01_base_F_OCimport_02 : Quadbike_01_base_F_OCimport_01 { class EventHandlers; };

    class Radar_System_01_base_F;
    class Radar_System_01_base_F_OCimport_01 : Radar_System_01_base_F { scope = 0; class EventHandlers; };
    class Radar_System_01_base_F_OCimport_02 : Radar_System_01_base_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_I_Soldier_F;
    class Atlas_I_I_Soldier_F_OCimport_01 : Atlas_I_I_Soldier_F { scope = 0; class EventHandlers; };
    class Atlas_I_I_Soldier_F_OCimport_02 : Atlas_I_I_Soldier_F_OCimport_01 { class EventHandlers; };

    class SAM_System_03_base_F;
    class SAM_System_03_base_F_OCimport_01 : SAM_System_03_base_F { scope = 0; class EventHandlers; };
    class SAM_System_03_base_F_OCimport_02 : SAM_System_03_base_F_OCimport_01 { class EventHandlers; };

    class B_Sharpshooter_F;
    class B_Sharpshooter_F_OCimport_01 : B_Sharpshooter_F { scope = 0; class EventHandlers; };
    class B_Sharpshooter_F_OCimport_02 : B_Sharpshooter_F_OCimport_01 { class EventHandlers; };

    class I_static_AA_F;
    class I_static_AA_F_OCimport_01 : I_static_AA_F { scope = 0; class EventHandlers; };
    class I_static_AA_F_OCimport_02 : I_static_AA_F_OCimport_01 { class EventHandlers; };

    class I_static_AT_F;
    class I_static_AT_F_OCimport_01 : I_static_AT_F { scope = 0; class EventHandlers; };
    class I_static_AT_F_OCimport_02 : I_static_AT_F_OCimport_01 { class EventHandlers; };

    class I_Static_Designator_01_F;
    class I_Static_Designator_01_F_OCimport_01 : I_Static_Designator_01_F { scope = 0; class EventHandlers; };
    class I_Static_Designator_01_F_OCimport_02 : I_Static_Designator_01_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_Repair_F;
    class B_Truck_01_Repair_F_OCimport_01 : B_Truck_01_Repair_F { scope = 0; class EventHandlers; };
    class B_Truck_01_Repair_F_OCimport_02 : B_Truck_01_Repair_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_ammo_F;
    class B_Truck_01_ammo_F_OCimport_01 : B_Truck_01_ammo_F { scope = 0; class EventHandlers; };
    class B_Truck_01_ammo_F_OCimport_02 : B_Truck_01_ammo_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_box_F;
    class B_Truck_01_box_F_OCimport_01 : B_Truck_01_box_F { scope = 0; class EventHandlers; };
    class B_Truck_01_box_F_OCimport_02 : B_Truck_01_box_F_OCimport_01 { class EventHandlers; };

    class Truck_01_cargo_base_F;
    class Truck_01_cargo_base_F_OCimport_01 : Truck_01_cargo_base_F { scope = 0; class EventHandlers; };
    class Truck_01_cargo_base_F_OCimport_02 : Truck_01_cargo_base_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_covered_F;
    class B_Truck_01_covered_F_OCimport_01 : B_Truck_01_covered_F { scope = 0; class EventHandlers; };
    class B_Truck_01_covered_F_OCimport_02 : B_Truck_01_covered_F_OCimport_01 { class EventHandlers; };

    class Truck_01_flatbed_base_F;
    class Truck_01_flatbed_base_F_OCimport_01 : Truck_01_flatbed_base_F { scope = 0; class EventHandlers; };
    class Truck_01_flatbed_base_F_OCimport_02 : Truck_01_flatbed_base_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_fuel_F;
    class B_Truck_01_fuel_F_OCimport_01 : B_Truck_01_fuel_F { scope = 0; class EventHandlers; };
    class B_Truck_01_fuel_F_OCimport_02 : B_Truck_01_fuel_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_medical_F;
    class B_Truck_01_medical_F_OCimport_01 : B_Truck_01_medical_F { scope = 0; class EventHandlers; };
    class B_Truck_01_medical_F_OCimport_02 : B_Truck_01_medical_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_mover_F;
    class B_Truck_01_mover_F_OCimport_01 : B_Truck_01_mover_F { scope = 0; class EventHandlers; };
    class B_Truck_01_mover_F_OCimport_02 : B_Truck_01_mover_F_OCimport_01 { class EventHandlers; };

    class B_Truck_01_transport_F;
    class B_Truck_01_transport_F_OCimport_01 : B_Truck_01_transport_F { scope = 0; class EventHandlers; };
    class B_Truck_01_transport_F_OCimport_02 : B_Truck_01_transport_F_OCimport_01 { class EventHandlers; };

    class UAV_01_base_F;
    class UAV_01_base_F_OCimport_01 : UAV_01_base_F { scope = 0; class EventHandlers; };
    class UAV_01_base_F_OCimport_02 : UAV_01_base_F_OCimport_01 { class EventHandlers; };

    class UAV_02_dynamicLoadout_base_F;
    class UAV_02_dynamicLoadout_base_F_OCimport_01 : UAV_02_dynamicLoadout_base_F { scope = 0; class EventHandlers; };
    class UAV_02_dynamicLoadout_base_F_OCimport_02 : UAV_02_dynamicLoadout_base_F_OCimport_01 { class EventHandlers; };

    class UAV_02_Base_lxWS;
    class UAV_02_Base_lxWS_OCimport_01 : UAV_02_Base_lxWS { scope = 0; class EventHandlers; };
    class UAV_02_Base_lxWS_OCimport_02 : UAV_02_Base_lxWS_OCimport_01 { class EventHandlers; };

    class UAV_03_dynamicLoadout_base_F;
    class UAV_03_dynamicLoadout_base_F_OCimport_01 : UAV_03_dynamicLoadout_base_F { scope = 0; class EventHandlers; };
    class UAV_03_dynamicLoadout_base_F_OCimport_02 : UAV_03_dynamicLoadout_base_F_OCimport_01 { class EventHandlers; };

    class UAV_06_base_F;
    class UAV_06_base_F_OCimport_01 : UAV_06_base_F { scope = 0; class EventHandlers; };
    class UAV_06_base_F_OCimport_02 : UAV_06_base_F_OCimport_01 { class EventHandlers; };

    class UAV_06_medical_base_F;
    class UAV_06_medical_base_F_OCimport_01 : UAV_06_medical_base_F { scope = 0; class EventHandlers; };
    class UAV_06_medical_base_F_OCimport_02 : UAV_06_medical_base_F_OCimport_01 { class EventHandlers; };

    class UGV_01_base_F;
    class UGV_01_base_F_OCimport_01 : UGV_01_base_F { scope = 0; class EventHandlers; };
    class UGV_01_base_F_OCimport_02 : UGV_01_base_F_OCimport_01 { class EventHandlers; };

    class UGV_01_medical_base_F;
    class UGV_01_medical_base_F_OCimport_01 : UGV_01_medical_base_F { scope = 0; class EventHandlers; };
    class UGV_01_medical_base_F_OCimport_02 : UGV_01_medical_base_F_OCimport_01 { class EventHandlers; };

    class UGV_01_rcws_base_F;
    class UGV_01_rcws_base_F_OCimport_01 : UGV_01_rcws_base_F { scope = 0; class EventHandlers; };
    class UGV_01_rcws_base_F_OCimport_02 : UGV_01_rcws_base_F_OCimport_01 { class EventHandlers; };

    class UGV_02_Demining_Base_F;
    class UGV_02_Demining_Base_F_OCimport_01 : UGV_02_Demining_Base_F { scope = 0; class EventHandlers; };
    class UGV_02_Demining_Base_F_OCimport_02 : UGV_02_Demining_Base_F_OCimport_01 { class EventHandlers; };

    class VTOL_01_armed_base_F;
    class VTOL_01_armed_base_F_OCimport_01 : VTOL_01_armed_base_F { scope = 0; class EventHandlers; };
    class VTOL_01_armed_base_F_OCimport_02 : VTOL_01_armed_base_F_OCimport_01 { class EventHandlers; };

    class VTOL_01_infantry_base_F;
    class VTOL_01_infantry_base_F_OCimport_01 : VTOL_01_infantry_base_F { scope = 0; class EventHandlers; };
    class VTOL_01_infantry_base_F_OCimport_02 : VTOL_01_infantry_base_F_OCimport_01 { class EventHandlers; };

    class VTOL_01_vehicle_base_F;
    class VTOL_01_vehicle_base_F_OCimport_01 : VTOL_01_vehicle_base_F { scope = 0; class EventHandlers; };
    class VTOL_01_vehicle_base_F_OCimport_02 : VTOL_01_vehicle_base_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_I_Soldier_diver_base;
    class Atlas_I_I_Soldier_diver_base_OCimport_01 : Atlas_I_I_Soldier_diver_base { scope = 0; class EventHandlers; };
    class Atlas_I_I_Soldier_diver_base_OCimport_02 : Atlas_I_I_Soldier_diver_base_OCimport_01 { class EventHandlers; };

    class Atlas_I_I_Soldier_recon_base;
    class Atlas_I_I_Soldier_recon_base_OCimport_01 : Atlas_I_I_Soldier_recon_base { scope = 0; class EventHandlers; };
    class Atlas_I_I_Soldier_recon_base_OCimport_02 : Atlas_I_I_Soldier_recon_base_OCimport_01 { class EventHandlers; };

    class Atlas_I_I_Soldier_sniper_base;
    class Atlas_I_I_Soldier_sniper_base_OCimport_01 : Atlas_I_I_Soldier_sniper_base { scope = 0; class EventHandlers; };
    class Atlas_I_I_Soldier_sniper_base_OCimport_02 : Atlas_I_I_Soldier_sniper_base_OCimport_01 { class EventHandlers; };

    class Atlas_I_I_Soldier_UAV_F;
    class Atlas_I_I_Soldier_UAV_F_OCimport_01 : Atlas_I_I_Soldier_UAV_F { scope = 0; class EventHandlers; };
    class Atlas_I_I_Soldier_UAV_F_OCimport_02 : Atlas_I_I_Soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class Atlas_I_I_soldier_exp_F;
    class Atlas_I_I_soldier_exp_F_OCimport_01 : Atlas_I_I_soldier_exp_F { scope = 0; class EventHandlers; };
    class Atlas_I_I_soldier_exp_F_OCimport_02 : Atlas_I_I_soldier_exp_F_OCimport_01 { class EventHandlers; };

    class AddGis_I_I_MBT_02_cannon_F : O_MBT_02_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "T100 Black Eagle";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_APC_Tracked_01_AA_F : B_APC_Tracked_01_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tzavoa IFV-6a";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_APC_Tracked_01_CRV_F : B_APC_Tracked_01_CRV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Nemia CRV-6e";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_APC_Tracked_01_rcws_F : B_APC_Tracked_01_rcws_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Nemmera IFV-6c";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Fighter_Pilot_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter Pilot";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_NATO_pilot"};

        uniformClass = "U_Tank_olive_F";

        linkedItems[] = {"V_TacVest_oli","H_PilotHelmetFighter_I_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_PilotHelmetFighter_I_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
        respawnMagazines[] = {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_GMG_01_A_F : I_GMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307A";
        side = 2;
        faction = "atlas_ind_i_f";
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

    class Atlas_I_I_GMG_01_F : I_GMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_GMG_01_high_F : I_GMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307 (High)";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_HMG_01_A_F : I_HMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312A";
        side = 2;
        faction = "atlas_ind_i_f";
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

    class Atlas_I_I_HMG_01_F : I_HMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_HMG_01_high_F : I_HMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312 (High)";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_HMG_02_F : HMG_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_HMG_02_high_F : HMG_02_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Heli_Attack_01_dynamicLoadout_F : Heli_Attack_01_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-99 Akav";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Heli_Light_01_F : Heli_Light_01_unarmed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-9 Hummingbird";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Heli_Light_01_dynamicLoadout_F : Heli_Light_01_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-9 Pawnee";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Heli_Transport_01_F : Heli_Transport_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-80 Duchifat";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_MBT_01_arty_F : B_MBT_01_arty_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Kela Mk4";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_MBT_01_cannon_F : B_MBT_01_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mohetz Mk4";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_MRAP_01_F : MRAP_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Goliath";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_MRAP_01_gmg_F : MRAP_01_gmg_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Goliath GMG";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_MRAP_01_hmg_F : MRAP_01_hmg_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Goliath HMG";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Mortar_01_F : I_Mortar_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_I_I_Mortar_01_F";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Pickup_AT_F : Aegis_Pickup_01_AT_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_I_I_Pickup_AT_F";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Pickup_Comms_F : Pickup_comms_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Comms)";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Pickup_F : Pickup_01_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Pickup_HMG_F : Pickup_01_hmg_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (HMG)";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Pickup_aat_F : Pickup_01_aat_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (AA)";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Pilot_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_NATO_pilot"};

        uniformClass = "U_Tank_olive_F";

        backpack = "B_Parachute";

        linkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"SMG_05_ACO_F","Throw","Put"};
        respawnWeapons[] = {"SMG_05_ACO_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow","30Rnd_9x21_Mag_SMG_02_Tracer_Yellow","30Rnd_9x21_Mag_SMG_02_Tracer_Yellow","30Rnd_9x21_Mag_SMG_02_Tracer_Yellow","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow","30Rnd_9x21_Mag_SMG_02_Tracer_Yellow","30Rnd_9x21_Mag_SMG_02_Tracer_Yellow","30Rnd_9x21_Mag_SMG_02_Tracer_Yellow","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Plane_Fighter_05_F : Plane_Fighter_05_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "F-35F Adir";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Plane_Fighter_05_Stealth_F : Plane_Fighter_05_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "F-35F Adir (Stealth)";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Quadbike_01_F : Quadbike_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Radar_System_01_F : Radar_System_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AN/MPQ-105 Radar";
        side = 2;
        faction = "atlas_ind_i_f";
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

    class Atlas_I_I_RadioOperator_F : Atlas_I_I_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_shortsleeve_olive";

        backpack = "B_RadioBag_01_sage_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG21_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_TRG21_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_SAM_System_03_F : SAM_System_03_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MIM-104 Patriot";
        side = 2;
        faction = "atlas_ind_i_f";
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

    class Atlas_I_I_Sharpshooter_F : B_Sharpshooter_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_MilCap_TacHs_grn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","Aegis_H_MilCap_TacHs_grn_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_srifle_DMR_02_AMS_LP_BI_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_srifle_DMR_02_AMS_LP_BI_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};

        magazines[] = {"10rnd_338_mag","10rnd_338_mag","10rnd_338_mag","10rnd_338_mag","10rnd_338_mag","10rnd_338_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"10rnd_338_mag","10rnd_338_mag","10rnd_338_mag","10rnd_338_mag","10rnd_338_mag","10rnd_338_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Soldier_AR_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_shortsleeve_olive";

        backpack = "B_ViperLightHarness_oli_IIAR_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_HelmetI_I_01_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_HelmetI_I_01_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_LMG_Negev_black_ACOG_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_LMG_Negev_black_ACOG_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"Atlas_150Rnd_762x51_Box_Yellow","Atlas_150Rnd_762x51_Box_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"Atlas_150Rnd_762x51_Box_Yellow","Atlas_150Rnd_762x51_Box_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Soldier_A_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_shortsleeve_olive";

        backpack = "B_Carryall_oli_IIAmmo_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG21_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_TRG21_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Soldier_CBRN_F : Atlas_I_I_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Specialist";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CBRN_Suit_01_Olive_F";

        backpack = "B_CombinationUnitRespirator_01_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","G_RegulatorMask_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","G_RegulatorMask_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_TRG20_black_ACO_flash_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_TRG20_black_ACO_flash_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Soldier_CQ_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"sgun_M4_ACO_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"sgun_M4_ACO_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Soldier_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_TRG21_black_ACOG_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_TRG21_black_ACOG_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Soldier_GL_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

        backpack = "B_ViperHarness_oli_IIGL_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG21_GL_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_TRG21_GL_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Soldier_LAT_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

        backpack = "B_AssaultPack_khk_IILAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG21_black_ICO_pointer_F","launch_MRAWS_black_rail_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_TRG21_black_ICO_pointer_F","launch_MRAWS_black_rail_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MRAWS_HEAT_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MRAWS_HEAT_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Soldier_SL_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_shortsleeve_olive";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_cover_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_cover_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_TRG21_black_ACOG_pointer_F","hgun_ACPC2_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_TRG21_black_ACOG_pointer_F","hgun_ACPC2_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Soldier_TL_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","H_HelmetI_I_01_cover_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","H_HelmetI_I_01_cover_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_TRG21_GL_black_ACOG_pointer_F","hgun_ACPC2_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_TRG21_GL_black_ACOG_pointer_F","hgun_ACPC2_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Soldier_UAV_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

        backpack = "Atlas_I_I_UAV_01_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Soldier_lite_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_NATO_casual"};

        uniformClass = "Atlas_U_I_I_CombatUniform_shortsleeve_olive";

        linkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_Headset_light","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_Headset_light","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_TRG20_black_F","Throw","Put"};
        respawnWeapons[] = {"arifle_TRG20_black_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Soldier_repair_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_shortsleeve_olive";

        backpack = "B_AssaultPack_khk_IIRepair_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Soldier_unarmed_F : Atlas_I_I_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class Atlas_I_I_Static_AA_F : I_static_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Static Titan Launcher (AA)";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Static_AT_F : I_static_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Static Titan Launcher (AT)";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Static_Designator_01_F : I_Static_Designator_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Remote Designator";
        side = 2;
        faction = "atlas_ind_i_f";
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

    class Atlas_I_I_Survivor_F : Atlas_I_I_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

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

    class Atlas_I_I_Truck_01_Repair_F : B_Truck_01_Repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Repair";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Truck_01_ammo_F : B_Truck_01_ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Ammo";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Truck_01_box_F : B_Truck_01_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Container";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Truck_01_cargo_F : Truck_01_cargo_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Cargo";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Truck_01_covered_F : B_Truck_01_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport (covered)";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Truck_01_flatbed_F : Truck_01_flatbed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Flatbed";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Truck_01_fuel_F : B_Truck_01_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Fuel";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Truck_01_medical_F : B_Truck_01_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Medical";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Truck_01_mover_F : B_Truck_01_mover_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_Truck_01_transport_F : B_Truck_01_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Transport";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_UAV_01_F : UAV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Naiyana AR-2";
        side = 2;
        faction = "atlas_ind_i_f";
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

    class Atlas_I_I_UAV_02_dynamicLoadout_F : UAV_02_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MQ-4A Greyhawk";
        side = 2;
        faction = "atlas_ind_i_f";
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

    class Atlas_I_I_UAV_02_lxWS : UAV_02_Base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Chfrfr AP-5";
        side = 2;
        faction = "atlas_ind_i_f";
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

    class Atlas_I_I_UAV_03_dynamicLoadout_F : UAV_03_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MQ-12 Gideon";
        side = 2;
        faction = "atlas_ind_i_f";
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

    class Atlas_I_I_UAV_06_F : UAV_06_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pashosh AL-6";
        side = 2;
        faction = "atlas_ind_i_f";
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

    class Atlas_I_I_UAV_06_medical_F : UAV_06_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pashosh AL-6 (Medical)";
        side = 2;
        faction = "atlas_ind_i_f";
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

    class Atlas_I_I_UGV_01_F : UGV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper";
        side = 2;
        faction = "atlas_ind_i_f";
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

    class Atlas_I_I_UGV_01_medical_F : UGV_01_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper Medical";
        side = 2;
        faction = "atlas_ind_i_f";
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

    class Atlas_I_I_UGV_01_rcws_F : UGV_01_rcws_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper RCWS";
        side = 2;
        faction = "atlas_ind_i_f";
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

    class Atlas_I_I_UGV_02_Demining_F : UGV_02_Demining_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ED-1D Pelter";
        side = 2;
        faction = "atlas_ind_i_f";
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

    class Atlas_I_I_VTOL_01_armed_F : VTOL_01_armed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AV-44 X Tannin";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_VTOL_01_infantry_F : VTOL_01_infantry_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "V-44 X Livyatan (Infantry Transport)";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_VTOL_01_vehicle_F : VTOL_01_vehicle_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "V-44 X Livyatan (Vehicle Transport)";
        side = 2;
        faction = "atlas_ind_i_f";
        crew = "Atlas_I_I_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_crew_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "U_Tank_olive_F";

        linkedItems[] = {"V_TacVest_oli","H_HelmetCrew_I_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_HelmetCrew_I_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_TRG20_black_ACO_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_TRG20_black_ACO_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_diver_F : Atlas_I_I_Soldier_diver_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Diver";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_diver"};

        uniformClass = "Atlas_U_I_I_Wetsuit";

        linkedItems[] = {"V_RebreatherI_I","G_I_I_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_RebreatherI_I","G_I_I_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SDAR_F","hgun_ACPC2_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SDAR_F","hgun_ACPC2_snds_F","Throw","Put"};

        magazines[] = {"20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_diver_TL_F : Atlas_I_I_Soldier_diver_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Diver Team Leader";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_diver"};

        uniformClass = "Atlas_U_I_I_Wetsuit";

        linkedItems[] = {"V_RebreatherI_I","G_I_I_Diving","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_RebreatherI_I","G_I_I_Diving","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SDAR_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SDAR_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};

        magazines[] = {"20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_diver_exp_F : Atlas_I_I_Soldier_diver_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Diver Explosive Specialist";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_diver"};

        uniformClass = "Atlas_U_I_I_Wetsuit";

        backpack = "B_AssaultPack_blk_DiverExp";

        linkedItems[] = {"V_RebreatherI_I","G_I_I_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_RebreatherI_I","G_I_I_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SDAR_F","hgun_ACPC2_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SDAR_F","hgun_ACPC2_snds_F","Throw","Put"};

        magazines[] = {"20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_engineer_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

        backpack = "B_Kitbag_sgg_IIEng_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_helicrew_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_NATO_pilot"};

        uniformClass = "U_Tank_olive_F";

        linkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_TRG20_black_ACO_F","Throw","Put"};
        respawnWeapons[] = {"arifle_TRG20_black_ACO_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_helipilot_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_NATO_pilot"};

        uniformClass = "U_Tank_olive_F";

        linkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"SMG_05_ACO_F","Throw","Put"};
        respawnWeapons[] = {"SMG_05_ACO_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow","30Rnd_9x21_Mag_SMG_02_Tracer_Yellow","30Rnd_9x21_Mag_SMG_02_Tracer_Yellow","30Rnd_9x21_Mag_SMG_02_Tracer_Yellow","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow","30Rnd_9x21_Mag_SMG_02_Tracer_Yellow","30Rnd_9x21_Mag_SMG_02_Tracer_Yellow","30Rnd_9x21_Mag_SMG_02_Tracer_Yellow","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_medic_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_shortsleeve_olive";

        backpack = "B_AssaultPack_khk_IIMedic_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG21_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_TRG21_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_officer_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_NATO_casual"};

        uniformClass = "Atlas_U_I_I_OfficerUniform";

        linkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_cbr_F","H_Headset_light","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Aegis_V_CarrierRigKBT_01_holster_cbr_F","H_Headset_light","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_TRG20_black_F","hgun_Mk26_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_TRG20_black_F","hgun_Mk26_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","7Rnd_127x33_Mag","7Rnd_127x33_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","7Rnd_127x33_Mag","7Rnd_127x33_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_recon_AR_F : Atlas_I_I_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Autorifleman";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_SFUniform_tee_olive";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_recon_idfsf_F","H_HelmetB_light_idfsf","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_recon_idfsf_F","H_HelmetB_light_idfsf","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"Atlas_LMG_Negev_black_ACOG_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_LMG_Negev_black_ACOG_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put"};

        magazines[] = {"Atlas_150Rnd_762x51_Box_Yellow","Atlas_150Rnd_762x51_Box_Yellow","Atlas_150Rnd_762x51_Box_Yellow","Atlas_150Rnd_762x51_Box_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"Atlas_150Rnd_762x51_Box_Yellow","Atlas_150Rnd_762x51_Box_Yellow","Atlas_150Rnd_762x51_Box_Yellow","Atlas_150Rnd_762x51_Box_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_recon_F : Atlas_I_I_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_SFUniform_shortsleeve_olive";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_recon_idfsf_F","H_HelmetSpecB_light_idfsf","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_recon_idfsf_F","H_HelmetSpecB_light_idfsf","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"Atlas_arifle_M4A1_ACOG_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_ACOG_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_recon_GL_F : Atlas_I_I_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Grenadier";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_SFUniform_olive";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_recon_idfsf_F","H_HelmetSpecB_light_idfsf","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_recon_idfsf_F","H_HelmetSpecB_light_idfsf","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"Atlas_arifle_M4A1_GL_ACOG_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_GL_ACOG_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_recon_JTAC_F : Atlas_I_I_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon JTAC";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_SFUniform_shortsleeve_olive";

        backpack = "B_RadioBag_01_black_F";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_recon_idfsf_F","H_HelmetSpecB_light_idfsf","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_recon_idfsf_F","H_HelmetSpecB_light_idfsf","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"Atlas_arifle_M4A1_ICO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Laserdesignator_03"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_ICO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Laserdesignator_03"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_recon_LAT_F : Atlas_I_I_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (AT)";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_SFUniform_olive";

        backpack = "B_AssaultPack_blk_IIReconLAT_F";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_recon_idfsf_F","H_HelmetB_light_idfsf","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_recon_idfsf_F","H_HelmetB_light_idfsf","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"Atlas_arifle_M4A1_ICO_pointer_snds_F","launch_MRAWS_black_rail_F","hgun_ACPC2_snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_ICO_pointer_snds_F","launch_MRAWS_black_rail_F","hgun_ACPC2_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_recon_M_F : Atlas_I_I_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Marksman";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_SFUniform_olive";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_recon_idfsf_F","H_Booniehat_mgrn_hs","G_Bandanna_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_recon_idfsf_F","H_Booniehat_mgrn_hs","G_Bandanna_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"Atlas_arifle_SR25_blk_SOS_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_SR25_blk_SOS_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"Aegis_20Rnd_762x51_Yellow_SMAG","Aegis_20Rnd_762x51_Yellow_SMAG","Aegis_20Rnd_762x51_Yellow_SMAG","Aegis_20Rnd_762x51_Yellow_SMAG","Aegis_20Rnd_762x51_Yellow_SMAG","Aegis_20Rnd_762x51_Yellow_SMAG","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"Aegis_20Rnd_762x51_Yellow_SMAG","Aegis_20Rnd_762x51_Yellow_SMAG","Aegis_20Rnd_762x51_Yellow_SMAG","Aegis_20Rnd_762x51_Yellow_SMAG","Aegis_20Rnd_762x51_Yellow_SMAG","Aegis_20Rnd_762x51_Yellow_SMAG","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_recon_TL_F : Atlas_I_I_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Team Leader";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_SFUniform_shortsleeve_olive";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_recon_idfsf_F","H_HelmetSpecB_light_idfsf","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_recon_idfsf_F","H_HelmetSpecB_light_idfsf","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"Atlas_arifle_M4A1_ACOG_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_ACOG_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_recon_exp_F : Atlas_I_I_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Demo Specialist";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_SFUniform_shortsleeve_olive";

        backpack = "B_Kitbag_blk_IIReconExp_F";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_recon_idfsf_F","H_HelmetB_light_idfsf","G_Shemag_tan","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_recon_idfsf_F","H_HelmetB_light_idfsf","G_Shemag_tan","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"Atlas_arifle_M4A1_ICO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_ICO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_recon_medic_F : Atlas_I_I_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Paramedic";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_SFUniform_shortsleeve_olive";

        backpack = "B_AssaultPack_blk_IIReconMedic_F";

        linkedItems[] = {"Atlas_V_CarrierRigKBT_01_recon_idfsf_F","H_HelmetB_light_idfsf","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"Atlas_V_CarrierRigKBT_01_recon_idfsf_F","H_HelmetB_light_idfsf","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"Atlas_arifle_M4A1_ICO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_ICO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_sniper_F : Atlas_I_I_Soldier_sniper_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_NATO_sniper"};

        uniformClass = "Atlas_U_I_I_GhillieSuit";

        linkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"srifle_LRR_LRPS_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_LRR_LRPS_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_soldier_AAA_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

        backpack = "I_Carryall_oli_AAA";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG21_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_TRG21_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_soldier_AAR_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

        backpack = "B_ViperHarness_oli_IIAAR_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_HelmetI_I_01_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Olive_F","H_HelmetI_I_01_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG21_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_TRG21_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_soldier_AAT_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

        backpack = "I_Carryall_oli_AAT";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG21_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_TRG21_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_soldier_AA_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

        backpack = "B_Kitbag_sgg_IIAA_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","launch_B_Titan_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","launch_B_Titan_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_soldier_AT_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

        backpack = "B_Kitbag_sgg_IIAT_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","launch_B_Titan_short_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","launch_B_Titan_short_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_soldier_M_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_cover_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_M4A1_ACOG_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_ACOG_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_soldier_UAV_02_lxWS_F : Atlas_I_I_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AP-5)";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

        backpack = "Atlas_I_I_UAV_02_backpack_lxWS";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_soldier_UAV_06_F : Atlas_I_I_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

        backpack = "Atlas_I_I_UAV_06_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_soldier_UAV_06_medical_F : Atlas_I_I_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

        backpack = "Atlas_I_I_UAV_06_medical_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_soldier_UGV_02_Demining_F : Atlas_I_I_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1D)";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_olive";

        backpack = "Atlas_I_I_UGV_02_Demining_backpack_F";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetI_I_01_F","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_soldier_exp_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_shortsleeve_olive";

        backpack = "B_Kitbag_sgg_IIExp_F";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_soldier_mine_F : Atlas_I_I_soldier_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mine Specialist";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_shortsleeve_olive";

        backpack = "B_Carryall_oli_Mine";

        linkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_heavy_Olive_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_spotter_F : Atlas_I_I_Soldier_sniper_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_NATO_sniper"};

        uniformClass = "Atlas_U_I_I_GhillieSuit";

        linkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};
        respawnlinkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_grn_F"};

        weapons[] = {"Atlas_arifle_M4A1_ACOG_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Laserdesignator_03"};
        respawnWeapons[] = {"Atlas_arifle_M4A1_ACOG_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Laserdesignator_03"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_support_AMG_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (HMG/GMG)";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_shortsleeve_olive";

        backpack = "Atlas_I_I_HMG_01_support_F";

        linkedItems[] = {"V_TacChestrig_oli_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_TacChestrig_oli_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_support_AMort_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (Mk6)";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_shortsleeve_olive";

        backpack = "Atlas_I_I_Mortar_01_support_F";

        linkedItems[] = {"V_TacChestrig_oli_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_TacChestrig_oli_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_support_GMG_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (GMG)";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_shortsleeve_olive";

        backpack = "Atlas_I_I_GMG_01_weapon_F";

        linkedItems[] = {"V_TacChestrig_oli_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_TacChestrig_oli_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_support_MG_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (HMG)";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_shortsleeve_olive";

        backpack = "Atlas_I_I_HMG_01_weapon_F";

        linkedItems[] = {"V_TacChestrig_oli_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_TacChestrig_oli_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_I_support_Mort_F : Atlas_I_I_Soldier_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mk6)";
        side = 2;
        faction = "atlas_ind_i_f";

        identityTypes[] = {"LanguageGRE_F","Head_IDF","G_IDF_default"};

        uniformClass = "Atlas_U_I_I_CombatUniform_shortsleeve_olive";

        backpack = "Atlas_I_I_Mortar_01_weapon_F";

        linkedItems[] = {"V_TacChestrig_oli_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_TacChestrig_oli_F","H_HelmetI_I_01_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_TRG20_black_ICO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


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
        class Atlas_IND_I_F {
            class Armored {
                class I_I_SPGPlatoon_Scorcher {
                    name = "Artillery SPG Platoon";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_art.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_MBT_01_arty_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_MBT_01_arty_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_MBT_01_arty_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_MBT_01_arty_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class I_I_SPGSection_Scorcher {
                    name = "Artillery SPG Section";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_art.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_MBT_01_arty_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_MBT_01_arty_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class I_I_TankPlatoon {
                    name = "Tank Platoon";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_MBT_01_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_MBT_01_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_MBT_01_cannon_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_MBT_01_cannon_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class I_I_TankPlatoon_AA {
                    name = "Tank Platoon (Combined)";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_MBT_01_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_APC_Tracked_01_aa_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_MBT_01_cannon_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_APC_Tracked_01_aa_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class I_I_TankSection {
                    name = "Tank Section";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_MBT_01_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_MBT_01_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class I_I_InfSentry {
                    name = "Sentry";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class I_I_InfSquad {
                    name = "Rifle Squad";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_I_I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_I_I_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_I_I_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_I_I_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class I_I_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_I_I_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_I_I_soldier_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_I_I_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_I_I_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class I_I_InfTeam {
                    name = "Fire Team";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class I_I_InfTeam_AA {
                    name = "Air-defense Team";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_soldier_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class I_I_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_soldier_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class I_I_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_APC_Tracked_01_rcws_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_I_I_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_I_I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_I_I_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_I_I_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_I_I_medic_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class I_I_MechInf_AA {
                    name = "Mechanized Air-defense Squad";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_APC_Tracked_01_rcws_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_I_I_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_I_I_soldier_AA_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_I_I_soldier_AAA_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_I_I_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_I_I_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class I_I_MechInf_AT {
                    name = "Mechanized Anti-armor Squad";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_APC_Tracked_01_rcws_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_I_I_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_I_I_soldier_AT_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_I_I_soldier_AAT_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_I_I_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_I_I_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class I_I_MechInf_Support {
                    name = "Mechanized Support Squad";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_APC_Tracked_01_rcws_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_soldier_repair_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_I_I_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_I_I_medic_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_I_I_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_I_I_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_I_I_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized {
                class I_I_MotInf_AA {
                    name = "Motorized Air-defense Team";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_MRAP_01_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class I_I_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_MRAP_01_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class I_I_MotInf_GMGTeam {
                    name = "Motorized GMG Team";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_MRAP_01_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_support_GMG_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class I_I_MotInf_MGTeam {
                    name = "Motorized HMG Team";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_MRAP_01_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_support_MG_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class I_I_MotInf_MortTeam {
                    name = "Motorized Mortar Team";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_MRAP_01_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_support_Mort_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_support_AMort_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class I_I_MotInf_Reinforcements {
                    name = "Motorized Reinforcements";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_Truck_01_transport_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_I_I_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_I_I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_I_I_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_I_I_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_I_I_medic_F";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "Atlas_I_I_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "Atlas_I_I_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "Atlas_I_I_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "Atlas_I_I_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit13 {
                        vehicle = "Atlas_I_I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit14 {
                        vehicle = "Atlas_I_I_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit15 {
                        vehicle = "Atlas_I_I_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit16 {
                        vehicle = "Atlas_I_I_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };
                };
                class I_I_MotInf_Team {
                    name = "Motorized Team";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_MRAP_01_gmg_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
            class SpecOps {
                class I_I_ReconPatrol {
                    name = "Recon Patrol";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_recon_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class I_I_ReconSentry {
                    name = "Recon Sentry";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_recon_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class I_I_ReconTeam {
                    name = "Recon Team";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_recon_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_I_I_recon_JTAC_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_I_I_recon_exp_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
                class I_I_SniperTeam {
                    name = "Sniper Team";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_spotter_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_sniper_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
            };
            class Support {
                class I_I_Recon_EOD {
                    name = "Recon Support Team (EOD)";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_recon_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_recon_exp_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_recon_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class I_I_Support_CLS {
                    name = "Support Team (CLS)";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_medic_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class I_I_Support_ENG {
                    name = "Support Team (Engineer)";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_soldier_repair_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class I_I_Support_EOD {
                    name = "Support Team (EOD)";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_I_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class I_I_Support_GMG {
                    name = "GMG Team";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_support_GMG_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class I_I_Support_MG {
                    name = "HMG Team";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_support_MG_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class I_I_Support_Mort {
                    name = "Mortar Team";
                    side = 2;
                    faction = "Atlas_IND_I_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mortar.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_I_support_Mort_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_I_support_AMort_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
        };
    };
};
