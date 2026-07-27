#include "script_component.hpp"

// Adds a set of 2035RU (min_rf) vehicles to the ghost_o_raf faction, with RAF crews.
// Kept as its own addon so faction_o_raf does NOT hard-depend on the 2035RU mod - if
// 2035RU (or the RAF faction) is absent, skipWhenMissingDependencies quietly skips this.

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "ghost_o_raf_min_rf_sa_22",
            "ghost_o_raf_min_rf_2b26",
            "ghost_o_raf_min_rf_gaz_2330",
            "ghost_o_raf_min_rf_gaz_2330_HMG",
            "ghost_o_raf_min_rf_ka_52",
            "ghost_o_raf_min_rf_t_14",
            "ghost_o_raf_min_rf_pchela_1t"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "ghost_faction_o_raf",
            "min_rf_vehicle",
            "min_rf_air",
            "min_rf_drones",
            "A3_Armor_F_Gamma",
            "A3_Armor_F_Gamma_MBT_01",
            "A3_Armor_F_Gamma_MBT_02"
        };
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        authors[] = {"Ghost"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
