//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class OPF_T_F {
        displayName = "China";
        side = 0;
        priority = 3;
        icon = "\A3_Aegis\Data_F_Aegis\FactionIcons\CfgFactionClasses_OPF_T_CA.paa";
        flag = "\A3_Aegis\Data_F_Aegis\Flags\flag_China_CO.paa";
    };
};

class CfgVehicles {

    class ACE_SpottingScopeObject;
    class ACE_SpottingScopeObject_OCimport_01 : ACE_SpottingScopeObject { scope = 0; class EventHandlers; };
    class ACE_SpottingScopeObject_OCimport_02 : ACE_SpottingScopeObject_OCimport_01 { class EventHandlers; };

    class O_T_Crew_F;
    class O_T_Crew_F_OCimport_01 : O_T_Crew_F { scope = 0; class EventHandlers; };
    class O_T_Crew_F_OCimport_02 : O_T_Crew_F_OCimport_01 { class EventHandlers; };

    class UAV_02_Base_lxWS;
    class UAV_02_Base_lxWS_OCimport_01 : UAV_02_Base_lxWS { scope = 0; class EventHandlers; };
    class UAV_02_Base_lxWS_OCimport_02 : UAV_02_Base_lxWS_OCimport_01 { class EventHandlers; };

    class Atlas_O_C_Marine_base_F;
    class Atlas_O_C_Marine_base_F_OCimport_01 : Atlas_O_C_Marine_base_F { scope = 0; class EventHandlers; };
    class Atlas_O_C_Marine_base_F_OCimport_02 : Atlas_O_C_Marine_base_F_OCimport_01 { class EventHandlers; };

    class EF_CombatBoat_AT_East_Base;
    class EF_CombatBoat_AT_East_Base_OCimport_01 : EF_CombatBoat_AT_East_Base { scope = 0; class EventHandlers; };
    class EF_CombatBoat_AT_East_Base_OCimport_02 : EF_CombatBoat_AT_East_Base_OCimport_01 { class EventHandlers; };

    class EF_CombatBoat_HMG_East_Base;
    class EF_CombatBoat_HMG_East_Base_OCimport_01 : EF_CombatBoat_HMG_East_Base { scope = 0; class EventHandlers; };
    class EF_CombatBoat_HMG_East_Base_OCimport_02 : EF_CombatBoat_HMG_East_Base_OCimport_01 { class EventHandlers; };

    class EF_CombatBoat_Unarmed_Base;
    class EF_CombatBoat_Unarmed_Base_OCimport_01 : EF_CombatBoat_Unarmed_Base { scope = 0; class EventHandlers; };
    class EF_CombatBoat_Unarmed_Base_OCimport_02 : EF_CombatBoat_Unarmed_Base_OCimport_01 { class EventHandlers; };

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

    class Land_Pod_Heli_Transport_04_ammo_F;
    class Land_Pod_Heli_Transport_04_ammo_F_OCimport_01 : Land_Pod_Heli_Transport_04_ammo_F { scope = 0; class EventHandlers; };
    class Land_Pod_Heli_Transport_04_ammo_F_OCimport_02 : Land_Pod_Heli_Transport_04_ammo_F_OCimport_01 { class EventHandlers; };

    class Land_Pod_Heli_Transport_04_bench_F;
    class Land_Pod_Heli_Transport_04_bench_F_OCimport_01 : Land_Pod_Heli_Transport_04_bench_F { scope = 0; class EventHandlers; };
    class Land_Pod_Heli_Transport_04_bench_F_OCimport_02 : Land_Pod_Heli_Transport_04_bench_F_OCimport_01 { class EventHandlers; };

    class Land_Pod_Heli_Transport_04_box_F;
    class Land_Pod_Heli_Transport_04_box_F_OCimport_01 : Land_Pod_Heli_Transport_04_box_F { scope = 0; class EventHandlers; };
    class Land_Pod_Heli_Transport_04_box_F_OCimport_02 : Land_Pod_Heli_Transport_04_box_F_OCimport_01 { class EventHandlers; };

    class Land_Pod_Heli_Transport_04_covered_F;
    class Land_Pod_Heli_Transport_04_covered_F_OCimport_01 : Land_Pod_Heli_Transport_04_covered_F { scope = 0; class EventHandlers; };
    class Land_Pod_Heli_Transport_04_covered_F_OCimport_02 : Land_Pod_Heli_Transport_04_covered_F_OCimport_01 { class EventHandlers; };

    class Land_Pod_Heli_Transport_04_fuel_F;
    class Land_Pod_Heli_Transport_04_fuel_F_OCimport_01 : Land_Pod_Heli_Transport_04_fuel_F { scope = 0; class EventHandlers; };
    class Land_Pod_Heli_Transport_04_fuel_F_OCimport_02 : Land_Pod_Heli_Transport_04_fuel_F_OCimport_01 { class EventHandlers; };

    class Land_Pod_Heli_Transport_04_medevac_F;
    class Land_Pod_Heli_Transport_04_medevac_F_OCimport_01 : Land_Pod_Heli_Transport_04_medevac_F { scope = 0; class EventHandlers; };
    class Land_Pod_Heli_Transport_04_medevac_F_OCimport_02 : Land_Pod_Heli_Transport_04_medevac_F_OCimport_01 { class EventHandlers; };

    class Land_Pod_Heli_Transport_04_repair_F;
    class Land_Pod_Heli_Transport_04_repair_F_OCimport_01 : Land_Pod_Heli_Transport_04_repair_F { scope = 0; class EventHandlers; };
    class Land_Pod_Heli_Transport_04_repair_F_OCimport_02 : Land_Pod_Heli_Transport_04_repair_F_OCimport_01 { class EventHandlers; };

    class O_APC_Tracked_02_30mm_lxWS;
    class O_APC_Tracked_02_30mm_lxWS_OCimport_01 : O_APC_Tracked_02_30mm_lxWS { scope = 0; class EventHandlers; };
    class O_APC_Tracked_02_30mm_lxWS_OCimport_02 : O_APC_Tracked_02_30mm_lxWS_OCimport_01 { class EventHandlers; };

    class O_APC_Tracked_02_AA_F;
    class O_APC_Tracked_02_AA_F_OCimport_01 : O_APC_Tracked_02_AA_F { scope = 0; class EventHandlers; };
    class O_APC_Tracked_02_AA_F_OCimport_02 : O_APC_Tracked_02_AA_F_OCimport_01 { class EventHandlers; };

    class O_APC_Tracked_02_cannon_F;
    class O_APC_Tracked_02_cannon_F_OCimport_01 : O_APC_Tracked_02_cannon_F { scope = 0; class EventHandlers; };
    class O_APC_Tracked_02_cannon_F_OCimport_02 : O_APC_Tracked_02_cannon_F_OCimport_01 { class EventHandlers; };

    class O_APC_Wheeled_02_hmg_lxWS;
    class O_APC_Wheeled_02_hmg_lxWS_OCimport_01 : O_APC_Wheeled_02_hmg_lxWS { scope = 0; class EventHandlers; };
    class O_APC_Wheeled_02_hmg_lxWS_OCimport_02 : O_APC_Wheeled_02_hmg_lxWS_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_02_base_v2_F;
    class APC_Wheeled_02_base_v2_F_OCimport_01 : APC_Wheeled_02_base_v2_F { scope = 0; class EventHandlers; };
    class APC_Wheeled_02_base_v2_F_OCimport_02 : APC_Wheeled_02_base_v2_F_OCimport_01 { class EventHandlers; };

    class O_APC_Wheeled_02_unarmed_lxWS;
    class O_APC_Wheeled_02_unarmed_lxWS_OCimport_01 : O_APC_Wheeled_02_unarmed_lxWS { scope = 0; class EventHandlers; };
    class O_APC_Wheeled_02_unarmed_lxWS_OCimport_02 : O_APC_Wheeled_02_unarmed_lxWS_OCimport_01 { class EventHandlers; };

    class O_Boat_Armed_01_hmg_F;
    class O_Boat_Armed_01_hmg_F_OCimport_01 : O_Boat_Armed_01_hmg_F { scope = 0; class EventHandlers; };
    class O_Boat_Armed_01_hmg_F_OCimport_02 : O_Boat_Armed_01_hmg_F_OCimport_01 { class EventHandlers; };

    class Rubber_duck_base_F;
    class Rubber_duck_base_F_OCimport_01 : Rubber_duck_base_F { scope = 0; class EventHandlers; };
    class Rubber_duck_base_F_OCimport_02 : Rubber_duck_base_F_OCimport_01 { class EventHandlers; };

    class O_crew_F;
    class O_crew_F_OCimport_01 : O_crew_F { scope = 0; class EventHandlers; };
    class O_crew_F_OCimport_02 : O_crew_F_OCimport_01 { class EventHandlers; };

    class O_diver_exp_F;
    class O_diver_exp_F_OCimport_01 : O_diver_exp_F { scope = 0; class EventHandlers; };
    class O_diver_exp_F_OCimport_02 : O_diver_exp_F_OCimport_01 { class EventHandlers; };

    class O_diver_F;
    class O_diver_F_OCimport_01 : O_diver_F { scope = 0; class EventHandlers; };
    class O_diver_F_OCimport_02 : O_diver_F_OCimport_01 { class EventHandlers; };

    class O_diver_TL_F;
    class O_diver_TL_F_OCimport_01 : O_diver_TL_F { scope = 0; class EventHandlers; };
    class O_diver_TL_F_OCimport_02 : O_diver_TL_F_OCimport_01 { class EventHandlers; };

    class O_engineer_F;
    class O_engineer_F_OCimport_01 : O_engineer_F { scope = 0; class EventHandlers; };
    class O_engineer_F_OCimport_02 : O_engineer_F_OCimport_01 { class EventHandlers; };

    class O_Fighter_Pilot_F;
    class O_Fighter_Pilot_F_OCimport_01 : O_Fighter_Pilot_F { scope = 0; class EventHandlers; };
    class O_Fighter_Pilot_F_OCimport_02 : O_Fighter_Pilot_F_OCimport_01 { class EventHandlers; };

    class O_GMG_01_A_F;
    class O_GMG_01_A_F_OCimport_01 : O_GMG_01_A_F { scope = 0; class EventHandlers; };
    class O_GMG_01_A_F_OCimport_02 : O_GMG_01_A_F_OCimport_01 { class EventHandlers; };

    class O_GMG_01_F;
    class O_GMG_01_F_OCimport_01 : O_GMG_01_F { scope = 0; class EventHandlers; };
    class O_GMG_01_F_OCimport_02 : O_GMG_01_F_OCimport_01 { class EventHandlers; };

    class O_GMG_01_high_F;
    class O_GMG_01_high_F_OCimport_01 : O_GMG_01_high_F { scope = 0; class EventHandlers; };
    class O_GMG_01_high_F_OCimport_02 : O_GMG_01_high_F_OCimport_01 { class EventHandlers; };

    class O_HMG_01_A_F;
    class O_HMG_01_A_F_OCimport_01 : O_HMG_01_A_F { scope = 0; class EventHandlers; };
    class O_HMG_01_A_F_OCimport_02 : O_HMG_01_A_F_OCimport_01 { class EventHandlers; };

    class O_HMG_01_F;
    class O_HMG_01_F_OCimport_01 : O_HMG_01_F { scope = 0; class EventHandlers; };
    class O_HMG_01_F_OCimport_02 : O_HMG_01_F_OCimport_01 { class EventHandlers; };

    class O_HMG_01_high_F;
    class O_HMG_01_high_F_OCimport_01 : O_HMG_01_high_F { scope = 0; class EventHandlers; };
    class O_HMG_01_high_F_OCimport_02 : O_HMG_01_high_F_OCimport_01 { class EventHandlers; };

    class O_HeavyGunner_F;
    class O_HeavyGunner_F_OCimport_01 : O_HeavyGunner_F { scope = 0; class EventHandlers; };
    class O_HeavyGunner_F_OCimport_02 : O_HeavyGunner_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Attack_02_dynamicLoadout_F;
    class O_Heli_Attack_02_dynamicLoadout_F_OCimport_01 : O_Heli_Attack_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_Heli_Attack_02_dynamicLoadout_F_OCimport_02 : O_Heli_Attack_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Light_02_dynamicLoadout_F;
    class O_Heli_Light_02_dynamicLoadout_F_OCimport_01 : O_Heli_Light_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_Heli_Light_02_dynamicLoadout_F_OCimport_02 : O_Heli_Light_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Light_02_unarmed_F;
    class O_Heli_Light_02_unarmed_F_OCimport_01 : O_Heli_Light_02_unarmed_F { scope = 0; class EventHandlers; };
    class O_Heli_Light_02_unarmed_F_OCimport_02 : O_Heli_Light_02_unarmed_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Transport_04_F;
    class O_Heli_Transport_04_F_OCimport_01 : O_Heli_Transport_04_F { scope = 0; class EventHandlers; };
    class O_Heli_Transport_04_F_OCimport_02 : O_Heli_Transport_04_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Transport_04_ammo_F;
    class O_Heli_Transport_04_ammo_F_OCimport_01 : O_Heli_Transport_04_ammo_F { scope = 0; class EventHandlers; };
    class O_Heli_Transport_04_ammo_F_OCimport_02 : O_Heli_Transport_04_ammo_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Transport_04_bench_F;
    class O_Heli_Transport_04_bench_F_OCimport_01 : O_Heli_Transport_04_bench_F { scope = 0; class EventHandlers; };
    class O_Heli_Transport_04_bench_F_OCimport_02 : O_Heli_Transport_04_bench_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Transport_04_box_F;
    class O_Heli_Transport_04_box_F_OCimport_01 : O_Heli_Transport_04_box_F { scope = 0; class EventHandlers; };
    class O_Heli_Transport_04_box_F_OCimport_02 : O_Heli_Transport_04_box_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Transport_04_covered_F;
    class O_Heli_Transport_04_covered_F_OCimport_01 : O_Heli_Transport_04_covered_F { scope = 0; class EventHandlers; };
    class O_Heli_Transport_04_covered_F_OCimport_02 : O_Heli_Transport_04_covered_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Transport_04_fuel_F;
    class O_Heli_Transport_04_fuel_F_OCimport_01 : O_Heli_Transport_04_fuel_F { scope = 0; class EventHandlers; };
    class O_Heli_Transport_04_fuel_F_OCimport_02 : O_Heli_Transport_04_fuel_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Transport_04_medevac_F;
    class O_Heli_Transport_04_medevac_F_OCimport_01 : O_Heli_Transport_04_medevac_F { scope = 0; class EventHandlers; };
    class O_Heli_Transport_04_medevac_F_OCimport_02 : O_Heli_Transport_04_medevac_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Transport_04_repair_F;
    class O_Heli_Transport_04_repair_F_OCimport_01 : O_Heli_Transport_04_repair_F { scope = 0; class EventHandlers; };
    class O_Heli_Transport_04_repair_F_OCimport_02 : O_Heli_Transport_04_repair_F_OCimport_01 { class EventHandlers; };

    class O_helicrew_F;
    class O_helicrew_F_OCimport_01 : O_helicrew_F { scope = 0; class EventHandlers; };
    class O_helicrew_F_OCimport_02 : O_helicrew_F_OCimport_01 { class EventHandlers; };

    class O_helipilot_F;
    class O_helipilot_F_OCimport_01 : O_helipilot_F { scope = 0; class EventHandlers; };
    class O_helipilot_F_OCimport_02 : O_helipilot_F_OCimport_01 { class EventHandlers; };

    class LSV_02_AT_base_F;
    class LSV_02_AT_base_F_OCimport_01 : LSV_02_AT_base_F { scope = 0; class EventHandlers; };
    class LSV_02_AT_base_F_OCimport_02 : LSV_02_AT_base_F_OCimport_01 { class EventHandlers; };

    class LSV_02_armed_base_F;
    class LSV_02_armed_base_F_OCimport_01 : LSV_02_armed_base_F { scope = 0; class EventHandlers; };
    class LSV_02_armed_base_F_OCimport_02 : LSV_02_armed_base_F_OCimport_01 { class EventHandlers; };

    class LSV_02_unarmed_base_F;
    class LSV_02_unarmed_base_F_OCimport_01 : LSV_02_unarmed_base_F { scope = 0; class EventHandlers; };
    class LSV_02_unarmed_base_F_OCimport_02 : LSV_02_unarmed_base_F_OCimport_01 { class EventHandlers; };

    class O_Lifeboat;
    class O_Lifeboat_OCimport_01 : O_Lifeboat { scope = 0; class EventHandlers; };
    class O_Lifeboat_OCimport_02 : O_Lifeboat_OCimport_01 { class EventHandlers; };

    class O_MBT_02_arty_F;
    class O_MBT_02_arty_F_OCimport_01 : O_MBT_02_arty_F { scope = 0; class EventHandlers; };
    class O_MBT_02_arty_F_OCimport_02 : O_MBT_02_arty_F_OCimport_01 { class EventHandlers; };

    class O_MBT_02_cannon_F;
    class O_MBT_02_cannon_F_OCimport_01 : O_MBT_02_cannon_F { scope = 0; class EventHandlers; };
    class O_MBT_02_cannon_F_OCimport_02 : O_MBT_02_cannon_F_OCimport_01 { class EventHandlers; };

    class O_MBT_02_railgun_base_F;
    class O_MBT_02_railgun_base_F_OCimport_01 : O_MBT_02_railgun_base_F { scope = 0; class EventHandlers; };
    class O_MBT_02_railgun_base_F_OCimport_02 : O_MBT_02_railgun_base_F_OCimport_01 { class EventHandlers; };

    class MBT_04_cannon_base_F;
    class MBT_04_cannon_base_F_OCimport_01 : MBT_04_cannon_base_F { scope = 0; class EventHandlers; };
    class MBT_04_cannon_base_F_OCimport_02 : MBT_04_cannon_base_F_OCimport_01 { class EventHandlers; };

    class MBT_04_command_base_F;
    class MBT_04_command_base_F_OCimport_01 : MBT_04_command_base_F { scope = 0; class EventHandlers; };
    class MBT_04_command_base_F_OCimport_02 : MBT_04_command_base_F_OCimport_01 { class EventHandlers; };

    class MRAP_02_base_F;
    class MRAP_02_base_F_OCimport_01 : MRAP_02_base_F { scope = 0; class EventHandlers; };
    class MRAP_02_base_F_OCimport_02 : MRAP_02_base_F_OCimport_01 { class EventHandlers; };

    class MRAP_02_gmg_base_F;
    class MRAP_02_gmg_base_F_OCimport_01 : MRAP_02_gmg_base_F { scope = 0; class EventHandlers; };
    class MRAP_02_gmg_base_F_OCimport_02 : MRAP_02_gmg_base_F_OCimport_01 { class EventHandlers; };

    class MRAP_02_hmg_base_F;
    class MRAP_02_hmg_base_F_OCimport_01 : MRAP_02_hmg_base_F { scope = 0; class EventHandlers; };
    class MRAP_02_hmg_base_F_OCimport_02 : MRAP_02_hmg_base_F_OCimport_01 { class EventHandlers; };

    class O_medic_F;
    class O_medic_F_OCimport_01 : O_medic_F { scope = 0; class EventHandlers; };
    class O_medic_F_OCimport_02 : O_medic_F_OCimport_01 { class EventHandlers; };

    class O_Mortar_01_F;
    class O_Mortar_01_F_OCimport_01 : O_Mortar_01_F { scope = 0; class EventHandlers; };
    class O_Mortar_01_F_OCimport_02 : O_Mortar_01_F_OCimport_01 { class EventHandlers; };

    class O_officer_F;
    class O_officer_F_OCimport_01 : O_officer_F { scope = 0; class EventHandlers; };
    class O_officer_F_OCimport_02 : O_officer_F_OCimport_01 { class EventHandlers; };

    class O_Pathfinder_F;
    class O_Pathfinder_F_OCimport_01 : O_Pathfinder_F { scope = 0; class EventHandlers; };
    class O_Pathfinder_F_OCimport_02 : O_Pathfinder_F_OCimport_01 { class EventHandlers; };

    class O_Pickup_Comms_rf;
    class O_Pickup_Comms_rf_OCimport_01 : O_Pickup_Comms_rf { scope = 0; class EventHandlers; };
    class O_Pickup_Comms_rf_OCimport_02 : O_Pickup_Comms_rf_OCimport_01 { class EventHandlers; };

    class O_Pickup_rcws_rf;
    class O_Pickup_rcws_rf_OCimport_01 : O_Pickup_rcws_rf { scope = 0; class EventHandlers; };
    class O_Pickup_rcws_rf_OCimport_02 : O_Pickup_rcws_rf_OCimport_01 { class EventHandlers; };

    class O_Pickup_rf;
    class O_Pickup_rf_OCimport_01 : O_Pickup_rf { scope = 0; class EventHandlers; };
    class O_Pickup_rf_OCimport_02 : O_Pickup_rf_OCimport_01 { class EventHandlers; };

    class O_Pilot_F;
    class O_Pilot_F_OCimport_01 : O_Pilot_F { scope = 0; class EventHandlers; };
    class O_Pilot_F_OCimport_02 : O_Pilot_F_OCimport_01 { class EventHandlers; };

    class O_Plane_CAS_02_dynamicLoadout_F;
    class O_Plane_CAS_02_dynamicLoadout_F_OCimport_01 : O_Plane_CAS_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_Plane_CAS_02_dynamicLoadout_F_OCimport_02 : O_Plane_CAS_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class O_Plane_Fighter_02_Stealth_F;
    class O_Plane_Fighter_02_Stealth_F_OCimport_01 : O_Plane_Fighter_02_Stealth_F { scope = 0; class EventHandlers; };
    class O_Plane_Fighter_02_Stealth_F_OCimport_02 : O_Plane_Fighter_02_Stealth_F_OCimport_01 { class EventHandlers; };

    class O_Plane_Fighter_02_F;
    class O_Plane_Fighter_02_F_OCimport_01 : O_Plane_Fighter_02_F { scope = 0; class EventHandlers; };
    class O_Plane_Fighter_02_F_OCimport_02 : O_Plane_Fighter_02_F_OCimport_01 { class EventHandlers; };

    class O_Plane_Transport_01_infantry_F;
    class O_Plane_Transport_01_infantry_F_OCimport_01 : O_Plane_Transport_01_infantry_F { scope = 0; class EventHandlers; };
    class O_Plane_Transport_01_infantry_F_OCimport_02 : O_Plane_Transport_01_infantry_F_OCimport_01 { class EventHandlers; };

    class O_Plane_Transport_01_vehicle_F;
    class O_Plane_Transport_01_vehicle_F_OCimport_01 : O_Plane_Transport_01_vehicle_F { scope = 0; class EventHandlers; };
    class O_Plane_Transport_01_vehicle_F_OCimport_02 : O_Plane_Transport_01_vehicle_F_OCimport_01 { class EventHandlers; };

    class Quadbike_01_base_F;
    class Quadbike_01_base_F_OCimport_01 : Quadbike_01_base_F { scope = 0; class EventHandlers; };
    class Quadbike_01_base_F_OCimport_02 : Quadbike_01_base_F_OCimport_01 { class EventHandlers; };

    class Radar_System_02_base_F;
    class Radar_System_02_base_F_OCimport_01 : Radar_System_02_base_F { scope = 0; class EventHandlers; };
    class Radar_System_02_base_F_OCimport_02 : Radar_System_02_base_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_F;
    class O_T_Soldier_F_OCimport_01 : O_T_Soldier_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_F_OCimport_02 : O_T_Soldier_F_OCimport_01 { class EventHandlers; };

    class O_recon_AR_F;
    class O_recon_AR_F_OCimport_01 : O_recon_AR_F { scope = 0; class EventHandlers; };
    class O_recon_AR_F_OCimport_02 : O_recon_AR_F_OCimport_01 { class EventHandlers; };

    class O_recon_CQ_F;
    class O_recon_CQ_F_OCimport_01 : O_recon_CQ_F { scope = 0; class EventHandlers; };
    class O_recon_CQ_F_OCimport_02 : O_recon_CQ_F_OCimport_01 { class EventHandlers; };

    class O_recon_exp_F;
    class O_recon_exp_F_OCimport_01 : O_recon_exp_F { scope = 0; class EventHandlers; };
    class O_recon_exp_F_OCimport_02 : O_recon_exp_F_OCimport_01 { class EventHandlers; };

    class O_recon_F;
    class O_recon_F_OCimport_01 : O_recon_F { scope = 0; class EventHandlers; };
    class O_recon_F_OCimport_02 : O_recon_F_OCimport_01 { class EventHandlers; };

    class O_recon_GL_F;
    class O_recon_GL_F_OCimport_01 : O_recon_GL_F { scope = 0; class EventHandlers; };
    class O_recon_GL_F_OCimport_02 : O_recon_GL_F_OCimport_01 { class EventHandlers; };

    class O_recon_JTAC_F;
    class O_recon_JTAC_F_OCimport_01 : O_recon_JTAC_F { scope = 0; class EventHandlers; };
    class O_recon_JTAC_F_OCimport_02 : O_recon_JTAC_F_OCimport_01 { class EventHandlers; };

    class O_recon_LAT_F;
    class O_recon_LAT_F_OCimport_01 : O_recon_LAT_F { scope = 0; class EventHandlers; };
    class O_recon_LAT_F_OCimport_02 : O_recon_LAT_F_OCimport_01 { class EventHandlers; };

    class O_recon_M_F;
    class O_recon_M_F_OCimport_01 : O_recon_M_F { scope = 0; class EventHandlers; };
    class O_recon_M_F_OCimport_02 : O_recon_M_F_OCimport_01 { class EventHandlers; };

    class O_recon_medic_F;
    class O_recon_medic_F_OCimport_01 : O_recon_medic_F { scope = 0; class EventHandlers; };
    class O_recon_medic_F_OCimport_02 : O_recon_medic_F_OCimport_01 { class EventHandlers; };

    class O_recon_TL_F;
    class O_recon_TL_F_OCimport_01 : O_recon_TL_F { scope = 0; class EventHandlers; };
    class O_recon_TL_F_OCimport_02 : O_recon_TL_F_OCimport_01 { class EventHandlers; };

    class SAM_System_04_base_F;
    class SAM_System_04_base_F_OCimport_01 : SAM_System_04_base_F { scope = 0; class EventHandlers; };
    class SAM_System_04_base_F_OCimport_02 : SAM_System_04_base_F_OCimport_01 { class EventHandlers; };

    class SDV_01_base_F;
    class SDV_01_base_F_OCimport_01 : SDV_01_base_F { scope = 0; class EventHandlers; };
    class SDV_01_base_F_OCimport_02 : SDV_01_base_F_OCimport_01 { class EventHandlers; };

    class O_Sharpshooter_F;
    class O_Sharpshooter_F_OCimport_01 : O_Sharpshooter_F { scope = 0; class EventHandlers; };
    class O_Sharpshooter_F_OCimport_02 : O_Sharpshooter_F_OCimport_01 { class EventHandlers; };

    class O_sniper_F;
    class O_sniper_F_OCimport_01 : O_sniper_F { scope = 0; class EventHandlers; };
    class O_sniper_F_OCimport_02 : O_sniper_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_AAA_F;
    class O_Soldier_AAA_F_OCimport_01 : O_Soldier_AAA_F { scope = 0; class EventHandlers; };
    class O_Soldier_AAA_F_OCimport_02 : O_Soldier_AAA_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_AAR_F;
    class O_Soldier_AAR_F_OCimport_01 : O_Soldier_AAR_F { scope = 0; class EventHandlers; };
    class O_Soldier_AAR_F_OCimport_02 : O_Soldier_AAR_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_AAT_F;
    class O_Soldier_AAT_F_OCimport_01 : O_Soldier_AAT_F { scope = 0; class EventHandlers; };
    class O_Soldier_AAT_F_OCimport_02 : O_Soldier_AAT_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_AA_F;
    class O_Soldier_AA_F_OCimport_01 : O_Soldier_AA_F { scope = 0; class EventHandlers; };
    class O_Soldier_AA_F_OCimport_02 : O_Soldier_AA_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_AHAT_F;
    class O_Soldier_AHAT_F_OCimport_01 : O_Soldier_AHAT_F { scope = 0; class EventHandlers; };
    class O_Soldier_AHAT_F_OCimport_02 : O_Soldier_AHAT_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_AR_F;
    class O_Soldier_AR_F_OCimport_01 : O_Soldier_AR_F { scope = 0; class EventHandlers; };
    class O_Soldier_AR_F_OCimport_02 : O_Soldier_AR_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_AT_F;
    class O_Soldier_AT_F_OCimport_01 : O_Soldier_AT_F { scope = 0; class EventHandlers; };
    class O_Soldier_AT_F_OCimport_02 : O_Soldier_AT_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_A_F;
    class O_Soldier_A_F_OCimport_01 : O_Soldier_A_F { scope = 0; class EventHandlers; };
    class O_Soldier_A_F_OCimport_02 : O_Soldier_A_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_CQ_F;
    class O_Soldier_CQ_F_OCimport_01 : O_Soldier_CQ_F { scope = 0; class EventHandlers; };
    class O_Soldier_CQ_F_OCimport_02 : O_Soldier_CQ_F_OCimport_01 { class EventHandlers; };

    class O_soldier_exp_F;
    class O_soldier_exp_F_OCimport_01 : O_soldier_exp_F { scope = 0; class EventHandlers; };
    class O_soldier_exp_F_OCimport_02 : O_soldier_exp_F_OCimport_01 { class EventHandlers; };

    class O_soldier_F;
    class O_soldier_F_OCimport_01 : O_soldier_F { scope = 0; class EventHandlers; };
    class O_soldier_F_OCimport_02 : O_soldier_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_GL_F;
    class O_Soldier_GL_F_OCimport_01 : O_Soldier_GL_F { scope = 0; class EventHandlers; };
    class O_Soldier_GL_F_OCimport_02 : O_Soldier_GL_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_HAT_F;
    class O_Soldier_HAT_F_OCimport_01 : O_Soldier_HAT_F { scope = 0; class EventHandlers; };
    class O_Soldier_HAT_F_OCimport_02 : O_Soldier_HAT_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_LAT_F;
    class O_Soldier_LAT_F_OCimport_01 : O_Soldier_LAT_F { scope = 0; class EventHandlers; };
    class O_Soldier_LAT_F_OCimport_02 : O_Soldier_LAT_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_lite_F;
    class O_Soldier_lite_F_OCimport_01 : O_Soldier_lite_F { scope = 0; class EventHandlers; };
    class O_Soldier_lite_F_OCimport_02 : O_Soldier_lite_F_OCimport_01 { class EventHandlers; };

    class O_soldier_M_F;
    class O_soldier_M_F_OCimport_01 : O_soldier_M_F { scope = 0; class EventHandlers; };
    class O_soldier_M_F_OCimport_02 : O_soldier_M_F_OCimport_01 { class EventHandlers; };

    class O_soldier_PG_F;
    class O_soldier_PG_F_OCimport_01 : O_soldier_PG_F { scope = 0; class EventHandlers; };
    class O_soldier_PG_F_OCimport_02 : O_soldier_PG_F_OCimport_01 { class EventHandlers; };

    class O_soldier_repair_F;
    class O_soldier_repair_F_OCimport_01 : O_soldier_repair_F { scope = 0; class EventHandlers; };
    class O_soldier_repair_F_OCimport_02 : O_soldier_repair_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_SL_F;
    class O_Soldier_SL_F_OCimport_01 : O_Soldier_SL_F { scope = 0; class EventHandlers; };
    class O_Soldier_SL_F_OCimport_02 : O_Soldier_SL_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_TL_F;
    class O_Soldier_TL_F_OCimport_01 : O_Soldier_TL_F { scope = 0; class EventHandlers; };
    class O_Soldier_TL_F_OCimport_02 : O_Soldier_TL_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_UAV_F;
    class O_T_Soldier_UAV_F_OCimport_01 : O_T_Soldier_UAV_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_UAV_F_OCimport_02 : O_T_Soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class O_soldier_UAV_F;
    class O_soldier_UAV_F_OCimport_01 : O_soldier_UAV_F { scope = 0; class EventHandlers; };
    class O_soldier_UAV_F_OCimport_02 : O_soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class O_spotter_F;
    class O_spotter_F_OCimport_01 : O_spotter_F { scope = 0; class EventHandlers; };
    class O_spotter_F_OCimport_02 : O_spotter_F_OCimport_01 { class EventHandlers; };

    class O_static_AA_F;
    class O_static_AA_F_OCimport_01 : O_static_AA_F { scope = 0; class EventHandlers; };
    class O_static_AA_F_OCimport_02 : O_static_AA_F_OCimport_01 { class EventHandlers; };

    class O_static_AT_F;
    class O_static_AT_F_OCimport_01 : O_static_AT_F { scope = 0; class EventHandlers; };
    class O_static_AT_F_OCimport_02 : O_static_AT_F_OCimport_01 { class EventHandlers; };

    class O_Static_Designator_02_F;
    class O_Static_Designator_02_F_OCimport_01 : O_Static_Designator_02_F { scope = 0; class EventHandlers; };
    class O_Static_Designator_02_F_OCimport_02 : O_Static_Designator_02_F_OCimport_01 { class EventHandlers; };

    class O_support_AMG_F;
    class O_support_AMG_F_OCimport_01 : O_support_AMG_F { scope = 0; class EventHandlers; };
    class O_support_AMG_F_OCimport_02 : O_support_AMG_F_OCimport_01 { class EventHandlers; };

    class O_support_AMort_F;
    class O_support_AMort_F_OCimport_01 : O_support_AMort_F { scope = 0; class EventHandlers; };
    class O_support_AMort_F_OCimport_02 : O_support_AMort_F_OCimport_01 { class EventHandlers; };

    class O_support_GMG_F;
    class O_support_GMG_F_OCimport_01 : O_support_GMG_F { scope = 0; class EventHandlers; };
    class O_support_GMG_F_OCimport_02 : O_support_GMG_F_OCimport_01 { class EventHandlers; };

    class O_support_MG_F;
    class O_support_MG_F_OCimport_01 : O_support_MG_F { scope = 0; class EventHandlers; };
    class O_support_MG_F_OCimport_02 : O_support_MG_F_OCimport_01 { class EventHandlers; };

    class O_support_Mort_F;
    class O_support_Mort_F_OCimport_01 : O_support_Mort_F { scope = 0; class EventHandlers; };
    class O_support_Mort_F_OCimport_02 : O_support_Mort_F_OCimport_01 { class EventHandlers; };

    class Truck_02_Ammo_base_F;
    class Truck_02_Ammo_base_F_OCimport_01 : Truck_02_Ammo_base_F { scope = 0; class EventHandlers; };
    class Truck_02_Ammo_base_F_OCimport_02 : Truck_02_Ammo_base_F_OCimport_01 { class EventHandlers; };

    class Truck_02_box_base_F;
    class Truck_02_box_base_F_OCimport_01 : Truck_02_box_base_F { scope = 0; class EventHandlers; };
    class Truck_02_box_base_F_OCimport_02 : Truck_02_box_base_F_OCimport_01 { class EventHandlers; };

    class Truck_02_base_F;
    class Truck_02_base_F_OCimport_01 : Truck_02_base_F { scope = 0; class EventHandlers; };
    class Truck_02_base_F_OCimport_02 : Truck_02_base_F_OCimport_01 { class EventHandlers; };

    class Truck_02_MRL_base_F;
    class Truck_02_MRL_base_F_OCimport_01 : Truck_02_MRL_base_F { scope = 0; class EventHandlers; };
    class Truck_02_MRL_base_F_OCimport_02 : Truck_02_MRL_base_F_OCimport_01 { class EventHandlers; };

    class Truck_02_medical_base_F;
    class Truck_02_medical_base_F_OCimport_01 : Truck_02_medical_base_F { scope = 0; class EventHandlers; };
    class Truck_02_medical_base_F_OCimport_02 : Truck_02_medical_base_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_cargo_lxWS;
    class O_Truck_02_cargo_lxWS_OCimport_01 : O_Truck_02_cargo_lxWS { scope = 0; class EventHandlers; };
    class O_Truck_02_cargo_lxWS_OCimport_02 : O_Truck_02_cargo_lxWS_OCimport_01 { class EventHandlers; };

    class O_Truck_02_flatbed_lxWS;
    class O_Truck_02_flatbed_lxWS_OCimport_01 : O_Truck_02_flatbed_lxWS { scope = 0; class EventHandlers; };
    class O_Truck_02_flatbed_lxWS_OCimport_02 : O_Truck_02_flatbed_lxWS_OCimport_01 { class EventHandlers; };

    class Truck_02_fuel_base_F;
    class Truck_02_fuel_base_F_OCimport_01 : Truck_02_fuel_base_F { scope = 0; class EventHandlers; };
    class Truck_02_fuel_base_F_OCimport_02 : Truck_02_fuel_base_F_OCimport_01 { class EventHandlers; };

    class Truck_02_transport_base_F;
    class Truck_02_transport_base_F_OCimport_01 : Truck_02_transport_base_F { scope = 0; class EventHandlers; };
    class Truck_02_transport_base_F_OCimport_02 : Truck_02_transport_base_F_OCimport_01 { class EventHandlers; };

    class O_Truck_03_ammo_F;
    class O_Truck_03_ammo_F_OCimport_01 : O_Truck_03_ammo_F { scope = 0; class EventHandlers; };
    class O_Truck_03_ammo_F_OCimport_02 : O_Truck_03_ammo_F_OCimport_01 { class EventHandlers; };

    class O_Truck_03_cargo_RF;
    class O_Truck_03_cargo_RF_OCimport_01 : O_Truck_03_cargo_RF { scope = 0; class EventHandlers; };
    class O_Truck_03_cargo_RF_OCimport_02 : O_Truck_03_cargo_RF_OCimport_01 { class EventHandlers; };

    class O_Truck_03_covered_F;
    class O_Truck_03_covered_F_OCimport_01 : O_Truck_03_covered_F { scope = 0; class EventHandlers; };
    class O_Truck_03_covered_F_OCimport_02 : O_Truck_03_covered_F_OCimport_01 { class EventHandlers; };

    class O_Truck_03_device_F;
    class O_Truck_03_device_F_OCimport_01 : O_Truck_03_device_F { scope = 0; class EventHandlers; };
    class O_Truck_03_device_F_OCimport_02 : O_Truck_03_device_F_OCimport_01 { class EventHandlers; };

    class O_Truck_03_fuel_F;
    class O_Truck_03_fuel_F_OCimport_01 : O_Truck_03_fuel_F { scope = 0; class EventHandlers; };
    class O_Truck_03_fuel_F_OCimport_02 : O_Truck_03_fuel_F_OCimport_01 { class EventHandlers; };

    class O_Truck_03_medical_F;
    class O_Truck_03_medical_F_OCimport_01 : O_Truck_03_medical_F { scope = 0; class EventHandlers; };
    class O_Truck_03_medical_F_OCimport_02 : O_Truck_03_medical_F_OCimport_01 { class EventHandlers; };

    class O_Truck_03_repair_F;
    class O_Truck_03_repair_F_OCimport_01 : O_Truck_03_repair_F { scope = 0; class EventHandlers; };
    class O_Truck_03_repair_F_OCimport_02 : O_Truck_03_repair_F_OCimport_01 { class EventHandlers; };

    class O_Truck_03_transport_F;
    class O_Truck_03_transport_F_OCimport_01 : O_Truck_03_transport_F { scope = 0; class EventHandlers; };
    class O_Truck_03_transport_F_OCimport_02 : O_Truck_03_transport_F_OCimport_01 { class EventHandlers; };

    class O_UAV_01_F;
    class O_UAV_01_F_OCimport_01 : O_UAV_01_F { scope = 0; class EventHandlers; };
    class O_UAV_01_F_OCimport_02 : O_UAV_01_F_OCimport_01 { class EventHandlers; };

    class UAV_04_base_F;
    class UAV_04_base_F_OCimport_01 : UAV_04_base_F { scope = 0; class EventHandlers; };
    class UAV_04_base_F_OCimport_02 : UAV_04_base_F_OCimport_01 { class EventHandlers; };

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

    class VTOL_02_infantry_dynamicLoadout_base_F;
    class VTOL_02_infantry_dynamicLoadout_base_F_OCimport_01 : VTOL_02_infantry_dynamicLoadout_base_F { scope = 0; class EventHandlers; };
    class VTOL_02_infantry_dynamicLoadout_base_F_OCimport_02 : VTOL_02_infantry_dynamicLoadout_base_F_OCimport_01 { class EventHandlers; };

    class VTOL_02_vehicle_dynamicLoadout_base_F;
    class VTOL_02_vehicle_dynamicLoadout_base_F_OCimport_01 : VTOL_02_vehicle_dynamicLoadout_base_F { scope = 0; class EventHandlers; };
    class VTOL_02_vehicle_dynamicLoadout_base_F_OCimport_02 : VTOL_02_vehicle_dynamicLoadout_base_F_OCimport_01 { class EventHandlers; };

    class O_T_ghillie_tna_F;
    class O_T_ghillie_tna_F_OCimport_01 : O_T_ghillie_tna_F { scope = 0; class EventHandlers; };
    class O_T_ghillie_tna_F_OCimport_02 : O_T_ghillie_tna_F_OCimport_01 { class EventHandlers; };

    class O_ghillie_base_F;
    class O_ghillie_base_F_OCimport_01 : O_ghillie_base_F { scope = 0; class EventHandlers; };
    class O_ghillie_base_F_OCimport_02 : O_ghillie_base_F_OCimport_01 { class EventHandlers; };

    class O_T_Soldier_Exp_F;
    class O_T_Soldier_Exp_F_OCimport_01 : O_T_Soldier_Exp_F { scope = 0; class EventHandlers; };
    class O_T_Soldier_Exp_F_OCimport_02 : O_T_Soldier_Exp_F_OCimport_01 { class EventHandlers; };

    class rksla3_aeroshark_blufor;
    class rksla3_aeroshark_blufor_OCimport_01 : rksla3_aeroshark_blufor { scope = 0; class EventHandlers; };
    class rksla3_aeroshark_blufor_OCimport_02 : rksla3_aeroshark_blufor_OCimport_01 { class EventHandlers; };

    class ACE_O_T_SpottingScope : ACE_SpottingScopeObject_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotting Scope";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Spotter_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_T_BoatCrew_EF : O_T_Crew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Aegis_O_T_BoatCrew_EF";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "Aegis_U_O_CombatFatigues_02_ghex_F";

        linkedItems[] = {"V_TacVest_grn","H_HelmetCrew_O_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_TacVest_grn","H_HelmetCrew_O_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_O_T_UAV_02_lxWS : UAV_02_Base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Roshanak AP-5";
        side = 0;
        faction = "opf_t_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_C_Marine_AA_F : Atlas_O_C_Marine_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_mhex_02_F";

        backpack = "B_FieldPack_black_OMAA_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","launch_B_Titan_Olive_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","launch_B_Titan_Olive_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_C_Marine_AR_F : Atlas_O_C_Marine_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_mhex_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_cqb_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_cqb_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTARS_blk_ARCO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTARS_blk_ARCO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_C_Marine_AT_F : Atlas_O_C_Marine_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_mhex_F";

        backpack = "B_FieldPack_black_OMAT_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","launch_I_Titan_short_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","launch_I_Titan_short_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_C_Marine_A_F : Atlas_O_C_Marine_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_mhex_02_F";

        backpack = "B_Carryall_black_OMAmmo_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_C_Marine_Crew_F : Atlas_O_C_Marine_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "Atlas_U_O_CombatUniform_mhex";

        linkedItems[] = {"V_BandolierB_blk_F","H_tank_black_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandolierB_blk_F","H_tank_black_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_CTAR_blk_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_C_Marine_Engineer_F : Atlas_O_C_Marine_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_mhex_F";

        backpack = "B_Carryall_black_OMEng_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","H_Watchcap_blk","G_AirPurifyingRespirator_02_black_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","H_Watchcap_blk","G_AirPurifyingRespirator_02_black_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_C_Marine_Exp_F : Atlas_O_C_Marine_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_mhex_02_F";

        backpack = "B_Carryall_black_OMExp_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_GL_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_GL_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_C_Marine_F : Atlas_O_C_Marine_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_mhex_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_C_Marine_GL_F : Atlas_O_C_Marine_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_mhex_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_GL_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_GL_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_GL_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_GL_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_C_Marine_HG_F : Atlas_O_C_Marine_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_mhex_02_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_cqb_blk_F","lxWS_H_BMask_base","G_Balaclava_light_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_cqb_blk_F","lxWS_H_BMask_base","G_Balaclava_light_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_MMG_01_black_ARCO_BI_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_MMG_01_black_ARCO_BI_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_C_Marine_LAT_F : Atlas_O_C_Marine_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_mhex_F";

        backpack = "B_FieldPack_black_OMLAT_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","launch_RPG32_green_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","launch_RPG32_green_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_C_Marine_M_F : Atlas_O_C_Marine_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_mhex_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_lite_blk_F","H_Headset_Black_F","G_Balaclava_light_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_lite_blk_F","H_Headset_Black_F","G_Balaclava_light_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"srifle_DMR_07_blk_DMS_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_07_blk_DMS_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_C_Marine_Medic_F : Atlas_O_C_Marine_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_mhex_F";

        backpack = "B_FieldPack_black_OMMedic_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_cqb_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_cqb_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_C_Marine_RadioOp_F : Atlas_O_C_Marine_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_mhex_F";

        backpack = "B_RadioBag_01_black_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_C_Marine_SL_F : Atlas_O_C_Marine_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_mhex_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_CTAR_blk_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_C_Marine_TL_F : Atlas_O_C_Marine_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_mhex_02_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_GL_blk_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_CTAR_GL_blk_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_C_Marine_UAV_F : Atlas_O_C_Marine_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_mhex_02_F";

        backpack = "O_UAV_01_backpack_F";

        linkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","O_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierRig_Lite_blk_F","Atlas_H_HelmetCCH_HiCut_Cover_mhex_F","G_Balaclava_light_G_blk_F","O_NVGoggles_blk_F","O_UAVTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_CombatBoat_AT_OPF_T : EF_CombatBoat_AT_East_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (AT)";
        side = 0;
        faction = "opf_t_f";
        crew = "Aegis_O_T_BoatCrew_EF";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_CombatBoat_HMG_OPF_T : EF_CombatBoat_HMG_East_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (HMG)";
        side = 0;
        faction = "opf_t_f";
        crew = "Aegis_O_T_BoatCrew_EF";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_CombatBoat_Unarmed_OPF_T : EF_CombatBoat_Unarmed_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (Unarmed)";
        side = 0;
        faction = "opf_t_f";
        crew = "Aegis_O_T_BoatCrew_EF";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_Gyra_Antiair_OPF_T : EF_Gyra_Antiair_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra AA";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_Gyra_Armed_OPF_T : EF_Gyra_Armed_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra IFV";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_Gyra_HMG_OPF_T : EF_Gyra_HMG_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra HMG";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_Gyra_Mortar_OPF_T : EF_Gyra_Mortar_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra Mortar";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_O_Gyra_OPF_T : EF_Gyra_Unarmed_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gyra";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Land_Pod_Heli_Transport_04_ammo_ghex_F : Land_Pod_Heli_Transport_04_ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Taru Ammo Pod";
        side = 0;
        faction = "opf_t_f";
        crew = "Civilian";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Land_Pod_Heli_Transport_04_bench_ghex_F : Land_Pod_Heli_Transport_04_bench_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Taru Bench Pod";
        side = 0;
        faction = "opf_t_f";
        crew = "O_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Land_Pod_Heli_Transport_04_box_ghex_F : Land_Pod_Heli_Transport_04_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Taru Cargo Pod";
        side = 0;
        faction = "opf_t_f";
        crew = "Civilian";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Land_Pod_Heli_Transport_04_covered_ghex_F : Land_Pod_Heli_Transport_04_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Taru Transport Pod";
        side = 0;
        faction = "opf_t_f";
        crew = "O_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Land_Pod_Heli_Transport_04_fuel_ghex_F : Land_Pod_Heli_Transport_04_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Taru Fuel Pod";
        side = 0;
        faction = "opf_t_f";
        crew = "Civilian";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Land_Pod_Heli_Transport_04_medevac_ghex_F : Land_Pod_Heli_Transport_04_medevac_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Taru Medical Pod";
        side = 0;
        faction = "opf_t_f";
        crew = "O_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Land_Pod_Heli_Transport_04_repair_ghex_F : Land_Pod_Heli_Transport_04_repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Taru Repair Pod";
        side = 0;
        faction = "opf_t_f";
        crew = "Civilian";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_APC_Tracked_02_30mm_lxWS : O_APC_Tracked_02_30mm_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BM-2T Stalker (Bumerang-BM)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_APC_Tracked_02_AA_ghex_F : O_APC_Tracked_02_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZSU-35 Tigris";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_APC_Tracked_02_cannon_ghex_F : O_APC_Tracked_02_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BM-2T Stalker";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_APC_Wheeled_02_hmg_lxWS : O_APC_Wheeled_02_hmg_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar ARMA (HMG)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_APC_Wheeled_02_rcws_v2_ghex_F : APC_Wheeled_02_base_v2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar ARMA";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_APC_Wheeled_02_unarmed_lxWS : O_APC_Wheeled_02_unarmed_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar ARMA (Unarmed)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Boat_Armed_01_hmg_F : O_Boat_Armed_01_hmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Speedboat HMG";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Boat_Transport_01_F : Rubber_duck_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Boat";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Crew_F : O_crew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"H_HelmetCrew_O_ghex_F","V_BandollierB_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetCrew_O_ghex_F","V_BandollierB_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Diver_Exp_F : O_diver_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Diver Explosive Specialist";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_Wetsuit";

        backpack = "B_FieldPack_blk_DiverExp";

        linkedItems[] = {"V_RebreatherIR","G_O_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_RebreatherIR","G_O_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Diver_F : O_diver_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Diver";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_Wetsuit";

        linkedItems[] = {"V_RebreatherIR","G_O_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_RebreatherIR","G_O_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Diver_TL_F : O_diver_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Diver Team Leader";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_Wetsuit";

        linkedItems[] = {"V_RebreatherIR","G_O_Diving","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_RebreatherIR","G_O_Diving","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SDAR_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};

        magazines[] = {"20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_Stanag_green","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Engineer_F : O_engineer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_Carryall_ghex_OTEng_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Fighter_Pilot_F : O_Fighter_Pilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter Pilot";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Pilot_F";

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

    class O_T_GMG_01_A_F : O_GMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307A";
        side = 0;
        faction = "opf_t_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_GMG_01_F : O_GMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_GMG_01_high_F : O_GMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307 (High)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_HMG_01_A_F : O_HMG_01_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312A";
        side = 0;
        faction = "opf_t_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_HMG_01_F : O_HMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_HMG_01_high_F : O_HMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312 (High)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_HeavyGunner_F : O_HeavyGunner_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"MMG_01_ghex_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"MMG_01_ghex_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Heli_Attack_02_dynamicLoadout_F : O_Heli_Attack_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-48 Kajman";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Heli_Light_02_dynamicLoadout_ghex_F : O_Heli_Light_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Heli_Light_02_unarmed_F : O_Heli_Light_02_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka (unarmed)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Heli_Transport_04_F : O_Heli_Transport_04_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Taru";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Heli_Transport_04_ammo_F : O_Heli_Transport_04_ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Taru (Ammo)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Heli_Transport_04_bench_F : O_Heli_Transport_04_bench_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Taru (Bench)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Heli_Transport_04_box_F : O_Heli_Transport_04_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Taru (Cargo)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Heli_Transport_04_covered_F : O_Heli_Transport_04_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Taru (Transport)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Heli_Transport_04_fuel_F : O_Heli_Transport_04_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Taru (Fuel)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Heli_Transport_04_medevac_F : O_Heli_Transport_04_medevac_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Taru (Medical)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Heli_Transport_04_repair_F : O_Heli_Transport_04_repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-290 Taru (Repair)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Helicrew_F : O_helicrew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Pilot_F";

        linkedItems[] = {"H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_F","Throw","Put"};

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

    class O_T_Helipilot_F : O_helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Pilot_F";

        linkedItems[] = {"H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"SMG_02_ACO_F","Throw","Put"};
        respawnWeapons[] = {"SMG_02_ACO_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_LSV_02_AT_F : LSV_02_AT_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LSV Mk. II (Metis-M)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_LSV_02_armed_F : LSV_02_armed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LSV Mk. II (M134)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_LSV_02_unarmed_F : LSV_02_unarmed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LSV Mk. II";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Lifeboat : O_Lifeboat_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rescue Boat";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_MBT_02_arty_ghex_F : O_MBT_02_arty_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "2S9 Sochor";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_MBT_02_cannon_ghex_F : O_MBT_02_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "T100 Black Eagle";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_MBT_02_railgun_ghex_F : O_MBT_02_railgun_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-100X Futura";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_MBT_04_cannon_F : MBT_04_cannon_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-14 Armata";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_MBT_04_command_F : MBT_04_command_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-14K Armata";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_MRAP_02_ghex_F : MRAP_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Karatel";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_MRAP_02_gmg_ghex_F : MRAP_02_gmg_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Karatel (GMG)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_MRAP_02_hmg_ghex_F : MRAP_02_hmg_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Karatel (HMG)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Medic_F : O_medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_FieldPack_ghex_OTMedic_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Mortar_01_F : O_Mortar_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "O_T_Mortar_01_F";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Officer_F : O_officer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_officer"};

        uniformClass = "U_O_T_Officer_F";

        linkedItems[] = {"V_Rangemaster_belt_ghex_F","H_Beret_CSAT_01_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Rangemaster_belt_ghex_F","H_Beret_CSAT_01_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_CTAR_blk_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Pathfinder_F : O_Pathfinder_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Pathfinder";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"V_HarnessO_ghex_F","H_HelmetSpecO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_HarnessO_ghex_F","H_HelmetSpecO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"srifle_DMR_04_NS_LP_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02_ghex_F"};
        respawnWeapons[] = {"srifle_DMR_04_NS_LP_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02_ghex_F"};

        magazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","10Rnd_127x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Pickup_Comms_rf : O_Pickup_Comms_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Comms)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Pickup_rcws_rf : O_Pickup_rcws_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (RCWS)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Pickup_rf : O_Pickup_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Pilot_F : O_Pilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Pilot_F";

        backpack = "ACE_NonSteerableParachute";

        linkedItems[] = {"H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"SMG_02_ACO_F","Throw","Put"};
        respawnWeapons[] = {"SMG_02_ACO_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Plane_CAS_02_dynamicLoadout_ghex_F : O_Plane_CAS_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Yak-130";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Plane_Fighter_02_Stealth_ghex_F : O_Plane_Fighter_02_Stealth_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "To-201 Shikra (Stealth)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Plane_Fighter_02_ghex_F : O_Plane_Fighter_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "To-201 Shikra";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Plane_Transport_01_infantry_ghex_F : O_Plane_Transport_01_infantry_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Iran-150 (Infantry Transport)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Plane_Transport_01_vehicle_ghex_F : O_Plane_Transport_01_vehicle_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Iran-150 (Vehicle Transport)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Quadbike_01_ghex_F : Quadbike_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Radar_System_02_F : Radar_System_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "R-750 Cronus Radar";
        side = 0;
        faction = "opf_t_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_RadioOperator_F : O_T_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_RadioBag_01_ghex_F";

        linkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Recon_AR_F : O_recon_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Autorifleman";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"V_HarnessOSpec_ghex_F","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};
        respawnlinkedItems[] = {"V_HarnessOSpec_ghex_F","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};

        weapons[] = {"arifle_CTARS_blk_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTARS_blk_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","chemlight_red","chemlight_red"};
        respawnMagazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShell","chemlight_red","chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Recon_CQ_F : O_recon_CQ_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (Shotgun)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"V_TacVest_oli","H_HelmetSpecO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_HelmetSpecO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"Aegis_sgun_AA40_ACO_LP_snds_LxWS","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_sgun_AA40_ACO_LP_snds_LxWS","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Recon_Exp_F : O_recon_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Demo Specialist";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_Carryall_ghex_OTReconExp_F";

        linkedItems[] = {"V_HarnessO_ghex_F","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};
        respawnlinkedItems[] = {"V_HarnessO_ghex_F","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Recon_F : O_recon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"V_HarnessOSpec_ghex_F","H_HelmetSpecO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_HarnessOSpec_ghex_F","H_HelmetSpecO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_CTAR_blk_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Recon_GL_F : O_recon_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Grenadier";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"V_HarnessOGL_ghex_F","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};
        respawnlinkedItems[] = {"V_HarnessOGL_ghex_F","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};

        weapons[] = {"arifle_CTAR_GL_blk_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_GL_blk_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Recon_JTAC_F : O_recon_JTAC_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon JTAC";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_RadioBag_01_ghex_F";

        linkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessOGL_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessOGL_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02_ghex_F"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02_ghex_F"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Recon_LAT_F : O_recon_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (AT)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_FieldPack_ghex_OTRPG_AT_F";

        linkedItems[] = {"V_TacVest_oli","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","launch_RPG32_ghex_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","launch_RPG32_ghex_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Recon_M_F : O_recon_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Marksman";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"V_TacVest_oli","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_HelmetSpecO_blk","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_blk_F"};

        weapons[] = {"srifle_DMR_07_blk_DMS_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_07_blk_DMS_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Recon_Medic_F : O_recon_medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Paramedic";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_FieldPack_ghex_OTReconMedic_F";

        linkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetSpecO_ghex_F","V_HarnessO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Recon_TL_F : O_recon_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Team Leader";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_SF"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"V_HarnessOSpec_ghex_F","H_HelmetLeaderO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_HarnessOSpec_ghex_F","H_HelmetLeaderO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_CTAR_blk_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_SAM_System_04_F : SAM_System_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "S-400";
        side = 0;
        faction = "opf_t_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_SDV_01_F : SDV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "SDV";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Diver_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Sharpshooter_F : O_Sharpshooter_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"srifle_DMR_05_KHS_LP_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_05_KHS_LP_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Sniper_F : O_sniper_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Sniper_F";

        linkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"srifle_GM6_ghex_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_GM6_ghex_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_AAA_F : O_Soldier_AAA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_Carryall_ghex_OTAAA_F";

        linkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_AAR_F : O_Soldier_AAR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_Carryall_ghex_OTAAR_AAR_F";

        linkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_AAT_F : O_Soldier_AAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_Carryall_ghex_OTAAT_F";

        linkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_AA_F : O_Soldier_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_FieldPack_ghex_OTAA_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","launch_O_Titan_ghex_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","launch_O_Titan_ghex_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AA","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_AHAT_F : O_Soldier_AHAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Heavy AT";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_Carryall_ghex_OTAHAT_F";

        linkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_AR_F : O_Soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTARS_blk_ARCO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTARS_blk_ARCO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_AT_F : O_Soldier_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_FieldPack_ghex_OTAT_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","launch_O_Titan_short_ghex_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","launch_O_Titan_short_ghex_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_A_F : O_Soldier_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_Carryall_ghex_OTAmmo_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_CBRN_F : O_T_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Specialist";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"V_TacVest_oli","H_HelmetO_ghex_F","G_AirPurifyingRespirator_02_olive_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_HelmetO_ghex_F","G_AirPurifyingRespirator_02_olive_F","ItemMap","ItemCompass","ChemicalDetector_01_watch_F","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_CQ_F : O_Soldier_CQ_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"V_TacVest_oli","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"Aegis_sgun_AA40_ACO_LP_LxWS","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_sgun_AA40_ACO_LP_LxWS","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Pellets_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","8Rnd_12Gauge_AA40_Slug_lxWS","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_Exp_F : O_soldier_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_Carryall_ghex_OTExp_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_F : O_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ARCO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ARCO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_GL_F : O_Soldier_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"V_HarnessOGL_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_HarnessOGL_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_GL_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_GL_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_HAT_F : O_Soldier_HAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Heavy AT)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_FieldPack_ghex_OTHAT_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","launch_O_Vorona_green_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","launch_O_Vorona_green_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Vorona_HEAT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","Vorona_HEAT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_LAT_F : O_Soldier_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_FieldPack_ghex_OTLAT_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","launch_RPG32_ghex_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","launch_RPG32_ghex_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_Lite_F : O_Soldier_lite_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"V_BandollierB_ghex_F","H_MilCap_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_ghex_F","H_MilCap_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_CTAR_blk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_M_F : O_soldier_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"srifle_DMR_07_blk_DMS_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_DMR_07_blk_DMS_F","hgun_Rook40_F","Throw","Put","Rangefinder"};

        magazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_PG_F : O_soldier_PG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Para Trooper";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_Parachute";

        linkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_Repair_F : O_soldier_repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_FieldPack_ghex_OTRepair_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_HarnessO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_SL_F : O_Soldier_SL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"V_TacVest_oli","H_HelmetLeaderO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_HelmetLeaderO_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ARCO_Pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_CTAR_blk_ARCO_Pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_TL_F : O_Soldier_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"H_HelmetLeaderO_ghex_F","V_HarnessOGL_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetLeaderO_ghex_F","V_HarnessOGL_ghex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_GL_blk_ARCO_Pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_CTAR_GL_blk_ARCO_Pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_UAV_02_lxWS_F : O_T_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AP-5)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "Aegis_O_T_UAV_02_backpack_lxWS";

        linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_UAV_F : O_soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "O_UAV_01_backpack_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Soldier_unarmed_F : O_T_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        linkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_ghex_F","H_HelmetO_ghex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class O_T_Spotter_F : O_spotter_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Sniper_F";

        linkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02_ghex_F"};
        respawnWeapons[] = {"arifle_CTAR_blk_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02_ghex_F"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Static_AA_F : O_static_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AA)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Static_AT_F : O_static_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AT)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Static_Designator_02_F : O_Static_Designator_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Remote Designator";
        side = 0;
        faction = "opf_t_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Support_AMG_F : O_support_AMG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (HMG/GMG)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "O_HMG_01_support_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Support_AMort_F : O_support_AMort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (Mk6)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "O_Mortar_01_support_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Support_GMG_F : O_support_GMG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (GMG)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "O_GMG_01_weapon_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Support_MG_F : O_support_MG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (HMG)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "O_HMG_01_weapon_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Support_Mort_F : O_support_Mort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mk6)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "O_T_Mortar_01_weapon_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_TacChestrig_oli_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Survivor_F : O_T_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

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

    class O_T_Truck_02_Ammo_F : Truck_02_Ammo_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Ammo";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Truck_02_Box_F : Truck_02_box_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Repair";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Truck_02_F : Truck_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Transport (Covered)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Truck_02_MRL_F : Truck_02_MRL_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak MRL";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Truck_02_Medical_F : Truck_02_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Medical";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Truck_02_cargo_lxWS : O_Truck_02_cargo_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Cargo";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Truck_02_flatbed_lxWS : O_Truck_02_flatbed_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Flatbed";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Truck_02_fuel_F : Truck_02_fuel_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Fuel";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Truck_02_transport_F : Truck_02_transport_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Transport";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Truck_03_ammo_ghex_F : O_Truck_03_ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Ammo";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Truck_03_cargo_RF : O_Truck_03_cargo_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Cargo";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Truck_03_covered_ghex_F : O_Truck_03_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Transport (covered)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Truck_03_device_ghex_F : O_Truck_03_device_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Device";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Truck_03_fuel_ghex_F : O_Truck_03_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Fuel";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Truck_03_medical_ghex_F : O_Truck_03_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Medical";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Truck_03_repair_ghex_F : O_Truck_03_repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Repair";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_Truck_03_transport_ghex_F : O_Truck_03_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Transport";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_UAV_01_F : O_UAV_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Tayran AR-2";
        side = 0;
        faction = "opf_t_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_UAV_04_CAS_F : UAV_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Burraq UCAV";
        side = 0;
        faction = "opf_t_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_UAV_06_F : UAV_06_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jinaah AL-6";
        side = 0;
        faction = "opf_t_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_UAV_06_medical_F : UAV_06_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jinaah AL-6 (Medical)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_UGV_01_ghex_F : UGV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Saif";
        side = 0;
        faction = "opf_t_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_UGV_01_medical_ghex_F : UGV_01_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Saif Medical";
        side = 0;
        faction = "opf_t_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_UGV_01_rcws_ghex_F : UGV_01_rcws_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Saif RCWS";
        side = 0;
        faction = "opf_t_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_UGV_02_Demining_F : UGV_02_Demining_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Akinaka ED-1D";
        side = 0;
        faction = "opf_t_f";
        crew = "O_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_VTOL_02_infantry_dynamicLoadout_F : VTOL_02_infantry_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Y-32 Xi'an (Infantry Transport)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_VTOL_02_vehicle_dynamicLoadout_F : VTOL_02_vehicle_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Y-32 Xi'an (Vehicle Transport)";
        side = 0;
        faction = "opf_t_f";
        crew = "O_T_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_ghillie_spotter_tna_F : O_T_ghillie_tna_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter (Jungle)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_FullGhillie_tna_F";

        linkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02_ghex_F"};
        respawnWeapons[] = {"arifle_CTAR_blk_ARCO_Pointer_Snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02_ghex_F"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_ghillie_tna_F : O_ghillie_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper (Jungle)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_FullGhillie_tna_F";

        linkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"V_TacChestrig_oli_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"srifle_GM6_ghex_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_GM6_ghex_LRPS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_soldier_UAV_06_F : O_T_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "O_UAV_06_backpack_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_soldier_UAV_06_medical_F : O_T_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "O_UAV_06_medical_backpack_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_soldier_UGV_02_Demining_F : O_T_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1D)";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "O_UGV_02_Demining_backpack_F";

        linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_T_soldier_mine_F : O_T_Soldier_Exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mine Specialist";
        side = 0;
        faction = "opf_t_f";

        identityTypes[] = {"LanguageCHI_F","Head_Asian","G_IRAN_default"};

        uniformClass = "U_O_T_Soldier_F";

        backpack = "B_Carryall_ghex_Mine";

        linkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};
        respawnlinkedItems[] = {"H_HelmetO_ghex_F","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_NVGoggles_ghex_F"};

        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F","hgun_Rook40_F","Throw","Put"};

        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class rksla3_aeroshark_opfor : rksla3_aeroshark_blufor_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Aeroshark Mini UAV";
        side = 0;
        faction = "opf_t_f";
        crew = "O_UAV_AI";

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
    class East {
        class OPF_T_F {
            class Air {
                class O_T_PO30_Squadron {
                    name = "PO-30 Squadron";
                    side = 0;
                    rarityGroup = 0.1;
                    faction = "OPF_T_F";

                    class Unit0 {
                        vehicle = "O_Heli_Attack_02_F";
                        rank = "CAPTAIN";
                        position[] = {0,15,0};
                    };

                    class Unit1 {
                        vehicle = "O_Heli_Attack_02_F";
                        rank = "LIEUTENANT";
                        position[] = {15,0,0};
                    };
                };
                class O_T_VTOL_Transport {
                    name = "Y-32 (VTOL) Transport";
                    side = 0;
                    rarityGroup = 0.5;
                    faction = "OPF_T_F";

                    class Unit0 {
                        vehicle = "O_T_VTOL_02_infantry_ghex_F";
                        rank = "CAPTAIN";
                        position[] = {0,15,0};
                    };
                };
            };
            class Armored {
                class O_T_SPGPlatoon_Scorcher {
                    name = "Artillery SPG Platoon";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";

                    class Unit0 {
                        vehicle = "O_T_MBT_02_arty_ghex_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_MBT_02_arty_ghex_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_MBT_02_arty_ghex_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_MBT_02_arty_ghex_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class O_T_SPGSection_Scorcher {
                    name = "Artillery SPG Section";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";

                    class Unit0 {
                        vehicle = "O_T_MBT_02_arty_ghex_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_MBT_02_arty_ghex_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class O_T_TankPlatoon {
                    name = "Tank Platoon";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_T_MBT_02_cannon_ghex_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_MBT_02_cannon_ghex_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_MBT_02_cannon_ghex_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_MBT_02_cannon_ghex_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class O_T_TankPlatoon_AA {
                    name = "Tank Platoon (Combined)";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_T_MBT_02_cannon_ghex_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_APC_Tracked_02_AA_ghex_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_MBT_02_cannon_ghex_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_APC_Tracked_02_AA_ghex_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class O_T_TankPlatoon_Heavy {
                    name = "Tank Platoon (Heavy)";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_T_MBT_04_command_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_MBT_04_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_MBT_04_cannon_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_MBT_04_cannon_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class O_T_TankSection {
                    name = "Tank Section";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_T_MBT_02_cannon_ghex_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_MBT_02_cannon_ghex_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class O_T_TankSection_Heavy {
                    name = "Tank Section (Heavy)";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

                    class Unit0 {
                        vehicle = "O_T_MBT_04_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_MBT_04_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class O_T_InfHQ {
                    name = "Infantry HQ";
                    side = 0;
                    rarityGroup = 0.1;
                    faction = "OPF_T_F";

                    class Unit0 {
                        vehicle = "O_T_soldier_SL_F";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_medic_F";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_repair_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_soldier_F";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };
                };
                class O_T_InfSentry {
                    name = "Sentry";
                    side = 0;
                    rarityGroup = 0.5;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class O_T_InfSniper {
                    name = "Sniper Team";
                    side = 0;
                    rarityGroup = 0.05;
                    faction = "OPF_T_F";

                    class Unit0 {
                        vehicle = "O_T_sniper_F";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_spotter_F";
                        rank = "SERGEANT";
                        position[] = {3,0,0};
                    };
                };
                class O_T_InfSquad {
                    name = "Rifle Squad";
                    side = 0;
                    rarityGroup = 0.5;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_T_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class O_T_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 0;
                    rarityGroup = 0.5;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_M_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_T_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_T_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class O_T_InfSupTeam {
                    name = "Support Team";
                    side = 0;
                    rarityGroup = 0.3;
                    faction = "OPF_T_F";

                    class Unit0 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                };
                class O_T_InfTeam {
                    name = "Fire Team";
                    side = 0;
                    rarityGroup = 0.3;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_T_InfTeam_AA {
                    name = "Air-defense Team";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_T_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 0;
                    rarityGroup = 0.1;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_T_InfTeam_AT_Heavy {
                    name = "Anti-Armor Team (Heavy)";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_HAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_soldier_HAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_AHAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_T_InfWepTeam {
                    name = "Weapons Team";
                    side = 0;
                    rarityGroup = 0.3;
                    faction = "OPF_T_F";

                    class Unit0 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                };
            };
            class MarInfantry {
                class Atlas_O_T_InfSentry_M {
                    name = "Sentry";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_C_Marine_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_C_Marine_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Atlas_O_T_InfSquad_M {
                    name = "Rifle Squad";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_C_Marine_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_C_Marine_RadioOp_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_C_Marine_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_C_Marine_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_O_C_Marine_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_O_C_Marine_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_O_C_Marine_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_O_C_Marine_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Atlas_O_T_InfSquad_Weapons_M {
                    name = "Weapons Squad";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_C_Marine_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_C_Marine_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_C_Marine_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_C_Marine_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_O_C_Marine_AT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_O_C_Marine_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_O_C_Marine_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_O_C_Marine_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class Atlas_O_T_InfTeam_AA_M {
                    name = "Air-defense Team";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_C_Marine_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_C_Marine_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_C_Marine_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_C_Marine_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Atlas_O_T_InfTeam_AT_M {
                    name = "Anti-armor Team";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_C_Marine_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_C_Marine_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_C_Marine_AT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_C_Marine_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Atlas_O_T_InfTeam_M {
                    name = "Fire Team";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_C_Marine_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_C_Marine_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_C_Marine_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_C_Marine_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class O_T_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_APC_Wheeled_02_rcws_v2_ghex_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_T_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class O_T_MechInf_AA {
                    name = "Mechanized Air-defense Squad";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_APC_Tracked_02_cannon_ghex_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {10,-20,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-10,-20,0};
                    };

                    class Unit5 {
                        vehicle = "O_T_soldier_AA_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_T_soldier_AAA_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_T_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_T_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class O_T_MechInf_AT {
                    name = "Mechanized Anti-armor Squad";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_APC_Tracked_02_cannon_ghex_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_T_soldier_AT_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_T_soldier_AAT_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_T_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_T_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class O_T_MechInf_CoyHQ {
                    name = "Mechanized Company HQ";
                    rarityGroup = 0.1;
                    faction = "OPF_T_F";

                    class Unit0 {
                        vehicle = "O_T_officer_F";
                        rank = "CAPTAIN";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_officer_F";
                        rank = "LIEUTENANT";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_APC_Wheeled_02_rcws_ghex_F";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_soldier_repair_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                };
                class O_T_MechInf_Section1 {
                    name = "Mechanized 1st Rifle Section";
                    rarityGroup = 0.9;
                    faction = "OPF_T_F";

                    class Unit0 {
                        vehicle = "O_T_Soldier_SL_F";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_Soldier_TL_F";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_APC_Wheeled_02_rcws_ghex_F";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_Soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };

                    class Unit5 {
                        vehicle = "O_T_Soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };

                    class Unit6 {
                        vehicle = "O_T_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {11,0,0};
                    };

                    class Unit7 {
                        vehicle = "O_T_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {13,0,0};
                    };

                    class Unit8 {
                        vehicle = "O_T_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {15,0,0};
                    };
                };
                class O_T_MechInf_Section2 {
                    name = "Mechanized 2nd Rifle Section";
                    rarityGroup = 0.9;
                    faction = "OPF_T_F";

                    class Unit0 {
                        vehicle = "O_T_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_Soldier_TL_F";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_APC_Wheeled_02_rcws_ghex_F";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_Soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };

                    class Unit5 {
                        vehicle = "O_T_Soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };

                    class Unit6 {
                        vehicle = "O_T_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {11,0,0};
                    };

                    class Unit7 {
                        vehicle = "O_T_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {13,0,0};
                    };

                    class Unit8 {
                        vehicle = "O_T_soldier_repair_F";
                        rank = "PRIVATE";
                        position[] = {15,0,0};
                    };
                };
                class O_T_MechInf_Section3 {
                    name = "Mechanized 3rd Rifle Section";
                    rarityGroup = 0.9;
                    faction = "OPF_T_F";

                    class Unit0 {
                        vehicle = "O_T_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_Soldier_TL_F";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_APC_Wheeled_02_rcws_ghex_F";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_Soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_Soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };

                    class Unit5 {
                        vehicle = "O_T_Soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };

                    class Unit6 {
                        vehicle = "O_T_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {11,0,0};
                    };

                    class Unit7 {
                        vehicle = "O_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {13,0,0};
                    };
                };
                class O_T_MechInf_SectionAT {
                    name = "Mechanized Anti-Tank Section";
                    rarityGroup = 0.5;
                    faction = "OPF_T_F";

                    class Unit0 {
                        vehicle = "O_T_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_Soldier_TL_F";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_APC_Wheeled_02_rcws_ghex_F";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_Soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_Soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };

                    class Unit5 {
                        vehicle = "O_T_Soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };

                    class Unit6 {
                        vehicle = "O_T_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {11,0,0};
                    };

                    class Unit7 {
                        vehicle = "O_T_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {13,0,0};
                    };
                };
                class O_T_MechInf_SectionMG {
                    name = "Mechanized Weapons Section";
                    rarityGroup = 0.5;
                    faction = "OPF_T_F";

                    class Unit0 {
                        vehicle = "O_T_Soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_Soldier_TL_F";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_APC_Wheeled_02_rcws_ghex_F";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_Soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_Soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };

                    class Unit5 {
                        vehicle = "O_T_Soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };

                    class Unit6 {
                        vehicle = "O_T_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {11,0,0};
                    };

                    class Unit7 {
                        vehicle = "O_T_Soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {13,0,0};
                    };
                };
                class O_T_MechInf_Support {
                    name = "Mechanized Support Squad";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_APC_Wheeled_02_rcws_v2_ghex_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_repair_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_T_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_T_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-20,-2,0};
                    };
                };
            };
            class Motorized_MTP {
                class O_T_MotInf_AA {
                    name = "Motorized Air-defense Team";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_MRAP_02_ghex_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class O_T_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 0;
                    rarityGroup = 0.1;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_MRAP_02_ghex_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class O_T_MotInf_ATV {
                    name = "Motorized ATV Team";
                    side = 0;
                    rarityGroup = 0.2;
                    faction = "OPF_T_F";

                    class Unit0 {
                        vehicle = "O_Quadbike_ALIVE";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_Quadbike_ALIVE";
                        rank = "CORPORAL";
                        position[] = {-5,-7,0};
                    };
                };
                class O_T_MotInf_GMGTeam {
                    name = "Motorized GMG Team";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_MRAP_02_ghex_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_support_GMG_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class O_T_MotInf_HQ {
                    name = "Motorized HQ";
                    side = 0;
                    rarityGroup = 0.1;
                    faction = "OPF_T_F";

                    class Unit0 {
                        vehicle = "O_T_soldier_SL_F";
                        rank = "LIEUTENANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_MRAP_02_ghex_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {3,0,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_Medic_F";
                        rank = "CORPORAL";
                        position[] = {5,0,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_soldier_repair_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                };
                class O_T_MotInf_MGTeam {
                    name = "Motorized HMG Team";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_MRAP_02_ghex_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_support_MG_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class O_T_MotInf_MortTeam {
                    name = "Motorized Mortar Team";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_MRAP_02_ghex_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_support_Mort_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_support_AMort_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class O_T_MotInf_Reinforcements {
                    name = "Motorized Reinforcements";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_Truck_03_transport_ghex_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "O_T_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-5,-8,0};
                    };

                    class Unit8 {
                        vehicle = "O_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-10,0};
                    };

                    class Unit9 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "O_T_soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "O_T_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };
                };
                class O_T_MotInf_Section {
                    name = "Motorized Section";
                    side = 0;
                    rarityGroup = 0.5;
                    faction = "OPF_T_F";

                    class Unit0 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_MRAP_02_hmg_ghex_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_MRAP_02_gmg_ghex_F";
                        rank = "CORPORAL";
                        position[] = {-5,-7,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };

                    class Unit5 {
                        vehicle = "O_T_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };

                    class Unit6 {
                        vehicle = "O_T_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };

                    class Unit7 {
                        vehicle = "O_T_soldier_F";
                        rank = "PRIVATE";
                        position[] = {11,0,0};
                    };
                };
                class O_T_MotInf_Team {
                    name = "Motorized Team";
                    side = 0;
                    rarityGroup = 0.3;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_MRAP_02_gmg_ghex_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class O_T_MotInf_Transport {
                    name = "Motorized Transport";
                    side = 0;
                    rarityGroup = 0.5;
                    faction = "OPF_T_F";

                    class Unit0 {
                        vehicle = "O_T_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_soldier_AAR_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_T_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_T_soldier_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "O_T_Truck_03_covered_ghex_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Naval {
                class O_T_diverTeam {
                    name = "Diver Team";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_naval.paa";

                    class Unit0 {
                        vehicle = "O_T_diver_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_diver_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_diver_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_diver_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_T_diverTeam_Boat {
                    name = "Diver Team (Boat)";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_naval.paa";

                    class Unit0 {
                        vehicle = "O_T_diver_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_diver_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_diver_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_diver_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_Boat_Transport_01_F";
                        rank = "PRIVATE";
                        position[] = {-32,-57,0};
                    };
                };
                class O_T_diverTeam_SDV {
                    name = "Diver Team (SDV)";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_naval.paa";

                    class Unit0 {
                        vehicle = "O_T_diver_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_diver_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_diver_F";
                        rank = "PRIVATE";
                        position[] = {-6,-6,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_diver_F";
                        rank = "PRIVATE";
                        position[] = {11,-11,0};
                    };

                    class Unit4 {
                        vehicle = "O_SDV_01_F";
                        rank = "PRIVATE";
                        position[] = {-16,-16,0};
                    };

                    class Unit5 {
                        vehicle = "O_SDV_01_F";
                        rank = "PRIVATE";
                        position[] = {21,-21,0};
                    };
                };
                class O_T_sentryTeam_SpeedBoat {
                    name = "Sentry Team (Speed Boat)";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_naval.paa";

                    class Unit0 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_Boat_Armed_01_hmg_F";
                        rank = "PRIVATE";
                        position[] = {-32,-57,0};
                    };
                };
            };
            class SpecOps {
                class O_T_ReconSquad {
                    name = "Recon Squad";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "O_T_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_recon_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_recon_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_T_recon_JTAC_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "O_T_recon_exp_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "O_T_Pathfinder_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class O_T_SniperTeam {
                    name = "Sniper Team";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "O_T_spotter_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_sniper_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
                class O_T_diverTeam {
                    name = "Diver Team";
                    side = 0;
                    rarityGroup = 0.3;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_diver_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_diver_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_diver_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_diver_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_T_reconPatrol {
                    name = "Recon Patrol";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "O_T_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_recon_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_T_reconSentry {
                    name = "Recon Sentry";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "O_T_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_recon_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class O_T_reconTeam {
                    name = "Recon Team";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "O_T_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_recon_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "O_T_recon_JTAC_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "O_T_recon_exp_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
            };
            class Support {
                class O_T_recon_EOD {
                    name = "Recon Support Team (EOD)";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

                    class Unit0 {
                        vehicle = "O_T_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_recon_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_recon_exp_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_recon_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_T_support_CLS {
                    name = "Support Team (CLS)";
                    side = 0;
                    rarityGroup = 0.1;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_medic_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_T_support_ENG {
                    name = "Support Team (Engineer)";
                    side = 0;
                    rarityGroup = 0.1;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_repair_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_T_support_EOD {
                    name = "Support Team (EOD)";
                    side = 0;
                    rarityGroup = 0.1;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "O_T_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_T_support_GMG {
                    name = "GMG Team";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_support_GMG_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class O_T_support_MG {
                    name = "HMG Team";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_support_MG_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class O_T_support_Mort {
                    name = "Mortar Team";
                    side = 0;
                    faction = "OPF_T_F";
                    icon = "\A3\ui_f\data\map\markers\nato\o_mortar.paa";

                    class Unit0 {
                        vehicle = "O_T_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "O_T_support_Mort_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "O_T_support_AMort_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
        };
    };
};
