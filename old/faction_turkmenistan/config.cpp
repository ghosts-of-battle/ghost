#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            // infantry
            QGVAR(Soldier_SL_F),
            QGVAR(RadioOperator_F),
            QGVAR(Soldier_LAT_F),
            QGVAR(Soldier_M_F),
            QGVAR(Soldier_TL_F),
            QGVAR(Soldier_AR_F),
            QGVAR(Soldier_A_F),
            QGVAR(Medic_F),
            QGVAR(Soldier_GL_F),
            QGVAR(Soldier_F),
            QGVAR(soldier_AA_F),
            QGVAR(soldier_AAA_F),
            QGVAR(soldier_AAR_F),
            QGVAR(Engineer_F),
            QGVAR(Soldier_Exp_F),
            QGVAR(Crew_F),
            // vehicles
            QGVAR(MRAP_02_F),
            QGVAR(Truck_02_transport_F),
            QGVAR(Wheeled_04_export_F),
            QGVAR(APC_Tracked_02_30mm_lxWS),
            QGVAR(MBT_02_cannon_F),
            QGVAR(APC_Wheeled_04_cannon_v2_F)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            // --- Aegis / Atlas source classes we inherit from ---
            "A3_Atlas_Characters_F_Atlas",
            "A3_Atlas_Armor_F_Atlas_MBT_02",
            "A3_Atlas_Armor_F_Atlas_APC_Wheeled_04",
            "A3_Atlas_Armor_F_Atlas_APC_Tracked_02",
            "A3_Atlas_Soft_F_Atlas_Truck_02",
            "A3_Atlas_Soft_F_Atlas_MRAP_02",
            "A3_Aegis_Air_F_Aegis_UAV_07",
            // --- futureAmmo: units spawn with FA magazines ---
            "ghostfa_ammo",
            "ghostfa_aegis",
            "ghostfa_maincaliber",
            "ghostfa_mediumcaliber",
            "ghostfa_grenade_40mm",
            "ghostfa_rpg",
            "ghostfa_missiles",
            // --- external drone mods (faction groups reference their UAV classes) ---
            "ArmaFPV_Data",         // I_Crocus_AP/AT (+_TI)
            "orion",                // orion_F_IND + KAB20/KAB50/KORNET
            "orlan_main",           // orlan_F_IND
            "gx_drones_core",
            "gx_drones_uav_rq11b",  // GX_I_RQ11B_UAV
            "gx_drones_uav_hunter", // GX_I_HUNTER_SP_UAV
            "vnd_Data",             // I_KVN_AP/AT (+_TI)
            "data_f_lxWS_Loadorder" // Western Sahara CDLC: I_UAV_02_lxWS (Bustard), I_G_UAV_02_IED_lxWS
            // NOTE: user's "I_Rev_Bustard" is not a real class; WS Independent Bustard = I_UAV_02_lxWS.
            // WS CDLC data ships with every A3 install, so this is always present.
        };
        author = "Ghosts of Battle";
        authors[] = {QAUTHOR};
        authorUrl = URL;
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
