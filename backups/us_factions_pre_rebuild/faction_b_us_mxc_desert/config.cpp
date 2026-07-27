#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(B_UAV_RC40_HE_RF),
            QGVAR(B_UAV_RC40_SENSOR_RF),
            QGVAR(GX_B_HONEYBADGER_UGV_AT_GREEN),
            QGVAR(GX_B_HUNTER_SP_UAV),
            QGVAR(qav_ripsaw_c),
            QGVAR(qav_ripsaw_Mk44),
            QGVAR(GX_B_THEMIS_UGV_HUNTER_LAUNCHER),
            QGVAR(GX_B_THEMIS_UGV_DEFNDER_MEDIUM),
            QGVAR(GX_B_THEMIS_UGV_CARGO),
            QGVAR(GX_B_MAGURA_V5_USV),
            QGVAR(GX_B_MQ8B_UAV_RECON_SEATED),
            QGVAR(GX_B_MQ8B_UAV_RECON),
            QGVAR(GX_B_MQ8B_UAV_ARMED),
            QGVAR(rksla3_aeroshark_blufor),
            QGVAR(B_T_UAV_03_dynamicLoadout_F),
            QGVAR(Soldier_F),
            QGVAR(Soldier_lite_F),
            QGVAR(Soldier_TL_F),
            QGVAR(Soldier_SL_F),
            QGVAR(Soldier_GL_F),
            QGVAR(Soldier_AR_F),
            QGVAR(Soldier_A_F),
            QGVAR(Medic_F),
            QGVAR(Soldier_M_F),
            QGVAR(Soldier_LAT_F),
            QGVAR(Soldier_AT_F),
            QGVAR(Soldier_AA_F),
            QGVAR(Engineer_F),
            QGVAR(Soldier_Exp_F),
            QGVAR(soldier_repair_F),
            QGVAR(RadioOperator_F),
            QGVAR(soldier_UAV_F),
            QGVAR(officer_F),
            QGVAR(Crew_F),
            QGVAR(helipilot_F),
            QGVAR(helicrew_F),
            QGVAR(Pilot_F),
            QGVAR(recon_F),
            QGVAR(recon_TL_F),
            QGVAR(recon_M_F),
            QGVAR(recon_LAT_F),
            QGVAR(recon_exp_F),
            QGVAR(recon_medic_F),
            QGVAR(recon_JTAC_F),
            QGVAR(sniper_F),
            QGVAR(spotter_F),
            QGVAR(MRAP_01_F),
            QGVAR(MRAP_01_hmg_F),
            QGVAR(MRAP_01_gmg_F),
            QGVAR(Truck_01_transport_F),
            QGVAR(Truck_01_covered_F),
            QGVAR(Truck_01_box_F),
            QGVAR(Truck_01_ammo_F),
            QGVAR(Truck_01_fuel_F),
            QGVAR(Truck_01_medical_F),
            QGVAR(Truck_01_Repair_F),
            QGVAR(APC_Wheeled_01_cannon_F),
            QGVAR(APC_Tracked_01_rcws_F),
            QGVAR(APC_Tracked_01_AA_F),
            QGVAR(APC_Tracked_01_CRV_F),
            QGVAR(MBT_01_cannon_F),
            QGVAR(MBT_01_TUSK_F),
            QGVAR(MBT_01_arty_F),
            QGVAR(MBT_01_mlrs_F),
            QGVAR(UGV_01_F),
            QGVAR(UGV_01_rcws_F),
            QGVAR(Heli_Light_01_dynamicLoadout_F),
            QGVAR(Heli_Transport_01_F),
            QGVAR(Heli_Attack_01_dynamicLoadout_F),
            QGVAR(Heli_Transport_03_F),
            QGVAR(Heli_Transport_03_unarmed_F),
            QGVAR(Plane_CAS_01_dynamicLoadout_F),
            QGVAR(Boat_Transport_01_F),
            QGVAR(Boat_Armed_01_minigun_F),
            QGVAR(APC_Wheeled_02_apc_F)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghost_main",
            "A3_Air_F_Exp_UAV_03",
            "A3_Characters_F_BLUFOR",
            "DUST_Characters_Config",
            "ghostfa_ammo",
            "ghostfa_vehicles",
            "ghostfa_maincaliber",
            "ghostfa_mediumcaliber",
            "QAV_AbramsX",
            "A3_Armor_F_Exp_MBT_01",
            "qav_marshall"
        };
        skipWhenMissingDependencies = 1;
        author = QAUTHOR;
        authors[] = {"Ghost"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
