#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "ghost_HIMF_Atlas_B_H_APC_Wheeled_02_hmg_lxWS",
            "ghost_HIMF_Atlas_B_H_APC_Wheeled_02_unarmed_lxWS",
            "ghost_HIMF_Atlas_B_H_Boat_Transport_02_F",
            "ghost_HIMF_Atlas_B_H_CommandoMortar_RF",
            "ghost_HIMF_Atlas_B_H_Engineer_F",
            "ghost_HIMF_Atlas_B_H_HMG_02_F",
            "ghost_HIMF_Atlas_B_H_HMG_02_high_F",
            "ghost_HIMF_Atlas_B_H_HeavyGunner_F",
            "ghost_HIMF_Atlas_B_H_Heli_EC_03_RF",
            "ghost_HIMF_Atlas_B_H_Heli_EC_04_military_RF",
            "ghost_HIMF_Atlas_B_H_Heli_Light_01_F",
            "ghost_HIMF_Atlas_B_H_Heli_Light_01_dynamicLoadout_F",
            "ghost_HIMF_Atlas_B_H_Helicrew_F",
            "ghost_HIMF_Atlas_B_H_Helipilot_F",
            "ghost_HIMF_Atlas_B_H_Medic_F",
            "ghost_HIMF_Atlas_B_H_Officer_F",
            "ghost_HIMF_Atlas_B_H_Offroad_02_AT_F",
            "ghost_HIMF_Atlas_B_H_Offroad_02_LMG_F",
            "ghost_HIMF_Atlas_B_H_Offroad_02_unarmed_F",
            "ghost_HIMF_Atlas_B_H_Pickup_AT_F",
            "ghost_HIMF_Atlas_B_H_Plane_Transport_01_infantry_F",
            "ghost_HIMF_Atlas_B_H_Plane_Transport_01_vehicle_F",
            "ghost_HIMF_Atlas_B_H_Quadbike_01_F",
            "ghost_HIMF_Atlas_B_H_RadioOperator_F",
            "ghost_HIMF_Atlas_B_H_Soldier_AR_F",
            "ghost_HIMF_Atlas_B_H_Soldier_A_F",
            "ghost_HIMF_Atlas_B_H_Soldier_Exp_F",
            "ghost_HIMF_Atlas_B_H_Soldier_F",
            "ghost_HIMF_Atlas_B_H_Soldier_GL_F",
            "ghost_HIMF_Atlas_B_H_Soldier_LAT_F",
            "ghost_HIMF_Atlas_B_H_Soldier_SL_F",
            "ghost_HIMF_Atlas_B_H_Soldier_TL_F",
            "ghost_HIMF_Atlas_B_H_Soldier_commando_AR_F",
            "ghost_HIMF_Atlas_B_H_Soldier_commando_F",
            "ghost_HIMF_Atlas_B_H_Soldier_commando_LAT_F",
            "ghost_HIMF_Atlas_B_H_Soldier_commando_M_F",
            "ghost_HIMF_Atlas_B_H_Soldier_commando_TL_F",
            "ghost_HIMF_Atlas_B_H_Soldier_commando_exp_F",
            "ghost_HIMF_Atlas_B_H_Soldier_commando_gl_F",
            "ghost_HIMF_Atlas_B_H_Soldier_commando_jtac_F",
            "ghost_HIMF_Atlas_B_H_Soldier_commando_medic_F",
            "ghost_HIMF_Atlas_B_H_Soldier_unarmed_F",
            "ghost_HIMF_Atlas_B_H_Truck_02_Ammo_F",
            "ghost_HIMF_Atlas_B_H_Truck_02_F",
            "ghost_HIMF_Atlas_B_H_Truck_02_box_F",
            "ghost_HIMF_Atlas_B_H_Truck_02_cargo_F",
            "ghost_HIMF_Atlas_B_H_Truck_02_flatbed_F",
            "ghost_HIMF_Atlas_B_H_Truck_02_fuel_F",
            "ghost_HIMF_Atlas_B_H_Truck_02_medical_F",
            "ghost_HIMF_Atlas_B_H_Truck_02_transport_F",
            "ghost_HIMF_Atlas_B_H_soldier_M_F",
            "ghost_HIMF_Atlas_B_H_support_CMort_RF",
            "ghost_HIMF_Plane_Civil_01_HIMF_F",
            "ghost_HIMF_Aegis_B_A_Heli_Attack_03_F",
            "ghost_HIMF_Aegis_B_E_Plane_Fighter_04_F",
            "ghost_HIMF_B_UAV_01_F",
            "ghost_HIMF_GX_B_RQ11B_UAV",
            "ghost_HIMF_GX_B_BLACKHORNET_UAV",
            "ghost_HIMF_B_Crocus_AP",
            "ghost_HIMF_B_Crocus_AT",
            "ghost_HIMF_B_KVN_AP",
            "ghost_HIMF_B_KVN_AT",
            "ghost_HIMF_B_SwitchBlade_300",
            "ghost_HIMF_B_UGV_01_F",
            "ghost_HIMF_B_UGV_01_rcws_F",
            "ghost_HIMF_B_UGV_02_Demining_F",
            "ghost_HIMF_B_UAV_06_F",
            "ghost_HIMF_UAVOperator",
            "ghost_HIMF_Crocus_AP_Operator",
            "ghost_HIMF_Crocus_AT_Operator",
            "ghost_HIMF_KVN_AP_Operator",
            "ghost_HIMF_KVN_AT_Operator",
            "ghost_HIMF_Mk153_Gunner"
        };
        weapons[] = {};
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
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
