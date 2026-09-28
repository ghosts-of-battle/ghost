#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(Aegis_CF_O_R_APC_Tracked_02_30mm_lxWS),
            QGVAR(Aegis_O_R_APC_Tracked_02_30mm_lxWS),
            QGVAR(CF_O_R_APC_Tracked_02_AA_F),
            QGVAR(CF_O_R_APC_Tracked_02_medical_F),
            QGVAR(CF_O_R_APC_Wheeled_04_cannon_F),
            QGVAR(CF_O_R_BoatCrew_EF),
            QGVAR(CF_O_R_Fighter_Pilot_F),
            QGVAR(CF_O_R_GMG_01_A_F),
            QGVAR(CF_O_R_GMG_01_F),
            QGVAR(CF_O_R_GMG_01_high_F),
            QGVAR(CF_O_R_HMG_01_A_F),
            QGVAR(CF_O_R_HMG_01_F),
            QGVAR(CF_O_R_HMG_01_high_F),
            QGVAR(CF_O_R_Heli_Attack_02_dynamicLoadout_F),
            QGVAR(CF_O_R_Heli_Attack_04_F),
            QGVAR(CF_O_R_Heli_Light_02_dynamicLoadout_F),
            QGVAR(CF_O_R_Heli_Light_02_unarmed_F),
            QGVAR(CF_O_R_Heli_Transport_04_F),
            QGVAR(CF_O_R_Heli_Transport_04_ammo_F),
            QGVAR(CF_O_R_Heli_Transport_04_bench_F),
            QGVAR(CF_O_R_Heli_Transport_04_box_F),
            QGVAR(CF_O_R_Heli_Transport_04_covered_F),
            QGVAR(CF_O_R_Heli_Transport_04_fuel_F),
            QGVAR(CF_O_R_Heli_Transport_04_medevac_F),
            QGVAR(CF_O_R_Heli_Transport_04_repair_F),
            QGVAR(CF_O_R_LSV_02_AT_F),
            QGVAR(CF_O_R_LSV_02_armed_F),
            QGVAR(CF_O_R_LSV_02_unarmed_F),
            QGVAR(CF_O_R_MBT_02_Railgun_F),
            QGVAR(CF_O_R_MBT_02_arty_F),
            QGVAR(CF_O_R_MBT_02_cannon_F),
            QGVAR(CF_O_R_MBT_04_cannon_F),
            QGVAR(CF_O_R_MBT_04_command_F),
            QGVAR(CF_O_R_MRAP_02_F),
            QGVAR(CF_O_R_MRAP_02_gmg_F),
            QGVAR(CF_O_R_MRAP_02_hmg_F),
            QGVAR(CF_O_R_Mortar_01_F),
            QGVAR(CF_O_R_Plane_CAS_02_dynamicLoadout_F),
            QGVAR(CF_O_R_Plane_Fighter_02_F),
            QGVAR(CF_O_R_Plane_Fighter_02_Stealth_F),
            QGVAR(CF_O_R_Radar_System_02_F),
            QGVAR(CF_O_R_RadioOperator_F),
            QGVAR(CF_O_R_SAM_System_04_F),
            QGVAR(CF_O_R_Sharpshooter_F),
            QGVAR(CF_O_R_Soldier_AAA_F),
            QGVAR(CF_O_R_Soldier_AAR_F),
            QGVAR(CF_O_R_Soldier_AAT_F),
            QGVAR(CF_O_R_Soldier_AHAT_F),
            QGVAR(CF_O_R_Soldier_AR_F),
            QGVAR(CF_O_R_Soldier_A_F),
            QGVAR(CF_O_R_Soldier_CBRN_F),
            QGVAR(CF_O_R_Soldier_CQ_F),
            QGVAR(CF_O_R_Soldier_F),
            QGVAR(CF_O_R_Soldier_GL_F),
            QGVAR(CF_O_R_Soldier_HAT_F),
            QGVAR(CF_O_R_Soldier_LAT_F),
            QGVAR(CF_O_R_Soldier_PG_F),
            QGVAR(CF_O_R_Soldier_SL_F),
            QGVAR(CF_O_R_Soldier_TL_F),
            QGVAR(CF_O_R_Soldier_lite_F),
            QGVAR(CF_O_R_Soldier_unarmed_F),
            QGVAR(CF_O_R_Static_AA_F),
            QGVAR(CF_O_R_Static_AT_F),
            QGVAR(CF_O_R_Static_Designator_02_F),
            QGVAR(CF_O_R_Survivor_F),
            QGVAR(CF_O_R_Truck_03_ammo_F),
            QGVAR(CF_O_R_Truck_03_covered_F),
            QGVAR(CF_O_R_Truck_03_fuel_F),
            QGVAR(CF_O_R_Truck_03_medical_F),
            QGVAR(CF_O_R_Truck_03_repair_F),
            QGVAR(CF_O_R_Truck_03_transport_F),
            QGVAR(CF_O_R_UAV_01_F),
            QGVAR(CF_O_R_UAV_02_dynamicLoadout_F),
            QGVAR(CF_O_R_UAV_02_lxWS),
            QGVAR(CF_O_R_UAV_06_F),
            QGVAR(CF_O_R_UAV_06_medical_F),
            QGVAR(CF_O_R_UGV_01_F),
            QGVAR(CF_O_R_UGV_01_medical_F),
            QGVAR(CF_O_R_UGV_01_rcws_F),
            QGVAR(CF_O_R_UGV_02_Demining_F),
            QGVAR(CF_O_R_crew_F),
            QGVAR(CF_O_R_diver_F),
            QGVAR(CF_O_R_diver_TL_F),
            QGVAR(CF_O_R_diver_exp_F),
            QGVAR(CF_O_R_engineer_F),
            QGVAR(CF_O_R_helicrew_F),
            QGVAR(CF_O_R_helipilot_F),
            QGVAR(CF_O_R_medic_F),
            QGVAR(CF_O_R_officer_F),
            QGVAR(CF_O_R_recon_AR_F),
            QGVAR(CF_O_R_recon_CQ_F),
            QGVAR(CF_O_R_recon_F),
            QGVAR(CF_O_R_recon_GL_F),
            QGVAR(CF_O_R_recon_JTAC_F),
            QGVAR(CF_O_R_recon_LAT_F),
            QGVAR(CF_O_R_recon_M_F),
            QGVAR(CF_O_R_recon_TL_F),
            QGVAR(CF_O_R_recon_exp_F),
            QGVAR(CF_O_R_recon_medic_F),
            QGVAR(CF_O_R_sniper_F),
            QGVAR(CF_O_R_soldier_AA_F),
            QGVAR(CF_O_R_soldier_AT_F),
            QGVAR(CF_O_R_soldier_M_F),
            QGVAR(CF_O_R_soldier_UAV_02_lxWS_F),
            QGVAR(CF_O_R_soldier_UAV_06_F),
            QGVAR(CF_O_R_soldier_UAV_06_medical_F),
            QGVAR(CF_O_R_soldier_UAV_F),
            QGVAR(CF_O_R_soldier_UGV_02_Demining_F),
            QGVAR(CF_O_R_soldier_exp_F),
            QGVAR(CF_O_R_soldier_mine_F),
            QGVAR(CF_O_R_soldier_repair_F),
            QGVAR(CF_O_R_spotter_F),
            QGVAR(CF_O_R_support_AMG_F),
            QGVAR(CF_O_R_support_AMort_F),
            QGVAR(CF_O_R_support_GMG_F),
            QGVAR(CF_O_R_support_MG_F),
            QGVAR(CF_O_R_support_Mort_F),
            QGVAR(O_R_APC_Wheeled_04_cannon_v2_F),
            QGVAR(ghost_antiship_launcher),
            QGVAR(ghost_antiship_radar),
            QGVAR(O_UAV_03_dynamicLoadout_F),
            QGVAR(O_SwitchBlade_300),
            QGVAR(O_SwitchBlade_600),
            QGVAR(O_SwitchBlade_300_LaunchTube),
            QGVAR(O_SwitchBlade_600_LaunchTube),
            QGVAR(qav_o_t_625e),
            QGVAR(SwitchBlade_Operator),
            QGVAR(rksla3_aeroshark_opfor),
            QGVAR(O_Rapier_FSC_Launcher),
            QGVAR(O_Rapier_FSC_Blindfire),
            QGVAR(O_Rapier_FSC_Dagger),
            QGVAR(Drone_Operator)
        };
        weapons[] = {QGVAR(Aegis_SMG_Gepard_blk_ACO_F_snds),QGVAR(CF_arifle_AK12U_545_arc_aco_F_snds),QGVAR(CF_arifle_AK12U_545_arc_aco_flash_F_snds),QGVAR(CF_arifle_AK12U_545_arc_aco_pointer_F_snds),QGVAR(CF_arifle_AK12U_545_arc_holo_pointer_F_snds),QGVAR(CF_arifle_AK12_545_arc_aco_pointer_F_snds),QGVAR(CF_arifle_AK12_545_arc_arco_pointer_F_snds),QGVAR(CF_arifle_AK12_545_arc_holo_pointer_F_snds),QGVAR(CF_arifle_AK12_GL_545_arc_aco_pointer_F_snds),QGVAR(CF_arifle_AK12_GL_545_arc_arco_pointer_F_snds),QGVAR(CF_arifle_RPK12_545_arc_arco_pointer_F_snds),QGVAR(arifle_AK12U_545_aco_F_snds),QGVAR(arifle_AK12U_545_arctic_F_snds),QGVAR(arifle_AK12U_545_holo_pointer_F_snds),QGVAR(sgun_Mp153_black_F_snds),QGVAR(srifle_DMR_01_black_DMS_LP_BI_F_snds),QGVAR(srifle_DMR_05_DMS_LP_BI_F_snds)};
        requiredVersion = REQUIRED_VERSION;
        // ghost_fa_tiers IS NOT REQUIRED, DELIBERATELY. The tier
        // magazines are named as STRINGS in magazines[]; nothing here
        // inherits from them, so there is no load order to enforce.
        // Requiring it was fatal: fa_tiers requires fa_rhs, fa_sps,
        // fa_e22raf and fa_jca, which require RHS, SPS, E22 and JCA -
        // and with skipWhenMissingDependencies any one of those absent
        // dropped this whole faction out of 3DEN and Zeus in silence.
        //
        // NOTHING FROM THE SOURCE FACTION'S MOD IS REQUIRED EITHER.
        // Every parent class is forward-declared in CfgVehicles.hpp, so a
        // load order without that mod gets inert classes instead of a
        // broken config. skipWhenMissingDependencies does the rest.
        requiredAddons[] = {"ghost_main", "ghost_vehicle", "ghost_weapons"};
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
