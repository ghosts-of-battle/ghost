#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "ghost_Syndikat_Aegis_I_C_HeavyGunner_Para_F",
            "ghost_Syndikat_Aegis_I_C_Soldier_M_Para_F",
            "ghost_Syndikat_Aegis_I_C_Soldier_TechSpec_F",
            "ghost_Syndikat_Aegis_I_C_Soldier_UAV_lxWS",
            "ghost_Syndikat_Aegis_I_C_UAV_02_IED_lxWS",
            "ghost_Syndikat_Aegis_I_C_UGV_01_F",
            "ghost_Syndikat_Aegis_I_C_UGV_01_rcws_F",
            "ghost_Syndikat_Aegis_I_C_ZU23_lxWS_F",
            "ghost_Syndikat_I_C_Boat_Transport_01_F",
            "ghost_Syndikat_I_C_Boat_Transport_02_F",
            "ghost_Syndikat_I_C_HMG_02_F",
            "ghost_Syndikat_I_C_HMG_02_high_F",
            "ghost_Syndikat_I_C_Heli_Light_01_civil_F",
            "ghost_Syndikat_I_C_Helipilot_F",
            "ghost_Syndikat_I_C_Offroad_01_AT_F",
            "ghost_Syndikat_I_C_Offroad_01_F",
            "ghost_Syndikat_I_C_Offroad_01_armed_F",
            "ghost_Syndikat_I_C_Offroad_02_AT_F",
            "ghost_Syndikat_I_C_Offroad_02_LMG_F",
            "ghost_Syndikat_I_C_Offroad_02_unarmed_F",
            "ghost_Syndikat_I_C_Pilot_F",
            "ghost_Syndikat_I_C_Plane_Civil_01_F",
            "ghost_Syndikat_I_C_Quadbike_01_F",
            "ghost_Syndikat_I_C_Sharpshooter_F",
            "ghost_Syndikat_I_C_Soldier_Bandit_1_F",
            "ghost_Syndikat_I_C_Soldier_Bandit_2_F",
            "ghost_Syndikat_I_C_Soldier_Bandit_3_F",
            "ghost_Syndikat_I_C_Soldier_Bandit_4_F",
            "ghost_Syndikat_I_C_Soldier_Bandit_5_F",
            "ghost_Syndikat_I_C_Soldier_Bandit_6_F",
            "ghost_Syndikat_I_C_Soldier_Bandit_7_F",
            "ghost_Syndikat_I_C_Soldier_Bandit_8_F",
            "ghost_Syndikat_I_C_Soldier_Camo_F",
            "ghost_Syndikat_I_C_Soldier_Para_1_F",
            "ghost_Syndikat_I_C_Soldier_Para_2_F",
            "ghost_Syndikat_I_C_Soldier_Para_3_F",
            "ghost_Syndikat_I_C_Soldier_Para_4_F",
            "ghost_Syndikat_I_C_Soldier_Para_5_F",
            "ghost_Syndikat_I_C_Soldier_Para_6_F",
            "ghost_Syndikat_I_C_Soldier_Para_7_F",
            "ghost_Syndikat_I_C_Soldier_Para_8_F",
            "ghost_Syndikat_I_C_Soldier_base_unarmed_F",
            "ghost_Syndikat_I_C_Van_01_transport_F",
            "ghost_Syndikat_I_C_Van_02_transport_F",
            "ghost_Syndikat_I_C_Van_02_vehicle_F",
            "ghost_Syndikat_I_Crocus_AP",
            "ghost_Syndikat_Crocus_AP_Operator"
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
