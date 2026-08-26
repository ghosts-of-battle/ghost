#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "ghost_Insurgents_OpF_I_I_ZU23_lxWS_F",
            "ghost_Insurgents_Opf_I_I_HMG_02_F",
            "ghost_Insurgents_Opf_I_I_HMG_02_high_F",
            "ghost_Insurgents_Opf_I_I_Officer_F",
            "ghost_Insurgents_Opf_I_I_Offroad_01_AT_F",
            "ghost_Insurgents_Opf_I_I_Offroad_01_F",
            "ghost_Insurgents_Opf_I_I_Offroad_01_armed_F",
            "ghost_Insurgents_Opf_I_I_Offroad_01_armor_AT_F",
            "ghost_Insurgents_Opf_I_I_Offroad_01_armor_armed_F",
            "ghost_Insurgents_Opf_I_I_Offroad_01_armor_base_F",
            "ghost_Insurgents_Opf_I_I_Soldier_1_F",
            "ghost_Insurgents_Opf_I_I_Soldier_2_F",
            "ghost_Insurgents_Opf_I_I_Soldier_3_F",
            "ghost_Insurgents_Opf_I_I_Soldier_4_F",
            "ghost_Insurgents_Opf_I_I_Soldier_5_F",
            "ghost_Insurgents_Opf_I_I_Soldier_6_F",
            "ghost_Insurgents_Opf_I_I_Soldier_7_F",
            "ghost_Insurgents_Opf_I_I_Soldier_8_F",
            "ghost_Insurgents_Opf_I_I_Soldier_9_F",
            "ghost_Insurgents_Opf_I_I_Soldier_Base_unarmed_F",
            "ghost_Insurgents_Opf_I_I_Soldier_UAV_lxWS",
            "ghost_Insurgents_Opf_I_I_UAV_02_IED_lxWS",
            "ghost_Insurgents_Opf_I_I_Van_01_transport_F",
            "ghost_Insurgents_Opf_I_I_tribal_deserter",
            "ghost_Insurgents_Opf_I_I_tribal_enforcer",
            "ghost_Insurgents_Opf_I_I_tribal_hireling",
            "ghost_Insurgents_Opf_I_I_tribal_medic",
            "ghost_Insurgents_Opf_I_I_tribal_sapper",
            "ghost_Insurgents_Opf_I_I_tribal_scout",
            "ghost_Insurgents_Opf_I_I_tribal_watcher",
            "ghost_Insurgents_I_SwitchBlade_300",
            "ghost_Insurgents_I_SwitchBlade_300_LaunchTube_Desert",
            "ghost_Insurgents_I_KVN_AP",
            "ghost_Insurgents_I_KVN_AT",
            "ghost_Insurgents_KVN_AP_Operator",
            "ghost_Insurgents_KVN_AT_Operator"
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
