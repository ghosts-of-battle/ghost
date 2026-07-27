#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "ghost_taliban_UAV_02_IED_lxWS",
            "ghost_taliban_UAV_02_IED_backpack_lxWS",
            "ghost_taliban_scout_lxWS",
            "ghost_taliban_watcher_lxWS",
            "ghost_taliban_enforcer_lxWS",
            "ghost_taliban_hireling_lxWS",
            "ghost_taliban_medic2_lxWS",
            "ghost_taliban_thug_lxWS",
            "ghost_taliban_deserter_lxWS",
            "ghost_taliban_defector_lxWS",
            "ghost_taliban_HMG_gunner_lxWS",
            "ghost_taliban_crew_lxWS",
            "ghost_taliban_deserter_EXT_R5GL_lxWS",
            "ghost_taliban_enforcer_EXT_Zafir_lxWS",
            "ghost_taliban_enforcer_EXT_RPK12_lxWS",
            "ghost_taliban_deserter_EXT_AK12U_lxWS",
            "ghost_taliban_scout_EXT_DMR_Hunter_lxWS",
            "ghost_taliban_medic2_EXT_HShotgun_lxWS",
            "ghost_taliban_scout_EXT_DMR_camo_lxWS",
            "ghost_taliban_deserter_EXT_AKM_lxWS",
            "ghost_taliban_hireling_EXT_RPG7_lxWS",
            "ghost_taliban_watcher_EXT_AKS_lxWS",
            "ghost_taliban_watcher_EXT_AKM_lxWS",
            "ghost_taliban_APC_Wheeled_02_hmg_lxWS",
            "ghost_taliban_Mortar_lxWS",
            "ghost_taliban_HMG_02_lxWS",
            "ghost_taliban_HMG_02_high_lxWS",
            "ghost_taliban_Offroad_armor_lxWS",
            "ghost_taliban_Offroad_armor_AT_lxWS",
            "ghost_taliban_Offroad_armor_armed_lxWS",
            "ghost_taliban_Offroad_armor_AA_lxWS",
            "ghost_taliban_Truck_02_aa_lxWS",
            "ghost_taliban_ZU23_lxWS",
            "ghost_taliban_soldier_UAV_lxWS",
            "ghost_taliban_HeavyGunner_lxWS",
            "ghost_taliban_Pickup_01_RF",
            "ghost_taliban_Pickup_01_mmg_rf",
            "ghost_taliban_Pickup_01_hmg_rf",
            "ghost_taliban_Pickup_fuel_rf",
            "ghost_taliban_Pickup_01_Rocket_rf"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "data_f_lxWS_Loadorder",
            "RF_Data_Loadorder"
        };
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        authors[] = {"Ghost"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
