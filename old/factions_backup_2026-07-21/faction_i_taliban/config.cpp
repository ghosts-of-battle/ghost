#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // infantry
            QGVAR(scout_F),
            QGVAR(watcher_F),
            QGVAR(enforcer_F),
            QGVAR(hireling_F),
            QGVAR(medic_F),
            QGVAR(thug_F),
            QGVAR(deserter_F),
            QGVAR(defector_F),
            QGVAR(soldier_UAV_F),
            QGVAR(HeavyGunner_F),
            QGVAR(HeavyGunner_2_F),
            QGVAR(crew_F),
            // cars
            QGVAR(Offroad_armor_F),
            QGVAR(Offroad_armor_AT_F),
            QGVAR(Offroad_armor_armed_F),
            QGVAR(Offroad_armor_AA_F),
            QGVAR(Pickup_F),
            QGVAR(Pickup_hmg_F),
            QGVAR(Pickup_fuel_F),
            QGVAR(Pickup_Rocket_F),
            // armor
            QGVAR(APC_Wheeled_04_export_F),
            // autonomous
            QGVAR(UAV_02_IED_F),
            // statics
            QGVAR(Mortar_F),
            QGVAR(HMG_02_F),
            QGVAR(HMG_02_high_F),
            QGVAR(ZU23_F),
            // drones
            QGVAR(Aegis_UAV_07_F),
            QGVAR(Crocus_AP), QGVAR(Crocus_AP_TI), QGVAR(Crocus_AT), QGVAR(Crocus_AT_TI),
            QGVAR(KVN_AP), QGVAR(KVN_AP_TI), QGVAR(KVN_AT), QGVAR(KVN_AT_TI),
            QGVAR(orion_F), QGVAR(orion_F_KAB20), QGVAR(orion_F_KAB50), QGVAR(orion_F_KORNET),
            QGVAR(orlan_F), QGVAR(RQ11B_UAV), QGVAR(HUNTER_SP_UAV),
            QGVAR(UAV_02_lxWS), QGVAR(UAV_01_F),
            QGVAR(AM_UAV_02_IED_F), QGVAR(Atlas_UAV_02_lxWS),
            QGVAR(Truck_02_MRL_F),
            QGVAR(Offroad_AA_lxWS), QGVAR(Truck_02_aa_lxWS), QGVAR(Pickup_aat_rf)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            // --- Western Sahara CDLC (Tura base classes; ships with every A3 install) ---
            "data_f_lxWS_Loadorder",
            // --- Aegis (HeavyGunner_2, Muharib APC, M4A1 rifles) ---
            "A3_Aegis_Characters_F_Aegis",
            "A3_Aegis_Armor_F_Aegis_APC_Wheeled_04",
            "A3_Aegis_Weapons_F_Aegis_Rifles_M4A1",
            // --- external drone mods (Drones groups reference their IND UAV classes) ---
            "ArmaFPV_Data",         // I_Crocus_AP/AT (+_TI)
            "vnd_Data",             // I_KVN_AP/AT (+_TI)
            "orion",                // orion_F_IND + KAB20/KAB50/KORNET
            "orlan_main",           // orlan_F_IND
            "gx_drones_core",
            "A3_Atlas_Air_F_Atlas_UAV_02_lxWS",  // Atlas_I_I_UAV_02_lxWS
            "A3_Atlas_Soft_F_Atlas_Truck_02",    // Atlas_I_AR_Truck_02_MRL_F (base arty)
            "RF_Data_Loadorder",                 // Reaction Forces CDLC: I_Pickup_aat_rf
            "A3_AddGis_Air_F_AddGis",  // AddGis_I_AM_UAV_02_IED_F
            "gx_drones_uav_rq11b",  // GX_I_RQ11B_UAV
            "gx_drones_uav_hunter", // GX_I_HUNTER_SP_UAV
            "A3_Aegis_Air_F_Aegis_UAV_07" // Aegis_I_UAV_07_F
        };
        skipWhenMissingDependencies = 1;
        author = "Ghosts of Battle";
        authors[] = {QAUTHOR};
        authorUrl = URL;
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
