#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(Aegis_B_D_LSV_01_AT_F),
            QGVAR(Aegis_B_D_LSV_01_armed_F),
            QGVAR(Aegis_B_D_LSV_01_light_F),
            QGVAR(Aegis_B_D_LSV_01_unarmed_F),
            QGVAR(Aegis_B_MJTF_D_APC_Wheeled_01_atgm_v2),
            QGVAR(Aegis_B_MJTF_D_APC_Wheeled_01_cannon_v2_F),
            QGVAR(Aegis_B_MJTF_D_APC_Wheeled_01_command_lxWS),
            QGVAR(Aegis_B_MJTF_D_APC_Wheeled_01_medical_F),
            QGVAR(Aegis_B_MJTF_D_APC_Wheeled_01_mortar_lxWS),
            QGVAR(B_Pilot_F),
            QGVAR(B_Plane_CAS_01_Cluster_F),
            QGVAR(B_Plane_CAS_01_dynamicLoadout_F),
            QGVAR(B_Plane_Fighter_01_Cluster_F),
            QGVAR(B_Plane_Fighter_01_F),
            QGVAR(B_Plane_Fighter_01_Stealth_F),
            QGVAR(B_qav_abramsx),
            QGVAR(E22_B_JC_D_AAA_System_01_F),
            QGVAR(E22_B_JC_D_Radar_system_01_F),
            QGVAR(E22_B_JC_D_SAM_system_01_F),
            QGVAR(EF_B_AAV9_50mm_MJTF_Des),
            QGVAR(EF_B_AAV9_MJTF_Des),
            QGVAR(EF_B_AH99J_MJTF_Des),
            QGVAR(EF_B_Boat_Armed_01_minigun_MJTF_Des),
            QGVAR(EF_B_Boat_Transport_01_MJTF_Des),
            QGVAR(EF_B_CombatBoat_AT_MJTF_Des),
            QGVAR(EF_B_CombatBoat_HMG_MJTF_Des),
            QGVAR(EF_B_CombatBoat_Unarmed_MJTF_Des),
            QGVAR(EF_B_CommandoMortar_MJTF_Des),
            QGVAR(EF_B_GMG_01_A_MJTF_Des),
            QGVAR(EF_B_GMG_01_MJTF_Des),
            QGVAR(EF_B_GMG_01_high_MJTF_Des),
            QGVAR(EF_B_HMG_01_A_MJTF_Des),
            QGVAR(EF_B_HMG_01_MJTF_Des),
            QGVAR(EF_B_HMG_01_high_MJTF_Des),
            QGVAR(EF_B_Heli_Attack_01_dynamicLoadout_MJTF_Des),
            QGVAR(EF_B_Heli_Transport_01_MJTF_Des),
            QGVAR(EF_B_Heli_Transport_01_pylons_MJTF_Des),
            QGVAR(EF_B_LCC_MJTF_Des),
            QGVAR(EF_B_LCC_SideLoad_MJTF_Des),
            QGVAR(EF_B_Lifeboat_MJTF_Des),
            QGVAR(EF_B_MBT_01_mlrs_MJTF_Des),
            QGVAR(EF_B_MRAP_01_AT_MJTF_Des),
            QGVAR(EF_B_MRAP_01_FSV_MJTF_Des),
            QGVAR(EF_B_MRAP_01_LAAD_MJTF_Des),
            QGVAR(EF_B_MRAP_01_MJTF_Des),
            QGVAR(EF_B_MRAP_01_gmg_MJTF_Des),
            QGVAR(EF_B_MRAP_01_hmg_MJTF_Des),
            QGVAR(EF_B_Marine_AAA_Des),
            QGVAR(EF_B_Marine_AAT_Des),
            QGVAR(EF_B_Marine_AA_Des),
            QGVAR(EF_B_Marine_AB_Des),
            QGVAR(EF_B_Marine_AMG_Des),
            QGVAR(EF_B_Marine_AMort_Des),
            QGVAR(EF_B_Marine_AR_Des),
            QGVAR(EF_B_Marine_AT_Des),
            QGVAR(EF_B_Marine_BoatCrew_Des),
            QGVAR(EF_B_Marine_CMort_Des),
            QGVAR(EF_B_Marine_Crew_Des),
            QGVAR(EF_B_Marine_Diver_Des),
            QGVAR(EF_B_Marine_Diver_Eng_Des),
            QGVAR(EF_B_Marine_Diver_Pointman_Des),
            QGVAR(EF_B_Marine_Diver_Scout_Des),
            QGVAR(EF_B_Marine_Diver_TL_Des),
            QGVAR(EF_B_Marine_Eng_Des),
            QGVAR(EF_B_Marine_Exp_Des),
            QGVAR(EF_B_Marine_GL_Des),
            QGVAR(EF_B_Marine_GMG_Des),
            QGVAR(EF_B_Marine_HMG_Des),
            QGVAR(EF_B_Marine_JTAC_Des),
            QGVAR(EF_B_Marine_LAT2_Des),
            QGVAR(EF_B_Marine_LAT_Des),
            QGVAR(EF_B_Marine_Light_Des),
            QGVAR(EF_B_Marine_Mark_Des),
            QGVAR(EF_B_Marine_Medic_Des),
            QGVAR(EF_B_Marine_Mort_Des),
            QGVAR(EF_B_Marine_Officer_Des),
            QGVAR(EF_B_Marine_R_Des),
            QGVAR(EF_B_Marine_Recon_Des),
            QGVAR(EF_B_Marine_Recon_Exp_Des),
            QGVAR(EF_B_Marine_Recon_JTAC_Des),
            QGVAR(EF_B_Marine_Recon_LAT_Des),
            QGVAR(EF_B_Marine_Recon_M_Des),
            QGVAR(EF_B_Marine_Recon_Medic_Des),
            QGVAR(EF_B_Marine_Recon_TL_Des),
            QGVAR(EF_B_Marine_Repair_Des),
            QGVAR(EF_B_Marine_SL_Des),
            QGVAR(EF_B_Marine_TL_Des),
            QGVAR(EF_B_Marine_UAV_Des),
            QGVAR(EF_B_Marine_Unarmed_Des),
            QGVAR(EF_B_Mortar_01_MJTF_Des),
            QGVAR(EF_B_Quadbike_01_MJTF_Des),
            QGVAR(EF_B_SDV_01_MJTF_Des),
            QGVAR(EF_B_Static_AA_MJTF_Des),
            QGVAR(EF_B_Static_AT_MJTF_Des),
            QGVAR(EF_B_Truck_01_Repair_MJTF_Des),
            QGVAR(EF_B_Truck_01_ammo_MJTF_Des),
            QGVAR(EF_B_Truck_01_box_MJTF_Des),
            QGVAR(EF_B_Truck_01_covered_MJTF_Des),
            QGVAR(EF_B_Truck_01_fuel_MJTF_Des),
            QGVAR(EF_B_Truck_01_medical_MJTF_Des),
            QGVAR(EF_B_Truck_01_mover_MJTF_Des),
            QGVAR(EF_B_Truck_01_transport_MJTF_Des),
            QGVAR(EF_B_UAV_01_MJTF_Des),
            QGVAR(EF_B_UAV_02_CAS_MJTF_Des),
            QGVAR(EF_B_UAV_02_MJTF_Des),
            QGVAR(EF_B_UAV_02_dynamicLoadout_MJTF_Des),
            QGVAR(EF_B_UGV_01_MJTF_Des),
            QGVAR(EF_B_UGV_01_rcws_MJTF_Des),
            QGVAR(EF_B_VTOL_03_unarmed_MJTF_Des_QAV),
            QGVAR(EF_LPD_Turret_1_MJTF_Des),
            QGVAR(EF_QAV80_MJTF_Des),
            QGVAR(EF_QAV80_Stealth_MJTF_Des),
            QGVAR(JK_B_CDF_76n6_ClamShell_F),
            QGVAR(JK_B_CDF_76n6_ClamShell_Lower_F),
            QGVAR(C_IDAP_UAV_06_antimine_backpack_F),
            QGVAR(C_IDAP_UAV_06_antimine_F),
            QGVAR(B_Heli_Transport_01_medevac_F),
            QGVAR(Drone_Operator)
        };
        weapons[] = {QGVAR(SMG_01_black_Holo_F_snds),QGVAR(ef_arifle_mxar_coy_Hamr_pointer_snds),QGVAR(ef_arifle_mxar_coy_Holo_snds),QGVAR(ef_arifle_mxar_coy_Holo_pointer_snds),QGVAR(ef_arifle_mxar_gl_coy_Hamr_pointer_snds),QGVAR(ef_arifle_mxc_coy_Holo_snds),QGVAR(ef_arifle_mxm_MBS_LP_BI_snds)};
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
        requiredAddons[] = {"ghost_main"};
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
