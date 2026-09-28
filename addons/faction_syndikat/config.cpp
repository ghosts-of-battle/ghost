#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(Aegis_I_C_HeavyGunner_Para_F),
            QGVAR(Aegis_I_C_Soldier_M_Para_F),
            QGVAR(Aegis_I_C_Soldier_TechSpec_F),
            QGVAR(Aegis_I_C_Soldier_UAV_lxWS),
            QGVAR(Aegis_I_C_UAV_02_IED_lxWS),
            QGVAR(I_C_Boat_Transport_01_F),
            QGVAR(I_C_Boat_Transport_02_F),
            QGVAR(I_C_HMG_02_F),
            QGVAR(I_C_HMG_02_high_F),
            QGVAR(I_C_Offroad_01_AT_F),
            QGVAR(I_C_Offroad_01_F),
            QGVAR(I_C_Offroad_01_armed_F),
            QGVAR(I_C_Offroad_02_AT_F),
            QGVAR(I_C_Offroad_02_LMG_F),
            QGVAR(I_C_Offroad_02_unarmed_F),
            QGVAR(I_C_Pickup_hmg_rf),
            QGVAR(I_C_Pickup_rf),
            QGVAR(I_C_Quadbike_01_F),
            QGVAR(I_C_Sharpshooter_F),
            QGVAR(I_C_Soldier_Bandit_1_F),
            QGVAR(I_C_Soldier_Bandit_2_F),
            QGVAR(I_C_Soldier_Bandit_3_F),
            QGVAR(I_C_Soldier_Bandit_4_F),
            QGVAR(I_C_Soldier_Bandit_5_F),
            QGVAR(I_C_Soldier_Bandit_6_F),
            QGVAR(I_C_Soldier_Bandit_7_F),
            QGVAR(I_C_Soldier_Bandit_8_F),
            QGVAR(I_C_Soldier_Camo_F),
            QGVAR(I_C_Soldier_Para_1_F),
            QGVAR(I_C_Soldier_Para_2_F),
            QGVAR(I_C_Soldier_Para_3_F),
            QGVAR(I_C_Soldier_Para_4_F),
            QGVAR(I_C_Soldier_Para_5_F),
            QGVAR(I_C_Soldier_Para_6_F),
            QGVAR(I_C_Soldier_Para_7_F),
            QGVAR(I_C_Soldier_Para_8_F),
            QGVAR(I_C_Soldier_base_unarmed_F),
            QGVAR(I_C_Van_01_transport_F),
            QGVAR(I_C_Van_02_transport_F),
            QGVAR(I_C_Van_02_vehicle_F),
            QGVAR(I_G_Mortar_01_F),
            QGVAR(I_G_UAV_02_IED_lxWS),
            QGVAR(I_SwitchBlade_300_LaunchTube_Woodland),
            QGVAR(I_SwitchBlade_600_LaunchTube_Woodland),
            QGVAR(I_UAV_02_lxWS),
            QGVAR(ace_dragon_staticAssembled),
            QGVAR(I_UAV_02_backpack_lxWS),
            QGVAR(I_G_UAV_02_IED_backpack_lxWS),
            QGVAR(UAV_06_IED),
            QGVAR(UAV_06_IED_Operator),
            QGVAR(Drone_Operator),
            QGVAR(IED_Quad_Operator)
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
