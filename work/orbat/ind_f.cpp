//////////////////////////////////////////////////////////////////////////////////
// Faction config rebuilt by tools/gen_orbat_from_rpt.py
// from an in-game dump. ALiVE_orbatCreator_loadout and the
// per-vehicle Turrets override are absent - see that file's header.
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgFactionClasses {
    class IND_F {
        displayName = "AAF";
        side = 2;
        priority = 1;
        icon = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
        flag = "\a3\Data_f\Flags\flag_AAF_co.paa";
    };
};

class CfgVehicles {

    class ACE_SpottingScopeObject;
    class ACE_SpottingScopeObject_OCimport_01 : ACE_SpottingScopeObject { scope = 0; class EventHandlers; };
    class ACE_SpottingScopeObject_OCimport_02 : ACE_SpottingScopeObject_OCimport_01 { class EventHandlers; };

    class Aegis_I_Soldier_MG_F;
    class Aegis_I_Soldier_MG_F_OCimport_01 : Aegis_I_Soldier_MG_F { scope = 0; class EventHandlers; };
    class Aegis_I_Soldier_MG_F_OCimport_02 : Aegis_I_Soldier_MG_F_OCimport_01 { class EventHandlers; };

    class Aegis_Heli_Transport_02_Heavy_base_F;
    class Aegis_Heli_Transport_02_Heavy_base_F_OCimport_01 : Aegis_Heli_Transport_02_Heavy_base_F { scope = 0; class EventHandlers; };
    class Aegis_Heli_Transport_02_Heavy_base_F_OCimport_02 : Aegis_Heli_Transport_02_Heavy_base_F_OCimport_01 { class EventHandlers; };

    class I_Soldier_AR_F;
    class I_Soldier_AR_F_OCimport_01 : I_Soldier_AR_F { scope = 0; class EventHandlers; };
    class I_Soldier_AR_F_OCimport_02 : I_Soldier_AR_F_OCimport_01 { class EventHandlers; };

    class Aegis_UAV_07_base_F;
    class Aegis_UAV_07_base_F_OCimport_01 : Aegis_UAV_07_base_F { scope = 0; class EventHandlers; };
    class Aegis_UAV_07_base_F_OCimport_02 : Aegis_UAV_07_base_F_OCimport_01 { class EventHandlers; };

    class Aegis_I_Soldier_recon_base;
    class Aegis_I_Soldier_recon_base_OCimport_01 : Aegis_I_Soldier_recon_base { scope = 0; class EventHandlers; };
    class Aegis_I_Soldier_recon_base_OCimport_02 : Aegis_I_Soldier_recon_base_OCimport_01 { class EventHandlers; };

    class Atlas_I_Pathfinder_base_F;
    class Atlas_I_Pathfinder_base_F_OCimport_01 : Atlas_I_Pathfinder_base_F { scope = 0; class EventHandlers; };
    class Atlas_I_Pathfinder_base_F_OCimport_02 : Atlas_I_Pathfinder_base_F_OCimport_01 { class EventHandlers; };

    class I_support_CMort_RF;
    class I_support_CMort_RF_OCimport_01 : I_support_CMort_RF { scope = 0; class EventHandlers; };
    class I_support_CMort_RF_OCimport_02 : I_support_CMort_RF_OCimport_01 { class EventHandlers; };

    class Atlas_I_Pathfinder_F;
    class Atlas_I_Pathfinder_F_OCimport_01 : Atlas_I_Pathfinder_F { scope = 0; class EventHandlers; };
    class Atlas_I_Pathfinder_F_OCimport_02 : Atlas_I_Pathfinder_F_OCimport_01 { class EventHandlers; };

    class EF_CombatBoat_AT_Indep_Base;
    class EF_CombatBoat_AT_Indep_Base_OCimport_01 : EF_CombatBoat_AT_Indep_Base { scope = 0; class EventHandlers; };
    class EF_CombatBoat_AT_Indep_Base_OCimport_02 : EF_CombatBoat_AT_Indep_Base_OCimport_01 { class EventHandlers; };

    class EF_CombatBoat_HMG_Indep_Base;
    class EF_CombatBoat_HMG_Indep_Base_OCimport_01 : EF_CombatBoat_HMG_Indep_Base { scope = 0; class EventHandlers; };
    class EF_CombatBoat_HMG_Indep_Base_OCimport_02 : EF_CombatBoat_HMG_Indep_Base_OCimport_01 { class EventHandlers; };

    class EF_CombatBoat_Unarmed_Base;
    class EF_CombatBoat_Unarmed_Base_OCimport_01 : EF_CombatBoat_Unarmed_Base { scope = 0; class EventHandlers; };
    class EF_CombatBoat_Unarmed_Base_OCimport_02 : EF_CombatBoat_Unarmed_Base_OCimport_01 { class EventHandlers; };

    class EF_LCC_Base;
    class EF_LCC_Base_OCimport_01 : EF_LCC_Base { scope = 0; class EventHandlers; };
    class EF_LCC_Base_OCimport_02 : EF_LCC_Base_OCimport_01 { class EventHandlers; };

    class EF_LCC_SideLoad_Base;
    class EF_LCC_SideLoad_Base_OCimport_01 : EF_LCC_SideLoad_Base { scope = 0; class EventHandlers; };
    class EF_LCC_SideLoad_Base_OCimport_02 : EF_LCC_SideLoad_Base_OCimport_01 { class EventHandlers; };

    class I_soldier_F;
    class I_soldier_F_OCimport_01 : I_soldier_F { scope = 0; class EventHandlers; };
    class I_soldier_F_OCimport_02 : I_soldier_F_OCimport_01 { class EventHandlers; };

    class GX_BLACKHORNET_UAV_BASE;
    class GX_BLACKHORNET_UAV_BASE_OCimport_01 : GX_BLACKHORNET_UAV_BASE { scope = 0; class EventHandlers; };
    class GX_BLACKHORNET_UAV_BASE_OCimport_02 : GX_BLACKHORNET_UAV_BASE_OCimport_01 { class EventHandlers; };

    class GX_B_DRONE40_UAV_HE;
    class GX_B_DRONE40_UAV_HE_OCimport_01 : GX_B_DRONE40_UAV_HE { scope = 0; class EventHandlers; };
    class GX_B_DRONE40_UAV_HE_OCimport_02 : GX_B_DRONE40_UAV_HE_OCimport_01 { class EventHandlers; };

    class GX_B_DRONE40_UAV_RECON;
    class GX_B_DRONE40_UAV_RECON_OCimport_01 : GX_B_DRONE40_UAV_RECON { scope = 0; class EventHandlers; };
    class GX_B_DRONE40_UAV_RECON_OCimport_02 : GX_B_DRONE40_UAV_RECON_OCimport_01 { class EventHandlers; };

    class GX_B_DRONE40_UAV_SMOKE_BLUE;
    class GX_B_DRONE40_UAV_SMOKE_BLUE_OCimport_01 : GX_B_DRONE40_UAV_SMOKE_BLUE { scope = 0; class EventHandlers; };
    class GX_B_DRONE40_UAV_SMOKE_BLUE_OCimport_02 : GX_B_DRONE40_UAV_SMOKE_BLUE_OCimport_01 { class EventHandlers; };

    class GX_B_DRONE40_UAV_SMOKE_GREEN;
    class GX_B_DRONE40_UAV_SMOKE_GREEN_OCimport_01 : GX_B_DRONE40_UAV_SMOKE_GREEN { scope = 0; class EventHandlers; };
    class GX_B_DRONE40_UAV_SMOKE_GREEN_OCimport_02 : GX_B_DRONE40_UAV_SMOKE_GREEN_OCimport_01 { class EventHandlers; };

    class GX_B_DRONE40_UAV_SMOKE_ORANGE;
    class GX_B_DRONE40_UAV_SMOKE_ORANGE_OCimport_01 : GX_B_DRONE40_UAV_SMOKE_ORANGE { scope = 0; class EventHandlers; };
    class GX_B_DRONE40_UAV_SMOKE_ORANGE_OCimport_02 : GX_B_DRONE40_UAV_SMOKE_ORANGE_OCimport_01 { class EventHandlers; };

    class GX_B_DRONE40_UAV_SMOKE_PURPLE;
    class GX_B_DRONE40_UAV_SMOKE_PURPLE_OCimport_01 : GX_B_DRONE40_UAV_SMOKE_PURPLE { scope = 0; class EventHandlers; };
    class GX_B_DRONE40_UAV_SMOKE_PURPLE_OCimport_02 : GX_B_DRONE40_UAV_SMOKE_PURPLE_OCimport_01 { class EventHandlers; };

    class GX_B_DRONE40_UAV_SMOKE_RED;
    class GX_B_DRONE40_UAV_SMOKE_RED_OCimport_01 : GX_B_DRONE40_UAV_SMOKE_RED { scope = 0; class EventHandlers; };
    class GX_B_DRONE40_UAV_SMOKE_RED_OCimport_02 : GX_B_DRONE40_UAV_SMOKE_RED_OCimport_01 { class EventHandlers; };

    class GX_B_DRONE40_UAV_SMOKE_WHITE;
    class GX_B_DRONE40_UAV_SMOKE_WHITE_OCimport_01 : GX_B_DRONE40_UAV_SMOKE_WHITE { scope = 0; class EventHandlers; };
    class GX_B_DRONE40_UAV_SMOKE_WHITE_OCimport_02 : GX_B_DRONE40_UAV_SMOKE_WHITE_OCimport_01 { class EventHandlers; };

    class GX_B_DRONE40_UAV_SMOKE_YELLOW;
    class GX_B_DRONE40_UAV_SMOKE_YELLOW_OCimport_01 : GX_B_DRONE40_UAV_SMOKE_YELLOW { scope = 0; class EventHandlers; };
    class GX_B_DRONE40_UAV_SMOKE_YELLOW_OCimport_02 : GX_B_DRONE40_UAV_SMOKE_YELLOW_OCimport_01 { class EventHandlers; };

    class GX_HONEYBADGER_UGV_AT_BASE;
    class GX_HONEYBADGER_UGV_AT_BASE_OCimport_01 : GX_HONEYBADGER_UGV_AT_BASE { scope = 0; class EventHandlers; };
    class GX_HONEYBADGER_UGV_AT_BASE_OCimport_02 : GX_HONEYBADGER_UGV_AT_BASE_OCimport_01 { class EventHandlers; };

    class GX_HUNTER_SP_LAUNCHER_BASE;
    class GX_HUNTER_SP_LAUNCHER_BASE_OCimport_01 : GX_HUNTER_SP_LAUNCHER_BASE { scope = 0; class EventHandlers; };
    class GX_HUNTER_SP_LAUNCHER_BASE_OCimport_02 : GX_HUNTER_SP_LAUNCHER_BASE_OCimport_01 { class EventHandlers; };

    class GX_HUNTER_SP_UAV_BASE;
    class GX_HUNTER_SP_UAV_BASE_OCimport_01 : GX_HUNTER_SP_UAV_BASE { scope = 0; class EventHandlers; };
    class GX_HUNTER_SP_UAV_BASE_OCimport_02 : GX_HUNTER_SP_UAV_BASE_OCimport_01 { class EventHandlers; };

    class GX_MAGURA_V5_USV_BASE;
    class GX_MAGURA_V5_USV_BASE_OCimport_01 : GX_MAGURA_V5_USV_BASE { scope = 0; class EventHandlers; };
    class GX_MAGURA_V5_USV_BASE_OCimport_02 : GX_MAGURA_V5_USV_BASE_OCimport_01 { class EventHandlers; };

    class GX_MQ8B_UAV_ARMED_BASE;
    class GX_MQ8B_UAV_ARMED_BASE_OCimport_01 : GX_MQ8B_UAV_ARMED_BASE { scope = 0; class EventHandlers; };
    class GX_MQ8B_UAV_ARMED_BASE_OCimport_02 : GX_MQ8B_UAV_ARMED_BASE_OCimport_01 { class EventHandlers; };

    class GX_MQ8B_UAV_RECON_BASE;
    class GX_MQ8B_UAV_RECON_BASE_OCimport_01 : GX_MQ8B_UAV_RECON_BASE { scope = 0; class EventHandlers; };
    class GX_MQ8B_UAV_RECON_BASE_OCimport_02 : GX_MQ8B_UAV_RECON_BASE_OCimport_01 { class EventHandlers; };

    class GX_I_MQ8B_UAV_RECON;
    class GX_I_MQ8B_UAV_RECON_OCimport_01 : GX_I_MQ8B_UAV_RECON { scope = 0; class EventHandlers; };
    class GX_I_MQ8B_UAV_RECON_OCimport_02 : GX_I_MQ8B_UAV_RECON_OCimport_01 { class EventHandlers; };

    class GX_RQ11B_UAV_BASE;
    class GX_RQ11B_UAV_BASE_OCimport_01 : GX_RQ11B_UAV_BASE { scope = 0; class EventHandlers; };
    class GX_RQ11B_UAV_BASE_OCimport_02 : GX_RQ11B_UAV_BASE_OCimport_01 { class EventHandlers; };

    class GX_RWS_DEFNDER_MEDIUM_BASE;
    class GX_RWS_DEFNDER_MEDIUM_BASE_OCimport_01 : GX_RWS_DEFNDER_MEDIUM_BASE { scope = 0; class EventHandlers; };
    class GX_RWS_DEFNDER_MEDIUM_BASE_OCimport_02 : GX_RWS_DEFNDER_MEDIUM_BASE_OCimport_01 { class EventHandlers; };

    class GX_THEMIS_UGV_CARGO_BASE;
    class GX_THEMIS_UGV_CARGO_BASE_OCimport_01 : GX_THEMIS_UGV_CARGO_BASE { scope = 0; class EventHandlers; };
    class GX_THEMIS_UGV_CARGO_BASE_OCimport_02 : GX_THEMIS_UGV_CARGO_BASE_OCimport_01 { class EventHandlers; };

    class GX_THEMIS_UGV_DEFNDER_MEDIUM_BASE;
    class GX_THEMIS_UGV_DEFNDER_MEDIUM_BASE_OCimport_01 : GX_THEMIS_UGV_DEFNDER_MEDIUM_BASE { scope = 0; class EventHandlers; };
    class GX_THEMIS_UGV_DEFNDER_MEDIUM_BASE_OCimport_02 : GX_THEMIS_UGV_DEFNDER_MEDIUM_BASE_OCimport_01 { class EventHandlers; };

    class GX_THEMIS_UGV_HUNTER_LAUNCHER_BASE;
    class GX_THEMIS_UGV_HUNTER_LAUNCHER_BASE_OCimport_01 : GX_THEMIS_UGV_HUNTER_LAUNCHER_BASE { scope = 0; class EventHandlers; };
    class GX_THEMIS_UGV_HUNTER_LAUNCHER_BASE_OCimport_02 : GX_THEMIS_UGV_HUNTER_LAUNCHER_BASE_OCimport_01 { class EventHandlers; };

    class I_APC_Wheeled_03_base_F;
    class I_APC_Wheeled_03_base_F_OCimport_01 : I_APC_Wheeled_03_base_F { scope = 0; class EventHandlers; };
    class I_APC_Wheeled_03_base_F_OCimport_02 : I_APC_Wheeled_03_base_F_OCimport_01 { class EventHandlers; };

    class APC_Tracked_03_base_v2_F;
    class APC_Tracked_03_base_v2_F_OCimport_01 : APC_Tracked_03_base_v2_F { scope = 0; class EventHandlers; };
    class APC_Tracked_03_base_v2_F_OCimport_02 : APC_Tracked_03_base_v2_F_OCimport_01 { class EventHandlers; };

    class Truck_02_aa_base_lxWS;
    class Truck_02_aa_base_lxWS_OCimport_01 : Truck_02_aa_base_lxWS { scope = 0; class EventHandlers; };
    class Truck_02_aa_base_lxWS_OCimport_02 : Truck_02_aa_base_lxWS_OCimport_01 { class EventHandlers; };

    class Boat_Armed_01_minigun_base_F;
    class Boat_Armed_01_minigun_base_F_OCimport_01 : Boat_Armed_01_minigun_base_F { scope = 0; class EventHandlers; };
    class Boat_Armed_01_minigun_base_F_OCimport_02 : Boat_Armed_01_minigun_base_F_OCimport_01 { class EventHandlers; };

    class Rubber_duck_base_F;
    class Rubber_duck_base_F_OCimport_01 : Rubber_duck_base_F { scope = 0; class EventHandlers; };
    class Rubber_duck_base_F_OCimport_02 : Rubber_duck_base_F_OCimport_01 { class EventHandlers; };

    class I_officer_F;
    class I_officer_F_OCimport_01 : I_officer_F { scope = 0; class EventHandlers; };
    class I_officer_F_OCimport_02 : I_officer_F_OCimport_01 { class EventHandlers; };

    class B_CommandoMortar_RF;
    class B_CommandoMortar_RF_OCimport_01 : B_CommandoMortar_RF { scope = 0; class EventHandlers; };
    class B_CommandoMortar_RF_OCimport_02 : B_CommandoMortar_RF_OCimport_01 { class EventHandlers; };

    class ARMAFPV_Crocus_AP_Base;
    class ARMAFPV_Crocus_AP_Base_OCimport_01 : ARMAFPV_Crocus_AP_Base { scope = 0; class EventHandlers; };
    class ARMAFPV_Crocus_AP_Base_OCimport_02 : ARMAFPV_Crocus_AP_Base_OCimport_01 { class EventHandlers; };

    class I_Crocus_AP;
    class I_Crocus_AP_OCimport_01 : I_Crocus_AP { scope = 0; class EventHandlers; };
    class I_Crocus_AP_OCimport_02 : I_Crocus_AP_OCimport_01 { class EventHandlers; };

    class ARMAFPV_Crocus_AT_Base;
    class ARMAFPV_Crocus_AT_Base_OCimport_01 : ARMAFPV_Crocus_AT_Base { scope = 0; class EventHandlers; };
    class ARMAFPV_Crocus_AT_Base_OCimport_02 : ARMAFPV_Crocus_AT_Base_OCimport_01 { class EventHandlers; };

    class I_Crocus_AT;
    class I_Crocus_AT_OCimport_01 : I_Crocus_AT { scope = 0; class EventHandlers; };
    class I_Crocus_AT_OCimport_02 : I_Crocus_AT_OCimport_01 { class EventHandlers; };

    class I_pilot_F;
    class I_pilot_F_OCimport_01 : I_pilot_F { scope = 0; class EventHandlers; };
    class I_pilot_F_OCimport_02 : I_pilot_F_OCimport_01 { class EventHandlers; };

    class GMG_01_A_base_F;
    class GMG_01_A_base_F_OCimport_01 : GMG_01_A_base_F { scope = 0; class EventHandlers; };
    class GMG_01_A_base_F_OCimport_02 : GMG_01_A_base_F_OCimport_01 { class EventHandlers; };

    class GMG_01_base_F;
    class GMG_01_base_F_OCimport_01 : GMG_01_base_F { scope = 0; class EventHandlers; };
    class GMG_01_base_F_OCimport_02 : GMG_01_base_F_OCimport_01 { class EventHandlers; };

    class GMG_01_high_base_F;
    class GMG_01_high_base_F_OCimport_01 : GMG_01_high_base_F { scope = 0; class EventHandlers; };
    class GMG_01_high_base_F_OCimport_02 : GMG_01_high_base_F_OCimport_01 { class EventHandlers; };

    class HMG_01_A_base_F;
    class HMG_01_A_base_F_OCimport_01 : HMG_01_A_base_F { scope = 0; class EventHandlers; };
    class HMG_01_A_base_F_OCimport_02 : HMG_01_A_base_F_OCimport_01 { class EventHandlers; };

    class HMG_01_base_F;
    class HMG_01_base_F_OCimport_01 : HMG_01_base_F { scope = 0; class EventHandlers; };
    class HMG_01_base_F_OCimport_02 : HMG_01_base_F_OCimport_01 { class EventHandlers; };

    class HMG_01_high_base_F;
    class HMG_01_high_base_F_OCimport_01 : HMG_01_high_base_F { scope = 0; class EventHandlers; };
    class HMG_01_high_base_F_OCimport_02 : HMG_01_high_base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_base_F;
    class HMG_02_base_F_OCimport_01 : HMG_02_base_F { scope = 0; class EventHandlers; };
    class HMG_02_base_F_OCimport_02 : HMG_02_base_F_OCimport_01 { class EventHandlers; };

    class HMG_02_high_base_F;
    class HMG_02_high_base_F_OCimport_01 : HMG_02_high_base_F { scope = 0; class EventHandlers; };
    class HMG_02_high_base_F_OCimport_02 : HMG_02_high_base_F_OCimport_01 { class EventHandlers; };

    class Aegis_Heli_Attack_03_v2_base_F;
    class Aegis_Heli_Attack_03_v2_base_F_OCimport_01 : Aegis_Heli_Attack_03_v2_base_F { scope = 0; class EventHandlers; };
    class Aegis_Heli_Attack_03_v2_base_F_OCimport_02 : Aegis_Heli_Attack_03_v2_base_F_OCimport_01 { class EventHandlers; };

    class Heli_EC_01A_military_base_RF;
    class Heli_EC_01A_military_base_RF_OCimport_01 : Heli_EC_01A_military_base_RF { scope = 0; class EventHandlers; };
    class Heli_EC_01A_military_base_RF_OCimport_02 : Heli_EC_01A_military_base_RF_OCimport_01 { class EventHandlers; };

    class Heli_EC_02_base_RF;
    class Heli_EC_02_base_RF_OCimport_01 : Heli_EC_02_base_RF { scope = 0; class EventHandlers; };
    class Heli_EC_02_base_RF_OCimport_02 : Heli_EC_02_base_RF_OCimport_01 { class EventHandlers; };

    class B_Heli_Light_01_F;
    class B_Heli_Light_01_F_OCimport_01 : B_Heli_Light_01_F { scope = 0; class EventHandlers; };
    class B_Heli_Light_01_F_OCimport_02 : B_Heli_Light_01_F_OCimport_01 { class EventHandlers; };

    class B_Heli_Light_01_dynamicLoadout_F;
    class B_Heli_Light_01_dynamicLoadout_F_OCimport_01 : B_Heli_Light_01_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class B_Heli_Light_01_dynamicLoadout_F_OCimport_02 : B_Heli_Light_01_dynamicLoadout_F_OCimport_01 { class EventHandlers; };

    class Heli_Transport_02_base_F;
    class Heli_Transport_02_base_F_OCimport_01 : Heli_Transport_02_base_F { scope = 0; class EventHandlers; };
    class Heli_Transport_02_base_F_OCimport_02 : Heli_Transport_02_base_F_OCimport_01 { class EventHandlers; };

    class Heli_light_03_dynamicLoadout_base_F;
    class Heli_light_03_dynamicLoadout_base_F_OCimport_01 : Heli_light_03_dynamicLoadout_base_F { scope = 0; class EventHandlers; };
    class Heli_light_03_dynamicLoadout_base_F_OCimport_02 : Heli_light_03_dynamicLoadout_base_F_OCimport_01 { class EventHandlers; };

    class Heli_light_03_unarmed_base_F;
    class Heli_light_03_unarmed_base_F_OCimport_01 : Heli_light_03_unarmed_base_F { scope = 0; class EventHandlers; };
    class Heli_light_03_unarmed_base_F_OCimport_02 : Heli_light_03_unarmed_base_F_OCimport_01 { class EventHandlers; };

    class I_KVN_AT;
    class I_KVN_AT_OCimport_01 : I_KVN_AT { scope = 0; class EventHandlers; };
    class I_KVN_AT_OCimport_02 : I_KVN_AT_OCimport_01 { class EventHandlers; };

    class I_KVN_AP;
    class I_KVN_AP_OCimport_01 : I_KVN_AP { scope = 0; class EventHandlers; };
    class I_KVN_AP_OCimport_02 : I_KVN_AP_OCimport_01 { class EventHandlers; };

    class vnd_KVN_Base;
    class vnd_KVN_Base_OCimport_01 : vnd_KVN_Base { scope = 0; class EventHandlers; };
    class vnd_KVN_Base_OCimport_02 : vnd_KVN_Base_OCimport_01 { class EventHandlers; };

    class LT_01_AA_base_F;
    class LT_01_AA_base_F_OCimport_01 : LT_01_AA_base_F { scope = 0; class EventHandlers; };
    class LT_01_AA_base_F_OCimport_02 : LT_01_AA_base_F_OCimport_01 { class EventHandlers; };

    class LT_01_AT_base_F;
    class LT_01_AT_base_F_OCimport_01 : LT_01_AT_base_F { scope = 0; class EventHandlers; };
    class LT_01_AT_base_F_OCimport_02 : LT_01_AT_base_F_OCimport_01 { class EventHandlers; };

    class LT_01_cannon_base_F;
    class LT_01_cannon_base_F_OCimport_01 : LT_01_cannon_base_F { scope = 0; class EventHandlers; };
    class LT_01_cannon_base_F_OCimport_02 : LT_01_cannon_base_F_OCimport_01 { class EventHandlers; };

    class LT_01_scout_base_F;
    class LT_01_scout_base_F_OCimport_01 : LT_01_scout_base_F { scope = 0; class EventHandlers; };
    class LT_01_scout_base_F_OCimport_02 : LT_01_scout_base_F_OCimport_01 { class EventHandlers; };

    class I_MBT_03_base_F;
    class I_MBT_03_base_F_OCimport_01 : I_MBT_03_base_F { scope = 0; class EventHandlers; };
    class I_MBT_03_base_F_OCimport_02 : I_MBT_03_base_F_OCimport_01 { class EventHandlers; };

    class MRAP_03_base_F;
    class MRAP_03_base_F_OCimport_01 : MRAP_03_base_F { scope = 0; class EventHandlers; };
    class MRAP_03_base_F_OCimport_02 : MRAP_03_base_F_OCimport_01 { class EventHandlers; };

    class MRAP_03_gmg_base_F;
    class MRAP_03_gmg_base_F_OCimport_01 : MRAP_03_gmg_base_F { scope = 0; class EventHandlers; };
    class MRAP_03_gmg_base_F_OCimport_02 : MRAP_03_gmg_base_F_OCimport_01 { class EventHandlers; };

    class MRAP_03_hmg_base_F;
    class MRAP_03_hmg_base_F_OCimport_01 : MRAP_03_hmg_base_F { scope = 0; class EventHandlers; };
    class MRAP_03_hmg_base_F_OCimport_02 : MRAP_03_hmg_base_F_OCimport_01 { class EventHandlers; };

    class Mortar_01_base_F;
    class Mortar_01_base_F_OCimport_01 : Mortar_01_base_F { scope = 0; class EventHandlers; };
    class Mortar_01_base_F_OCimport_02 : Mortar_01_base_F_OCimport_01 { class EventHandlers; };

    class I_Officer_Parade_F;
    class I_Officer_Parade_F_OCimport_01 : I_Officer_Parade_F { scope = 0; class EventHandlers; };
    class I_Officer_Parade_F_OCimport_02 : I_Officer_Parade_F_OCimport_01 { class EventHandlers; };

    class Pickup_comms_base_rf;
    class Pickup_comms_base_rf_OCimport_01 : Pickup_comms_base_rf { scope = 0; class EventHandlers; };
    class Pickup_comms_base_rf_OCimport_02 : Pickup_comms_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_aat_base_rf;
    class Pickup_01_aat_base_rf_OCimport_01 : Pickup_01_aat_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_aat_base_rf_OCimport_02 : Pickup_01_aat_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_hmg_base_rf;
    class Pickup_01_hmg_base_rf_OCimport_01 : Pickup_01_hmg_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_hmg_base_rf_OCimport_02 : Pickup_01_hmg_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_rcws_base_rf;
    class Pickup_01_rcws_base_rf_OCimport_01 : Pickup_01_rcws_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_rcws_base_rf_OCimport_02 : Pickup_01_rcws_base_rf_OCimport_01 { class EventHandlers; };

    class Pickup_01_base_rf;
    class Pickup_01_base_rf_OCimport_01 : Pickup_01_base_rf { scope = 0; class EventHandlers; };
    class Pickup_01_base_rf_OCimport_02 : Pickup_01_base_rf_OCimport_01 { class EventHandlers; };

    class Plane_Fighter_03_dynamicLoadout_base_F;
    class Plane_Fighter_03_dynamicLoadout_base_F_OCimport_01 : Plane_Fighter_03_dynamicLoadout_base_F { scope = 0; class EventHandlers; };
    class Plane_Fighter_03_dynamicLoadout_base_F_OCimport_02 : Plane_Fighter_03_dynamicLoadout_base_F_OCimport_01 { class EventHandlers; };

    class Plane_Fighter_04_Base_F;
    class Plane_Fighter_04_Base_F_OCimport_01 : Plane_Fighter_04_Base_F { scope = 0; class EventHandlers; };
    class Plane_Fighter_04_Base_F_OCimport_02 : Plane_Fighter_04_Base_F_OCimport_01 { class EventHandlers; };

    class Plane_Transport_01_infantry_base_F;
    class Plane_Transport_01_infantry_base_F_OCimport_01 : Plane_Transport_01_infantry_base_F { scope = 0; class EventHandlers; };
    class Plane_Transport_01_infantry_base_F_OCimport_02 : Plane_Transport_01_infantry_base_F_OCimport_01 { class EventHandlers; };

    class Plane_Transport_01_vehicle_base_F;
    class Plane_Transport_01_vehicle_base_F_OCimport_01 : Plane_Transport_01_vehicle_base_F { scope = 0; class EventHandlers; };
    class Plane_Transport_01_vehicle_base_F_OCimport_02 : Plane_Transport_01_vehicle_base_F_OCimport_01 { class EventHandlers; };

    class I_Soldier_base_F;
    class I_Soldier_base_F_OCimport_01 : I_Soldier_base_F { scope = 0; class EventHandlers; };
    class I_Soldier_base_F_OCimport_02 : I_Soldier_base_F_OCimport_01 { class EventHandlers; };

    class Quadbike_01_base_F;
    class Quadbike_01_base_F_OCimport_01 : Quadbike_01_base_F { scope = 0; class EventHandlers; };
    class Quadbike_01_base_F_OCimport_02 : Quadbike_01_base_F_OCimport_01 { class EventHandlers; };

    class I_UAV_02_lxWS;
    class I_UAV_02_lxWS_OCimport_01 : I_UAV_02_lxWS { scope = 0; class EventHandlers; };
    class I_UAV_02_lxWS_OCimport_02 : I_UAV_02_lxWS_OCimport_01 { class EventHandlers; };

    class I_UAV_01_F;
    class I_UAV_01_F_OCimport_01 : I_UAV_01_F { scope = 0; class EventHandlers; };
    class I_UAV_01_F_OCimport_02 : I_UAV_01_F_OCimport_01 { class EventHandlers; };

    class C_IDAP_UAV_06_antimine_F;
    class C_IDAP_UAV_06_antimine_F_OCimport_01 : C_IDAP_UAV_06_antimine_F { scope = 0; class EventHandlers; };
    class C_IDAP_UAV_06_antimine_F_OCimport_02 : C_IDAP_UAV_06_antimine_F_OCimport_01 { class EventHandlers; };

    class B_W_Static_Designator_01_F;
    class B_W_Static_Designator_01_F_OCimport_01 : B_W_Static_Designator_01_F { scope = 0; class EventHandlers; };
    class B_W_Static_Designator_01_F_OCimport_02 : B_W_Static_Designator_01_F_OCimport_01 { class EventHandlers; };

    class I_UAV_06_F;
    class I_UAV_06_F_OCimport_01 : I_UAV_06_F { scope = 0; class EventHandlers; };
    class I_UAV_06_F_OCimport_02 : I_UAV_06_F_OCimport_01 { class EventHandlers; };

    class I_UGV_02_Demining_F;
    class I_UGV_02_Demining_F_OCimport_01 : I_UGV_02_Demining_F { scope = 0; class EventHandlers; };
    class I_UGV_02_Demining_F_OCimport_02 : I_UGV_02_Demining_F_OCimport_01 { class EventHandlers; };

    class I_UGV_02_Science_F;
    class I_UGV_02_Science_F_OCimport_01 : I_UGV_02_Science_F { scope = 0; class EventHandlers; };
    class I_UGV_02_Science_F_OCimport_02 : I_UGV_02_Science_F_OCimport_01 { class EventHandlers; };

    class SDV_01_base_F;
    class SDV_01_base_F_OCimport_01 : SDV_01_base_F { scope = 0; class EventHandlers; };
    class SDV_01_base_F_OCimport_02 : SDV_01_base_F_OCimport_01 { class EventHandlers; };

    class I_Soldier_sniper_base_F;
    class I_Soldier_sniper_base_F_OCimport_01 : I_Soldier_sniper_base_F { scope = 0; class EventHandlers; };
    class I_Soldier_sniper_base_F_OCimport_02 : I_Soldier_sniper_base_F_OCimport_01 { class EventHandlers; };

    class I_Soldier_AAT_F;
    class I_Soldier_AAT_F_OCimport_01 : I_Soldier_AAT_F { scope = 0; class EventHandlers; };
    class I_Soldier_AAT_F_OCimport_02 : I_Soldier_AAT_F_OCimport_01 { class EventHandlers; };

    class I_Soldier_support_base_F;
    class I_Soldier_support_base_F_OCimport_01 : I_Soldier_support_base_F { scope = 0; class EventHandlers; };
    class I_Soldier_support_base_F_OCimport_02 : I_Soldier_support_base_F_OCimport_01 { class EventHandlers; };

    class I_Soldier_02_F;
    class I_Soldier_02_F_OCimport_01 : I_Soldier_02_F { scope = 0; class EventHandlers; };
    class I_Soldier_02_F_OCimport_02 : I_Soldier_02_F_OCimport_01 { class EventHandlers; };

    class I_Soldier_LAT2_F;
    class I_Soldier_LAT2_F_OCimport_01 : I_Soldier_LAT2_F { scope = 0; class EventHandlers; };
    class I_Soldier_LAT2_F_OCimport_02 : I_Soldier_LAT2_F_OCimport_01 { class EventHandlers; };

    class Static_Designator_01_base_F;
    class Static_Designator_01_base_F_OCimport_01 : Static_Designator_01_base_F { scope = 0; class EventHandlers; };
    class Static_Designator_01_base_F_OCimport_02 : Static_Designator_01_base_F_OCimport_01 { class EventHandlers; };

    class I_crew_F;
    class I_crew_F_OCimport_01 : I_crew_F { scope = 0; class EventHandlers; };
    class I_crew_F_OCimport_02 : I_crew_F_OCimport_01 { class EventHandlers; };

    class B_SwitchBlade_300;
    class B_SwitchBlade_300_OCimport_01 : B_SwitchBlade_300 { scope = 0; class EventHandlers; };
    class B_SwitchBlade_300_OCimport_02 : B_SwitchBlade_300_OCimport_01 { class EventHandlers; };

    class B_SwitchBlade_300_LaunchTube_Desert;
    class B_SwitchBlade_300_LaunchTube_Desert_OCimport_01 : B_SwitchBlade_300_LaunchTube_Desert { scope = 0; class EventHandlers; };
    class B_SwitchBlade_300_LaunchTube_Desert_OCimport_02 : B_SwitchBlade_300_LaunchTube_Desert_OCimport_01 { class EventHandlers; };

    class B_SwitchBlade_300_LaunchTube_Woodland;
    class B_SwitchBlade_300_LaunchTube_Woodland_OCimport_01 : B_SwitchBlade_300_LaunchTube_Woodland { scope = 0; class EventHandlers; };
    class B_SwitchBlade_300_LaunchTube_Woodland_OCimport_02 : B_SwitchBlade_300_LaunchTube_Woodland_OCimport_01 { class EventHandlers; };

    class B_SwitchBlade_600;
    class B_SwitchBlade_600_OCimport_01 : B_SwitchBlade_600 { scope = 0; class EventHandlers; };
    class B_SwitchBlade_600_OCimport_02 : B_SwitchBlade_600_OCimport_01 { class EventHandlers; };

    class B_SwitchBlade_600_LaunchTube_Desert;
    class B_SwitchBlade_600_LaunchTube_Desert_OCimport_01 : B_SwitchBlade_600_LaunchTube_Desert { scope = 0; class EventHandlers; };
    class B_SwitchBlade_600_LaunchTube_Desert_OCimport_02 : B_SwitchBlade_600_LaunchTube_Desert_OCimport_01 { class EventHandlers; };

    class B_SwitchBlade_600_LaunchTube_Woodland;
    class B_SwitchBlade_600_LaunchTube_Woodland_OCimport_01 : B_SwitchBlade_600_LaunchTube_Woodland { scope = 0; class EventHandlers; };
    class B_SwitchBlade_600_LaunchTube_Woodland_OCimport_02 : B_SwitchBlade_600_LaunchTube_Woodland_OCimport_01 { class EventHandlers; };

    class Truck_02_MRL_base_F;
    class Truck_02_MRL_base_F_OCimport_01 : Truck_02_MRL_base_F { scope = 0; class EventHandlers; };
    class Truck_02_MRL_base_F_OCimport_02 : Truck_02_MRL_base_F_OCimport_01 { class EventHandlers; };

    class Truck_02_Ammo_base_F;
    class Truck_02_Ammo_base_F_OCimport_01 : Truck_02_Ammo_base_F { scope = 0; class EventHandlers; };
    class Truck_02_Ammo_base_F_OCimport_02 : Truck_02_Ammo_base_F_OCimport_01 { class EventHandlers; };

    class Truck_02_box_base_F;
    class Truck_02_box_base_F_OCimport_01 : Truck_02_box_base_F { scope = 0; class EventHandlers; };
    class Truck_02_box_base_F_OCimport_02 : Truck_02_box_base_F_OCimport_01 { class EventHandlers; };

    class Truck_02_cargo_base_lxWS;
    class Truck_02_cargo_base_lxWS_OCimport_01 : Truck_02_cargo_base_lxWS { scope = 0; class EventHandlers; };
    class Truck_02_cargo_base_lxWS_OCimport_02 : Truck_02_cargo_base_lxWS_OCimport_01 { class EventHandlers; };

    class Truck_02_base_F;
    class Truck_02_base_F_OCimport_01 : Truck_02_base_F { scope = 0; class EventHandlers; };
    class Truck_02_base_F_OCimport_02 : Truck_02_base_F_OCimport_01 { class EventHandlers; };

    class Truck_02_flatbed_base_lxWS;
    class Truck_02_flatbed_base_lxWS_OCimport_01 : Truck_02_flatbed_base_lxWS { scope = 0; class EventHandlers; };
    class Truck_02_flatbed_base_lxWS_OCimport_02 : Truck_02_flatbed_base_lxWS_OCimport_01 { class EventHandlers; };

    class Truck_02_fuel_base_F;
    class Truck_02_fuel_base_F_OCimport_01 : Truck_02_fuel_base_F { scope = 0; class EventHandlers; };
    class Truck_02_fuel_base_F_OCimport_02 : Truck_02_fuel_base_F_OCimport_01 { class EventHandlers; };

    class Truck_02_medical_base_F;
    class Truck_02_medical_base_F_OCimport_01 : Truck_02_medical_base_F { scope = 0; class EventHandlers; };
    class Truck_02_medical_base_F_OCimport_02 : Truck_02_medical_base_F_OCimport_01 { class EventHandlers; };

    class Truck_02_transport_base_F;
    class Truck_02_transport_base_F_OCimport_01 : Truck_02_transport_base_F { scope = 0; class EventHandlers; };
    class Truck_02_transport_base_F_OCimport_02 : Truck_02_transport_base_F_OCimport_01 { class EventHandlers; };

    class TwinMortar_base_RF;
    class TwinMortar_base_RF_OCimport_01 : TwinMortar_base_RF { scope = 0; class EventHandlers; };
    class TwinMortar_base_RF_OCimport_02 : TwinMortar_base_RF_OCimport_01 { class EventHandlers; };

    class UAV_01_base_F;
    class UAV_01_base_F_OCimport_01 : UAV_01_base_F { scope = 0; class EventHandlers; };
    class UAV_01_base_F_OCimport_02 : UAV_01_base_F_OCimport_01 { class EventHandlers; };

    class UAV_02_dynamicLoadout_base_F;
    class UAV_02_dynamicLoadout_base_F_OCimport_01 : UAV_02_dynamicLoadout_base_F { scope = 0; class EventHandlers; };
    class UAV_02_dynamicLoadout_base_F_OCimport_02 : UAV_02_dynamicLoadout_base_F_OCimport_01 { class EventHandlers; };

    class UAV_02_Base_lxWS;
    class UAV_02_Base_lxWS_OCimport_01 : UAV_02_Base_lxWS { scope = 0; class EventHandlers; };
    class UAV_02_Base_lxWS_OCimport_02 : UAV_02_Base_lxWS_OCimport_01 { class EventHandlers; };

    class UAV_06_base_F;
    class UAV_06_base_F_OCimport_01 : UAV_06_base_F { scope = 0; class EventHandlers; };
    class UAV_06_base_F_OCimport_02 : UAV_06_base_F_OCimport_01 { class EventHandlers; };

    class UAV_06_medical_base_F;
    class UAV_06_medical_base_F_OCimport_01 : UAV_06_medical_base_F { scope = 0; class EventHandlers; };
    class UAV_06_medical_base_F_OCimport_02 : UAV_06_medical_base_F_OCimport_01 { class EventHandlers; };

    class UAV_RC40_Base_HE_RF;
    class UAV_RC40_Base_HE_RF_OCimport_01 : UAV_RC40_Base_HE_RF { scope = 0; class EventHandlers; };
    class UAV_RC40_Base_HE_RF_OCimport_02 : UAV_RC40_Base_HE_RF_OCimport_01 { class EventHandlers; };

    class UAV_RC40_Base_Sensor_RF;
    class UAV_RC40_Base_Sensor_RF_OCimport_01 : UAV_RC40_Base_Sensor_RF { scope = 0; class EventHandlers; };
    class UAV_RC40_Base_Sensor_RF_OCimport_02 : UAV_RC40_Base_Sensor_RF_OCimport_01 { class EventHandlers; };

    class UAV_RC40_Base_SmokeBlue_RF;
    class UAV_RC40_Base_SmokeBlue_RF_OCimport_01 : UAV_RC40_Base_SmokeBlue_RF { scope = 0; class EventHandlers; };
    class UAV_RC40_Base_SmokeBlue_RF_OCimport_02 : UAV_RC40_Base_SmokeBlue_RF_OCimport_01 { class EventHandlers; };

    class UAV_RC40_Base_SmokeGreen_RF;
    class UAV_RC40_Base_SmokeGreen_RF_OCimport_01 : UAV_RC40_Base_SmokeGreen_RF { scope = 0; class EventHandlers; };
    class UAV_RC40_Base_SmokeGreen_RF_OCimport_02 : UAV_RC40_Base_SmokeGreen_RF_OCimport_01 { class EventHandlers; };

    class UAV_RC40_Base_SmokeOrange_RF;
    class UAV_RC40_Base_SmokeOrange_RF_OCimport_01 : UAV_RC40_Base_SmokeOrange_RF { scope = 0; class EventHandlers; };
    class UAV_RC40_Base_SmokeOrange_RF_OCimport_02 : UAV_RC40_Base_SmokeOrange_RF_OCimport_01 { class EventHandlers; };

    class UAV_RC40_Base_SmokeRed_RF;
    class UAV_RC40_Base_SmokeRed_RF_OCimport_01 : UAV_RC40_Base_SmokeRed_RF { scope = 0; class EventHandlers; };
    class UAV_RC40_Base_SmokeRed_RF_OCimport_02 : UAV_RC40_Base_SmokeRed_RF_OCimport_01 { class EventHandlers; };

    class UAV_RC40_Base_SmokeWhite_RF;
    class UAV_RC40_Base_SmokeWhite_RF_OCimport_01 : UAV_RC40_Base_SmokeWhite_RF { scope = 0; class EventHandlers; };
    class UAV_RC40_Base_SmokeWhite_RF_OCimport_02 : UAV_RC40_Base_SmokeWhite_RF_OCimport_01 { class EventHandlers; };

    class UGV_01_base_F;
    class UGV_01_base_F_OCimport_01 : UGV_01_base_F { scope = 0; class EventHandlers; };
    class UGV_01_base_F_OCimport_02 : UGV_01_base_F_OCimport_01 { class EventHandlers; };

    class UGV_01_medical_base_F;
    class UGV_01_medical_base_F_OCimport_01 : UGV_01_medical_base_F { scope = 0; class EventHandlers; };
    class UGV_01_medical_base_F_OCimport_02 : UGV_01_medical_base_F_OCimport_01 { class EventHandlers; };

    class UGV_01_rcws_base_F;
    class UGV_01_rcws_base_F_OCimport_01 : UGV_01_rcws_base_F { scope = 0; class EventHandlers; };
    class UGV_01_rcws_base_F_OCimport_02 : UGV_01_rcws_base_F_OCimport_01 { class EventHandlers; };

    class UGV_02_Demining_Base_F;
    class UGV_02_Demining_Base_F_OCimport_01 : UGV_02_Demining_Base_F { scope = 0; class EventHandlers; };
    class UGV_02_Demining_Base_F_OCimport_02 : UGV_02_Demining_Base_F_OCimport_01 { class EventHandlers; };

    class UGV_02_Science_Base_F;
    class UGV_02_Science_Base_F_OCimport_01 : UGV_02_Science_Base_F { scope = 0; class EventHandlers; };
    class UGV_02_Science_Base_F_OCimport_02 : UGV_02_Science_Base_F_OCimport_01 { class EventHandlers; };

    class I_Soldier_diver_base_F;
    class I_Soldier_diver_base_F_OCimport_01 : I_Soldier_diver_base_F { scope = 0; class EventHandlers; };
    class I_Soldier_diver_base_F_OCimport_02 : I_Soldier_diver_base_F_OCimport_01 { class EventHandlers; };

    class I_ghillie_base_F;
    class I_ghillie_base_F_OCimport_01 : I_ghillie_base_F { scope = 0; class EventHandlers; };
    class I_ghillie_base_F_OCimport_02 : I_ghillie_base_F_OCimport_01 { class EventHandlers; };

    class I_ghillie_ard_F;
    class I_ghillie_ard_F_OCimport_01 : I_ghillie_ard_F { scope = 0; class EventHandlers; };
    class I_ghillie_ard_F_OCimport_02 : I_ghillie_ard_F_OCimport_01 { class EventHandlers; };

    class I_ghillie_lsh_F;
    class I_ghillie_lsh_F_OCimport_01 : I_ghillie_lsh_F { scope = 0; class EventHandlers; };
    class I_ghillie_lsh_F_OCimport_02 : I_ghillie_lsh_F_OCimport_01 { class EventHandlers; };

    class I_ghillie_sard_F;
    class I_ghillie_sard_F_OCimport_01 : I_ghillie_sard_F { scope = 0; class EventHandlers; };
    class I_ghillie_sard_F_OCimport_02 : I_ghillie_sard_F_OCimport_01 { class EventHandlers; };

    class I_helipilot_F;
    class I_helipilot_F_OCimport_01 : I_helipilot_F { scope = 0; class EventHandlers; };
    class I_helipilot_F_OCimport_02 : I_helipilot_F_OCimport_01 { class EventHandlers; };

    class I_Soldier_03_F;
    class I_Soldier_03_F_OCimport_01 : I_Soldier_03_F { scope = 0; class EventHandlers; };
    class I_Soldier_03_F_OCimport_02 : I_Soldier_03_F_OCimport_01 { class EventHandlers; };

    class I_Soldier_04_F;
    class I_Soldier_04_F_OCimport_01 : I_Soldier_04_F { scope = 0; class EventHandlers; };
    class I_Soldier_04_F_OCimport_02 : I_Soldier_04_F_OCimport_01 { class EventHandlers; };

    class I_soldier_UAV_F;
    class I_soldier_UAV_F_OCimport_01 : I_soldier_UAV_F { scope = 0; class EventHandlers; };
    class I_soldier_UAV_F_OCimport_02 : I_soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class I_Soldier_exp_F;
    class I_Soldier_exp_F_OCimport_01 : I_Soldier_exp_F { scope = 0; class EventHandlers; };
    class I_Soldier_exp_F_OCimport_02 : I_Soldier_exp_F_OCimport_01 { class EventHandlers; };

    class AA_01_base_F;
    class AA_01_base_F_OCimport_01 : AA_01_base_F { scope = 0; class EventHandlers; };
    class AA_01_base_F_OCimport_02 : AA_01_base_F_OCimport_01 { class EventHandlers; };

    class AT_01_base_F;
    class AT_01_base_F_OCimport_01 : AT_01_base_F { scope = 0; class EventHandlers; };
    class AT_01_base_F_OCimport_02 : AT_01_base_F_OCimport_01 { class EventHandlers; };

    class I_support_AMort_F;
    class I_support_AMort_F_OCimport_01 : I_support_AMort_F { scope = 0; class EventHandlers; };
    class I_support_AMort_F_OCimport_02 : I_support_AMort_F_OCimport_01 { class EventHandlers; };

    class JK_76n6_ClamShell_base_F;
    class JK_76n6_ClamShell_base_F_OCimport_01 : JK_76n6_ClamShell_base_F { scope = 0; class EventHandlers; };
    class JK_76n6_ClamShell_base_F_OCimport_02 : JK_76n6_ClamShell_base_F_OCimport_01 { class EventHandlers; };

    class JK_76n6_ClamShell_Lower_base_F;
    class JK_76n6_ClamShell_Lower_base_F_OCimport_01 : JK_76n6_ClamShell_Lower_base_F { scope = 0; class EventHandlers; };
    class JK_76n6_ClamShell_Lower_base_F_OCimport_02 : JK_76n6_ClamShell_Lower_base_F_OCimport_01 { class EventHandlers; };

    class orion_F_OPF;
    class orion_F_OPF_OCimport_01 : orion_F_OPF { scope = 0; class EventHandlers; };
    class orion_F_OPF_OCimport_02 : orion_F_OPF_OCimport_01 { class EventHandlers; };

    class orion_F_IND;
    class orion_F_IND_OCimport_01 : orion_F_IND { scope = 0; class EventHandlers; };
    class orion_F_IND_OCimport_02 : orion_F_IND_OCimport_01 { class EventHandlers; };

    class orlan_F_OPF;
    class orlan_F_OPF_OCimport_01 : orlan_F_OPF { scope = 0; class EventHandlers; };
    class orlan_F_OPF_OCimport_02 : orlan_F_OPF_OCimport_01 { class EventHandlers; };

    class orlan_tripod_launcher_OPF;
    class orlan_tripod_launcher_OPF_OCimport_01 : orlan_tripod_launcher_OPF { scope = 0; class EventHandlers; };
    class orlan_tripod_launcher_OPF_OCimport_02 : orlan_tripod_launcher_OPF_OCimport_01 { class EventHandlers; };

    class qav_ripsaw_Mk44;
    class qav_ripsaw_Mk44_OCimport_01 : qav_ripsaw_Mk44 { scope = 0; class EventHandlers; };
    class qav_ripsaw_Mk44_OCimport_02 : qav_ripsaw_Mk44_OCimport_01 { class EventHandlers; };

    class rksla3_aeroshark_blufor;
    class rksla3_aeroshark_blufor_OCimport_01 : rksla3_aeroshark_blufor { scope = 0; class EventHandlers; };
    class rksla3_aeroshark_blufor_OCimport_02 : rksla3_aeroshark_blufor_OCimport_01 { class EventHandlers; };

    class rksla3_uav_h450_base;
    class rksla3_uav_h450_base_OCimport_01 : rksla3_uav_h450_base { scope = 0; class EventHandlers; };
    class rksla3_uav_h450_base_OCimport_02 : rksla3_uav_h450_base_OCimport_01 { class EventHandlers; };

    class ACE_I_SpottingScope : ACE_SpottingScopeObject_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotting Scope";
        side = 2;
        faction = "ind_f";
        crew = "I_spotter_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_HeavyGunner_F : Aegis_I_Soldier_MG_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        backpack = "Aegis_I_AssaultPack_dgtl_HG";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Aegis_MMG_FNMAG_MRCO_LP_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_MMG_FNMAG_MRCO_LP_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"Aegis_200rnd_762x51_MAG_Yellow_F","Aegis_200rnd_762x51_MAG_Yellow_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"Aegis_200rnd_762x51_MAG_Yellow_F","Aegis_200rnd_762x51_MAG_Yellow_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_Heli_Transport_02_Heavy_F : Aegis_Heli_Transport_02_Heavy_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH-49E Mohawk";
        side = 2;
        faction = "ind_f";
        crew = "I_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_Soldier_MG_F : I_Soldier_AR_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_tshirt";

        linkedItems[] = {"H_MilCap_dgtl","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_MilCap_dgtl","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Aegis_LMG_S77_AAF_MRCO_LP_lxWS","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_LMG_S77_AAF_MRCO_LP_lxWS","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"100rnd_762x51_s77_yellow_lxWS","100rnd_762x51_s77_yellow_lxWS","100rnd_762x51_s77_yellow_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"100rnd_762x51_s77_yellow_lxWS","100rnd_762x51_s77_yellow_lxWS","100rnd_762x51_s77_yellow_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_UAV_07_F : Aegis_UAV_07_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MQ-9A Albatross";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_recon_AR_F : Aegis_I_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Autorifleman";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        linkedItems[] = {"V_TacVest_rig_oli_RF","H_HelmetSpecter_cover_AAF_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacVest_rig_oli_RF","H_HelmetSpecter_cover_AAF_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Aegis_LMG_MK200_MRCO_LP_BI_Snds_F","Aegis_hgun_Pistol_R57_MRD_LP_Snds_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_LMG_MK200_MRCO_LP_BI_Snds_F","Aegis_hgun_Pistol_R57_MRD_LP_Snds_F","Throw","Put"};

        magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_recon_F : Aegis_I_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        linkedItems[] = {"V_TacVest_rig_oli_RF","H_HelmetSpecter_cover_AAF_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacVest_rig_oli_RF","H_HelmetSpecter_cover_AAF_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Aegis_arifle_MK20_FMS_LP_Snds_F","Aegis_hgun_Pistol_R57_MRD_LP_Snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"Aegis_arifle_MK20_FMS_LP_Snds_F","Aegis_hgun_Pistol_R57_MRD_LP_Snds_F","Throw","Put","Binocular"};

        magazines[] = {"30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_recon_GL_F : Aegis_I_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Grenadier";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        linkedItems[] = {"V_TacVest_rig_oli_RF","H_HelmetSpecter_cover_AAF_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacVest_rig_oli_RF","H_HelmetSpecter_cover_AAF_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Aegis_arifle_MK20_GL_FMS_LP_Snds_F","Aegis_hgun_Pistol_R57_MRD_LP_Snds_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_MK20_GL_FMS_LP_Snds_F","Aegis_hgun_Pistol_R57_MRD_LP_Snds_F","Throw","Put"};

        magazines[] = {"30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_recon_JTAC_F : Aegis_I_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon JTAC";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        backpack = "B_RadioBag_01_digi_F";

        linkedItems[] = {"V_TacVest_rig_oli_RF","H_HelmetSpecter_cover_AAF_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacVest_rig_oli_RF","H_HelmetSpecter_cover_AAF_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Aegis_arifle_MK20_FMS_LP_Snds_F","Aegis_hgun_Pistol_R57_MRD_LP_Snds_F","Throw","Put","Laserdesignator_03"};
        respawnWeapons[] = {"Aegis_arifle_MK20_FMS_LP_Snds_F","Aegis_hgun_Pistol_R57_MRD_LP_Snds_F","Throw","Put","Laserdesignator_03"};

        magazines[] = {"30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","Laserbatteries","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_recon_LAT_F : Aegis_I_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Scout (AT)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        backpack = "I_FieldPack_oli_LAT2";

        linkedItems[] = {"V_TacVest_rig_oli_RF","H_HelmetSpecter_cover_AAF_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacVest_rig_oli_RF","H_HelmetSpecter_cover_AAF_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Aegis_arifle_MK20C_FMS_LP_Snds_F","launch_MRAWS_olive_F","Aegis_hgun_Pistol_R57_MRD_LP_Snds_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_MK20C_FMS_LP_Snds_F","launch_MRAWS_olive_F","Aegis_hgun_Pistol_R57_MRD_LP_Snds_F","Throw","Put"};

        magazines[] = {"30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_recon_M_F : Aegis_I_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Marksman";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        linkedItems[] = {"V_TacVest_rig_oli_RF","H_HelmetSpecter_cover_AAF_F","Aegis_G_ScrimNet_Under_Olive_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacVest_rig_oli_RF","H_HelmetSpecter_cover_AAF_F","Aegis_G_ScrimNet_Under_Olive_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Aegis_arifle_SR25_MR_blk_MRCO_LP_Snds_BI_F","Aegis_hgun_Pistol_R57_MRD_LP_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Aegis_arifle_SR25_MR_blk_MRCO_LP_Snds_BI_F","Aegis_hgun_Pistol_R57_MRD_LP_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"Aegis_20Rnd_762x51_smag","Aegis_20Rnd_762x51_smag","Aegis_20Rnd_762x51_smag","Aegis_20Rnd_762x51_smag","Aegis_20Rnd_762x51_smag","Aegis_20Rnd_762x51_smag","Aegis_20Rnd_762x51_smag","Aegis_20Rnd_762x51_smag","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"Aegis_20Rnd_762x51_smag","Aegis_20Rnd_762x51_smag","Aegis_20Rnd_762x51_smag","Aegis_20Rnd_762x51_smag","Aegis_20Rnd_762x51_smag","Aegis_20Rnd_762x51_smag","Aegis_20Rnd_762x51_smag","Aegis_20Rnd_762x51_smag","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_recon_TL_F : Aegis_I_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Team Leader";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        linkedItems[] = {"V_TacVest_rig_oli_RF","H_HelmetSpecter_cover_AAF_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacVest_rig_oli_RF","H_HelmetSpecter_cover_AAF_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Aegis_arifle_MK20_FMS_LP_Snds_F","Aegis_hgun_Pistol_R57_MRD_LP_Snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Aegis_arifle_MK20_FMS_LP_Snds_F","Aegis_hgun_Pistol_R57_MRD_LP_Snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_recon_exp_F : Aegis_I_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Demo Specialist";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        backpack = "Aegis_I_Kitbag_dgtl_ReconEXP";

        linkedItems[] = {"V_TacVest_rig_oli_RF","H_HelmetSpecter_cover_AAF_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacVest_rig_oli_RF","H_HelmetSpecter_cover_AAF_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Aegis_arifle_MK20C_FMS_LP_Snds_F","Aegis_hgun_Pistol_R57_MRD_LP_Snds_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_MK20C_FMS_LP_Snds_F","Aegis_hgun_Pistol_R57_MRD_LP_Snds_F","Throw","Put"};

        magazines[] = {"30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Aegis_I_recon_medic_F : Aegis_I_Soldier_recon_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Paramedic";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        backpack = "I_AssaultPack_dgtl_Medic";

        linkedItems[] = {"V_TacVest_rig_oli_RF","H_HelmetSpecter_cover_AAF_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_TacVest_rig_oli_RF","H_HelmetSpecter_cover_AAF_F","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"Aegis_arifle_MK20C_FMS_LP_Snds_F","Aegis_hgun_Pistol_R57_MRD_LP_Snds_F","Throw","Put"};
        respawnWeapons[] = {"Aegis_arifle_MK20C_FMS_LP_Snds_F","Aegis_hgun_Pistol_R57_MRD_LP_Snds_F","Throw","Put"};

        magazines[] = {"30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","30rnd_556x45_ap_stanag_rf","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_Pathfinder_AR_F : Atlas_I_Pathfinder_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "Aegis_U_I_Uniform_01_sweater_02_f";

        linkedItems[] = {"V_Chestrig_oli","H_HelmetIA_sb_digital_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_oli","H_HelmetIA_sb_digital_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_LMG_S77_Compact_MRCO_FL_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_LMG_S77_Compact_MRCO_FL_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"100rnd_762x51_S77_yellow_lxWS","100rnd_762x51_S77_yellow_lxWS","100rnd_762x51_S77_yellow_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"100rnd_762x51_S77_yellow_lxWS","100rnd_762x51_S77_yellow_lxWS","100rnd_762x51_S77_yellow_lxWS","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_Pathfinder_AT_F : Atlas_I_Pathfinder_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "Aegis_U_I_Uniform_01_sweater_02_f";

        backpack = "I_FieldPack_oli_LAT2";

        linkedItems[] = {"V_Chestrig_oli","H_MilCap_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_oli","H_MilCap_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_MK20C_FMS_FL_F","hgun_ACPC2_F","launch_MRAWS_olive_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_MK20C_FMS_FL_F","hgun_ACPC2_F","launch_MRAWS_olive_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MRAWS_HEAT55_F","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MRAWS_HEAT55_F","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_Pathfinder_CMort_F : I_support_CMort_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "Aegis_U_I_Uniform_01_sweater_f";

        backpack = "I_CommandoMortar_weapon_RF";

        linkedItems[] = {"V_Chestrig_oli","H_MilCap_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_oli","H_MilCap_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_MK20C_FMS_FL_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_MK20C_FMS_FL_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_Pathfinder_Exp_F : Atlas_I_Pathfinder_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "Aegis_U_I_Uniform_01_sweater_f";

        backpack = "Aegis_I_Kitbag_dgtl_ReconEXP";

        linkedItems[] = {"V_Chestrig_oli","H_HelmetIA_sb_digital_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_oli","H_HelmetIA_sb_digital_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_MK20C_FMS_FL_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_MK20C_FMS_FL_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_Pathfinder_F : Atlas_I_Pathfinder_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "Aegis_U_I_Uniform_01_sweater_f";

        linkedItems[] = {"V_Chestrig_oli","H_HelmetIA_sb_digital_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_oli","H_HelmetIA_sb_digital_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SLR_V_MRCO_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SLR_V_MRCO_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_Pathfinder_GL_F : Atlas_I_Pathfinder_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "Aegis_U_I_Uniform_01_sweater_f";

        linkedItems[] = {"V_Chestrig_oli","H_HelmetIA_sb_digital_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_oli","H_HelmetIA_sb_digital_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SLR_V_GL_MRCO_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SLR_V_GL_MRCO_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","1rnd_40mm_he_lxws","1rnd_40mm_he_lxws","1rnd_40mm_he_lxws","1rnd_40mm_he_lxws","1rnd_58mm_at_lxws","1rnd_58mm_at_lxws","1rnd_50mm_smoke_lxws","1rnd_50mm_smoke_lxws","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","1rnd_40mm_he_lxws","1rnd_40mm_he_lxws","1rnd_40mm_he_lxws","1rnd_40mm_he_lxws","1rnd_58mm_at_lxws","1rnd_58mm_at_lxws","1rnd_50mm_smoke_lxws","1rnd_50mm_smoke_lxws","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_Pathfinder_M_F : Atlas_I_Pathfinder_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek"};

        uniformClass = "Aegis_U_I_Uniform_01_sweater_02_f";

        linkedItems[] = {"V_Chestrig_oli","H_HelmetIA_sb_digital_RF","Aegis_G_ScrimNet_Under_Olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_oli","H_HelmetIA_sb_digital_RF","Aegis_G_ScrimNet_Under_Olive_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_srifle_h6_digi_AMS_LP_BI_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_srifle_h6_digi_AMS_LP_BI_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};

        magazines[] = {"20Rnd_556x45_AP_Stanag_RF","20Rnd_556x45_AP_Stanag_RF","20Rnd_556x45_AP_Stanag_RF","20Rnd_556x45_AP_Stanag_RF","20Rnd_556x45_AP_Stanag_RF","20Rnd_556x45_AP_Stanag_RF","20Rnd_556x45_AP_Stanag_RF","20Rnd_556x45_AP_Stanag_RF","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"20Rnd_556x45_AP_Stanag_RF","20Rnd_556x45_AP_Stanag_RF","20Rnd_556x45_AP_Stanag_RF","20Rnd_556x45_AP_Stanag_RF","20Rnd_556x45_AP_Stanag_RF","20Rnd_556x45_AP_Stanag_RF","20Rnd_556x45_AP_Stanag_RF","20Rnd_556x45_AP_Stanag_RF","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_Pathfinder_Medic_F : Atlas_I_Pathfinder_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "Aegis_U_I_Uniform_01_sweater_f";

        backpack = "I_AssaultPack_dgtl_Medic";

        linkedItems[] = {"V_Chestrig_oli","H_booniehat_dgtl_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_oli","H_booniehat_dgtl_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_MK20C_FMS_FL_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_MK20C_FMS_FL_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};
        respawnMagazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellOrange"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_Pathfinder_RadioOperator_F : Atlas_I_Pathfinder_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "Aegis_U_I_Uniform_01_sweater_02_f";

        backpack = "B_RadioBag_01_digi_F";

        linkedItems[] = {"V_Chestrig_oli","H_HelmetIA_sb_digital_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_oli","H_HelmetIA_sb_digital_RF","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SLR_V_MRCO_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_SLR_V_MRCO_F","Throw","Put"};

        magazines[] = {"aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_Pathfinder_SL_F : Atlas_I_Pathfinder_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "Aegis_U_I_Uniform_01_sweater_f";

        linkedItems[] = {"V_Chestrig_oli","H_MilCap_dgtl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_oli","H_MilCap_dgtl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_MK20C_MRCO_LP_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_MK20C_MRCO_LP_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen"};
        respawnMagazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_Pathfinder_TL_F : Atlas_I_Pathfinder_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "Aegis_U_I_Uniform_01_sweater_f";

        linkedItems[] = {"V_Chestrig_oli","H_HelmetIA_sb_digital_RF","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_oli","H_HelmetIA_sb_digital_RF","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_SLR_V_GL_MRCO_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"Atlas_arifle_SLR_V_GL_MRCO_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};

        magazines[] = {"aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1rnd_40mm_HE_lxWS","1rnd_40mm_HE_lxWS","1rnd_40mm_HE_lxWS","1rnd_40mm_HE_lxWS","1rnd_58mm_AT_lxWS","1rnd_58mm_AT_lxWS","1rnd_50mm_smoke_lxWS","1rnd_50mm_smoke_lxWS","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
        respawnMagazines[] = {"aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","aegis_20rnd_762x51_slr_reload_tracer_yellow_lxws","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1rnd_40mm_HE_lxWS","1rnd_40mm_HE_lxWS","1rnd_40mm_HE_lxWS","1rnd_40mm_HE_lxWS","1rnd_58mm_AT_lxWS","1rnd_58mm_AT_lxWS","1rnd_50mm_smoke_lxWS","1rnd_50mm_smoke_lxWS","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class Atlas_I_Pathfinder_UAV_RF_F : Atlas_I_Pathfinder_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "Aegis_U_I_Uniform_01_sweater_02_f";

        linkedItems[] = {"V_Chestrig_oli","H_HelmetIA_sb_digital_RF","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_oli","H_HelmetIA_sb_digital_RF","I_UavTerminal","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Atlas_arifle_MK20_GL_FMS_LP_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"Atlas_arifle_MK20_GL_FMS_LP_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1rnd_he_grenade_shell","1rnd_he_grenade_shell","1rnd_he_grenade_shell","1rnd_he_grenade_shell","1rnd_rc40_shell_rf","1rnd_rc40_shell_rf","1rnd_rc40_he_shell_rf","1rnd_rc40_he_shell_rf","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","30Rnd_556x45_stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1rnd_he_grenade_shell","1rnd_he_grenade_shell","1rnd_he_grenade_shell","1rnd_he_grenade_shell","1rnd_rc40_shell_rf","1rnd_rc40_shell_rf","1rnd_rc40_he_shell_rf","1rnd_rc40_he_shell_rf","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_I_CombatBoat_AT_AAF : EF_CombatBoat_AT_Indep_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (AT)";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_I_CombatBoat_HMG_AAF : EF_CombatBoat_HMG_Indep_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (HMG)";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_I_CombatBoat_Unarmed_AAF : EF_CombatBoat_Unarmed_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Boat (Unarmed)";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_I_LCC_AAF : EF_LCC_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LCC-1";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_I_LCC_SideLoad_AAF : EF_LCC_SideLoad_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "LCC-1 (Side Load)";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class EF_I_Soldier_MP : I_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Military Police Officer";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        linkedItems[] = {"H_MilCap_blue","V_TacVest_blk_POLICE","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_MilCap_blue","V_TacVest_blk_POLICE","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"EF_SMG_03C_TR_black_ACO_FL","hgun_ACPC2_F"};
        respawnWeapons[] = {"EF_SMG_03C_TR_black_ACO_FL","hgun_ACPC2_F"};

        magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Chemlight_green"};
        respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_BLACKHORNET_UAV : GX_BLACKHORNET_UAV_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Black Hornet 4";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_DRONE40_UAV_HE : GX_B_DRONE40_UAV_HE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 HE";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_DRONE40_UAV_RECON : GX_B_DRONE40_UAV_RECON_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Recon";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_DRONE40_UAV_SMOKE_BLUE : GX_B_DRONE40_UAV_SMOKE_BLUE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Blue)";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_DRONE40_UAV_SMOKE_GREEN : GX_B_DRONE40_UAV_SMOKE_GREEN_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Green)";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_DRONE40_UAV_SMOKE_ORANGE : GX_B_DRONE40_UAV_SMOKE_ORANGE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Orange)";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_DRONE40_UAV_SMOKE_PURPLE : GX_B_DRONE40_UAV_SMOKE_PURPLE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Purple)";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_DRONE40_UAV_SMOKE_RED : GX_B_DRONE40_UAV_SMOKE_RED_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Red)";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_DRONE40_UAV_SMOKE_WHITE : GX_B_DRONE40_UAV_SMOKE_WHITE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (White)";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_DRONE40_UAV_SMOKE_YELLOW : GX_B_DRONE40_UAV_SMOKE_YELLOW_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Yellow)";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_HONEYBADGER_UGV_AT_BLACK : GX_HONEYBADGER_UGV_AT_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Honeybadger (AT) (Black)";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_HONEYBADGER_UGV_AT_DESERT : GX_HONEYBADGER_UGV_AT_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Honeybadger (AT) (Desert)";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_HONEYBADGER_UGV_AT_GREEN : GX_HONEYBADGER_UGV_AT_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Honeybadger (AT) (Green)";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_HONEYBADGER_UGV_AT_HEX : GX_HONEYBADGER_UGV_AT_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Honeybadger (AT) (Hex)";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_HUNTER_SP_LAUNCHER : GX_HUNTER_SP_LAUNCHER_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "GX_I_HUNTER_SP_LAUNCHER";
        side = 2;
        faction = "ind_f";
        crew = "B_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_HUNTER_SP_UAV : GX_HUNTER_SP_UAV_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hunter-SP";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_MAGURA_V5_USV : GX_MAGURA_V5_USV_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MAGURA V5";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_MQ8B_UAV_ARMED : GX_MQ8B_UAV_ARMED_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MQ-8B Fire Scout (Armed)";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_MQ8B_UAV_RECON : GX_MQ8B_UAV_RECON_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MQ-8B Fire Scout (Recon)";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_MQ8B_UAV_RECON_SEATED : GX_I_MQ8B_UAV_RECON_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MQ-8B Fire Scout (Recon) (Seated)";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_RQ11B_UAV : GX_RQ11B_UAV_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RQ-11B Raven";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_RWS_DEFNDER_MEDIUM : GX_RWS_DEFNDER_MEDIUM_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "DeFNder Medium";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_THEMIS_UGV_CARGO : GX_THEMIS_UGV_CARGO_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "THeMIS (Cargo)";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_THEMIS_UGV_DEFNDER_MEDIUM : GX_THEMIS_UGV_DEFNDER_MEDIUM_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "THeMIS (DeFNder Medium)";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class GX_I_THEMIS_UGV_HUNTER_LAUNCHER : GX_THEMIS_UGV_HUNTER_LAUNCHER_BASE_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "THeMIS (Hunter-SP Launcher)";
        side = 2;
        faction = "ind_f";
        crew = "GX_I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_APC_Wheeled_03_cannon_F : I_APC_Wheeled_03_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pandur II";
        side = 2;
        faction = "ind_f";
        crew = "I_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_APC_tracked_03_cannon_v2_F : APC_Tracked_03_base_v2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "FV-720 Mora";
        side = 2;
        faction = "ind_f";
        crew = "I_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_A_Truck_02_aa_lxWS : Truck_02_aa_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ (Zu-23-2)";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Boat_Armed_01_minigun_F : Boat_Armed_01_minigun_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Speedboat Minigun";
        side = 2;
        faction = "ind_f";
        crew = "I_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Boat_Transport_01_F : Rubber_duck_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Boat";
        side = 2;
        faction = "ind_f";
        crew = "I_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Captain_Hladas_F : I_officer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Dr. Hladík";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Hladas"};

        uniformClass = "U_I_OfficerUniform";

        linkedItems[] = {"H_MilCap_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_MilCap_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_ACPC2_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"hgun_ACPC2_F","Throw","Put","Binocular"};

        magazines[] = {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_CommandoMortar_RF : B_CommandoMortar_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "RSG60";
        side = 2;
        faction = "ind_f";
        crew = "I_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Crocus_AP : ARMAFPV_Crocus_AP_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crocus AP";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Crocus_AP_TI : I_Crocus_AP_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crocus AP TI";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Crocus_AT : ARMAFPV_Crocus_AT_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crocus AT";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Crocus_AT_TI : I_Crocus_AT_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crocus AT TI";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Fighter_Pilot_F : I_pilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter Pilot";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_pilotCoveralls";

        linkedItems[] = {"H_PilotHelmetFighter_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_PilotHelmetFighter_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
        respawnMagazines[] = {"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_GMG_01_A_F : GMG_01_A_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307A";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_GMG_01_F : GMG_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_GMG_01_high_F : GMG_01_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM307 (High)";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_HMG_01_A_F : HMG_01_A_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312A";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_HMG_01_F : HMG_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_HMG_01_high_F : HMG_01_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "XM312 (High)";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_HMG_02_F : HMG_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_HMG_02_high_F : HMG_02_high_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG .50 (Raised)";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Heli_Attack_03_F : Aegis_Heli_Attack_03_v2_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-1 Navajo";
        side = 2;
        faction = "ind_f";
        crew = "I_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Heli_EC_01A_military_RF : Heli_EC_01A_military_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "H215 Super Puma (Unarmed)";
        side = 2;
        faction = "ind_f";
        crew = "I_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Heli_EC_02_RF : Heli_EC_02_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "H225M Super Cougar SOCAT";
        side = 2;
        faction = "ind_f";
        crew = "I_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Heli_Light_01_F : B_Heli_Light_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-6 Little Bird";
        side = 2;
        faction = "ind_f";
        crew = "I_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Heli_Light_01_dynamicLoadout_F : B_Heli_Light_01_dynamicLoadout_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-6 Little Bird";
        side = 2;
        faction = "ind_f";
        crew = "I_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Heli_Transport_02_F : Heli_Transport_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AW101 Merlin";
        side = 2;
        faction = "ind_f";
        crew = "I_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Heli_light_03_dynamicLoadout_F : Heli_light_03_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AW159 Wildcat";
        side = 2;
        faction = "ind_f";
        crew = "I_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Heli_light_03_unarmed_F : Heli_light_03_unarmed_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AW159 Wildcat (unarmed)";
        side = 2;
        faction = "ind_f";
        crew = "I_helipilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_KVN_AP : I_KVN_AT_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KVN AP";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_KVN_AP_TI : I_KVN_AP_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KVN AP TI";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_KVN_AT : vnd_KVN_Base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KVN AT";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_KVN_AT_TI : I_KVN_AT_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KVN AT TI";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_LT_01_AA_F : LT_01_AA_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Wiesel 2 Ozelot (AA)";
        side = 2;
        faction = "ind_f";
        crew = "I_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_LT_01_AT_F : LT_01_AT_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Wiesel 2 (ATGM)";
        side = 2;
        faction = "ind_f";
        crew = "I_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_LT_01_cannon_F : LT_01_cannon_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Wiesel 2 (MK20)";
        side = 2;
        faction = "ind_f";
        crew = "I_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_LT_01_scout_F : LT_01_scout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Wiesel 2 RFCV (Radar)";
        side = 2;
        faction = "ind_f";
        crew = "I_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_MBT_03_cannon_F : I_MBT_03_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Leopard 2SG";
        side = 2;
        faction = "ind_f";
        crew = "I_crew_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_MRAP_03_F : MRAP_03_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fennek";
        side = 2;
        faction = "ind_f";
        crew = "I_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_MRAP_03_gmg_F : MRAP_03_gmg_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fennek (GMG)";
        side = 2;
        faction = "ind_f";
        crew = "I_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_MRAP_03_hmg_F : MRAP_03_hmg_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fennek (HMG)";
        side = 2;
        faction = "ind_f";
        crew = "I_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Mortar_01_F : Mortar_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "I_Mortar_01_F";
        side = 2;
        faction = "ind_f";
        crew = "I_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Officer_Parade_F : I_officer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer (Parade Dress)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_NATO_casual"};

        uniformClass = "U_I_ParadeUniform_01_AAF_F";

        linkedItems[] = {"H_ParadeDressCap_01_AAF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_ParadeDressCap_01_AAF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Officer_Parade_Veteran_F : I_Officer_Parade_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer (Veteran, Parade Dress)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_NATO_casual"};

        uniformClass = "U_I_ParadeUniform_01_AAF_decorated_F";

        linkedItems[] = {"H_ParadeDressCap_01_AAF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_ParadeDressCap_01_AAF_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Pickup_Comms_rf : Pickup_comms_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (Comms)";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Pickup_aat_rf : Pickup_01_aat_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (AA)";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Pickup_hmg_rf : Pickup_01_hmg_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (HMG)";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Pickup_rcws_rf : Pickup_01_rcws_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500 (RCWS)";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Pickup_rf : Pickup_01_base_rf_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ram 1500";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Plane_Fighter_03_dynamicLoadout_F : Plane_Fighter_03_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "L-159 ALCA";
        side = 2;
        faction = "ind_f";
        crew = "I_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Plane_Fighter_04_F : Plane_Fighter_04_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "JAS 39 Gripen";
        side = 2;
        faction = "ind_f";
        crew = "I_Fighter_Pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Plane_Transport_01_infantry_F : Plane_Transport_01_infantry_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "C-192 Samson (Infantry Transport)";
        side = 2;
        faction = "ind_f";
        crew = "I_pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Plane_Transport_01_vehicle_F : Plane_Transport_01_vehicle_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "C-192 Samson (Vehicle Transport)";
        side = 2;
        faction = "ind_f";
        crew = "I_pilot_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Protagonist_VR_F : I_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "VR Soldier";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_Protagonist_VR";

        linkedItems[] = {"G_Goggles_VR"};
        respawnlinkedItems[] = {"G_Goggles_VR"};

        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Quadbike_01_F : Quadbike_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 2;
        faction = "ind_f";
        crew = "I_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_RadioOperator_F : I_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Radio Operator";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        backpack = "B_RadioBag_01_digi_F";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA1_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA1_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Rev_Bustard : I_UAV_02_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Deployable AP-5 Bustard";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Rev_Darter : I_UAV_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Deployable AR-2 Darter";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Rev_Demine : C_IDAP_UAV_06_antimine_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Deployable Demining Drone";
        side = 2;
        faction = "ind_f";
        crew = "C_IDAP_UAV_AI_antimine_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Rev_Designator : B_W_Static_Designator_01_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "I_Rev_Designator";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Rev_Pelican : I_UAV_06_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Deployable AL-6 Pelican";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Rev_Pelter : I_UGV_02_Demining_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "I_Rev_Pelter";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Rev_Roller : I_UGV_02_Science_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "I_Rev_Roller";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_SDV_01_F : SDV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "SDV";
        side = 2;
        faction = "ind_f";
        crew = "I_diver_f";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Sniper_F : I_Soldier_sniper_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_NATO_sniper"};

        uniformClass = "U_I_GhillieSuit";

        linkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"srifle_GM6_LRPS_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_AAA_F : I_Soldier_AAT_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AA)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        backpack = "I_Carryall_oli_AAA";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA1_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA1_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_AAR_F : I_Soldier_support_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Autorifleman";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        backpack = "B_TacticalPack_oli_AAR";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA1_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA1_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_AAT_F : I_Soldier_support_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Missile Specialist (AT)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        backpack = "I_Carryall_oli_AAT";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA1_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA1_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_ACPC2_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_AA_F : I_Soldier_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AA)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        backpack = "I_Fieldpack_oli_AA";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_I_Titan_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_I_Titan_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_AR_F : I_Soldier_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"LMG_Mk200_LP_BI_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"LMG_Mk200_LP_BI_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_AT_F : I_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        backpack = "I_Fieldpack_oli_AT";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_I_Titan_short_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_I_Titan_short_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_A_F : I_Soldier_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        backpack = "I_Fieldpack_oli_Ammo";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA1_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA1_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_CBRN_F : I_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Specialist";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CBRN_Suit_01_AAF_F";

        backpack = "B_CombinationUnitRespirator_01_F";

        linkedItems[] = {"H_HelmetIA","G_AirPurifyingRespirator_01_F","V_PlateCarrierIA1_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","G_AirPurifyingRespirator_01_F","V_PlateCarrierIA1_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20C_ACO_flash_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_ACO_flash_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_CQ_F : I_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Shotgun)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"sgun_M4_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"sgun_M4_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Pellets","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","8Rnd_12Gauge_Slug","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_GL_F : I_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIAGL_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIAGL_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20_GL_ACO_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20_GL_ACO_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_LAT2_F : I_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light AT)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        backpack = "I_Fieldpack_oli_LAT2";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20_ACO_pointer_F","launch_MRAWS_olive_rail_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","launch_MRAWS_olive_rail_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MRAWS_HEAT_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MRAWS_HEAT_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_LAT_F : I_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        backpack = "I_Fieldpack_oli_LAT";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20_ACO_pointer_F","launch_NLAW_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","launch_NLAW_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","NLAW_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","NLAW_F","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_LAT_RF : I_Soldier_LAT2_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Launcher)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        backpack = "I_Fieldpack_oli_LAT_RF";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20_ACO_pointer_F","launch_PSRL1_PWS_digi_RF","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","launch_PSRL1_PWS_digi_RF","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","PSRL1_AT_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","PSRL1_AT_RF","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_M_F : I_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA1_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA1_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"srifle_EBR_MRCO_LP_BI_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"srifle_EBR_MRCO_LP_BI_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_SL_F : I_Soldier_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        linkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetIA","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_PlateCarrierIA2_dgtl","H_HelmetIA","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20_MRCO_pointer_F","hgun_ACPC2_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_Mk20_MRCO_pointer_F","hgun_ACPC2_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_TL_F : I_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIAGL_dgtl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIAGL_dgtl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20_GL_MRCO_pointer_F","hgun_ACPC2_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_Mk20_GL_MRCO_pointer_F","hgun_ACPC2_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_VR_F : I_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "VR Entity";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGREVR_F","Head_Greek","NoGlasses"};

        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_exp_F : I_Soldier_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        backpack = "I_Carryall_oli_Exp";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIAGL_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIAGL_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_lite_F : I_Soldier_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        linkedItems[] = {"V_BandollierB_oli","H_MilCap_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_oli","H_MilCap_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Mk20C_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_repair_F : I_Soldier_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        backpack = "I_AssaultPack_dgtl_Repair";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Soldier_unarmed_F : I_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        linkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_PlateCarrierIA1_dgtl","H_HelmetIA","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Spotter_F : I_Soldier_sniper_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_NATO_sniper"};

        uniformClass = "U_I_GhillieSuit";

        linkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20_MRCO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Laserdesignator_03"};
        respawnWeapons[] = {"arifle_Mk20_MRCO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Laserdesignator_03"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Static_Designator_01_F : Static_Designator_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Remote Designator";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Story_Colonel_F : I_officer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Akhanteros";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Rangemaster","G_NATO_casual"};

        uniformClass = "U_I_OfficerUniform";

        linkedItems[] = {"H_Beret_grn","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"H_Beret_grn","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Story_Crew_F : I_crew_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Kyros Kalogeros";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Tanker"};

        uniformClass = "U_Tank_green_F";

        linkedItems[] = {"V_TacVest_oli","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_oli","H_HelmetCrew_I","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Mk20C_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"arifle_Mk20C_F","Throw","Put","Rangefinder"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellGreen"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Story_Officer_01_F : I_officer_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Major Gavras";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"Orange_Officer","LanguageGRE_F"};

        uniformClass = "U_I_OfficerUniform";

        backpack = "B_TacticalPack_oli";

        linkedItems[] = {"V_BandollierB_oli","H_Beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_oli","H_Beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Mk20_F","hgun_ACPC2_F"};
        respawnWeapons[] = {"arifle_Mk20_F","hgun_ACPC2_F"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSMineDispenser_Mag","APERSMineDispenser_Mag","APERSMineDispenser_Mag","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSMineDispenser_Mag","APERSMineDispenser_Mag","APERSMineDispenser_Mag","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Survivor_F : I_soldier_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Survivor";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_SwitchBlade_300 : B_SwitchBlade_300_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "SwitchBlade 300";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_SwitchBlade_300_LaunchTube_Desert : B_SwitchBlade_300_LaunchTube_Desert_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "SwitchBlade 300 Launch Tube (Desert)";
        side = 2;
        faction = "ind_f";
        crew = "B_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_SwitchBlade_300_LaunchTube_Woodland : B_SwitchBlade_300_LaunchTube_Woodland_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "SwitchBlade 300 Launch Tube (Woodland)";
        side = 2;
        faction = "ind_f";
        crew = "B_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_SwitchBlade_600 : B_SwitchBlade_600_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "SwitchBlade 600";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_SwitchBlade_600_LaunchTube_Desert : B_SwitchBlade_600_LaunchTube_Desert_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "SwitchBlade 600 Launch Tube (Desert)";
        side = 2;
        faction = "ind_f";
        crew = "B_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_SwitchBlade_600_LaunchTube_Woodland : B_SwitchBlade_600_LaunchTube_Woodland_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "SwitchBlade 600 Launch Tube (Woodland)";
        side = 2;
        faction = "ind_f";
        crew = "B_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Truck_02_MRL_F : Truck_02_MRL_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ MRL";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Truck_02_ammo_F : Truck_02_Ammo_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Ammo";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Truck_02_box_F : Truck_02_box_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Repair";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Truck_02_cargo_lxWS : Truck_02_cargo_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Cargo";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Truck_02_covered_F : Truck_02_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport (covered)";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Truck_02_flatbed_lxWS : Truck_02_flatbed_base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Flatbed";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Truck_02_fuel_F : Truck_02_fuel_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Fuel";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Truck_02_medical_F : Truck_02_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Medical";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_Truck_02_transport_F : Truck_02_transport_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamAZ Transport";
        side = 2;
        faction = "ind_f";
        crew = "I_Soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_TwinMortar_RF : TwinMortar_base_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMOS Container";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_UAV_01_F : UAV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR-2 Darter";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_UAV_02_dynamicLoadout_F : UAV_02_dynamicLoadout_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 0;
        displayName = "YABHON-R3";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_UAV_02_lxWS : UAV_02_Base_lxWS_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AP-5 Bustard";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_UAV_06_F : UAV_06_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_UAV_06_medical_F : UAV_06_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican (Medical)";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_UAV_RC40_HE_RF : UAV_RC40_Base_HE_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 HE";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_UAV_RC40_SENSOR_RF : UAV_RC40_Base_Sensor_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Scout";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_UAV_RC40_SmokeBlue_RF : UAV_RC40_Base_SmokeBlue_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Blue)";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_UAV_RC40_SmokeGreen_RF : UAV_RC40_Base_SmokeGreen_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Green)";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_UAV_RC40_SmokeOrange_RF : UAV_RC40_Base_SmokeOrange_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Orange)";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_UAV_RC40_SmokeRed_RF : UAV_RC40_Base_SmokeRed_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (Red)";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_UAV_RC40_SmokeWhite_RF : UAV_RC40_Base_SmokeWhite_RF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Drone40 Smoke (White)";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_UGV_01_F : UGV_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_UGV_01_medical_F : UGV_01_medical_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper Medical";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_UGV_01_rcws_F : UGV_01_rcws_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UGV Stomper RCWS";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_UGV_02_Demining_F : UGV_02_Demining_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ED-1D Pelter";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_UGV_02_Science_F : UGV_02_Science_Base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "ED-1E Roller";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_crew_F : I_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_Tank_green_F";

        linkedItems[] = {"H_HelmetCrew_I","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetCrew_I","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20C_ACO_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_ACO_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_diver_F : I_Soldier_diver_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Diver";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_NATO_diver"};

        uniformClass = "U_I_Wetsuit";

        linkedItems[] = {"V_RebreatherIA","G_I_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_RebreatherIA","G_I_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SDAR_F","hgun_ACPC2_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SDAR_F","hgun_ACPC2_snds_F","Throw","Put"};

        magazines[] = {"20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_diver_TL_F : I_Soldier_diver_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Diver Team Leader";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_NATO_diver"};

        uniformClass = "U_I_Wetsuit";

        linkedItems[] = {"V_RebreatherIA","G_I_Diving","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_RebreatherIA","G_I_Diving","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SDAR_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SDAR_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};

        magazines[] = {"20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_diver_exp_F : I_Soldier_diver_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Diver Explosive Specialist";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_NATO_diver"};

        uniformClass = "U_I_Wetsuit";

        backpack = "B_FieldPack_blk_DiverExp";

        linkedItems[] = {"V_RebreatherIA","G_I_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_RebreatherIA","G_I_Diving","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_SDAR_F","hgun_ACPC2_snds_F","Throw","Put"};
        respawnWeapons[] = {"arifle_SDAR_F","hgun_ACPC2_snds_F","Throw","Put"};

        magazines[] = {"20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_engineer_F : I_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        backpack = "I_Carryall_oli_Eng";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA1_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA1_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_ghillie_ard_F : I_ghillie_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper (Arid)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek_camo_arid","G_NATO_sniper"};

        uniformClass = "U_I_FullGhillie_ard";

        linkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"srifle_GM6_LRPS_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_ghillie_lsh_F : I_ghillie_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper (Lush)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek_camo_lush","G_NATO_sniper"};

        uniformClass = "U_I_FullGhillie_lsh";

        linkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"srifle_GM6_LRPS_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_ghillie_sard_F : I_ghillie_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper (Semi-Arid)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek_camo_semiarid","G_NATO_sniper"};

        uniformClass = "U_I_FullGhillie_sard";

        linkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"srifle_GM6_LRPS_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};
        respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_ACPC2_snds_F","Throw","Put","Rangefinder"};

        magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_ghillie_spotter_ard_F : I_ghillie_ard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter (Arid)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek_camo_arid","G_NATO_sniper"};

        uniformClass = "U_I_FullGhillie_ard";

        linkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20_MRCO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Laserdesignator_03"};
        respawnWeapons[] = {"arifle_Mk20_MRCO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Laserdesignator_03"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_ghillie_spotter_lsh_F : I_ghillie_lsh_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter (Lush)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek_camo_lush","G_NATO_sniper"};

        uniformClass = "U_I_FullGhillie_lsh";

        linkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20_MRCO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Laserdesignator_03"};
        respawnWeapons[] = {"arifle_Mk20_MRCO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Laserdesignator_03"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_ghillie_spotter_sard_F : I_ghillie_sard_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter (Semi-Arid)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek_camo_semiarid","G_NATO_sniper"};

        uniformClass = "U_I_FullGhillie_sard";

        linkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20_MRCO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Laserdesignator_03"};
        respawnWeapons[] = {"arifle_Mk20_MRCO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Laserdesignator_03"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","Laserbatteries","SmokeShell","SmokeShell","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_helicrew_F : I_helipilot_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_HeliPilotCoveralls";

        linkedItems[] = {"H_CrewHelmetHeli_I","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_CrewHelmetHeli_I","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20C_ACO_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_ACO_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_helipilot_F : I_Soldier_03_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_HeliPilotCoveralls";

        linkedItems[] = {"H_PilotHelmetHeli_I","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_PilotHelmetHeli_I","V_TacVest_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"hgun_PDW2000_Holo_F","Throw","Put"};
        respawnWeapons[] = {"hgun_PDW2000_Holo_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
        respawnMagazines[] = {"30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_medic_F : I_Soldier_02_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Life Saver";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        backpack = "I_AssaultPack_dgtl_Medic";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellPurple"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellBlue","SmokeShellPurple"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_officer_F : I_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_NATO_casual"};

        uniformClass = "U_I_OfficerUniform";

        linkedItems[] = {"V_Rangemaster_belt_oli","H_MilCap_dgtl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnlinkedItems[] = {"V_Rangemaster_belt_oli","H_MilCap_dgtl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};

        weapons[] = {"arifle_Mk20C_F","Aegis_hgun_Pistol_R57_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_Mk20C_F","Aegis_hgun_Pistol_R57_F","Throw","Put","Binocular"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","Aegis_20Rnd_570x28_RP57_Mag","Aegis_20Rnd_570x28_RP57_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_pilot_F : I_Soldier_04_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_pilotCoveralls";

        backpack = "ACE_NonSteerableParachute";

        linkedItems[] = {"H_PilotHelmetHeli_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_PilotHelmetHeli_I","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"hgun_PDW2000_Holo_F","Throw","Put"};
        respawnWeapons[] = {"hgun_PDW2000_Holo_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};
        respawnMagazines[] = {"30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_soldier_F : I_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA1_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA1_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_soldier_UAV_06_F : I_soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        backpack = "I_UAV_06_backpack_F";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_soldier_UAV_06_medical_F : I_soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AL-6, Medical)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        backpack = "I_UAV_06_medical_backpack_F";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_soldier_UAV_F : I_Soldier_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        backpack = "I_UAV_01_backpack_F";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_soldier_UAV_lxWS : I_soldier_UAV_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (AP-5)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform";

        backpack = "I_UAV_02_backpack_lxWS";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIA2_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","I_UavTerminal","NVGoggles_INDEP"};

        weapons[] = {"hgun_PDW2000_Holo_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"hgun_PDW2000_Holo_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Yellow_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_soldier_mine_F : I_Soldier_exp_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mine Specialist";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_shortsleeve";

        backpack = "B_Carryall_oli_Mine";

        linkedItems[] = {"H_HelmetIA","V_PlateCarrierIAGL_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_PlateCarrierIAGL_dgtl","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_static_AA_F : AA_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AA)";
        side = 2;
        faction = "ind_f";
        crew = "I_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_static_AT_F : AT_01_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mini-Spike Launcher (AT)";
        side = 2;
        faction = "ind_f";
        crew = "I_soldier_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_support_AMG_F : I_Soldier_support_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (HMG/GMG)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_tshirt";

        backpack = "I_HMG_01_support_F";

        linkedItems[] = {"H_HelmetIA","V_ChestrigF_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_ChestrigF_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_support_AMort_F : I_Soldier_support_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Gunner (Mk6)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_tshirt";

        backpack = "I_Mortar_01_support_F";

        linkedItems[] = {"H_HelmetIA","V_ChestrigF_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_ChestrigF_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_support_CMort_RF : I_support_AMort_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Light Mortar)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_tshirt";

        backpack = "I_CommandoMortar_weapon_RF";

        linkedItems[] = {"H_HelmetIA","V_ChestrigF_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_ChestrigF_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_support_GMG_F : I_Soldier_support_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (GMG)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_tshirt";

        backpack = "I_GMG_01_weapon_F";

        linkedItems[] = {"H_HelmetIA","V_ChestrigF_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_ChestrigF_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_support_MG_F : I_Soldier_support_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (HMG)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_tshirt";

        backpack = "I_HMG_01_weapon_F";

        linkedItems[] = {"H_HelmetIA","V_ChestrigF_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_ChestrigF_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class I_support_Mort_F : I_Soldier_support_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mk6)";
        side = 2;
        faction = "ind_f";

        identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};

        uniformClass = "U_I_CombatUniform_tshirt";

        backpack = "I_Mortar_01_weapon_F";

        linkedItems[] = {"H_HelmetIA","V_ChestrigF_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
        respawnlinkedItems[] = {"H_HelmetIA","V_ChestrigF_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};

        weapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20C_pointer_F","hgun_ACPC2_F","Throw","Put"};

        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShell"};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class JK_I_76n6_ClamShell_F : JK_76n6_ClamShell_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "76n6 Clam Shell";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class JK_I_76n6_ClamShell_Lower_F : JK_76n6_ClamShell_Lower_base_F_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "76n6 Clam Shell (Artillery Radar)";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class orion_F_IND : orion_F_OPF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Orion-E";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class orion_F_KAB20_IND : orion_F_IND_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Orion KAB-20";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class orion_F_KAB50_IND : orion_F_IND_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Orion KAB-50";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class orion_F_KORNET_IND : orion_F_IND_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Orion Kornet-D (ATGM)";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class orlan_F_IND : orlan_F_OPF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Orlan-30";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class orlan_tripod_launcher_IND : orlan_tripod_launcher_OPF_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Orlan Tripod Launcher";
        side = 2;
        faction = "ind_f";
        crew = "I_soldier_UAV_F";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class qav_i_f_ripsaw_Mk44 : qav_ripsaw_Mk44_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "M6A Ripsaw (Mk44)";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class rksla3_aeroshark_infor : rksla3_aeroshark_blufor_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Aeroshark Mini UAV";
        side = 0;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class rksla3_uav_h450_3 : rksla3_uav_h450_base_OCimport_02 {
        author = "YonV";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hermes 450";
        side = 2;
        faction = "ind_f";
        crew = "I_UAV_AI";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};

class CfgGroups {
    class Indep {
        class IND_F {
            class AirborneInfantry {
                class HAF_AirInf_Reinforce_RF {
                    name = "Airborne Reinforcements";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_air.paa";

                    class Unit0 {
                        vehicle = "I_Heli_EC_01A_military_RF";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "I_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "I_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "I_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "I_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "I_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "I_medic_F";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "I_soldier_repair_F";
                        rank = "PRIVATE";
                        position[] = {5,-16,0};
                    };

                    class Unit10 {
                        vehicle = "I_support_CMort_RF";
                        rank = "PRIVATE";
                        position[] = {5,-18,0};
                    };

                    class Unit11 {
                        vehicle = "I_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit12 {
                        vehicle = "I_soldier_F";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit13 {
                        vehicle = "I_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit14 {
                        vehicle = "I_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit15 {
                        vehicle = "I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit16 {
                        vehicle = "I_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit17 {
                        vehicle = "I_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit18 {
                        vehicle = "I_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };

                    class Unit19 {
                        vehicle = "I_soldier_repair_F";
                        rank = "PRIVATE";
                        position[] = {-5,-16,0};
                    };

                    class Unit20 {
                        vehicle = "I_support_CMort_RF";
                        rank = "PRIVATE";
                        position[] = {-5,-18,0};
                    };
                };
            };
            class Armored {
                class HAF_TankPlatoon {
                    name = "Tank Platoon";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";

                    class Unit0 {
                        vehicle = "I_MBT_03_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_MBT_03_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "I_MBT_03_cannon_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "I_MBT_03_cannon_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class HAF_TankPlatoon_AA {
                    name = "Tank Platoon (Combined)";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";

                    class Unit0 {
                        vehicle = "I_MBT_03_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_MBT_03_cannon_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "I_MBT_03_cannon_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "I_APC_tracked_03_cannon_v2_F";
                        rank = "SERGEANT";
                        position[] = {0,-15,0};
                    };

                    class Unit4 {
                        vehicle = "I_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,-20,0};
                    };

                    class Unit5 {
                        vehicle = "I_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {5,-25,0};
                    };

                    class Unit6 {
                        vehicle = "I_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-25,0};
                    };

                    class Unit7 {
                        vehicle = "I_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {10,-30,0};
                    };

                    class Unit8 {
                        vehicle = "I_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {-10,-30,0};
                    };

                    class Unit9 {
                        vehicle = "I_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {15,-35,0};
                    };

                    class Unit10 {
                        vehicle = "I_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {-15,-35,0};
                    };
                };
                class HAF_TankSection {
                    name = "Tank Section";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";

                    class Unit0 {
                        vehicle = "I_MBT_03_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_MBT_03_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class I_LTankPlatoon_AA {
                    name = "AWC Air-Defense Platoon";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";

                    class Unit0 {
                        vehicle = "I_LT_01_scout_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_LT_01_AA_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "I_LT_01_AA_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "I_LT_01_AA_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class I_LTankPlatoon_combined {
                    name = "AWC Platoon (Combined)";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";

                    class Unit0 {
                        vehicle = "I_LT_01_scout_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_LT_01_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit2 {
                        vehicle = "I_LT_01_cannon_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit3 {
                        vehicle = "I_LT_01_AT_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class I_LTankSection_AA {
                    name = "AWC Air-Defense Section";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";

                    class Unit0 {
                        vehicle = "I_LT_01_AA_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_LT_01_AA_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class I_LTankSection_AT {
                    name = "AWC Anti-Armor Section";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";

                    class Unit0 {
                        vehicle = "I_LT_01_AT_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_LT_01_AT_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class I_LTankSection_Assault {
                    name = "AWC Assault Section";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";

                    class Unit0 {
                        vehicle = "I_LT_01_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_LT_01_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
                class I_LTankSection_Recon {
                    name = "AWC Recon Section";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";

                    class Unit0 {
                        vehicle = "I_LT_01_scout_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_LT_01_cannon_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Infantry {
                class HAF_InfSentry {
                    name = "Sentry";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_Soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_soldier_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class HAF_InfSquad {
                    name = "Rifle Squad";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "I_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "I_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "I_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class HAF_InfSquad_Weapons {
                    name = "Weapons Squad";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_soldier_AR_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_soldier_GL_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_soldier_M_F";
                        rank = "SERGEANT";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "I_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "I_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "I_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "I_medic_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class HAF_InfTeam {
                    name = "Fire Team";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_Soldier_GL_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_soldier_LAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class HAF_InfTeam_AA {
                    name = "Air-defense Team";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_Soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_Soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_Soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class HAF_InfTeam_AT {
                    name = "Anti-armor Team";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_Soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_Soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_Soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class I_InfTeam_Light {
                    name = "Fire Team (Light)";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_soldier_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_soldier_LAT2_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
            };
            class Mechanized {
                class HAF_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

                    class Unit0 {
                        vehicle = "I_APC_Wheeled_03_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "I_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "I_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "I_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "I_medic_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
                class HAF_MechInf_AA {
                    name = "Mechanized Air-defense Squad";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

                    class Unit0 {
                        vehicle = "I_APC_tracked_03_cannon_v2_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "I_soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "I_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "I_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "I_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class HAF_MechInf_AT {
                    name = "Mechanized Anti-armor Squad";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

                    class Unit0 {
                        vehicle = "I_APC_tracked_03_cannon_v2_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "I_soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "I_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "I_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "I_soldier_AAT_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class HAF_MechInf_Support {
                    name = "Mechanized Support Squad";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

                    class Unit0 {
                        vehicle = "I_APC_Wheeled_03_cannon_F";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_soldier_repair_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "I_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "I_medic_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "I_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "I_soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };

                    class Unit8 {
                        vehicle = "I_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
                };
            };
            class Motorized {
                class HAF_MotInf_AA {
                    name = "Motorized Air-defense Team";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "I_MRAP_03_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_Soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_Soldier_AA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class HAF_MotInf_AA_RF {
                    name = "Light Motorized Air-defense Team";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "I_Pickup_aat_rf";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_soldier_AA_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_soldier_AAA_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class HAF_MotInf_AT {
                    name = "Motorized Anti-armor Team";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "I_MRAP_03_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_Soldier_AT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_Soldier_AT_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class HAF_MotInf_GMGTeam {
                    name = "Motorized GMG Team";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "I_MRAP_03_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_support_GMG_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_support_AMG_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                };
                class HAF_MotInf_MGTeam {
                    name = "Motorized HMG Team";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "I_MRAP_03_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_support_MG_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_support_AMG_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                };
                class HAF_MotInf_MortTeam {
                    name = "Motorized Mortar Team";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "I_MRAP_03_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_support_Mort_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_support_AMort_F";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                };
                class HAF_MotInf_Reinforce {
                    name = "Motorized Reinforcements";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "I_Truck_02_transport_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };

                    class Unit2 {
                        vehicle = "I_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {5,-2,0};
                    };

                    class Unit3 {
                        vehicle = "I_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-4,0};
                    };

                    class Unit4 {
                        vehicle = "I_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {5,-6,0};
                    };

                    class Unit5 {
                        vehicle = "I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {5,-8,0};
                    };

                    class Unit6 {
                        vehicle = "I_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-10,0};
                    };

                    class Unit7 {
                        vehicle = "I_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {5,-12,0};
                    };

                    class Unit8 {
                        vehicle = "I_medic_F";
                        rank = "PRIVATE";
                        position[] = {5,-14,0};
                    };

                    class Unit9 {
                        vehicle = "I_soldier_SL_F";
                        rank = "SERGEANT";
                        position[] = {-5,0,0};
                    };

                    class Unit10 {
                        vehicle = "I_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-5,-2,0};
                    };

                    class Unit11 {
                        vehicle = "I_soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {-5,-4,0};
                    };

                    class Unit12 {
                        vehicle = "I_soldier_M_F";
                        rank = "PRIVATE";
                        position[] = {-5,-6,0};
                    };

                    class Unit13 {
                        vehicle = "I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {-5,-8,0};
                    };

                    class Unit14 {
                        vehicle = "I_soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {-5,-10,0};
                    };

                    class Unit15 {
                        vehicle = "I_soldier_A_F";
                        rank = "PRIVATE";
                        position[] = {-5,-12,0};
                    };

                    class Unit16 {
                        vehicle = "I_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-14,0};
                    };
                };
                class HAF_MotInf_Team {
                    name = "Motorized Team";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";

                    class Unit0 {
                        vehicle = "I_MRAP_03_gmg_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_Soldier_LAT_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
            };
            class Naval {
                class HAF_DiverTeam {
                    name = "Diver Team";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_naval.paa";

                    class Unit0 {
                        vehicle = "I_diver_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_diver_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_diver_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_diver_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class HAF_DiverTeam_Boat {
                    name = "Diver Team (Boat)";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_naval.paa";

                    class Unit0 {
                        vehicle = "I_diver_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_diver_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_diver_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_diver_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "I_Boat_Transport_01_F";
                        rank = "PRIVATE";
                        position[] = {-32,-57,0};
                    };
                };
                class HAF_DiverTeam_SDV {
                    name = "Diver Team (SDV)";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_naval.paa";

                    class Unit0 {
                        vehicle = "I_diver_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_diver_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_diver_F";
                        rank = "PRIVATE";
                        position[] = {-6,-6,0};
                    };

                    class Unit3 {
                        vehicle = "I_diver_F";
                        rank = "PRIVATE";
                        position[] = {11,-11,0};
                    };

                    class Unit4 {
                        vehicle = "I_SDV_01_F";
                        rank = "PRIVATE";
                        position[] = {-16,-16,0};
                    };

                    class Unit5 {
                        vehicle = "I_SDV_01_F";
                        rank = "PRIVATE";
                        position[] = {21,-21,0};
                    };
                };
                class HAF_sentryTeam_SpeedBoat {
                    name = "Sentry Team (Speed Boat)";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_naval.paa";

                    class Unit0 {
                        vehicle = "I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_Boat_Armed_01_minigun_F";
                        rank = "PRIVATE";
                        position[] = {-32,-57,0};
                    };
                };
            };
            class SpecOps {
                class Aegis_I_ReconPatrol {
                    name = "Recon Patrol";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Aegis_I_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_I_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_I_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_I_recon_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Aegis_I_ReconSentry {
                    name = "Recon Sentry";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Aegis_I_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_I_recon_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Aegis_I_ReconSquad {
                    name = "Recon Squad";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Aegis_I_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_I_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_I_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_I_recon_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_I_recon_LAT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_I_recon_JTAC_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Aegis_I_recon_exp_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Aegis_I_recon_AR_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class Aegis_I_ReconTeam {
                    name = "Recon Team";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";

                    class Unit0 {
                        vehicle = "Aegis_I_recon_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Aegis_I_recon_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Aegis_I_recon_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Aegis_I_recon_LAT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Aegis_I_recon_JTAC_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Aegis_I_recon_exp_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
                class Atlas_I_PathfinderPatrol {
                    name = "Pathfinder Patrol";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_Pathfinder_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_Pathfinder_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_Pathfinder_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_Pathfinder_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class Atlas_I_PathfinderSentry {
                    name = "Pathfinder Sentry";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_Pathfinder_M_F";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_Pathfinder_F";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
                class Atlas_I_PathfinderSquad {
                    name = "Pathfinder Squad";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_Pathfinder_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_Pathfinder_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_Pathfinder_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_Pathfinder_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_I_Pathfinder_AT_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_I_Pathfinder_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };

                    class Unit6 {
                        vehicle = "Atlas_I_Pathfinder_exp_F";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };

                    class Unit7 {
                        vehicle = "Atlas_I_Pathfinder_AR_F";
                        rank = "CORPORAL";
                        position[] = {20,-20,0};
                    };
                };
                class Atlas_I_PathfinderTeam {
                    name = "Pathfinder Team";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";

                    class Unit0 {
                        vehicle = "Atlas_I_Pathfinder_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "Atlas_I_Pathfinder_M_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "Atlas_I_Pathfinder_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "Atlas_I_Pathfinder_AT_F";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };

                    class Unit4 {
                        vehicle = "Atlas_I_Pathfinder_RadioOperator_F";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };

                    class Unit5 {
                        vehicle = "Atlas_I_Pathfinder_exp_F";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                };
                class HAF_DiverTeam {
                    name = "Diver Team";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_diver_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_diver_exp_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_diver_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_diver_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class HAF_SniperTeam {
                    name = "Sniper Team";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";

                    class Unit0 {
                        vehicle = "I_spotter_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_sniper_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                };
            };
            class Support {
                class HAF_Support_CLS {
                    name = "Support Team (CLS)";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_Soldier_AR_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_medic_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_medic_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class HAF_Support_ENG {
                    name = "Support Team (Engineer)";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_engineer_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_Soldier_repair_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class HAF_Support_EOD {
                    name = "Support Team (EOD)";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_engineer_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_Soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };

                    class Unit3 {
                        vehicle = "I_Soldier_exp_F";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
                class HAF_Support_GMG {
                    name = "GMG Team";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_support_GMG_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class HAF_Support_MG {
                    name = "HMG Team";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 {
                        vehicle = "I_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_support_MG_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_support_AMG_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class HAF_Support_Mort {
                    name = "Mortar Team";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";

                    class Unit0 {
                        vehicle = "I_Soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_support_Mort_F";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_support_AMort_F";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
                class HAF_Support_Mort_RF {
                    name = "Light Mortar Team";
                    side = 2;
                    faction = "IND_F";
                    icon = "\A3\ui_f\data\map\markers\nato\n_mortar.paa";

                    class Unit0 {
                        vehicle = "I_soldier_TL_F";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };

                    class Unit1 {
                        vehicle = "I_support_CMort_RF";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };

                    class Unit2 {
                        vehicle = "I_support_CMort_RF";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                };
            };
        };
    };
};
