#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "ghost_afghanistan_Truck_02_aa_lxWS",
            "ghost_afghanistan_ZU23_lxWS",
            "ghost_afghanistan_APC_Tracked_02_30mm_lxWS",
            "ghost_afghanistan_soldier_lxWS",
            "ghost_afghanistan_Soldier_universal_lxWS",
            "ghost_afghanistan_Soldier_TL_lxWS",
            "ghost_afghanistan_Soldier_GL_lxWS",
            "ghost_afghanistan_Soldier_AR_lxWS",
            "ghost_afghanistan_officer_lxWS",
            "ghost_afghanistan_sharpshooter_lxWS",
            "ghost_afghanistan_crew_lxWS",
            "ghost_afghanistan_pilot_lxWS",
            "ghost_afghanistan_soldier_at_lxWS",
            "ghost_afghanistan_soldier_aa_lxWS",
            "ghost_afghanistan_medic_lxWS",
            "ghost_afghanistan_exp_lxWS",
            "ghost_afghanistan_repair_lxWS",
            "ghost_afghanistan_soldier_unarmed_lxWS",
            "ghost_afghanistan_survivor_lxWS",
            "ghost_afghanistan_Soldier_AAT_lxWS",
            "ghost_afghanistan_Soldier_AAA_lxWS",
            "ghost_afghanistan_APC_Wheeled_02_unarmed_lxWS",
            "ghost_afghanistan_APC_Wheeled_02_hmg_lxWS",
            "ghost_afghanistan_APC_Tracked_02_cannon_lxWS",
            "ghost_afghanistan_APC_Tracked_02_AA_lxWS",
            "ghost_afghanistan_Mortar_lxWS",
            "ghost_afghanistan_HMG_02_lxWS",
            "ghost_afghanistan_HMG_02_high_lxWS",
            "ghost_afghanistan_Offroad_lxWS",
            "ghost_afghanistan_Offroad_AT_lxWS",
            "ghost_afghanistan_Offroad_armed_lxWS",
            "ghost_afghanistan_Offroad_aa_lxWS",
            "ghost_afghanistan_Truck_02_transport_lxWS",
            "ghost_afghanistan_Truck_02_flatbed_lxWS",
            "ghost_afghanistan_Truck_02_cargo_lxWS",
            "ghost_afghanistan_Truck_02_covered_lxWS",
            "ghost_afghanistan_Truck_02_box_lxWS",
            "ghost_afghanistan_Truck_02_Ammo_lxWS",
            "ghost_afghanistan_Truck_02_MRL_lxWS",
            "ghost_afghanistan_Truck_02_fuel_lxWS",
            "ghost_afghanistan_ZU23_stripped_lxWS",
            "ghost_afghanistan_HeavyGunner_lxWS",
            "ghost_afghanistan_soldier_lite_lxWS",
            "ghost_afghanistan_Heli_light_03_dynamicLoadout_F",
            "ghost_afghanistan_Heli_light_03_unarmed_F"
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
