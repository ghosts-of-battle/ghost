//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class Atlas_OPF_W_F {
        displayName = "Belarus";
        side = 0;
        priority = 3;
        icon = "\A3_Atlas\Data_F_Atlas\FactionIcons\CfgFactionClasses_OPF_W_CA.paa";
        flag = "\A3_Atlas\Data_F_Atlas\Flags\flag_Belarus_CO.paa";
    };
};

class CfgVehicles {

    class O_T_APC_Tracked_02_30mm_lxWS;
    class O_T_APC_Tracked_02_30mm_lxWS_OCimport_01 : O_T_APC_Tracked_02_30mm_lxWS { scope = 0; class EventHandlers; };
    class O_T_APC_Tracked_02_30mm_lxWS_OCimport_02 : O_T_APC_Tracked_02_30mm_lxWS_OCimport_01 { class EventHandlers; };

    class O_APC_Tracked_02_AA_F;
    class O_APC_Tracked_02_AA_F_OCimport_01 : O_APC_Tracked_02_AA_F { scope = 0; class EventHandlers; };
    class O_APC_Tracked_02_AA_F_OCimport_02 : O_APC_Tracked_02_AA_F_OCimport_01 { class EventHandlers; };

    class APC_Tracked_02_medical_base_F;
    class APC_Tracked_02_medical_base_F_OCimport_01 : APC_Tracked_02_medical_base_F { scope = 0; class EventHandlers; };
    class APC_Tracked_02_medical_base_F_OCimport_02 : APC_Tracked_02_medical_base_F_OCimport_01 { class EventHandlers; };

    class APC_Wheeled_02_base_v2_F;
    class APC_Wheeled_02_base_v2_F_OCimport_01 : APC_Wheeled_02_base_v2_F { scope = 0; class EventHandlers; };
    class APC_Wheeled_02_base_v2_F_OCimport_02 : APC_Wheeled_02_base_v2_F_OCimport_01 { class EventHandlers; };

    class O_T_APC_Wheeled_02_unarmed_lxWS;
    class O_T_APC_Wheeled_02_unarmed_lxWS_OCimport_01 : O_T_APC_Wheeled_02_unarmed_lxWS { scope = 0; class EventHandlers; };
    class O_T_APC_Wheeled_02_unarmed_lxWS_OCimport_02 : O_T_APC_Wheeled_02_unarmed_lxWS_OCimport_01 { class EventHandlers; };

    class O_crew_F;
    class O_crew_F_OCimport_01 : O_crew_F { scope = 0; class EventHandlers; };
    class O_crew_F_OCimport_02 : O_crew_F_OCimport_01 { class EventHandlers; };

    class O_engineer_F;
    class O_engineer_F_OCimport_01 : O_engineer_F { scope = 0; class EventHandlers; };
    class O_engineer_F_OCimport_02 : O_engineer_F_OCimport_01 { class EventHandlers; };

    class Atlas_O_W_Helipilot_F;
    class Atlas_O_W_Helipilot_F_OCimport_01 : Atlas_O_W_Helipilot_F { scope = 0; class EventHandlers; };
    class Atlas_O_W_Helipilot_F_OCimport_02 : Atlas_O_W_Helipilot_F_OCimport_01 { class EventHandlers; };

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

    class Aegis_Heli_Attack_04_base_F;
    class Aegis_Heli_Attack_04_base_F_OCimport_01 : Aegis_Heli_Attack_04_base_F { scope = 0; class EventHandlers; };
    class Aegis_Heli_Attack_04_base_F_OCimport_02 : Aegis_Heli_Attack_04_base_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Light_02_dynamicLoadout_F;
    class O_Heli_Light_02_dynamicLoadout_F_OCimport_01 : O_Heli_Light_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_Heli_Light_02_dynamicLoadout_F_OCimport_02 : O_Heli_Light_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class O_Heli_Light_02_unarmed_F;
    class O_Heli_Light_02_unarmed_F_OCimport_01 : O_Heli_Light_02_unarmed_F { scope = 0; class EventHandlers; };
    class O_Heli_Light_02_unarmed_F_OCimport_02 : O_Heli_Light_02_unarmed_F_OCimport_01 { class EventHandlers; };

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

    class O_MBT_02_cannon_F;
    class O_MBT_02_cannon_F_OCimport_01 : O_MBT_02_cannon_F { scope = 0; class EventHandlers; };
    class O_MBT_02_cannon_F_OCimport_02 : O_MBT_02_cannon_F_OCimport_01 { class EventHandlers; };

    class O_MRAP_02_F;
    class O_MRAP_02_F_OCimport_01 : O_MRAP_02_F { scope = 0; class EventHandlers; };
    class O_MRAP_02_F_OCimport_02 : O_MRAP_02_F_OCimport_01 { class EventHandlers; };

    class O_MRAP_02_gmg_F;
    class O_MRAP_02_gmg_F_OCimport_01 : O_MRAP_02_gmg_F { scope = 0; class EventHandlers; };
    class O_MRAP_02_gmg_F_OCimport_02 : O_MRAP_02_gmg_F_OCimport_01 { class EventHandlers; };

    class O_MRAP_02_hmg_F;
    class O_MRAP_02_hmg_F_OCimport_01 : O_MRAP_02_hmg_F { scope = 0; class EventHandlers; };
    class O_MRAP_02_hmg_F_OCimport_02 : O_MRAP_02_hmg_F_OCimport_01 { class EventHandlers; };

    class O_medic_F;
    class O_medic_F_OCimport_01 : O_medic_F { scope = 0; class EventHandlers; };
    class O_medic_F_OCimport_02 : O_medic_F_OCimport_01 { class EventHandlers; };

    class O_Mortar_01_F;
    class O_Mortar_01_F_OCimport_01 : O_Mortar_01_F { scope = 0; class EventHandlers; };
    class O_Mortar_01_F_OCimport_02 : O_Mortar_01_F_OCimport_01 { class EventHandlers; };

    class O_officer_F;
    class O_officer_F_OCimport_01 : O_officer_F { scope = 0; class EventHandlers; };
    class O_officer_F_OCimport_02 : O_officer_F_OCimport_01 { class EventHandlers; };

    class O_Plane_CAS_02_dynamicLoadout_F;
    class O_Plane_CAS_02_dynamicLoadout_F_OCimport_01 : O_Plane_CAS_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_Plane_CAS_02_dynamicLoadout_F_OCimport_02 : O_Plane_CAS_02_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class Quadbike_01_base_F;
    class Quadbike_01_base_F_OCimport_01 : Quadbike_01_base_F { scope = 0; class EventHandlers; };
    class Quadbike_01_base_F_OCimport_02 : Quadbike_01_base_F_OCimport_01 { class EventHandlers; };

    class Atlas_O_W_Soldier_F;
    class Atlas_O_W_Soldier_F_OCimport_01 : Atlas_O_W_Soldier_F { scope = 0; class EventHandlers; };
    class Atlas_O_W_Soldier_F_OCimport_02 : Atlas_O_W_Soldier_F_OCimport_01 { class EventHandlers; };

    class Atlas_O_W_Soldier_recon_base;
    class Atlas_O_W_Soldier_recon_base_OCimport_01 : Atlas_O_W_Soldier_recon_base { scope = 0; class EventHandlers; };
    class Atlas_O_W_Soldier_recon_base_OCimport_02 : Atlas_O_W_Soldier_recon_base_OCimport_01 { class EventHandlers; };

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

    class O_soldier_UAV_F;
    class O_soldier_UAV_F_OCimport_01 : O_soldier_UAV_F { scope = 0; class EventHandlers; };
    class O_soldier_UAV_F_OCimport_02 : O_soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class O_static_AA_F;
    class O_static_AA_F_OCimport_01 : O_static_AA_F { scope = 0; class EventHandlers; };
    class O_static_AA_F_OCimport_02 : O_static_AA_F_OCimport_01 { class EventHandlers; };

    class O_static_AT_F;
    class O_static_AT_F_OCimport_01 : O_static_AT_F { scope = 0; class EventHandlers; };
    class O_static_AT_F_OCimport_02 : O_static_AT_F_OCimport_01 { class EventHandlers; };

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

    class O_Truck_02_Ammo_F;
    class O_Truck_02_Ammo_F_OCimport_01 : O_Truck_02_Ammo_F { scope = 0; class EventHandlers; };
    class O_Truck_02_Ammo_F_OCimport_02 : O_Truck_02_Ammo_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_covered_F;
    class O_Truck_02_covered_F_OCimport_01 : O_Truck_02_covered_F { scope = 0; class EventHandlers; };
    class O_Truck_02_covered_F_OCimport_02 : O_Truck_02_covered_F_OCimport_01 { class EventHandlers; };

    class O_Truck_02_MRL_F;
    class O_Truck_02_MRL_F_OCimport_01 : O_Truck_02_MRL_F { scope = 0; class EventHandlers; };
    class O_Truck_02_MRL_F_OCimport_02 : O_Truck_02_MRL_F_OCimport_01 { class EventHandlers; };

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

    class O_Truck_03_ammo_F;
    class O_Truck_03_ammo_F_OCimport_01 : O_Truck_03_ammo_F { scope = 0; class EventHandlers; };
    class O_Truck_03_ammo_F_OCimport_02 : O_Truck_03_ammo_F_OCimport_01 { class EventHandlers; };

    class O_Truck_03_covered_F;
    class O_Truck_03_covered_F_OCimport_01 : O_Truck_03_covered_F { scope = 0; class EventHandlers; };
    class O_Truck_03_covered_F_OCimport_02 : O_Truck_03_covered_F_OCimport_01 { class EventHandlers; };

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

    class UGV_01_base_F;
    class UGV_01_base_F_OCimport_01 : UGV_01_base_F { scope = 0; class EventHandlers; };
    class UGV_01_base_F_OCimport_02 : UGV_01_base_F_OCimport_01 { class EventHandlers; };

    class UGV_01_medical_base_F;
    class UGV_01_medical_base_F_OCimport_01 : UGV_01_medical_base_F { scope = 0; class EventHandlers; };
    class UGV_01_medical_base_F_OCimport_02 : UGV_01_medical_base_F_OCimport_01 { class EventHandlers; };

    class UGV_01_rcws_base_F;
    class UGV_01_rcws_base_F_OCimport_01 : UGV_01_rcws_base_F { scope = 0; class EventHandlers; };
    class UGV_01_rcws_base_F_OCimport_02 : UGV_01_rcws_base_F_OCimport_01 { class EventHandlers; };

    class O_soldier_M_F;
    class O_soldier_M_F_OCimport_01 : O_soldier_M_F { scope = 0; class EventHandlers; };
    class O_soldier_M_F_OCimport_02 : O_soldier_M_F_OCimport_01 { class EventHandlers; };

    class Atlas_O_W_Soldier_UAV_F;
    class Atlas_O_W_Soldier_UAV_F_OCimport_01 : Atlas_O_W_Soldier_UAV_F { scope = 0; class EventHandlers; };
    class Atlas_O_W_Soldier_UAV_F_OCimport_02 : Atlas_O_W_Soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class Atlas_O_W_Soldier_Exp_F;
    class Atlas_O_W_Soldier_Exp_F_OCimport_01 : Atlas_O_W_Soldier_Exp_F { scope = 0; class EventHandlers; };
    class Atlas_O_W_Soldier_Exp_F_OCimport_02 : Atlas_O_W_Soldier_Exp_F_OCimport_01 { class EventHandlers; };

    class Atlas_O_W_APC_Tracked_02_30mm_lxWS : O_T_APC_Tracked_02_30mm_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-T Okhotnik";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_APC_Tracked_02_AA_F : O_APC_Tracked_02_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZSU-35 Tigris";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_APC_Tracked_02_medical_F : APC_Tracked_02_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-K Medical";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_APC_Wheeled_02_rcws_v2_ghex_F : APC_Wheeled_02_base_v2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "3-M Kazak";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_APC_Wheeled_02_unarmed_lxWS : O_T_APC_Wheeled_02_unarmed_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "3-M Kazak (Unarmed)";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Crew_F : O_crew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_W_CombatUniform_owcamo";

        linkedItems[] = {"V_BandollierB_khk","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"V_BandollierB_khk","H_Tank_black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_ACO_Pointer_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_ACO_Pointer_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Engineer_F : O_engineer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_RolledUp_whex_F";

        backpack = "B_Carryall_owcamo_OWEng_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_pointer_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_pointer_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Fighter_Pilot_F : Atlas_O_W_Helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter Pilot";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch"};

        uniformClass = "Atlas_U_O_W_PilotCoveralls";

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

    class Atlas_O_W_GMG_01_F : O_GMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_GMG_01_high_F : O_GMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307 (High)";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_HMG_01_F : O_HMG_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_HMG_01_high_F : O_HMG_01_high_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312 (High)";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Heli_Attack_04_F : Aegis_Heli_Attack_04_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-35 Krokodil";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Heli_Light_02_dynamicLoadout_F : O_Heli_Light_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Heli_Light_02_unarmed_F : O_Heli_Light_02_unarmed_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka (unarmed)";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Helicrew_F : O_helicrew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch"};

        uniformClass = "Atlas_U_O_W_PilotCoveralls";

        linkedItems[] = {"H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"H_CrewHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_ACO_Pointer_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_ACO_Pointer_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Helipilot_F : O_helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch"};

        uniformClass = "Atlas_U_O_W_PilotCoveralls";

        linkedItems[] = {"H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"H_PilotHelmetHeli_O","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

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

    class Atlas_O_W_LSV_02_AT_F : LSV_02_AT_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Takhion (AT)";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_LSV_02_armed_F : LSV_02_armed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Takhion (Minigun)";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_LSV_02_unarmed_F : LSV_02_unarmed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Takhion (Unarmed)";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_MBT_02_cannon_ghex_F : O_MBT_02_cannon_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "T100 Black Eagle";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_MRAP_02_F : O_MRAP_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Galkin";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_MRAP_02_gmg_F : O_MRAP_02_gmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Galkin GMG";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_MRAP_02_hmg_F : O_MRAP_02_hmg_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Galkin HMG";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Medic_F : O_medic_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_RolledUp_whex_F";

        backpack = "B_FieldPack_owcamo_OWMedic_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_CQB_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_CQB_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12_545_pointer_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_545_pointer_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Mortar_01_F : O_Mortar_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Atlas_O_W_Mortar_01_F";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Officer_F : O_officer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_casual"};

        uniformClass = "Atlas_U_O_Luchnik_Officer_whex_F";

        linkedItems[] = {"V_Rangemaster_belt_khk","H_Beret_CSAT_01_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Rangemaster_belt_khk","H_Beret_CSAT_01_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12U_545_F","hgun_Pistol_01_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_AK12U_545_F","hgun_Pistol_01_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Plane_CAS_02_dynamicLoadout_ghex_F : O_Plane_CAS_02_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Yak-130";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Quadbike_01_F : Quadbike_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_RadioOperator_F : Atlas_O_W_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_whex_F";

        backpack = "B_RadioBag_01_whex_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_AK12_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_AK12_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Recon_AR_F : Atlas_O_W_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Autorifleman";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_whex_F";

        linkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_Lite_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_Lite_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_RPK12_545_ARCO_LP_PBS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_RPK12_545_ARCO_LP_PBS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Recon_CQ_F : Atlas_O_W_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (Shotgun)";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_02_whex_F";

        linkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_CQB_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_CQB_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"sgun_Mp153_black_F","hgun_Rook40_snds_F","Throw","Put"};
        respawnWeapons[] = {"sgun_Mp153_black_F","hgun_Rook40_snds_F","Throw","Put"};

        magazines[] = {"4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Pellets","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","4Rnd_12Gauge_Slug","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Recon_F : Atlas_O_W_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_whex_F";

        linkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_Lite_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_Lite_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12_545_arco_pointer_pbs_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_AK12_545_arco_pointer_pbs_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Recon_LAT_F : Atlas_O_W_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (AT)";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_whex_F";

        backpack = "B_FieldPack_owcamo_OWLAT_F";

        linkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_Lite_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_Lite_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_ACO_Pointer_pbs_F","hgun_Rook40_snds_F","launch_RPG32_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_AK12U_545_ACO_Pointer_pbs_F","hgun_Rook40_snds_F","launch_RPG32_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Recon_M_F : Atlas_O_W_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Marksman";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_whex_F";

        linkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_Lite_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_Lite_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_srifle_DMR_01_black_ARCO_IR_BI_PBS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_srifle_DMR_01_black_ARCO_IR_BI_PBS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Recon_TL_F : Atlas_O_W_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Team Leader";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_whex_F";

        linkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_Lite_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_Lite_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12_545_arco_pointer_pbs_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_AK12_545_arco_pointer_pbs_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Recon_exp_F : Atlas_O_W_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Demo Specialist";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_02_whex_F";

        backpack = "B_Carryall_owcamo_OWExp_F";

        linkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_GL_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_GL_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_ACO_Pointer_pbs_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_AK12U_545_ACO_Pointer_pbs_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Recon_medic_F : Atlas_O_W_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Paramedic";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_whex_F";

        backpack = "B_FieldPack_owcamo_OWMedic_F";

        linkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_Lite_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_Lite_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_ACO_Pointer_pbs_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_AK12U_545_ACO_Pointer_pbs_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_AAA_F : O_Soldier_AAA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_RolledUp_whex_F";

        backpack = "B_Carryall_owcamo_OWAAA_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_AK12_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_AK12_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_AAR_F : O_Soldier_AAR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_RolledUp_whex_F";

        backpack = "B_FieldPack_owcamo_OWAAR_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_AK12_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_AK12_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_AAT_F : O_Soldier_AAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_whex_F";

        backpack = "B_Carryall_owcamo_OWAAT_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_AK12_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_AK12_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_AA_F : O_Soldier_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_whex_F";

        backpack = "B_FieldPack_owcamo_OWAA_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","launch_O_Titan_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","launch_O_Titan_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","Titan_AA","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","Titan_AA","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_AHAT_F : O_Soldier_AHAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Heavy AT";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_whex_F";

        backpack = "B_Carryall_owcamo_OWAHAT_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_AK12_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_AK12_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_AR_F : O_Soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_whex_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_CQB_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_CQB_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_RPK12_545_LP_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_RPK12_545_LP_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","Aegis_60Rnd_545x39_Mag_Green_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_AT_F : O_Soldier_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_whex_F";

        backpack = "B_FieldPack_owcamo_OWAT_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","launch_O_Titan_short_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","launch_O_Titan_short_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","Titan_AT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_A_F : O_Soldier_A_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_whex_F";

        backpack = "B_Carryall_owcamo_OWAmmo_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_AK12_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_AK12_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_Exp_F : O_soldier_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_whex_F";

        backpack = "B_Carryall_owcamo_OWExp_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_GL_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_GL_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_pointer_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_pointer_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_F : O_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_whex_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_AK12_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_AK12_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_GL_F : O_Soldier_GL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_whex_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_GL_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_GL_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12_GL_545_aco_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12_GL_545_aco_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_HAT_F : O_Soldier_HAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Heavy AT)";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_RolledUp_whex_F";

        backpack = "B_FieldPack_owcamo_OWHAT_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_AK12_545_aco_pointer_F","launch_O_Vorona_green_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_AK12_545_aco_pointer_F","launch_O_Vorona_green_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","Vorona_HEAT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","Vorona_HEAT","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_LAT_F : O_Soldier_LAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_whex_F";

        backpack = "B_FieldPack_owcamo_OWLAT_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"Atlas_arifle_AK12_545_aco_pointer_F","launch_RPG32_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_AK12_545_aco_pointer_F","launch_RPG32_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","RPG32_F","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_Lite_F : O_Soldier_lite_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_casual"};

        uniformClass = "Atlas_U_O_Luchnik_RolledUp_whex_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_whex_F","H_MilCap_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_whex_F","H_MilCap_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_AK12U_545_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","HandGrenade_East","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","HandGrenade_East","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_PG_F : O_soldier_PG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Para Trooper";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_whex_F";

        backpack = "B_Parachute";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_ACO_Pointer_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_ACO_Pointer_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_Repair_F : O_soldier_repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_whex_F";

        backpack = "B_FieldPack_owcamo_OWRepair_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_SL_F : O_Soldier_SL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_whex_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12_545_arco_pointer_F","hgun_Pistol_01_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_AK12_545_arco_pointer_F","hgun_Pistol_01_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_Tracer_F","30Rnd_545x39_AK12_Mag_Tracer_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_Tracer_F","30Rnd_545x39_AK12_Mag_Tracer_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_TL_F : O_Soldier_TL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_RolledUp_whex_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_GL_whex_F","H_HelmetLuchnik_cover_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_GL_whex_F","H_HelmetLuchnik_cover_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12_GL_545_arco_pointer_F","hgun_Pistol_01_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_AK12_GL_545_arco_pointer_F","hgun_Pistol_01_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_Tracer_F","30Rnd_545x39_AK12_Mag_Tracer_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_Tracer_F","30Rnd_545x39_AK12_Mag_Tracer_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_UAV_F : O_soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_RolledUp_whex_F";

        backpack = "O_UAV_01_backpack_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Soldier_unarmed_F : Atlas_O_W_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_whex_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

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

    class Atlas_O_W_Static_AA_F : O_static_AA_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AA)";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Static_AT_F : O_static_AT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AT)";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Support_AMG_F : O_support_AMG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (HMG/GMG)";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_RolledUp_whex_F";

        backpack = "O_HMG_01_support_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_pointer_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_pointer_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Support_AMort_F : O_support_AMort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (Mk6)";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_RolledUp_whex_F";

        backpack = "O_Mortar_01_support_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_pointer_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_pointer_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Support_GMG_F : O_support_GMG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (GMG)";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_whex_F";

        backpack = "O_GMG_01_weapon_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_pointer_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_pointer_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Support_MG_F : O_support_MG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (HMG)";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_whex_F";

        backpack = "O_HMG_01_weapon_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_pointer_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_pointer_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Support_Mort_F : O_support_Mort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mk6)";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_RolledUp_whex_F";

        backpack = "O_Mortar_01_weapon_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_pointer_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_pointer_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Survivor_F : Atlas_O_W_Soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_whex_F";

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

    class Atlas_O_W_Truck_02_Ammo_F : O_Truck_02_Ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Ammo";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Truck_02_F : O_Truck_02_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport (covered)";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Truck_02_MRL_F : O_Truck_02_MRL_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak MRL";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Truck_02_box_F : O_Truck_02_box_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Repair";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Truck_02_cargo_F : Truck_02_cargo_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Cargo";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Truck_02_flatbed_F : Truck_02_flatbed_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Flatbed";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Truck_02_fuel_F : O_Truck_02_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Fuel";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Truck_02_medical_F : O_Truck_02_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Medical";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Truck_02_transport_F : O_Truck_02_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Truck_03_ammo_ghex_F : O_Truck_03_ammo_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Ammo";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Truck_03_covered_ghex_F : O_Truck_03_covered_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Transport (covered)";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Truck_03_fuel_ghex_F : O_Truck_03_fuel_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Fuel";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Truck_03_medical_ghex_F : O_Truck_03_medical_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Medical";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Truck_03_repair_ghex_F : O_Truck_03_repair_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Repair";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_Truck_03_transport_ghex_F : O_Truck_03_transport_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Typhoon Transport";
        side = 0;
        faction = "atlas_opf_w_f";
        crew = "Atlas_O_W_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_UGV_01_F : UGV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Uran";
        side = 0;
        faction = "atlas_opf_w_f";
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

    class Atlas_O_W_UGV_01_medical_F : UGV_01_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Uran Medical";
        side = 0;
        faction = "atlas_opf_w_f";
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

    class Atlas_O_W_UGV_01_rcws_F : UGV_01_rcws_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Uran RCWS";
        side = 0;
        faction = "atlas_opf_w_f";
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

    class Atlas_O_W_recon_GL_F : Atlas_O_W_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Grenadier";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_whex_F";

        linkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_Lite_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_Lite_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12_GL_545_arco_IR_PBS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_AK12_GL_545_arco_IR_PBS_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_recon_JTAC_F : Atlas_O_W_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon JTAC";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_CombatFatigues_02_whex_F";

        backpack = "B_RadioBag_01_whex_F";

        linkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_Lite_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"H_HelmetSpecter_cover_whex_co","Atlas_V_OCarrierLuchnik_Lite_whex_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12_545_arco_pointer_pbs_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_03"};
        respawnWeapons[] = {"arifle_AK12_545_arco_pointer_pbs_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_03"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","17Rnd_9x21_Mag","17Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","O_IR_Grenade","O_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_soldier_M_F : O_soldier_M_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_RolledUp_whex_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"srifle_DMR_01_black_ARCO_LP_BI_F","hgun_Pistol_01_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"srifle_DMR_01_black_ARCO_LP_BI_F","hgun_Pistol_01_F","Throw","Put","Binocular"};

        magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_soldier_UAV_06_F : Atlas_O_W_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_RolledUp_whex_F";

        backpack = "O_UAV_06_backpack_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_soldier_UAV_06_medical_F : Atlas_O_W_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_RolledUp_whex_F";

        backpack = "O_UAV_06_medical_backpack_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_soldier_UGV_02_Demining_F : Atlas_O_W_Soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Operator (ED-1D)";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_RolledUp_whex_F";

        backpack = "O_UGV_02_Demining_backpack_F";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_Lite_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_aco_pointer_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_O_W_soldier_mine_F : Atlas_O_W_Soldier_Exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mine Specialist";
        side = 0;
        faction = "atlas_opf_w_f";

        identityTypes[] = {"LanguageRUS_F","Head_Euro","Head_Enoch","G_RUS_default"};

        uniformClass = "Atlas_U_O_Luchnik_RolledUp_whex_F";

        backpack = "B_Carryall_owcamo_Mine";

        linkedItems[] = {"Atlas_V_OCarrierLuchnik_GL_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"Atlas_V_OCarrierLuchnik_GL_whex_F","H_HelmetLuchnik_cover_whex_F","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};

        weapons[] = {"arifle_AK12U_545_pointer_F","hgun_Pistol_01_F","Throw","Put"};
        respawnWeapons[] = {"arifle_AK12U_545_pointer_F","hgun_Pistol_01_F","Throw","Put"};

        magazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","30Rnd_545x39_AK12_Mag_F","10Rnd_9x21_Mag","10Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShell"};


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
        class Atlas_OPF_W_F {
            class Armored {
                class O_W_TankPlatoon {
                    name = "Tank Platoon";
                    side = 0;
                    faction = "Atlas_OPF_W_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_W_MBT_02_cannon_ghex_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_W_MBT_02_cannon_ghex_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_W_MBT_02_cannon_ghex_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_W_MBT_02_cannon_ghex_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class O_W_TankSection {
                    name = "Tank Section";
                    side = 0;
                    faction = "Atlas_OPF_W_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_W_MBT_02_cannon_ghex_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_W_MBT_02_cannon_ghex_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class O_W_InfSentry {
                    name = "Sentry";
                    side = 0;
                    faction = "Atlas_OPF_W_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_W_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_W_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class O_W_InfSquad {
                    name = "Rifle Squad";
                    side = 0;
                    faction = "Atlas_OPF_W_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_W_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_W_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_W_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_W_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_O_W_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_O_W_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_O_W_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_O_W_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class O_W_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 0;
                    faction = "Atlas_OPF_W_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_W_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_W_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_W_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_W_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_O_W_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_O_W_soldier_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_O_W_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_O_W_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class O_W_InfTeam {
                    name = "Fire Team";
                    side = 0;
                    faction = "Atlas_OPF_W_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_W_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_W_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_W_soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_W_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_W_InfTeam_AA {
                    name = "Air-defense Team";
                    side = 0;
                    faction = "Atlas_OPF_W_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_W_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_W_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_W_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_W_soldier_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_W_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 0;
                    faction = "Atlas_OPF_W_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_W_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_W_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_W_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_W_soldier_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class O_W_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 0;
                    faction = "Atlas_OPF_W_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_W_APC_Tracked_02_30mm_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_W_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_W_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_W_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_O_W_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_O_W_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_O_W_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_O_W_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_O_W_medic_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class O_W_MechInf_AA {
                    name = "Mechanized Air-defense Squad";
                    side = 0;
                    faction = "Atlas_OPF_W_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_W_APC_Tracked_02_30mm_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_W_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_W_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_W_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_O_W_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_O_W_soldier_AA_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_O_W_soldier_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_O_W_soldier_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_O_W_soldier_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class O_W_MechInf_AT {
                    name = "Mechanized Anti-armor Squad";
                    side = 0;
                    faction = "Atlas_OPF_W_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_W_APC_Tracked_02_30mm_lxWS";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_W_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_W_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_W_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_O_W_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_O_W_soldier_AT_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_O_W_soldier_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_O_W_soldier_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_O_W_soldier_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized {
                class O_W_MotInf_AA {
                    name = "Motorized Air-defense Team";
                    side = 0;
                    faction = "Atlas_OPF_W_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_W_MRAP_02_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_W_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_W_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_W_soldier_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class O_W_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 0;
                    faction = "Atlas_OPF_W_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_W_MRAP_02_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_W_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_W_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_W_soldier_F";
                        rank = "PRIVATE";
                        position[] = {0,-10,0};
                    };
                };
                class O_W_MotInf_Reinforcements {
                    name = "Motorized Reinforcements";
                    side = 0;
                    faction = "Atlas_OPF_W_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_W_Truck_02_transport_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_W_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_W_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_W_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_O_W_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_O_W_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_O_W_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_O_W_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "Atlas_O_W_medic_F";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "Atlas_O_W_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "Atlas_O_W_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "Atlas_O_W_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "Atlas_O_W_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit13 {
                        vehicle = "Atlas_O_W_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit14 {
                        vehicle = "Atlas_O_W_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit15 {
                        vehicle = "Atlas_O_W_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit16 {
                        vehicle = "Atlas_O_W_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };
                };
                class O_W_MotInf_Team {
                    name = "Motorized Team";
                    side = 0;
                    faction = "Atlas_OPF_W_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_W_MRAP_02_gmg_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_W_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_W_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
            class SpecOps {
                class O_W_ReconSquad {
                    name = "Recon Squad";
                    side = 0;
                    faction = "Atlas_OPF_W_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_W_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_W_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_W_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_W_recon_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_O_W_recon_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_O_W_recon_JTAC_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_O_W_recon_exp_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_O_W_Recon_CQ_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class O_W_reconPatrol {
                    name = "Recon Patrol";
                    side = 0;
                    faction = "Atlas_OPF_W_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_W_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_W_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_W_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_W_recon_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class O_W_reconSentry {
                    name = "Recon Sentry";
                    side = 0;
                    faction = "Atlas_OPF_W_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_W_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_W_recon_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class O_W_reconTeam {
                    name = "Recon Team";
                    side = 0;
                    faction = "Atlas_OPF_W_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Atlas_O_W_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_O_W_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_O_W_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_O_W_recon_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_O_W_recon_JTAC_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_O_W_recon_exp_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
            };
        };
    };
};
